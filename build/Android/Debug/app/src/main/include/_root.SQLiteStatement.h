// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-sqlite/SQLiteStatement.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Java{struct Object;}}
namespace g{struct SQLiteStatement;}

namespace g{

// public sealed class SQLiteStatement :8
// {
::g::Fuse::Scripting::NativeModule_type* SQLiteStatement_typeof();
void SQLiteStatement__ctor_2_fn(SQLiteStatement* __this, ::g::Java::Object* database, uString* statement1);
void SQLiteStatement__ctor_3_fn(SQLiteStatement* __this, uString* statement1);
void SQLiteStatement__Execute_fn(SQLiteStatement* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void SQLiteStatement__New2_fn(::g::Java::Object* database, uString* statement1, SQLiteStatement** __retval);

struct SQLiteStatement : ::g::Fuse::Scripting::NativeModule
{
    uStrong<uString*> statement;
    uStrong< ::g::Java::Object*> db;

    void ctor_2(::g::Java::Object* database, uString* statement1);
    void ctor_3(uString* statement1);
    uObject* Execute(::g::Fuse::Scripting::Context* context, uArray* args);
    static SQLiteStatement* New2(::g::Java::Object* database, uString* statement1);
};
// }

} // ::g
