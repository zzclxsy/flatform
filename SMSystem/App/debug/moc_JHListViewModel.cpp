/****************************************************************************
** Meta object code from reading C++ file 'JHListViewModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Basic/JHDataModel/JHListViewModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JHListViewModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JHListViewModel_t {
    QByteArrayData data[18];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JHListViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JHListViewModel_t qt_meta_stringdata_JHListViewModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "JHListViewModel"
QT_MOC_LITERAL(1, 16, 17), // "dataSourceChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "roleMapChanged"
QT_MOC_LITERAL(4, 50, 16), // "onModelDestroyed"
QT_MOC_LITERAL(5, 67, 3), // "obj"
QT_MOC_LITERAL(6, 71, 14), // "onModelChanged"
QT_MOC_LITERAL(7, 86, 11), // "onNodeAdded"
QT_MOC_LITERAL(8, 98, 6), // "nodeId"
QT_MOC_LITERAL(9, 105, 14), // "onNodeInserted"
QT_MOC_LITERAL(10, 120, 3), // "pos"
QT_MOC_LITERAL(11, 124, 19), // "onNodeAboutToRemove"
QT_MOC_LITERAL(12, 144, 13), // "onNodeRemoved"
QT_MOC_LITERAL(13, 158, 13), // "onNodeChanged"
QT_MOC_LITERAL(14, 172, 11), // "updatedData"
QT_MOC_LITERAL(15, 184, 10), // "dataSource"
QT_MOC_LITERAL(16, 195, 12), // "JHListModel*"
QT_MOC_LITERAL(17, 208, 7) // "roleMap"

    },
    "JHListViewModel\0dataSourceChanged\0\0"
    "roleMapChanged\0onModelDestroyed\0obj\0"
    "onModelChanged\0onNodeAdded\0nodeId\0"
    "onNodeInserted\0pos\0onNodeAboutToRemove\0"
    "onNodeRemoved\0onNodeChanged\0updatedData\0"
    "dataSource\0JHListModel*\0roleMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JHListViewModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   61,    2, 0x0a /* Public */,
       6,    0,   64,    2, 0x0a /* Public */,
       7,    1,   65,    2, 0x0a /* Public */,
       9,    2,   68,    2, 0x0a /* Public */,
      11,    1,   73,    2, 0x0a /* Public */,
      12,    1,   76,    2, 0x0a /* Public */,
      13,    2,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,   10,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject,    8,   14,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x0049510b,
      17, QMetaType::QJsonObject, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void JHListViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JHListViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataSourceChanged(); break;
        case 1: _t->roleMapChanged(); break;
        case 2: _t->onModelDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->onModelChanged(); break;
        case 4: _t->onNodeAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onNodeInserted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->onNodeAboutToRemove((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onNodeRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onNodeChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JHListViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JHListViewModel::dataSourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JHListViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JHListViewModel::roleMapChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JHListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<JHListViewModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< JHListModel**>(_v) = _t->getDataSource(); break;
        case 1: *reinterpret_cast< QJsonObject*>(_v) = _t->getRoleMap(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<JHListViewModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDataSource(*reinterpret_cast< JHListModel**>(_v)); break;
        case 1: _t->setRoleMap(*reinterpret_cast< QJsonObject*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject JHListViewModel::staticMetaObject = { {
    &QAbstractListModel::staticMetaObject,
    qt_meta_stringdata_JHListViewModel.data,
    qt_meta_data_JHListViewModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JHListViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JHListViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JHListViewModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int JHListViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void JHListViewModel::dataSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void JHListViewModel::roleMapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE