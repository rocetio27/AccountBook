// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-676d1d1f.h>
#include <Fuse.Elements.Element.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class AccountBook_FuseElementsElement_Margin_Property :394
// {
static void AccountBook_FuseElementsElement_Margin_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(AccountBook_FuseElementsElement_Margin_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* AccountBook_FuseElementsElement_Margin_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_FuseElementsElement_Margin_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("AccountBook_FuseElementsElement_Margin_Property", options);
    type->fp_build_ = AccountBook_FuseElementsElement_Margin_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))AccountBook_FuseElementsElement_Margin_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))AccountBook_FuseElementsElement_Margin_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))AccountBook_FuseElementsElement_Margin_Property__Set1_fn;
    return type;
}

// public AccountBook_FuseElementsElement_Margin_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :397
void AccountBook_FuseElementsElement_Margin_Property__ctor_3_fn(AccountBook_FuseElementsElement_Margin_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :399
void AccountBook_FuseElementsElement_Margin_Property__Get1_fn(AccountBook_FuseElementsElement_Margin_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("AccountBook_FuseElementsElement_Margin_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->Margin(), void();
}

// public AccountBook_FuseElementsElement_Margin_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :397
void AccountBook_FuseElementsElement_Margin_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, AccountBook_FuseElementsElement_Margin_Property** __retval)
{
    *__retval = AccountBook_FuseElementsElement_Margin_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :398
void AccountBook_FuseElementsElement_Margin_Property__get_Object_fn(AccountBook_FuseElementsElement_Margin_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :400
void AccountBook_FuseElementsElement_Margin_Property__Set1_fn(AccountBook_FuseElementsElement_Margin_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("AccountBook_FuseElementsElement_Margin_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->Margin(v_);
}

// public AccountBook_FuseElementsElement_Margin_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :397
void AccountBook_FuseElementsElement_Margin_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public AccountBook_FuseElementsElement_Margin_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :397
AccountBook_FuseElementsElement_Margin_Property* AccountBook_FuseElementsElement_Margin_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    AccountBook_FuseElementsElement_Margin_Property* obj1 = (AccountBook_FuseElementsElement_Margin_Property*)uNew(AccountBook_FuseElementsElement_Margin_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
