// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-sqlite/SQLiteStatement.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.SQLiteImpl.h>
#include <_root.SQLiteStatement.h>
#include <Bolav.ForeignHelpers.-69acc299.h>
#include <Bolav.ForeignHelpers.JSList.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Java.Object.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// public sealed class SQLiteStatement :8
// {
static void SQLiteStatement_build(uType* type)
{
    ::STRINGS[0] = uString::Const("execute");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    ::TYPES[2] = ::g::Uno::String_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::TYPES[2/*string*/], offsetof(SQLiteStatement, statement), 0,
        ::g::Java::Object_typeof(), offsetof(SQLiteStatement, db), 0);
}

::g::Fuse::Scripting::NativeModule_type* SQLiteStatement_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SQLiteStatement);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("SQLiteStatement", options);
    type->fp_build_ = SQLiteStatement_build;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public extern SQLiteStatement(Java.Object database, string statement) :35
void SQLiteStatement__ctor_2_fn(SQLiteStatement* __this, ::g::Java::Object* database, uString* statement1)
{
    __this->ctor_2(database, statement1);
}

// public SQLiteStatement(string statement) :12
void SQLiteStatement__ctor_3_fn(SQLiteStatement* __this, uString* statement1)
{
    __this->ctor_3(statement1);
}

// private object Execute(Fuse.Scripting.Context context, object[] args) :41
void SQLiteStatement__Execute_fn(SQLiteStatement* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Execute(context, args);
}

// public extern SQLiteStatement New(Java.Object database, string statement) :35
void SQLiteStatement__New2_fn(::g::Java::Object* database, uString* statement1, SQLiteStatement** __retval)
{
    *__retval = SQLiteStatement::New2(database, statement1);
}

// public extern SQLiteStatement(Java.Object database, string statement) [instance] :35
void SQLiteStatement::ctor_2(::g::Java::Object* database, uString* statement1)
{
    ctor_3(statement1);
    db = database;
}

// public SQLiteStatement(string statement) [instance] :12
void SQLiteStatement::ctor_3(uString* statement1)
{
    ctor_1();
    statement = statement1;
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[0/*"execute"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)SQLiteStatement__Execute_fn, this)));
}

// private object Execute(Fuse.Scripting.Context context, object[] args) [instance] :41
uObject* SQLiteStatement::Execute(::g::Fuse::Scripting::Context* context, uArray* args)
{
    int param_len = uPtr(args)->Length();
    uArray* param = uArray::New(::TYPES[1/*string[]*/], param_len);

    for (int j = 0; j < param_len; j++)
        uPtr(param)->Strong<uString*>(j) = uAs<uString*>(uPtr(args)->Strong<uObject*>(j), ::TYPES[2/*string*/]);

    ::g::Bolav::ForeignHelpers::JSList* jslist = ::g::Bolav::ForeignHelpers::JSList::New1(context);
    ::g::SQLiteImpl::QueryImpl(jslist, db, statement, param);
    return jslist->GetScriptingArray();
}

// public extern SQLiteStatement New(Java.Object database, string statement) [static] :35
SQLiteStatement* SQLiteStatement::New2(::g::Java::Object* database, uString* statement1)
{
    SQLiteStatement* obj2 = (SQLiteStatement*)uNew(SQLiteStatement_typeof());
    obj2->ctor_2(database, statement1);
    return obj2;
}
// }

} // ::g
