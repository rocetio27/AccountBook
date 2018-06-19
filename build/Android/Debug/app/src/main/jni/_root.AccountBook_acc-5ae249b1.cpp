// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_acc-5ae249b1.h>
#include <_root.dayButton.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class AccountBook_accessor_dayButton_fontsize :21
// {
// static generated AccountBook_accessor_dayButton_fontsize() :21
static void AccountBook_accessor_dayButton_fontsize__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    AccountBook_accessor_dayButton_fontsize::Singleton_ = AccountBook_accessor_dayButton_fontsize::New1();
    AccountBook_accessor_dayButton_fontsize::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"fontsize"*/]);
}

static void AccountBook_accessor_dayButton_fontsize_build(uType* type)
{
    ::STRINGS[0] = uString::Const("fontsize");
    ::TYPES[0] = ::g::dayButton_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&AccountBook_accessor_dayButton_fontsize::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AccountBook_accessor_dayButton_fontsize::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* AccountBook_accessor_dayButton_fontsize_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_accessor_dayButton_fontsize);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("AccountBook_accessor_dayButton_fontsize", options);
    type->fp_build_ = AccountBook_accessor_dayButton_fontsize_build;
    type->fp_ctor_ = (void*)AccountBook_accessor_dayButton_fontsize__New1_fn;
    type->fp_cctor_ = AccountBook_accessor_dayButton_fontsize__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))AccountBook_accessor_dayButton_fontsize__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))AccountBook_accessor_dayButton_fontsize__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))AccountBook_accessor_dayButton_fontsize__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))AccountBook_accessor_dayButton_fontsize__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AccountBook_accessor_dayButton_fontsize__get_SupportsOriginSetter_fn;
    return type;
}

// public generated AccountBook_accessor_dayButton_fontsize() :21
void AccountBook_accessor_dayButton_fontsize__ctor_1_fn(AccountBook_accessor_dayButton_fontsize* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :27
void AccountBook_accessor_dayButton_fontsize__GetAsObject_fn(AccountBook_accessor_dayButton_fontsize* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox<int>(::g::Uno::Int_typeof(), uPtr(uCast< ::g::dayButton*>(obj, ::TYPES[0/*dayButton*/]))->fontsize()), void();
}

// public override sealed Uno.UX.Selector get_Name() :24
void AccountBook_accessor_dayButton_fontsize__get_Name_fn(AccountBook_accessor_dayButton_fontsize* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = AccountBook_accessor_dayButton_fontsize::_name_, void();
}

// public generated AccountBook_accessor_dayButton_fontsize New() :21
void AccountBook_accessor_dayButton_fontsize__New1_fn(AccountBook_accessor_dayButton_fontsize** __retval)
{
    *__retval = AccountBook_accessor_dayButton_fontsize::New1();
}

// public override sealed Uno.Type get_PropertyType() :26
void AccountBook_accessor_dayButton_fontsize__get_PropertyType_fn(AccountBook_accessor_dayButton_fontsize* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Int_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :28
void AccountBook_accessor_dayButton_fontsize__SetAsObject_fn(AccountBook_accessor_dayButton_fontsize* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::dayButton*>(obj, ::TYPES[0/*dayButton*/]))->Setfontsize(uUnbox<int>(::g::Uno::Int_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :29
void AccountBook_accessor_dayButton_fontsize__get_SupportsOriginSetter_fn(AccountBook_accessor_dayButton_fontsize* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> AccountBook_accessor_dayButton_fontsize::Singleton_;
::g::Uno::UX::Selector AccountBook_accessor_dayButton_fontsize::_name_;

// public generated AccountBook_accessor_dayButton_fontsize() [instance] :21
void AccountBook_accessor_dayButton_fontsize::ctor_1()
{
    ctor_();
}

// public generated AccountBook_accessor_dayButton_fontsize New() [static] :21
AccountBook_accessor_dayButton_fontsize* AccountBook_accessor_dayButton_fontsize::New1()
{
    AccountBook_accessor_dayButton_fontsize* obj1 = (AccountBook_accessor_dayButton_fontsize*)uNew(AccountBook_accessor_dayButton_fontsize_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
