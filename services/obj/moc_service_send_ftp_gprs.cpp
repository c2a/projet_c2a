/****************************************************************************
** Meta object code from reading C++ file 'service_send_ftp_gprs.h'
**
** Created: Thu Jan 5 13:08:52 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../serviceSendFtpGprs/service_send_ftp_gprs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'service_send_ftp_gprs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CServiceSendFtpGprs[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   20,   20,   20, 0x0a,
      51,   20,   20,   20, 0x0a,
      66,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CServiceSendFtpGprs[] = {
    "CServiceSendFtpGprs\0\0signalSendData()\0"
    "slotUpdate()\0slotSendFile()\0"
    "slotStateChanged(int)\0"
};

const QMetaObject CServiceSendFtpGprs::staticMetaObject = {
    { &CServiceAbstractObject::staticMetaObject, qt_meta_stringdata_CServiceSendFtpGprs,
      qt_meta_data_CServiceSendFtpGprs, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CServiceSendFtpGprs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CServiceSendFtpGprs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CServiceSendFtpGprs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CServiceSendFtpGprs))
        return static_cast<void*>(const_cast< CServiceSendFtpGprs*>(this));
    if (!strcmp(_clname, "CServiceAbstract"))
        return static_cast< CServiceAbstract*>(const_cast< CServiceSendFtpGprs*>(this));
    if (!strcmp(_clname, "projet_c2a.CServiceAbstract"))
        return static_cast< CServiceAbstract*>(const_cast< CServiceSendFtpGprs*>(this));
    return CServiceAbstractObject::qt_metacast(_clname);
}

int CServiceSendFtpGprs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CServiceAbstractObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signalSendData(); break;
        case 1: slotUpdate(); break;
        case 2: slotSendFile(); break;
        case 3: slotStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CServiceSendFtpGprs::signalSendData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
