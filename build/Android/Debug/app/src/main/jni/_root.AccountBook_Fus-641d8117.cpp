// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-641d8117.h>
#include <Fuse.AlternateRoot.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class AccountBook_FuseAlternateRoot_IsEnabled_Property :234
// {
static void AccountBook_FuseAlternateRoot_IsEnabled_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::AlternateRoot_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.AlternateRoot*/], offsetof(AccountBook_FuseAlternateRoot_IsEnabled_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* AccountBook_FuseAlternateRoot_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_FuseAlternateRoot_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("AccountBook_FuseAlternateRoot_IsEnabled_Property", options);
    type->fp_build_ = AccountBook_FuseAlternateRoot_IsEnabled_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))AccountBook_FuseAlternateRoot_IsEnabled_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))AccountBook_FuseAlternateRoot_IsEnabled_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))AccountBook_FuseAlternateRoot_IsEnabled_Property__Set1_fn;
    return type;
}

// public AccountBook_FuseAlternateRoot_IsEnabled_Property(Fuse.AlternateRoot obj, Uno.UX.Selector name) :237
void AccountBook_FuseAlternateRoot_IsEnabled_Property__ctor_3_fn(AccountBook_FuseAlternateRoot_IsEnabled_Property* __this, ::g::Fuse::AlternateRoot* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :239
void AccountBook_FuseAlternateRoot_IsEnabled_Property__Get1_fn(AccountBook_FuseAlternateRoot_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::AlternateRoot*>(obj, ::TYPES[0/*Fuse.AlternateRoot*/]))->IsEnabled(), void();
}

// public AccountBook_FuseAlternateRoot_IsEnabled_Property New(Fuse.AlternateRoot obj, Uno.UX.Selector name) :237
void AccountBook_FuseAlternateRoot_IsEnabled_Property__New1_fn(::g::Fuse::AlternateRoot* obj, ::g::Uno::UX::Selector* name, AccountBook_FuseAlternateRoot_IsEnabled_Property** __retval)
{
    *__retval = AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :238
void AccountBook_FuseAlternateRoot_IsEnabled_Property__get_Object_fn(AccountBook_FuseAlternateRoot_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :240
void AccountBook_FuseAlternateRoot_IsEnabled_Property__Set1_fn(AccountBook_FuseAlternateRoot_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::AlternateRoot*>(obj, ::TYPES[0/*Fuse.AlternateRoot*/]))->IsEnabled(v_);
}

// public AccountBook_FuseAlternateRoot_IsEnabled_Property(Fuse.AlternateRoot obj, Uno.UX.Selector name) [instance] :237
void AccountBook_FuseAlternateRoot_IsEnabled_Property::ctor_3(::g::Fuse::AlternateRoot* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public AccountBook_FuseAlternateRoot_IsEnabled_Property New(Fuse.AlternateRoot obj, Uno.UX.Selector name) [static] :237
AccountBook_FuseAlternateRoot_IsEnabled_Property* AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(::g::Fuse::AlternateRoot* obj, ::g::Uno::UX::Selector name)
{
    AccountBook_FuseAlternateRoot_IsEnabled_Property* obj1 = (AccountBook_FuseAlternateRoot_IsEnabled_Property*)uNew(AccountBook_FuseAlternateRoot_IsEnabled_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
