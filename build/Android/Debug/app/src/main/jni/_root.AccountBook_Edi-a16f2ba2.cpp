// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Edi-a16f2ba2.h>
#include <_root.EditButton.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class AccountBook_EditButton_text_Property :379
// {
static void AccountBook_EditButton_text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::EditButton_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*EditButton*/], offsetof(AccountBook_EditButton_text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* AccountBook_EditButton_text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_EditButton_text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("AccountBook_EditButton_text_Property", options);
    type->fp_build_ = AccountBook_EditButton_text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))AccountBook_EditButton_text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))AccountBook_EditButton_text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))AccountBook_EditButton_text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AccountBook_EditButton_text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public AccountBook_EditButton_text_Property(EditButton obj, Uno.UX.Selector name) :382
void AccountBook_EditButton_text_Property__ctor_3_fn(AccountBook_EditButton_text_Property* __this, ::g::EditButton* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :384
void AccountBook_EditButton_text_Property__Get1_fn(AccountBook_EditButton_text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::EditButton*>(obj, ::TYPES[0/*EditButton*/]))->text(), void();
}

// public AccountBook_EditButton_text_Property New(EditButton obj, Uno.UX.Selector name) :382
void AccountBook_EditButton_text_Property__New1_fn(::g::EditButton* obj, ::g::Uno::UX::Selector* name, AccountBook_EditButton_text_Property** __retval)
{
    *__retval = AccountBook_EditButton_text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :383
void AccountBook_EditButton_text_Property__get_Object_fn(AccountBook_EditButton_text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :385
void AccountBook_EditButton_text_Property__Set1_fn(AccountBook_EditButton_text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::EditButton*>(obj, ::TYPES[0/*EditButton*/]))->Settext(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :386
void AccountBook_EditButton_text_Property__get_SupportsOriginSetter_fn(AccountBook_EditButton_text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public AccountBook_EditButton_text_Property(EditButton obj, Uno.UX.Selector name) [instance] :382
void AccountBook_EditButton_text_Property::ctor_3(::g::EditButton* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public AccountBook_EditButton_text_Property New(EditButton obj, Uno.UX.Selector name) [static] :382
AccountBook_EditButton_text_Property* AccountBook_EditButton_text_Property::New1(::g::EditButton* obj, ::g::Uno::UX::Selector name)
{
    AccountBook_EditButton_text_Property* obj1 = (AccountBook_EditButton_text_Property*)uNew(AccountBook_EditButton_text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
