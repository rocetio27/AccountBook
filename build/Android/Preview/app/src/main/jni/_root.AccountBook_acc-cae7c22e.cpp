// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_acc-cae7c22e.h>
#include <Fuse.Controls.ButtonBase.h>
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

// internal sealed class AccountBook_accessor_Fuse_Controls_ButtonBase_Text :1
// {
// static generated AccountBook_accessor_Fuse_Controls_ButtonBase_Text() :1
static void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn(uType* __type)
{
    AccountBook_accessor_Fuse_Controls_ButtonBase_Text::Singleton_ = AccountBook_accessor_Fuse_Controls_ButtonBase_Text::New1();
    AccountBook_accessor_Fuse_Controls_ButtonBase_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Text"*/]);
}

static void AccountBook_accessor_Fuse_Controls_ButtonBase_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::Fuse::Controls::ButtonBase_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&AccountBook_accessor_Fuse_Controls_ButtonBase_Text::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AccountBook_accessor_Fuse_Controls_ButtonBase_Text::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* AccountBook_accessor_Fuse_Controls_ButtonBase_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_accessor_Fuse_Controls_ButtonBase_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("AccountBook_accessor_Fuse_Controls_ButtonBase_Text", options);
    type->fp_build_ = AccountBook_accessor_Fuse_Controls_ButtonBase_Text_build;
    type->fp_ctor_ = (void*)AccountBook_accessor_Fuse_Controls_ButtonBase_Text__New1_fn;
    type->fp_cctor_ = AccountBook_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))AccountBook_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))AccountBook_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))AccountBook_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))AccountBook_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AccountBook_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated AccountBook_accessor_Fuse_Controls_ButtonBase_Text() :1
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__ctor_1_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("AccountBook_accessor_Fuse_Controls_ButtonBase_Text", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[0/*Fuse.Controls.ButtonBase*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = AccountBook_accessor_Fuse_Controls_ButtonBase_Text::_name_, void();
}

// public generated AccountBook_accessor_Fuse_Controls_ButtonBase_Text New() :1
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__New1_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text** __retval)
{
    *__retval = AccountBook_accessor_Fuse_Controls_ButtonBase_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("AccountBook_accessor_Fuse_Controls_ButtonBase_Text", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[0/*Fuse.Controls.ButtonBase*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> AccountBook_accessor_Fuse_Controls_ButtonBase_Text::Singleton_;
::g::Uno::UX::Selector AccountBook_accessor_Fuse_Controls_ButtonBase_Text::_name_;

// public generated AccountBook_accessor_Fuse_Controls_ButtonBase_Text() [instance] :1
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text::ctor_1()
{
    ctor_();
}

// public generated AccountBook_accessor_Fuse_Controls_ButtonBase_Text New() [static] :1
AccountBook_accessor_Fuse_Controls_ButtonBase_Text* AccountBook_accessor_Fuse_Controls_ButtonBase_Text::New1()
{
    AccountBook_accessor_Fuse_Controls_ButtonBase_Text* obj1 = (AccountBook_accessor_Fuse_Controls_ButtonBase_Text*)uNew(AccountBook_accessor_Fuse_Controls_ButtonBase_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
