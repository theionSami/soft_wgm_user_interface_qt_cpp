#pragma once 
// qt
#include <QObject>
#include <QDebug>
#include <QThread>
#include <QLCDNumber>
#include <QFile>
#include <QProcess>
#include <QLabel>
#include <QString>
#include <QtConcurrent>
// mvc
#include <atomic>
#include "sinkingModel.h"
class sinkingController : public QObject
{
    Q_OBJECT
public:
    sinkingController(/* args */);
    ~sinkingController();

signals:
    void pressed();
    void triggered();
    void returnPressed(); // line edit enter key pressed
    void valueChanged();
public slots:
    void on_sink_connect_motion_axis_clicked();
    void on_sink_connect_distance_sensor_clicked();
    void on_run_sinking_process_clicked();
    void on_stop_sinking_process_clicked();
    void on_move_down_until_sensor_data_valid_clicked();
    void on_move_down_to_surface_contact_clicked();
    void on_deep_wafer_holder_desired_thickness_clicked();
    void on_monitor_and_calibrate_clicked();


    QString get_axis_status();
    QString get_sensor_status();
    std::string sendAxisCmd(std::string Cmd);
    void reload_whs_config_file();
    // lcd update
    void updateLcdTime(QLCDNumber* Lcd);
    void updateLcdDistance(QLCDNumber* Lcd);
    void updateLcdPosition(QLCDNumber* Lcd);

private:
    sinkingModel proc_sinking_model;
    double time_elapsed;
    QLCDNumber* LcdTime;
    QLCDNumber* LcdDistance;
    QLCDNumber* LcdPosition;
};