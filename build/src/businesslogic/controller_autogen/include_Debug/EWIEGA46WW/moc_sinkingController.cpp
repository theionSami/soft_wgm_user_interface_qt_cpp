/****************************************************************************
** Meta object code from reading C++ file 'sinkingController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/businesslogic/sinkingController.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sinkingController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_sinkingController_t {
    uint offsetsAndSizes[22];
    char stringdata0[18];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[14];
    char stringdata5[36];
    char stringdata6[40];
    char stringdata7[31];
    char stringdata8[32];
    char stringdata9[16];
    char stringdata10[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_sinkingController_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_sinkingController_t qt_meta_stringdata_sinkingController = {
    {
        QT_MOC_LITERAL(0, 17),  // "sinkingController"
        QT_MOC_LITERAL(18, 7),  // "pressed"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 9),  // "triggered"
        QT_MOC_LITERAL(37, 13),  // "returnPressed"
        QT_MOC_LITERAL(51, 35),  // "on_sink_connect_motion_axis_c..."
        QT_MOC_LITERAL(87, 39),  // "on_sink_connect_distance_sens..."
        QT_MOC_LITERAL(127, 30),  // "on_run_sinking_process_clicked"
        QT_MOC_LITERAL(158, 31),  // "on_stop_sinking_process_clicked"
        QT_MOC_LITERAL(190, 15),  // "get_axis_status"
        QT_MOC_LITERAL(206, 17)   // "get_sensor_status"
    },
    "sinkingController",
    "pressed",
    "",
    "triggered",
    "returnPressed",
    "on_sink_connect_motion_axis_clicked",
    "on_sink_connect_distance_sensor_clicked",
    "on_run_sinking_process_clicked",
    "on_stop_sinking_process_clicked",
    "get_axis_status",
    "get_sensor_status"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_sinkingController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    0,   69,    2, 0x06,    2 /* Public */,
       4,    0,   70,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   71,    2, 0x0a,    4 /* Public */,
       6,    0,   72,    2, 0x0a,    5 /* Public */,
       7,    0,   73,    2, 0x0a,    6 /* Public */,
       8,    0,   74,    2, 0x0a,    7 /* Public */,
       9,    0,   75,    2, 0x0a,    8 /* Public */,
      10,    0,   76,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QString,

       0        // eod
};

Q_CONSTINIT const QMetaObject sinkingController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_sinkingController.offsetsAndSizes,
    qt_meta_data_sinkingController,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_sinkingController_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<sinkingController, std::true_type>,
        // method 'pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sink_connect_motion_axis_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sink_connect_distance_sensor_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_run_sinking_process_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stop_sinking_process_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'get_axis_status'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_sensor_status'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void sinkingController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<sinkingController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pressed(); break;
        case 1: _t->triggered(); break;
        case 2: _t->returnPressed(); break;
        case 3: _t->on_sink_connect_motion_axis_clicked(); break;
        case 4: _t->on_sink_connect_distance_sensor_clicked(); break;
        case 5: _t->on_run_sinking_process_clicked(); break;
        case 6: _t->on_stop_sinking_process_clicked(); break;
        case 7: { QString _r = _t->get_axis_status();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->get_sensor_status();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (sinkingController::*)();
            if (_t _q_method = &sinkingController::pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (sinkingController::*)();
            if (_t _q_method = &sinkingController::triggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (sinkingController::*)();
            if (_t _q_method = &sinkingController::returnPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *sinkingController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sinkingController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sinkingController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int sinkingController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void sinkingController::pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void sinkingController::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void sinkingController::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
