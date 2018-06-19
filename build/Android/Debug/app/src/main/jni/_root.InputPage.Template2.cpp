// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/InputPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-3cda4468.h>
#include <_root.InputPage.h>
#include <_root.InputPage.Template2.h>
#include <_root.wbButton.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[3];
static uType* TYPES[2];

namespace g{

// public partial sealed class InputPage.Template2 :61
// {
// static Template2() :72
static void InputPage__Template2__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    InputPage__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void InputPage__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::STRINGS[1] = uString::Const("");
    ::STRINGS[2] = uString::Const("BalanceAdd");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::InputPage_typeof(), offsetof(InputPage__Template2, __parent1), uFieldFlagsWeak,
        ::g::InputPage_typeof(), offsetof(InputPage__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage__Template2, __self_Text_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(InputPage__Template2, temp_eb11), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage__Template2::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* InputPage__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(InputPage__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("InputPage.Template2", options);
    type->fp_build_ = InputPage__Template2_build;
    type->fp_cctor_ = InputPage__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))InputPage__Template2__New1_fn;
    return type;
}

// public Template2(InputPage parent, InputPage parentInstance) :65
void InputPage__Template2__ctor_1_fn(InputPage__Template2* __this, ::g::InputPage* parent, ::g::InputPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :75
void InputPage__Template2__New1_fn(InputPage__Template2* __this, uObject** __retval)
{
    ::g::wbButton* __self1 = ::g::wbButton::New6();
    __this->__self_Text_inst1 = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(__self1, InputPage__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*""*/]);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"BalanceAdd"*/]);
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Text_inst1, (uObject*)temp, 3);
    __this->temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb11)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb11);
    return *__retval = __self1, void();
}

// public Template2 New(InputPage parent, InputPage parentInstance) :65
void InputPage__Template2__New2_fn(::g::InputPage* parent, ::g::InputPage* parentInstance, InputPage__Template2** __retval)
{
    *__retval = InputPage__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector InputPage__Template2::__selector0_;

// public Template2(InputPage parent, InputPage parentInstance) [instance] :65
void InputPage__Template2::ctor_1(::g::InputPage* parent, ::g::InputPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(InputPage parent, InputPage parentInstance) [static] :65
InputPage__Template2* InputPage__Template2::New2(::g::InputPage* parent, ::g::InputPage* parentInstance)
{
    InputPage__Template2* obj1 = (InputPage__Template2*)uNew(InputPage__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
