// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-2ef55d3f.h>
#include <Fuse.Reactive.Each.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class AccountBook_FuseReactiveEach_Offset_Property :309
// {
static void AccountBook_FuseReactiveEach_Offset_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::Each_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Reactive.Each*/], offsetof(AccountBook_FuseReactiveEach_Offset_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* AccountBook_FuseReactiveEach_Offset_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_FuseReactiveEach_Offset_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("AccountBook_FuseReactiveEach_Offset_Property", options);
    type->fp_build_ = AccountBook_FuseReactiveEach_Offset_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))AccountBook_FuseReactiveEach_Offset_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))AccountBook_FuseReactiveEach_Offset_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))AccountBook_FuseReactiveEach_Offset_Property__Set1_fn;
    return type;
}

// public AccountBook_FuseReactiveEach_Offset_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) :312
void AccountBook_FuseReactiveEach_Offset_Property__ctor_3_fn(AccountBook_FuseReactiveEach_Offset_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed int Get(Uno.UX.PropertyObject obj) :314
void AccountBook_FuseReactiveEach_Offset_Property__Get1_fn(AccountBook_FuseReactiveEach_Offset_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* __retval)
{
    uStackFrame __("AccountBook_FuseReactiveEach_Offset_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Reactive::Each*>(obj, ::TYPES[0/*Fuse.Reactive.Each*/]))->Offset1(), void();
}

// public AccountBook_FuseReactiveEach_Offset_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) :312
void AccountBook_FuseReactiveEach_Offset_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, AccountBook_FuseReactiveEach_Offset_Property** __retval)
{
    *__retval = AccountBook_FuseReactiveEach_Offset_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :313
void AccountBook_FuseReactiveEach_Offset_Property__get_Object_fn(AccountBook_FuseReactiveEach_Offset_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, int v, Uno.UX.IPropertyListener origin) :315
void AccountBook_FuseReactiveEach_Offset_Property__Set1_fn(AccountBook_FuseReactiveEach_Offset_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* v, uObject* origin)
{
    uStackFrame __("AccountBook_FuseReactiveEach_Offset_Property", "Set(Uno.UX.PropertyObject,int,Uno.UX.IPropertyListener)");
    int32_t v_ = *v;
    uPtr(uCast< ::g::Fuse::Reactive::Each*>(obj, ::TYPES[0/*Fuse.Reactive.Each*/]))->Offset1(v_);
}

// public AccountBook_FuseReactiveEach_Offset_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) [instance] :312
void AccountBook_FuseReactiveEach_Offset_Property::ctor_3(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public AccountBook_FuseReactiveEach_Offset_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) [static] :312
AccountBook_FuseReactiveEach_Offset_Property* AccountBook_FuseReactiveEach_Offset_Property::New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    AccountBook_FuseReactiveEach_Offset_Property* obj1 = (AccountBook_FuseReactiveEach_Offset_Property*)uNew(AccountBook_FuseReactiveEach_Offset_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
