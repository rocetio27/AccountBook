// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_day-10672da9.h>
#include <_root.dayButton.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class AccountBook_dayButton_textcolor_Property :333
// {
static void AccountBook_dayButton_textcolor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::dayButton_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*dayButton*/], offsetof(AccountBook_dayButton_textcolor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* AccountBook_dayButton_textcolor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AccountBook_dayButton_textcolor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("AccountBook_dayButton_textcolor_Property", options);
    type->fp_build_ = AccountBook_dayButton_textcolor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))AccountBook_dayButton_textcolor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))AccountBook_dayButton_textcolor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))AccountBook_dayButton_textcolor_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AccountBook_dayButton_textcolor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public AccountBook_dayButton_textcolor_Property(dayButton obj, Uno.UX.Selector name) :336
void AccountBook_dayButton_textcolor_Property__ctor_3_fn(AccountBook_dayButton_textcolor_Property* __this, ::g::dayButton* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :338
void AccountBook_dayButton_textcolor_Property__Get1_fn(AccountBook_dayButton_textcolor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("AccountBook_dayButton_textcolor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::dayButton*>(obj, ::TYPES[0/*dayButton*/]))->textcolor(), void();
}

// public AccountBook_dayButton_textcolor_Property New(dayButton obj, Uno.UX.Selector name) :336
void AccountBook_dayButton_textcolor_Property__New1_fn(::g::dayButton* obj, ::g::Uno::UX::Selector* name, AccountBook_dayButton_textcolor_Property** __retval)
{
    *__retval = AccountBook_dayButton_textcolor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :337
void AccountBook_dayButton_textcolor_Property__get_Object_fn(AccountBook_dayButton_textcolor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :339
void AccountBook_dayButton_textcolor_Property__Set1_fn(AccountBook_dayButton_textcolor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("AccountBook_dayButton_textcolor_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::dayButton*>(obj, ::TYPES[0/*dayButton*/]))->Settextcolor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :340
void AccountBook_dayButton_textcolor_Property__get_SupportsOriginSetter_fn(AccountBook_dayButton_textcolor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public AccountBook_dayButton_textcolor_Property(dayButton obj, Uno.UX.Selector name) [instance] :336
void AccountBook_dayButton_textcolor_Property::ctor_3(::g::dayButton* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public AccountBook_dayButton_textcolor_Property New(dayButton obj, Uno.UX.Selector name) [static] :336
AccountBook_dayButton_textcolor_Property* AccountBook_dayButton_textcolor_Property::New1(::g::dayButton* obj, ::g::Uno::UX::Selector name)
{
    AccountBook_dayButton_textcolor_Property* obj1 = (AccountBook_dayButton_textcolor_Property*)uNew(AccountBook_dayButton_textcolor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
