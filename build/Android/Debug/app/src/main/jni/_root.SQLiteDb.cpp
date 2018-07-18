// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-sqlite/SQLiteDb.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.SQLiteDb.h>
#include <_root.SQLiteImpl.h>
#include <_root.SQLiteStatement.h>
#include <Bolav.ForeignHelpers.-69acc299.h>
#include <Bolav.ForeignHelpers.JSList.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Java.Object.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[4];
static uType* TYPES[3];

namespace g{

// public sealed class SQLiteDb :8
// {
static void SQLiteDb_build(uType* type)
{
    ::STRINGS[0] = uString::Const("close");
    ::STRINGS[1] = uString::Const("prepare");
    ::STRINGS[2] = uString::Const("execute");
    ::STRINGS[3] = uString::Const("query");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::TYPES[1/*string*/]->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::TYPES[1/*string*/], offsetof(SQLiteDb, filename), 0,
        ::g::Java::Object_typeof(), offsetof(SQLiteDb, db), 0);
}

::g::Fuse::Scripting::NativeModule_type* SQLiteDb_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SQLiteDb);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("SQLiteDb", options);
    type->fp_build_ = SQLiteDb_build;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public SQLiteDb(string filename) :15
void SQLiteDb__ctor_2_fn(SQLiteDb* __this, uString* filename1)
{
    __this->ctor_2(filename1);
}

// private object Close(Fuse.Scripting.Context c, object[] args) :25
void SQLiteDb__Close_fn(SQLiteDb* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Close(c, args);
}

// private object Execute(Fuse.Scripting.Context c, object[] args) :37
void SQLiteDb__Execute_fn(SQLiteDb* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Execute(c, args);
}

// public SQLiteDb New(string filename) :15
void SQLiteDb__New2_fn(uString* filename1, SQLiteDb** __retval)
{
    *__retval = SQLiteDb::New2(filename1);
}

// private object Prepare(Fuse.Scripting.Context c, object[] args) :31
void SQLiteDb__Prepare_fn(SQLiteDb* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Prepare(c, args);
}

// private object Query(Fuse.Scripting.Context context, object[] args) :52
void SQLiteDb__Query_fn(SQLiteDb* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Query(context, args);
}

// public SQLiteDb(string filename) [instance] :15
void SQLiteDb::ctor_2(uString* filename1)
{
    ctor_1();
    filename = filename1;
    db = ::g::SQLiteImpl::OpenImpl(filename1);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[0/*"close"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)SQLiteDb__Close_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"prepare"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)SQLiteDb__Prepare_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"execute"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)SQLiteDb__Execute_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"query"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)SQLiteDb__Query_fn, this)));
}

// private object Close(Fuse.Scripting.Context c, object[] args) [instance] :25
uObject* SQLiteDb::Close(::g::Fuse::Scripting::Context* c, uArray* args)
{
    ::g::SQLiteImpl::CloseImpl(db);
    return NULL;
}

// private object Execute(Fuse.Scripting.Context c, object[] args) [instance] :37
uObject* SQLiteDb::Execute(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uString* statement = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    int32_t param_len = args->Length() - 1;
    uArray* param = uArray::New(::TYPES[2/*string[]*/], param_len);

    for (int32_t i = 0; i < param_len; i++)
        uPtr(param)->Strong<uString*>(i) = ::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i + 1)));

    ::g::SQLiteImpl::ExecImpl(db, statement, param);
    return NULL;
}

// private object Prepare(Fuse.Scripting.Context c, object[] args) [instance] :31
uObject* SQLiteDb::Prepare(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uString* statement = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    ::g::SQLiteStatement* mod = ::g::SQLiteStatement::New2(db, statement);
    return mod->EvaluateExports(c, NULL);
}

// private object Query(Fuse.Scripting.Context context, object[] args) [instance] :52
uObject* SQLiteDb::Query(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* statement = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    int32_t param_len = args->Length() - 1;
    uArray* param = uArray::New(::TYPES[2/*string[]*/], param_len);

    for (int32_t j = 0; j < param_len; j++)
        uPtr(param)->Strong<uString*>(j) = ::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(j + 1)));

    ::g::Bolav::ForeignHelpers::JSList* jslist = ::g::Bolav::ForeignHelpers::JSList::New1(context);
    ::g::SQLiteImpl::QueryImpl(jslist, db, statement, param);
    return jslist->GetScriptingArray();
}

// public SQLiteDb New(string filename) [static] :15
SQLiteDb* SQLiteDb::New2(uString* filename1)
{
    SQLiteDb* obj1 = (SQLiteDb*)uNew(SQLiteDb_typeof());
    obj1->ctor_2(filename1);
    return obj1;
}
// }

} // ::g
