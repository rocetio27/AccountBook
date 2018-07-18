// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_acc-2c9dedce.h>
#include <_root.myButton.h>
#include <Fuse.Font.h>
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

// internal sealed class AccountBook_accessor_myButton_font :141
// {
// static generated AccountBook_accessor_myButton_font() :141
static void AccountBook_accessor_myButton_font__cctor__fn(uType* __type)
{
    AccountBook_accessor_myButton_font::Singleton_ = AccountBook_accessor_myButton_font::New1();
    AccountBook_accessor_myButton_font::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"font"*/]);
}

static void AccountBook_accessor_myButton_font_build(uType* type)
{
    ::STRINGS[0] = uString::Const("font");
    ::TYPES[0] = ::g::myButton_typeof();
    ::TYPES[1] = ::g::Fuse::Font_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&AccountBook_accessor_myButton_font::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AccountBook_accessor_myButton_font::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* AccountBook_accessor_myButton_font_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_accessor_myButton_font);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("AccountBook_accessor_myButton_font", options);
    type->fp_build_ = AccountBook_accessor_myButton_font_build;
    type->fp_ctor_ = (void*)AccountBook_accessor_myButton_font__New1_fn;
    type->fp_cctor_ = AccountBook_accessor_myButton_font__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))AccountBook_accessor_myButton_font__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))AccountBook_accessor_myButton_font__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))AccountBook_accessor_myButton_font__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))AccountBook_accessor_myButton_font__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AccountBook_accessor_myButton_font__get_SupportsOriginSetter_fn;
    return type;
}

// public generated AccountBook_accessor_myButton_font() :141
void AccountBook_accessor_myButton_font__ctor_1_fn(AccountBook_accessor_myButton_font* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :147
void AccountBook_accessor_myButton_font__GetAsObject_fn(AccountBook_accessor_myButton_font* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::myButton*>(obj, ::TYPES[0/*myButton*/]))->font(), void();
}

// public override sealed Uno.UX.Selector get_Name() :144
void AccountBook_accessor_myButton_font__get_Name_fn(AccountBook_accessor_myButton_font* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = AccountBook_accessor_myButton_font::_name_, void();
}

// public generated AccountBook_accessor_myButton_font New() :141
void AccountBook_accessor_myButton_font__New1_fn(AccountBook_accessor_myButton_font** __retval)
{
    *__retval = AccountBook_accessor_myButton_font::New1();
}

// public override sealed Uno.Type get_PropertyType() :146
void AccountBook_accessor_myButton_font__get_PropertyType_fn(AccountBook_accessor_myButton_font* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*Fuse.Font*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :148
void AccountBook_accessor_myButton_font__SetAsObject_fn(AccountBook_accessor_myButton_font* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::myButton*>(obj, ::TYPES[0/*myButton*/]))->Setfont(uCast< ::g::Fuse::Font*>(v, ::TYPES[1/*Fuse.Font*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :149
void AccountBook_accessor_myButton_font__get_SupportsOriginSetter_fn(AccountBook_accessor_myButton_font* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> AccountBook_accessor_myButton_font::Singleton_;
::g::Uno::UX::Selector AccountBook_accessor_myButton_font::_name_;

// public generated AccountBook_accessor_myButton_font() [instance] :141
void AccountBook_accessor_myButton_font::ctor_1()
{
    ctor_();
}

// public generated AccountBook_accessor_myButton_font New() [static] :141
AccountBook_accessor_myButton_font* AccountBook_accessor_myButton_font::New1()
{
    AccountBook_accessor_myButton_font* obj1 = (AccountBook_accessor_myButton_font*)uNew(AccountBook_accessor_myButton_font_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
