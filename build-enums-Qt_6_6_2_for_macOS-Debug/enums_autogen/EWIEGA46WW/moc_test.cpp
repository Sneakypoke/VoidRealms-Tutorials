/****************************************************************************
** Meta object code from reading C++ file 'test.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../enums/test.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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
struct qt_meta_stringdata_CLASSTestENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTestENDCLASS = QtMocHelpers::stringData(
    "Test",
    "DoTest",
    "",
    "Command",
    "Tests",
    "TEST1",
    "TEST2",
    "TEST3"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTestENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[5];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[6];
    char stringdata5[6];
    char stringdata6[6];
    char stringdata7[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTestENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTestENDCLASS_t qt_meta_stringdata_CLASSTestENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Test"
        QT_MOC_LITERAL(5, 6),  // "DoTest"
        QT_MOC_LITERAL(12, 0),  // ""
        QT_MOC_LITERAL(13, 7),  // "Command"
        QT_MOC_LITERAL(21, 5),  // "Tests"
        QT_MOC_LITERAL(27, 5),  // "TEST1"
        QT_MOC_LITERAL(33, 5),  // "TEST2"
        QT_MOC_LITERAL(39, 5)   // "TEST3"
    },
    "Test",
    "DoTest",
    "",
    "Command",
    "Tests",
    "TEST1",
    "TEST2",
    "TEST3"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   23, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // enums: name, alias, flags, count, data
       4,    4, 0x0,    3,   28,

 // enum data: key, value
       5, uint(Test::TEST1),
       6, uint(Test::TEST2),
       7, uint(Test::TEST3),

       0        // eod
};

Q_CONSTINIT const QMetaObject Test::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestENDCLASS_t,
        // enum 'Tests'
        QtPrivate::TypeAndForceComplete<Test::Tests, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Test, std::true_type>,
        // method 'DoTest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void Test::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Test *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DoTest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Test::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
