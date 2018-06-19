// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-sqlite/SQLiteDb.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Java{struct Object;}}
namespace g{struct SQLiteDb;}

namespace g{

// public sealed class SQLiteDb :8
// {
::g::Fuse::Scripting::NativeModule_type* SQLiteDb_typeof();
void SQLiteDb__ctor_2_fn(SQLiteDb* __this, uString* filename1);
void SQLiteDb__Close_fn(SQLiteDb* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void SQLiteDb__Execute_fn(SQLiteDb* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void SQLiteDb__New2_fn(uString* filename1, SQLiteDb** __retval);
void SQLiteDb__Prepare_fn(SQLiteDb* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void SQLiteDb__Query_fn(SQLiteDb* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct SQLiteDb : ::g::Fuse::Scripting::NativeModule
{
    uStrong<uString*> filename;
    uStrong< ::g::Java::Object*> db;

    void ctor_2(uString* filename1);
    uObject* Close(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* Execute(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* Prepare(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* Query(::g::Fuse::Scripting::Context* context, uArray* args);
    static SQLiteDb* New2(uString* filename1);
};
// }

} // ::g
