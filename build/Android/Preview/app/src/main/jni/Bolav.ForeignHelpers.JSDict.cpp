// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-foreignhelpers/ListDict.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Bolav.ForeignHelpers.-69acc299.h>
#include <Bolav.ForeignHelpers.JSDict.h>
#include <Bolav.ForeignHelpers.JSList.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Object.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>

namespace g{
namespace Bolav{
namespace ForeignHelpers{

// public sealed class JSDict :65
// {
static void JSDict_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(JSDict, ctx), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(JSDict, obj), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AddDictForKey", NULL, (void*)JSDict__AddDictForKey_fn, 0, false, ::g::Bolav::ForeignHelpers::ForeignDict_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("AddListForKey", NULL, (void*)JSDict__AddListForKey_fn, 0, false, ::g::Bolav::ForeignHelpers::ForeignList_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("FromJava", NULL, (void*)JSDict__FromJava_fn, 0, false, uVoid_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("GetScriptingObject", NULL, (void*)JSDict__GetScriptingObject_fn, 0, false, ::g::Fuse::Scripting::Object_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)JSDict__New1_fn, 0, true, type, 1, ::g::Fuse::Scripting::Context_typeof()));
}

::g::Bolav::ForeignHelpers::ForeignDict_type* JSDict_typeof()
{
    static uSStrong< ::g::Bolav::ForeignHelpers::ForeignDict_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Bolav::ForeignHelpers::ForeignDict_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(JSDict);
    options.TypeSize = sizeof(::g::Bolav::ForeignHelpers::ForeignDict_type);
    type = (::g::Bolav::ForeignHelpers::ForeignDict_type*)uClassType::New("Bolav.ForeignHelpers.JSDict", options);
    type->fp_build_ = JSDict_build;
    type->fp_SetKeyVal = (void(*)(::g::Bolav::ForeignHelpers::ForeignDict*, uString*, uString*))JSDict__SetKeyVal_fn;
    return type;
}

// public JSDict(Fuse.Scripting.Context c) :68
void JSDict__ctor_1_fn(JSDict* __this, ::g::Fuse::Scripting::Context* c)
{
    __this->ctor_1(c);
}

// public Bolav.ForeignHelpers.ForeignDict AddDictForKey(string key) :148
void JSDict__AddDictForKey_fn(JSDict* __this, uString* key, ::g::Bolav::ForeignHelpers::ForeignDict** __retval)
{
    *__retval = __this->AddDictForKey(key);
}

// public Bolav.ForeignHelpers.ForeignList AddListForKey(string key) :142
void JSDict__AddListForKey_fn(JSDict* __this, uString* key, ::g::Bolav::ForeignHelpers::ForeignList** __retval)
{
    *__retval = __this->AddListForKey(key);
}

// public extern void FromJava(Java.Object dict) :107
void JSDict__FromJava_fn(JSDict* __this, ::g::Java::Object* dict)
{
    __this->FromJava(dict);
}

// public Fuse.Scripting.Object GetScriptingObject() :73
void JSDict__GetScriptingObject_fn(JSDict* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->GetScriptingObject();
}

// public JSDict New(Fuse.Scripting.Context c) :68
void JSDict__New1_fn(::g::Fuse::Scripting::Context* c, JSDict** __retval)
{
    *__retval = JSDict::New1(c);
}

// public override sealed void SetKeyVal(string key, string val) :138
void JSDict__SetKeyVal_fn(JSDict* __this, uString* key, uString* val)
{
    uStackFrame __("Bolav.ForeignHelpers.JSDict", "SetKeyVal(string,string)");
    uPtr(__this->obj)->Item(key, val);
}

// public JSDict(Fuse.Scripting.Context c) [instance] :68
void JSDict::ctor_1(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Bolav.ForeignHelpers.JSDict", ".ctor(Fuse.Scripting.Context)");
    ctor_();
    ctx = c;
    obj = uPtr(ctx)->NewObject();
}

// public Bolav.ForeignHelpers.ForeignDict AddDictForKey(string key) [instance] :148
::g::Bolav::ForeignHelpers::ForeignDict* JSDict::AddDictForKey(uString* key)
{
    uStackFrame __("Bolav.ForeignHelpers.JSDict", "AddDictForKey(string)");
    JSDict* dict = JSDict::New1(ctx);
    uPtr(obj)->Item(key, dict->GetScriptingObject());
    return dict;
}

// public Bolav.ForeignHelpers.ForeignList AddListForKey(string key) [instance] :142
::g::Bolav::ForeignHelpers::ForeignList* JSDict::AddListForKey(uString* key)
{
    uStackFrame __("Bolav.ForeignHelpers.JSDict", "AddListForKey(string)");
    ::g::Bolav::ForeignHelpers::JSList* list = ::g::Bolav::ForeignHelpers::JSList::New1(ctx);
    uPtr(obj)->Item(key, list->GetScriptingArray());
    return list;
}

// public extern void FromJava(Java.Object dict) [instance] :107
void JSDict::FromJava(::g::Java::Object* dict)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "FromJava391", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _udict=dict;
        jobject _dict = (_udict==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udict, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_dict);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_dict!=NULL) { U_JNIVAR->DeleteLocalRef(_dict); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public Fuse.Scripting.Object GetScriptingObject() [instance] :73
::g::Fuse::Scripting::Object* JSDict::GetScriptingObject()
{
    return obj;
}

// public JSDict New(Fuse.Scripting.Context c) [static] :68
JSDict* JSDict::New1(::g::Fuse::Scripting::Context* c)
{
    JSDict* obj1 = (JSDict*)uNew(JSDict_typeof());
    obj1->ctor_1(c);
    return obj1;
}
// }

}}} // ::g::Bolav::ForeignHelpers
