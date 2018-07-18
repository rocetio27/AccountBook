// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-sqlite/SQLiteImpl.Android.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Bolav{namespace ForeignHelpers{struct ForeignList;}}}
namespace g{namespace Java{struct Object;}}
namespace g{struct SQLiteImpl;}

namespace g{

// public static extern class SQLiteImpl :9
// {
uClassType* SQLiteImpl_typeof();
void SQLiteImpl__CloseImpl_fn(::g::Java::Object* db);
void SQLiteImpl__ExecImpl_fn(::g::Java::Object* db, uString* statement, uArray* param);
void SQLiteImpl__OpenImpl_fn(uString* filename, ::g::Java::Object** __retval);
void SQLiteImpl__QueryImpl_fn(::g::Bolav::ForeignHelpers::ForeignList* fl, ::g::Java::Object* db, uString* statement, uArray* param);

struct SQLiteImpl : uObject
{
    static void CloseImpl(::g::Java::Object* db);
    static void ExecImpl(::g::Java::Object* db, uString* statement, uArray* param);
    static ::g::Java::Object* OpenImpl(uString* filename);
    static void QueryImpl(::g::Bolav::ForeignHelpers::ForeignList* fl, ::g::Java::Object* db, uString* statement, uArray* param);
};
// }

} // ::g
