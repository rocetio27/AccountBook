// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-6f21f71a.h>
#include <Fuse.AlternateRoot.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class AccountBook_FuseAlternateRoot_ParentNode_Property :222
// {
static void AccountBook_FuseAlternateRoot_ParentNode_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::AlternateRoot_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.AlternateRoot*/], offsetof(AccountBook_FuseAlternateRoot_ParentNode_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* AccountBook_FuseAlternateRoot_ParentNode_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_FuseAlternateRoot_ParentNode_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("AccountBook_FuseAlternateRoot_ParentNode_Property", options);
    type->fp_build_ = AccountBook_FuseAlternateRoot_ParentNode_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))AccountBook_FuseAlternateRoot_ParentNode_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))AccountBook_FuseAlternateRoot_ParentNode_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))AccountBook_FuseAlternateRoot_ParentNode_Property__Set1_fn;
    return type;
}

// public AccountBook_FuseAlternateRoot_ParentNode_Property(Fuse.AlternateRoot obj, Uno.UX.Selector name) :225
void AccountBook_FuseAlternateRoot_ParentNode_Property__ctor_3_fn(AccountBook_FuseAlternateRoot_ParentNode_Property* __this, ::g::Fuse::AlternateRoot* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Visual Get(Uno.UX.PropertyObject obj) :227
void AccountBook_FuseAlternateRoot_ParentNode_Property__Get1_fn(AccountBook_FuseAlternateRoot_ParentNode_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::AlternateRoot*>(obj, ::TYPES[0/*Fuse.AlternateRoot*/]))->ParentNode(), void();
}

// public AccountBook_FuseAlternateRoot_ParentNode_Property New(Fuse.AlternateRoot obj, Uno.UX.Selector name) :225
void AccountBook_FuseAlternateRoot_ParentNode_Property__New1_fn(::g::Fuse::AlternateRoot* obj, ::g::Uno::UX::Selector* name, AccountBook_FuseAlternateRoot_ParentNode_Property** __retval)
{
    *__retval = AccountBook_FuseAlternateRoot_ParentNode_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :226
void AccountBook_FuseAlternateRoot_ParentNode_Property__get_Object_fn(AccountBook_FuseAlternateRoot_ParentNode_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Visual v, Uno.UX.IPropertyListener origin) :228
void AccountBook_FuseAlternateRoot_ParentNode_Property__Set1_fn(AccountBook_FuseAlternateRoot_ParentNode_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::AlternateRoot*>(obj, ::TYPES[0/*Fuse.AlternateRoot*/]))->ParentNode(v);
}

// public AccountBook_FuseAlternateRoot_ParentNode_Property(Fuse.AlternateRoot obj, Uno.UX.Selector name) [instance] :225
void AccountBook_FuseAlternateRoot_ParentNode_Property::ctor_3(::g::Fuse::AlternateRoot* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public AccountBook_FuseAlternateRoot_ParentNode_Property New(Fuse.AlternateRoot obj, Uno.UX.Selector name) [static] :225
AccountBook_FuseAlternateRoot_ParentNode_Property* AccountBook_FuseAlternateRoot_ParentNode_Property::New1(::g::Fuse::AlternateRoot* obj, ::g::Uno::UX::Selector name)
{
    AccountBook_FuseAlternateRoot_ParentNode_Property* obj1 = (AccountBook_FuseAlternateRoot_ParentNode_Property*)uNew(AccountBook_FuseAlternateRoot_ParentNode_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
