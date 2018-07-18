// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-foreignhelpers/ListDict.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Bolav.ForeignHelpers.-69acc391.h>
#include <Bolav.ForeignHelpers.JSDict.h>
#include <Bolav.ForeignHelpers.JSList.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Object.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[2];
static uType* TYPES[1];

namespace g{
namespace Bolav{
namespace ForeignHelpers{

// public sealed class JSList :8
// {
static void JSList_build(uType* type)
{
    ::STRINGS[0] = uString::Const("(no file)");
    ::STRINGS[1] = uString::Const("new Array()");
    ::TYPES[0] = ::g::Fuse::Scripting::Array_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(JSList, ctx), 0,
        ::TYPES[0/*Fuse.Scripting.Array*/], offsetof(JSList, array), 0,
        ::g::Uno::Int_typeof(), offsetof(JSList, pos), 0);
}

::g::Bolav::ForeignHelpers::ForeignList_type* JSList_typeof()
{
    static uSStrong< ::g::Bolav::ForeignHelpers::ForeignList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Bolav::ForeignHelpers::ForeignList_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JSList);
    options.TypeSize = sizeof(::g::Bolav::ForeignHelpers::ForeignList_type);
    type = (::g::Bolav::ForeignHelpers::ForeignList_type*)uClassType::New("Bolav.ForeignHelpers.JSList", options);
    type->fp_build_ = JSList_build;
    type->fp_NewDictRow = (void(*)(::g::Bolav::ForeignHelpers::ForeignList*, ::g::Bolav::ForeignHelpers::ForeignDict**))JSList__NewDictRow_fn;
    return type;
}

// public JSList(Fuse.Scripting.Context c) :13
void JSList__ctor_1_fn(JSList* __this, ::g::Fuse::Scripting::Context* c)
{
    __this->ctor_1(c);
}

// public extern void FromJava(Java.Object ary) :42
void JSList__FromJava_fn(JSList* __this, ::g::Java::Object* ary)
{
    __this->FromJava(ary);
}

// public Fuse.Scripting.Array GetScriptingArray() :23
void JSList__GetScriptingArray_fn(JSList* __this, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->GetScriptingArray();
}

// public JSList New(Fuse.Scripting.Context c) :13
void JSList__New1_fn(::g::Fuse::Scripting::Context* c, JSList** __retval)
{
    *__retval = JSList::New1(c);
}

// public override sealed Bolav.ForeignHelpers.ForeignDict NewDictRow() :17
void JSList__NewDictRow_fn(JSList* __this, ::g::Bolav::ForeignHelpers::ForeignDict** __retval)
{
    ::g::Bolav::ForeignHelpers::JSDict* r = ::g::Bolav::ForeignHelpers::JSDict::New1(__this->ctx);
    uPtr(__this->array)->Item(__this->pos, r->GetScriptingObject());
    __this->pos++;
    return *__retval = r, void();
}

// public JSList(Fuse.Scripting.Context c) [instance] :13
void JSList::ctor_1(::g::Fuse::Scripting::Context* c)
{
    ctor_();
    ctx = c;
    array = uCast< ::g::Fuse::Scripting::Array*>(uPtr(ctx)->Evaluate(::STRINGS[0/*"(no file)"*/], ::STRINGS[1/*"new Array()"*/]), ::TYPES[0/*Fuse.Scripting.Array*/]);
}

// public extern void FromJava(Java.Object ary) [instance] :42
void JSList::FromJava(::g::Java::Object* ary)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "FromJava393", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uary=ary;
        jobject _ary = (_uary==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uary, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_ary);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_ary!=NULL) { U_JNIVAR->DeleteLocalRef(_ary); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public Fuse.Scripting.Array GetScriptingArray() [instance] :23
::g::Fuse::Scripting::Array* JSList::GetScriptingArray()
{
    return array;
}

// public JSList New(Fuse.Scripting.Context c) [static] :13
JSList* JSList::New1(::g::Fuse::Scripting::Context* c)
{
    JSList* obj1 = (JSList*)uNew(JSList_typeof());
    obj1->ctor_1(c);
    return obj1;
}
// }

}}} // ::g::Bolav::ForeignHelpers
