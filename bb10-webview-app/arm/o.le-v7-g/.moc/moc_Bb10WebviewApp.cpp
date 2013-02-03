/****************************************************************************
** Meta object code from reading C++ file 'Bb10WebviewApp.hpp'
**
** Created: Sun Feb 3 12:07:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Bb10WebviewApp.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Bb10WebviewApp.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Bb10WebviewApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Bb10WebviewApp[] = {
    "Bb10WebviewApp\0"
};

void Bb10WebviewApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Bb10WebviewApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Bb10WebviewApp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Bb10WebviewApp,
      qt_meta_data_Bb10WebviewApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Bb10WebviewApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Bb10WebviewApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Bb10WebviewApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Bb10WebviewApp))
        return static_cast<void*>(const_cast< Bb10WebviewApp*>(this));
    return QObject::qt_metacast(_clname);
}

int Bb10WebviewApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
