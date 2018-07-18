// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-sqlite/SQLite.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{struct SQLite;}

namespace g{

// public sealed class SQLite :9
// {
::g::Fuse::Scripting::NativeModule_type* SQLite_typeof();
void SQLite__ctor_2_fn(SQLite* __this);
void SQLite__New2_fn(SQLite** __retval);
void SQLite__Open_fn(SQLite* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void SQLite__OpenFromBundle_fn(SQLite* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);

struct SQLite : ::g::Fuse::Scripting::NativeModule
{
    void ctor_2();
    uObject* Open(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* OpenFromBundle(::g::Fuse::Scripting::Context* c, uArray* args);
    static SQLite* New2();
};
// }

} // ::g
