// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_acc-4faed1c3.h>
#include <_root.ccButton.h>
#include <Uno.Bool.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class AccountBook_accessor_ccButton_textcolor :61
// {
// static generated AccountBook_accessor_ccButton_textcolor() :61
static void AccountBook_accessor_ccButton_textcolor__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    AccountBook_accessor_ccButton_textcolor::Singleton_ = AccountBook_accessor_ccButton_textcolor::New1();
    AccountBook_accessor_ccButton_textcolor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"textcolor"*/]);
}

static void AccountBook_accessor_ccButton_textcolor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("textcolor");
    ::TYPES[0] = ::g::ccButton_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&AccountBook_accessor_ccButton_textcolor::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AccountBook_accessor_ccButton_textcolor::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* AccountBook_accessor_ccButton_textcolor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_accessor_ccButton_textcolor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("AccountBook_accessor_ccButton_textcolor", options);
    type->fp_build_ = AccountBook_accessor_ccButton_textcolor_build;
    type->fp_ctor_ = (void*)AccountBook_accessor_ccButton_textcolor__New1_fn;
    type->fp_cctor_ = AccountBook_accessor_ccButton_textcolor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))AccountBook_accessor_ccButton_textcolor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))AccountBook_accessor_ccButton_textcolor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))AccountBook_accessor_ccButton_textcolor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))AccountBook_accessor_ccButton_textcolor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AccountBook_accessor_ccButton_textcolor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated AccountBook_accessor_ccButton_textcolor() :61
void AccountBook_accessor_ccButton_textcolor__ctor_1_fn(AccountBook_accessor_ccButton_textcolor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :67
void AccountBook_accessor_ccButton_textcolor__GetAsObject_fn(AccountBook_accessor_ccButton_textcolor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::ccButton*>(obj, ::TYPES[0/*ccButton*/]))->textcolor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :64
void AccountBook_accessor_ccButton_textcolor__get_Name_fn(AccountBook_accessor_ccButton_textcolor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = AccountBook_accessor_ccButton_textcolor::_name_, void();
}

// public generated AccountBook_accessor_ccButton_textcolor New() :61
void AccountBook_accessor_ccButton_textcolor__New1_fn(AccountBook_accessor_ccButton_textcolor** __retval)
{
    *__retval = AccountBook_accessor_ccButton_textcolor::New1();
}

// public override sealed Uno.Type get_PropertyType() :66
void AccountBook_accessor_ccButton_textcolor__get_PropertyType_fn(AccountBook_accessor_ccButton_textcolor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :68
void AccountBook_accessor_ccButton_textcolor__SetAsObject_fn(AccountBook_accessor_ccButton_textcolor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::ccButton*>(obj, ::TYPES[0/*ccButton*/]))->Settextcolor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :69
void AccountBook_accessor_ccButton_textcolor__get_SupportsOriginSetter_fn(AccountBook_accessor_ccButton_textcolor* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> AccountBook_accessor_ccButton_textcolor::Singleton_;
::g::Uno::UX::Selector AccountBook_accessor_ccButton_textcolor::_name_;

// public generated AccountBook_accessor_ccButton_textcolor() [instance] :61
void AccountBook_accessor_ccButton_textcolor::ctor_1()
{
    ctor_();
}

// public generated AccountBook_accessor_ccButton_textcolor New() [static] :61
AccountBook_accessor_ccButton_textcolor* AccountBook_accessor_ccButton_textcolor::New1()
{
    AccountBook_accessor_ccButton_textcolor* obj1 = (AccountBook_accessor_ccButton_textcolor*)uNew(AccountBook_accessor_ccButton_textcolor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
