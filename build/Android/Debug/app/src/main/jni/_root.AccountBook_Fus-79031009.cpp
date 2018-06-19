// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-79031009.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class AccountBook_FuseElementsElement_ElementLayoutMaster_Property :367
// {
static void AccountBook_FuseElementsElement_ElementLayoutMaster_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL));
    type->SetDependencies(
        ::g::Fuse::Controls::LayoutControl_typeof());
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(AccountBook_FuseElementsElement_ElementLayoutMaster_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* AccountBook_FuseElementsElement_ElementLayoutMaster_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(AccountBook_FuseElementsElement_ElementLayoutMaster_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("AccountBook_FuseElementsElement_ElementLayoutMaster_Property", options);
    type->fp_build_ = AccountBook_FuseElementsElement_ElementLayoutMaster_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))AccountBook_FuseElementsElement_ElementLayoutMaster_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))AccountBook_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))AccountBook_FuseElementsElement_ElementLayoutMaster_Property__Set1_fn;
    return type;
}

// public AccountBook_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :370
void AccountBook_FuseElementsElement_ElementLayoutMaster_Property__ctor_3_fn(AccountBook_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Elements.Element Get(Uno.UX.PropertyObject obj) :372
void AccountBook_FuseElementsElement_ElementLayoutMaster_Property__Get1_fn(AccountBook_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element** __retval)
{
    return *__retval = ::g::Fuse::Controls::LayoutControl::GetLayoutMaster(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/])), void();
}

// public AccountBook_FuseElementsElement_ElementLayoutMaster_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :370
void AccountBook_FuseElementsElement_ElementLayoutMaster_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, AccountBook_FuseElementsElement_ElementLayoutMaster_Property** __retval)
{
    *__retval = AccountBook_FuseElementsElement_ElementLayoutMaster_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :371
void AccountBook_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn(AccountBook_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Elements.Element v, Uno.UX.IPropertyListener origin) :373
void AccountBook_FuseElementsElement_ElementLayoutMaster_Property__Set1_fn(AccountBook_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element* v, uObject* origin)
{
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]), v);
}

// public AccountBook_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :370
void AccountBook_FuseElementsElement_ElementLayoutMaster_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public AccountBook_FuseElementsElement_ElementLayoutMaster_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :370
AccountBook_FuseElementsElement_ElementLayoutMaster_Property* AccountBook_FuseElementsElement_ElementLayoutMaster_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    AccountBook_FuseElementsElement_ElementLayoutMaster_Property* obj1 = (AccountBook_FuseElementsElement_ElementLayoutMaster_Property*)uNew(AccountBook_FuseElementsElement_ElementLayoutMaster_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
