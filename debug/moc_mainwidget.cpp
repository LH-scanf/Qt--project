/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MusicPlayer/mainwidget.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWidgetENDCLASS = QtMocHelpers::stringData(
    "MainWidget",
    "finish",
    "",
    "lyricShow",
    "on_BtnExit_clicked",
    "on_BtnCloth_clicked",
    "on_BtnSet_clicked",
    "on_pushButtonSearch_clicked",
    "on_pushButtonFront_clicked",
    "on_pushButtonPlay_clicked",
    "on_pushButtonNext_clicked",
    "on_horizontalSlider_valueChanged",
    "value",
    "on_horizontalSlider_sliderPressed",
    "on_horizontalSlider_sliderReleased",
    "updateDuration",
    "netReply",
    "QNetworkReply*",
    "lyricTextShow",
    "playSearchMusic",
    "playHistoryMusic"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  116,    2, 0x06,    1 /* Public */,
       3,    1,  119,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  122,    2, 0x08,    5 /* Private */,
       5,    0,  123,    2, 0x08,    6 /* Private */,
       6,    0,  124,    2, 0x08,    7 /* Private */,
       7,    0,  125,    2, 0x08,    8 /* Private */,
       8,    0,  126,    2, 0x08,    9 /* Private */,
       9,    0,  127,    2, 0x08,   10 /* Private */,
      10,    0,  128,    2, 0x08,   11 /* Private */,
      11,    1,  129,    2, 0x08,   12 /* Private */,
      13,    0,  132,    2, 0x08,   14 /* Private */,
      14,    0,  133,    2, 0x08,   15 /* Private */,
      15,    1,  134,    2, 0x08,   16 /* Private */,
      16,    1,  137,    2, 0x08,   18 /* Private */,
      18,    1,  140,    2, 0x08,   20 /* Private */,
      19,    0,  143,    2, 0x08,   22 /* Private */,
      20,    0,  144,    2, 0x08,   23 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWidget, std::true_type>,
        // method 'finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'lyricShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_BtnExit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_BtnCloth_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_BtnSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSearch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonFront_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonPlay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_horizontalSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_sliderPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_horizontalSlider_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDuration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'netReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'lyricTextShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'playSearchMusic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playHistoryMusic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finish((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->lyricShow((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_BtnExit_clicked(); break;
        case 3: _t->on_BtnCloth_clicked(); break;
        case 4: _t->on_BtnSet_clicked(); break;
        case 5: _t->on_pushButtonSearch_clicked(); break;
        case 6: _t->on_pushButtonFront_clicked(); break;
        case 7: _t->on_pushButtonPlay_clicked(); break;
        case 8: _t->on_pushButtonNext_clicked(); break;
        case 9: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_horizontalSlider_sliderPressed(); break;
        case 11: _t->on_horizontalSlider_sliderReleased(); break;
        case 12: _t->updateDuration((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 13: _t->netReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 14: _t->lyricTextShow((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->playSearchMusic(); break;
        case 16: _t->playHistoryMusic(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWidget::*)(QByteArray );
            if (_t _q_method = &MainWidget::finish; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWidget::*)(QString );
            if (_t _q_method = &MainWidget::lyricShow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::finish(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWidget::lyricShow(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
