// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_pmB-c0ef9fa5.h>
#include <_root.pmButton.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class AccountBook_pmButton_Text_Property :300
// {
static void AccountBook_pmButton_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::pmButton_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*pmButton*/], offsetof(AccountBook_pmButton_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* AccountBook_pmButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_pmButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("AccountBook_pmButton_Text_Property", options);
    type->fp_build_ = AccountBook_pmButton_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))AccountBook_pmButton_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))AccountBook_pmButton_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))AccountBook_pmButton_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AccountBook_pmButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public AccountBook_pmButton_Text_Property(pmButton obj, Uno.UX.Selector name) :303
void AccountBook_pmButton_Text_Property__ctor_3_fn(AccountBook_pmButton_Text_Property* __this, ::g::pmButton* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :305
void AccountBook_pmButton_Text_Property__Get1_fn(AccountBook_pmButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("AccountBook_pmButton_Text_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::pmButton*>(obj, ::TYPES[0/*pmButton*/]))->Text1(), void();
}

// public AccountBook_pmButton_Text_Property New(pmButton obj, Uno.UX.Selector name) :303
void AccountBook_pmButton_Text_Property__New1_fn(::g::pmButton* obj, ::g::Uno::UX::Selector* name, AccountBook_pmButton_Text_Property** __retval)
{
    *__retval = AccountBook_pmButton_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :304
void AccountBook_pmButton_Text_Property__get_Object_fn(AccountBook_pmButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :306
void AccountBook_pmButton_Text_Property__Set1_fn(AccountBook_pmButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("AccountBook_pmButton_Text_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::pmButton*>(obj, ::TYPES[0/*pmButton*/]))->SetText1(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :307
void AccountBook_pmButton_Text_Property__get_SupportsOriginSetter_fn(AccountBook_pmButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public AccountBook_pmButton_Text_Property(pmButton obj, Uno.UX.Selector name) [instance] :303
void AccountBook_pmButton_Text_Property::ctor_3(::g::pmButton* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public AccountBook_pmButton_Text_Property New(pmButton obj, Uno.UX.Selector name) [static] :303
AccountBook_pmButton_Text_Property* AccountBook_pmButton_Text_Property::New1(::g::pmButton* obj, ::g::Uno::UX::Selector name)
{
    AccountBook_pmButton_Text_Property* obj1 = (AccountBook_pmButton_Text_Property*)uNew(AccountBook_pmButton_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
