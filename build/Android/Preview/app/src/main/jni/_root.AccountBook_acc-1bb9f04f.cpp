// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_acc-1bb9f04f.h>
#include <_root.wbButton.h>
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

// internal sealed class AccountBook_accessor_wbButton_TextCol :111
// {
// static generated AccountBook_accessor_wbButton_TextCol() :111
static void AccountBook_accessor_wbButton_TextCol__cctor__fn(uType* __type)
{
    AccountBook_accessor_wbButton_TextCol::Singleton_ = AccountBook_accessor_wbButton_TextCol::New1();
    AccountBook_accessor_wbButton_TextCol::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"TextCol"*/]);
}

static void AccountBook_accessor_wbButton_TextCol_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TextCol");
    ::TYPES[0] = ::g::wbButton_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&AccountBook_accessor_wbButton_TextCol::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AccountBook_accessor_wbButton_TextCol::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* AccountBook_accessor_wbButton_TextCol_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_accessor_wbButton_TextCol);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("AccountBook_accessor_wbButton_TextCol", options);
    type->fp_build_ = AccountBook_accessor_wbButton_TextCol_build;
    type->fp_ctor_ = (void*)AccountBook_accessor_wbButton_TextCol__New1_fn;
    type->fp_cctor_ = AccountBook_accessor_wbButton_TextCol__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))AccountBook_accessor_wbButton_TextCol__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))AccountBook_accessor_wbButton_TextCol__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))AccountBook_accessor_wbButton_TextCol__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))AccountBook_accessor_wbButton_TextCol__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AccountBook_accessor_wbButton_TextCol__get_SupportsOriginSetter_fn;
    return type;
}

// public generated AccountBook_accessor_wbButton_TextCol() :111
void AccountBook_accessor_wbButton_TextCol__ctor_1_fn(AccountBook_accessor_wbButton_TextCol* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :117
void AccountBook_accessor_wbButton_TextCol__GetAsObject_fn(AccountBook_accessor_wbButton_TextCol* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("AccountBook_accessor_wbButton_TextCol", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::wbButton*>(obj, ::TYPES[0/*wbButton*/]))->TextCol()), void();
}

// public override sealed Uno.UX.Selector get_Name() :114
void AccountBook_accessor_wbButton_TextCol__get_Name_fn(AccountBook_accessor_wbButton_TextCol* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = AccountBook_accessor_wbButton_TextCol::_name_, void();
}

// public generated AccountBook_accessor_wbButton_TextCol New() :111
void AccountBook_accessor_wbButton_TextCol__New1_fn(AccountBook_accessor_wbButton_TextCol** __retval)
{
    *__retval = AccountBook_accessor_wbButton_TextCol::New1();
}

// public override sealed Uno.Type get_PropertyType() :116
void AccountBook_accessor_wbButton_TextCol__get_PropertyType_fn(AccountBook_accessor_wbButton_TextCol* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :118
void AccountBook_accessor_wbButton_TextCol__SetAsObject_fn(AccountBook_accessor_wbButton_TextCol* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("AccountBook_accessor_wbButton_TextCol", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::wbButton*>(obj, ::TYPES[0/*wbButton*/]))->SetTextCol(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :119
void AccountBook_accessor_wbButton_TextCol__get_SupportsOriginSetter_fn(AccountBook_accessor_wbButton_TextCol* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> AccountBook_accessor_wbButton_TextCol::Singleton_;
::g::Uno::UX::Selector AccountBook_accessor_wbButton_TextCol::_name_;

// public generated AccountBook_accessor_wbButton_TextCol() [instance] :111
void AccountBook_accessor_wbButton_TextCol::ctor_1()
{
    ctor_();
}

// public generated AccountBook_accessor_wbButton_TextCol New() [static] :111
AccountBook_accessor_wbButton_TextCol* AccountBook_accessor_wbButton_TextCol::New1()
{
    AccountBook_accessor_wbButton_TextCol* obj1 = (AccountBook_accessor_wbButton_TextCol*)uNew(AccountBook_accessor_wbButton_TextCol_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
