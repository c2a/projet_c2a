/****************************************************************************
** Meta object code from reading C++ file 'service_save_file_html.h'
**
** Created: Thu Jan 5 13:09:00 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../serviceSaveFileHtml/service_save_file_html.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'service_save_file_html.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CServiceSaveFileHtml[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CServiceSaveFileHtml[] = {
    "CServiceSaveFileHtml\0\0signalSendData()\0"
    "slotUpdate()\0"
};

const QMetaObject CServiceSaveFileHtml::staticMetaObject = {
    { &CServiceAbstractObject::staticMetaObject, qt_meta_stringdata_CServiceSaveFileHtml,
      qt_meta_data_CServiceSaveFileHtml, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CServiceSaveFileHtml::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CServiceSaveFileHtml::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CServiceSaveFileHtml::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CServiceSaveFileHtml))
        return static_cast<void*>(const_cast< CServiceSaveFileHtml*>(this));
    if (!strcmp(_clname, "CServiceAbstract"))
        return static_cast< CServiceAbstract*>(const_cast< CServiceSaveFileHtml*>(this));
    if (!strcmp(_clname, "projet_c2a.CServiceAbstract"))
        return static_cast< CServiceAbstract*>(const_cast< CServiceSaveFileHtml*>(this));
    return CServiceAbstractObject::qt_metacast(_clname);
}

int CServiceSaveFileHtml::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CServiceAbstractObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signalSendData(); break;
        case 1: slotUpdate(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CServiceSaveFileHtml::signalSendData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
