// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_acc-8ee89250.h>
#include <_root.wbButtonB.h>
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

// internal sealed class AccountBook_accessor_wbButtonB_textcolor :11
// {
// static generated AccountBook_accessor_wbButtonB_textcolor() :11
static void AccountBook_accessor_wbButtonB_textcolor__cctor__fn(uType* __type)
{
    AccountBook_accessor_wbButtonB_textcolor::Singleton_ = AccountBook_accessor_wbButtonB_textcolor::New1();
    AccountBook_accessor_wbButtonB_textcolor::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"textcolor"*/]);
}

static void AccountBook_accessor_wbButtonB_textcolor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("textcolor");
    ::TYPES[0] = ::g::wbButtonB_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&AccountBook_accessor_wbButtonB_textcolor::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AccountBook_accessor_wbButtonB_textcolor::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* AccountBook_accessor_wbButtonB_textcolor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_accessor_wbButtonB_textcolor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("AccountBook_accessor_wbButtonB_textcolor", options);
    type->fp_build_ = AccountBook_accessor_wbButtonB_textcolor_build;
    type->fp_ctor_ = (void*)AccountBook_accessor_wbButtonB_textcolor__New1_fn;
    type->fp_cctor_ = AccountBook_accessor_wbButtonB_textcolor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))AccountBook_accessor_wbButtonB_textcolor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))AccountBook_accessor_wbButtonB_textcolor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))AccountBook_accessor_wbButtonB_textcolor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))AccountBook_accessor_wbButtonB_textcolor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AccountBook_accessor_wbButtonB_textcolor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated AccountBook_accessor_wbButtonB_textcolor() :11
void AccountBook_accessor_wbButtonB_textcolor__ctor_1_fn(AccountBook_accessor_wbButtonB_textcolor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :17
void AccountBook_accessor_wbButtonB_textcolor__GetAsObject_fn(AccountBook_accessor_wbButtonB_textcolor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("AccountBook_accessor_wbButtonB_textcolor", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::wbButtonB*>(obj, ::TYPES[0/*wbButtonB*/]))->textcolor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :14
void AccountBook_accessor_wbButtonB_textcolor__get_Name_fn(AccountBook_accessor_wbButtonB_textcolor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = AccountBook_accessor_wbButtonB_textcolor::_name_, void();
}

// public generated AccountBook_accessor_wbButtonB_textcolor New() :11
void AccountBook_accessor_wbButtonB_textcolor__New1_fn(AccountBook_accessor_wbButtonB_textcolor** __retval)
{
    *__retval = AccountBook_accessor_wbButtonB_textcolor::New1();
}

// public override sealed Uno.Type get_PropertyType() :16
void AccountBook_accessor_wbButtonB_textcolor__get_PropertyType_fn(AccountBook_accessor_wbButtonB_textcolor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :18
void AccountBook_accessor_wbButtonB_textcolor__SetAsObject_fn(AccountBook_accessor_wbButtonB_textcolor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("AccountBook_accessor_wbButtonB_textcolor", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::wbButtonB*>(obj, ::TYPES[0/*wbButtonB*/]))->Settextcolor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :19
void AccountBook_accessor_wbButtonB_textcolor__get_SupportsOriginSetter_fn(AccountBook_accessor_wbButtonB_textcolor* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> AccountBook_accessor_wbButtonB_textcolor::Singleton_;
::g::Uno::UX::Selector AccountBook_accessor_wbButtonB_textcolor::_name_;

// public generated AccountBook_accessor_wbButtonB_textcolor() [instance] :11
void AccountBook_accessor_wbButtonB_textcolor::ctor_1()
{
    ctor_();
}

// public generated AccountBook_accessor_wbButtonB_textcolor New() [static] :11
AccountBook_accessor_wbButtonB_textcolor* AccountBook_accessor_wbButtonB_textcolor::New1()
{
    AccountBook_accessor_wbButtonB_textcolor* obj1 = (AccountBook_accessor_wbButtonB_textcolor*)uNew(AccountBook_accessor_wbButtonB_textcolor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
