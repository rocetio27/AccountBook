// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-sqlite/SQLite.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.SQLite.h>
#include <_root.SQLiteDb.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.Debug-5d778620.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileStream.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[4];
static uType* TYPES[7];

namespace g{

// public sealed class SQLite :9
// {
static void SQLite_build(uType* type)
{
    ::STRINGS[0] = uString::Const("open");
    ::STRINGS[1] = uString::Const("openFromBundle");
    ::STRINGS[2] = uString::Const(" not found in bundle");
    ::STRINGS[3] = uString::Const("C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-sqlite/SQLite.uno");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[6] = ::g::Uno::Byte_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::IO::Bundle_typeof(),
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Uno::IO::Path_typeof());
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4);
}

::g::Fuse::Scripting::NativeModule_type* SQLite_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(SQLite);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("SQLite", options);
    type->fp_build_ = SQLite_build;
    type->fp_ctor_ = (void*)SQLite__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public SQLite() :11
void SQLite__ctor_2_fn(SQLite* __this)
{
    __this->ctor_2();
}

// public SQLite New() :11
void SQLite__New2_fn(SQLite** __retval)
{
    *__retval = SQLite::New2();
}

// private object Open(Fuse.Scripting.Context c, object[] args) :18
void SQLite__Open_fn(SQLite* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Open(c, args);
}

// private object OpenFromBundle(Fuse.Scripting.Context c, object[] args) :27
void SQLite__OpenFromBundle_fn(SQLite* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->OpenFromBundle(c, args);
}

// public SQLite() [instance] :11
void SQLite::ctor_2()
{
    ctor_1();
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[0/*"open"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)SQLite__Open_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"openFromBun...*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)SQLite__OpenFromBundle_fn, this)));
}

// private object Open(Fuse.Scripting.Context c, object[] args) [instance] :18
uObject* SQLite::Open(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(2), filename);
    ::g::SQLiteDb* db = ::g::SQLiteDb::New2(filepath);
    return db->EvaluateExports(c, NULL);
}

// private object OpenFromBundle(Fuse.Scripting.Context c, object[] args) [instance] :27
uObject* SQLite::OpenFromBundle(::g::Fuse::Scripting::Context* c, uArray* args)
{
    ::g::Uno::IO::BundleFile* ret3;
    uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(2), filename);

    if (::g::Uno::IO::File::Exists(filepath))
        return Open(c, args);

    ::g::Uno::IO::BundleFile* found = NULL;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::TYPES[2/*Uno.Collections.IEnumerable<Uno.IO.BundleFile>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Uno::IO::BundleFile* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[4/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret3), ret3);

                    if (::g::Uno::String::op_Equality(uPtr(f)->SourcePath(), filename))
                    {
                        found = f;
                        break;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[5/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[5/*Uno.IDisposable*/]));
        }
        __after_finally_0:;
    }

    if (found != NULL)
    {
        ::g::Uno::IO::Stream* input = uPtr(found)->OpenRead();
        ::g::Uno::IO::FileStream* output = ::g::Uno::IO::File::OpenWrite(filepath);
        uArray* buffer = uArray::New(::TYPES[6/*byte[]*/], 1024);
        int32_t read;

        while ((read = uPtr(input)->Read(buffer, 0, buffer->Length())) > 0)
            uPtr(output)->Write(buffer, 0, read);

        uPtr(input)->Close();
        uPtr(output)->Close();
    }
    else
        ::g::Uno::Diagnostics::Debug::Log3(::g::Uno::String::op_Addition2(filename, ::STRINGS[2/*" not found ...*/]), 0, ::STRINGS[3/*"C:/Users/Sp...*/], 55);

    return Open(c, args);
}

// public SQLite New() [static] :11
SQLite* SQLite::New2()
{
    SQLite* obj2 = (SQLite*)uNew(SQLite_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

} // ::g
