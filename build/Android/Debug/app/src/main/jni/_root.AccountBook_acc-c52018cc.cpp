// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_acc-c52018cc.h>
#include <_root.dayButton.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class AccountBook_accessor_dayButton_text :41
// {
// static generated AccountBook_accessor_dayButton_text() :41
static void AccountBook_accessor_dayButton_text__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    AccountBook_accessor_dayButton_text::Singleton_ = AccountBook_accessor_dayButton_text::New1();
    AccountBook_accessor_dayButton_text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"text"*/]);
}

static void AccountBook_accessor_dayButton_text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("text");
    ::TYPES[0] = ::g::dayButton_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&AccountBook_accessor_dayButton_text::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AccountBook_accessor_dayButton_text::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* AccountBook_accessor_dayButton_text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_accessor_dayButton_text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("AccountBook_accessor_dayButton_text", options);
    type->fp_build_ = AccountBook_accessor_dayButton_text_build;
    type->fp_ctor_ = (void*)AccountBook_accessor_dayButton_text__New1_fn;
    type->fp_cctor_ = AccountBook_accessor_dayButton_text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))AccountBook_accessor_dayButton_text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))AccountBook_accessor_dayButton_text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))AccountBook_accessor_dayButton_text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))AccountBook_accessor_dayButton_text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AccountBook_accessor_dayButton_text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated AccountBook_accessor_dayButton_text() :41
void AccountBook_accessor_dayButton_text__ctor_1_fn(AccountBook_accessor_dayButton_text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :47
void AccountBook_accessor_dayButton_text__GetAsObject_fn(AccountBook_accessor_dayButton_text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::dayButton*>(obj, ::TYPES[0/*dayButton*/]))->text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :44
void AccountBook_accessor_dayButton_text__get_Name_fn(AccountBook_accessor_dayButton_text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = AccountBook_accessor_dayButton_text::_name_, void();
}

// public generated AccountBook_accessor_dayButton_text New() :41
void AccountBook_accessor_dayButton_text__New1_fn(AccountBook_accessor_dayButton_text** __retval)
{
    *__retval = AccountBook_accessor_dayButton_text::New1();
}

// public override sealed Uno.Type get_PropertyType() :46
void AccountBook_accessor_dayButton_text__get_PropertyType_fn(AccountBook_accessor_dayButton_text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :48
void AccountBook_accessor_dayButton_text__SetAsObject_fn(AccountBook_accessor_dayButton_text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::dayButton*>(obj, ::TYPES[0/*dayButton*/]))->Settext(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :49
void AccountBook_accessor_dayButton_text__get_SupportsOriginSetter_fn(AccountBook_accessor_dayButton_text* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> AccountBook_accessor_dayButton_text::Singleton_;
::g::Uno::UX::Selector AccountBook_accessor_dayButton_text::_name_;

// public generated AccountBook_accessor_dayButton_text() [instance] :41
void AccountBook_accessor_dayButton_text::ctor_1()
{
    ctor_();
}

// public generated AccountBook_accessor_dayButton_text New() [static] :41
AccountBook_accessor_dayButton_text* AccountBook_accessor_dayButton_text::New1()
{
    AccountBook_accessor_dayButton_text* obj1 = (AccountBook_accessor_dayButton_text*)uNew(AccountBook_accessor_dayButton_text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
