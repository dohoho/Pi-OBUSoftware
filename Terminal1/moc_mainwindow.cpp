/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Mar 4 17:09:43 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,   11,   11,   11, 0x08,
      54,   11,   11,   11, 0x08,
      85,   11,   11,   11, 0x08,
     102,   11,   11,   11, 0x08,
     124,   11,   11,   11, 0x08,
     147,   11,   11,   11, 0x08,
     169,   11,   11,   11, 0x08,
     186,   11,   11,   11, 0x08,
     209,   11,   11,   11, 0x08,
     233,   11,   11,   11, 0x08,
     261,  259,   11,   11, 0x08,
     282,   11,   11,   11, 0x08,
     309,   11,   11,   11, 0x08,
     328,   11,   11,   11, 0x08,
     342,   11,   11,   11, 0x08,
     359,  259,   11,   11, 0x08,
     383,   11,   11,   11, 0x08,
     408,   11,   11,   11, 0x08,
     427,   11,   11,   11, 0x08,
     446,   11,   11,   11, 0x08,
     457,   11,   11,   11, 0x08,
     477,   11,   11,   11, 0x08,
     500,   11,   11,   11, 0x08,
     517,   11,   11,   11, 0x08,
     548,   11,   11,   11, 0x08,
     581,   11,   11,   11, 0x08,
     607,   11,   11,   11, 0x08,
     629,   11,   11,   11, 0x08,
     647,   11,   11,   11, 0x08,
     663,   11,   11,   11, 0x08,
     675,   11,   11,   11, 0x08,
     687,   11,   11,   11, 0x08,
     699,   11,   11,   11, 0x08,
     714,   11,   11,   11, 0x08,
     732,   11,   11,   11, 0x08,
     756,   11,   11,   11, 0x08,
     774,   11,   11,   11, 0x08,
     792,   11,   11,   11, 0x08,
     807,   11,   11,   11, 0x08,
     828,   11,   11,   11, 0x08,
     849,   11,   11,   11, 0x08,
     861,   11,   11,   11, 0x08,
     878,   11,   11,   11, 0x08,
     891,   11,   11,   11, 0x08,
     907,   11,   11,   11, 0x08,

 // methods: signature, parameters, type, tag, flags
     918,  259,   11,   11, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0readySend()\0"
    "on_webView_loadFinished(bool)\0"
    "on_btngetNearestNode_clicked()\0"
    "onOptimizeMove()\0on_btnPrint_clicked()\0"
    "on_btnUpdate_clicked()\0on_btnClear_clicked()\0"
    "Send_Broadcast()\0autoTakePhoto(QString)\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0,\0"
    "sendCommand(int,int)\0onOpenCloseButtonClicked()\0"
    "onGpsData(QString)\0initMap(bool)\0"
    "initListSensor()\0onNodeJoin(int,QString)\0"
    "onImageReceived(QString)\0addMarker(QString)\0"
    "removeAllMarkers()\0ClearMap()\0"
    "ShowAllSensor(bool)\0ShowJoinedSensor(bool)\0"
    "zoomMap(QString)\0gotoPlaceByCoordinate(QString)\0"
    "populateJavaScriptWindowObject()\0"
    "onTranceiverData(QString)\0"
    "onTempAndHum(QString)\0onGpsStatus(bool)\0"
    "startLinphone()\0ShowAbout()\0RetaskOne()\0"
    "RetaskAll()\0AddNewSensor()\0EditSensorPlace()\0"
    "ShowSensorInformation()\0StartupLocation()\0"
    "SetupSerialPort()\0SendToServer()\0"
    "on_btnExit_clicked()\0on_btnView_clicked()\0"
    "sendtoWeb()\0sendImageToWeb()\0GetDataWeb()\0"
    "sendBroadcast()\0makePlot()\0"
    "mySendCommand(int,int)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readySend(); break;
        //case 1: on_webView_loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: on_btngetNearestNode_clicked(); break;
        case 3: onOptimizeMove(); break;
        case 4: on_btnPrint_clicked(); break;
        case 5: on_btnUpdate_clicked(); break;
        case 6: on_btnClear_clicked(); break;
        case 7: Send_Broadcast(); break;
        case 8: autoTakePhoto((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: on_pushButton_clicked(); break;
        case 10: on_pushButton_2_clicked(); break;
        case 11: sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: onOpenCloseButtonClicked(); break;
        case 13: onGpsData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: initMap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: initListSensor(); break;
        case 16: onNodeJoin((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 17: onImageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: addMarker((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: removeAllMarkers(); break;
        case 20: ClearMap(); break;
        case 21: ShowAllSensor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: ShowJoinedSensor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: zoomMap((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: gotoPlaceByCoordinate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: populateJavaScriptWindowObject(); break;
        case 26: onTranceiverData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: onTempAndHum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: onGpsStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: startLinphone(); break;
        case 30: ShowAbout(); break;
        case 31: RetaskOne(); break;
        case 32: RetaskAll(); break;
        case 33: AddNewSensor(); break;
        case 34: EditSensorPlace(); break;
        case 35: ShowSensorInformation(); break;
        case 36: StartupLocation(); break;
        case 37: SetupSerialPort(); break;
        case 38: SendToServer(); break;
        case 39: on_btnExit_clicked(); break;
        case 40: on_btnView_clicked(); break;
        case 41: sendtoWeb(); break;
        case 42: sendImageToWeb(); break;
        case 43: GetDataWeb(); break;
        case 44: sendBroadcast(); break;
        case 45: makePlot(); break;
        case 46: mySendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 47;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::readySend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
