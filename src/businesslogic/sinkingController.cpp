#include "sinkingController.h"

/***************** Sinking controller *******************/

sinkingController::sinkingController()
{
    std::cout << "sinking controller constructed" << std::endl;
}

sinkingController::~sinkingController()
{
    std::cout << "sinking controller desctructed" << std::endl;
}

void sinkingController::on_sink_connect_distance_sensor_clicked()
{
    proc_sinking_model.sinkingProcessHandler->get_sys_ptr()->connect_sensor();
}

void sinkingController::on_sink_connect_motion_axis_clicked()
{
    proc_sinking_model.sinkingProcessHandler->get_sys_ptr()->connect_motion_axis();
}

void sinkingController::on_run_sinking_process_clicked()
{
    proc_sinking_model.sinkingProcessHandler->start_process();
    time_elapsed = proc_sinking_model.sinkingProcessHandler->get_elapsed_time();
}

void sinkingController::on_stop_sinking_process_clicked()
{
    proc_sinking_model.sinkingProcessHandler->stop_process();
    time_elapsed = proc_sinking_model.sinkingProcessHandler->get_elapsed_time();
}
void sinkingController::on_move_down_until_sensor_data_valid_clicked()
{
    proc_sinking_model.sinkingProcessHandler->get_sys_ptr()->getSubSysController()->move_down_until_data_availble();
}
void sinkingController::on_move_down_to_surface_contact_clicked()
{
    proc_sinking_model.sinkingProcessHandler->get_sys_ptr()->getSubSysController()->move_down_to_surface();
}
void sinkingController::on_deep_wafer_holder_desired_thickness_clicked()
{
    proc_sinking_model.sinkingProcessHandler->get_sys_ptr()->getSubSysController()->deep_wafer_holder_desired_thickness();
}
void sinkingController::on_monitor_and_calibrate_clicked()
{
    proc_sinking_model.sinkingProcessHandler->get_sys_ptr()->getSubSysController()->monitor_and_calibrate();
}
void sinkingController::updateLcdTime(QLCDNumber* Lcd)
{
    Lcd->display(time_elapsed);
    time_elapsed = 0;
}

void sinkingController::updateLcdDistance(QLCDNumber* Lcd)
{
    while (get_sensor_status()) // while connected, launch thread display
    {
        std::cout << "updating lcd distance " << std::endl;
        Lcd->display(proc_sinking_model.sinkingProcessHandler->get_sys_ptr()->getSubSysController()->get_sensor_values());
        std::cout << "lcd distance thread id: " << QThread::currentThreadId() << std::endl;
        QThread::currentThread()->sleep(1);
    }

}
void sinkingController::updateLcdPosition(QLCDNumber* Lcd)
{

    while (get_axis_status()) // while connected, launch thread display
    {
        std::cout << "updating lcd position " << std::endl;
        Lcd->display(proc_sinking_model.sinkingProcessHandler->get_sys_ptr()->getSubSysController()->get_axis_position());
        std::cout << "lcd position thread id: " << QThread::currentThreadId() << std::endl;
        QThread::currentThread()->sleep(1);
    }

}
bool sinkingController::get_axis_status()
{

    return proc_sinking_model.sinkingProcessHandler->get_sys_ptr()->getSubSysStatus("axis_motion");

}

bool sinkingController::get_sensor_status()
{

    return proc_sinking_model.sinkingProcessHandler->get_sys_ptr()->getSubSysStatus("distance_sensor");

}

std::string sinkingController::sendAxisCmd(std::string Cmd)
{
    return proc_sinking_model.sinkingProcessHandler->get_sys_ptr()->getSubSysController()->sendDirectCmdAxis(Cmd);
}

void sinkingController::reload_whs_config_file()
{
    std::cout << "file closed succefuly, updating parameters" << std::endl;
    proc_sinking_model.sinkingProcessHandler->get_sys_ptr()->getSubSysController()->reload_config_file();
}

bool sinkingController::getProcessStatus()
{
    std::cout << "getting process status" << std::endl;
    return proc_sinking_model.sinkingProcessHandler->is_proc_success();
}

// label update
void sinkingController::updateLabelAxis(QLabel* label)
{
    if (get_axis_status())
    {
        label->setText("true");
        label->setStyleSheet("QLabel { background-color : green; color : black; }");
        return;
    }

}
void sinkingController::updateLabelSensor(QLabel* label)
{
    if (get_sensor_status())
    {
        label->setText("true");
        label->setStyleSheet("QLabel { background-color : green; color : black; }");
        return;
    }

}
void sinkingController::updateLabelProcess(QLabel* label)
{
    if (getProcessStatus())
    {
        label->setText("true");
        label->setStyleSheet("QLabel { background-color : green; color : black; }");
        return;
    }

}
void sinkingController::updateLabelAxisResponse(QLabel* label, QString cmd)
{
    auto response = sendAxisCmd(cmd.toStdString());
    if (response == "ok")
    {
        label->setStyleSheet("QLabel { background-color : green; color : black; }");
        label->setText(response.c_str());
        return;
    }
    label->setText(response.c_str());

}

void sinkingController::updateLcdPosThread(QLCDNumber* Lcd)
{
    std::cout << "creating position update thread" << std::endl;
    LcdPosThread.create(&sinkingController::updateLcdPosition, this, Lcd);
    std::cout << "starting position update thread" << std::endl;
    LcdPosThread.start();
}