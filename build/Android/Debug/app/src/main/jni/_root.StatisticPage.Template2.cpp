// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/StatisticPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_bundle.h>
#include <_root.AccountBook_Fus-3cda4468.h>
#include <_root.StatisticPage.h>
#include <_root.StatisticPage.Template2.h>
#include <_root.wbButton_Left.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.PlaySound.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[3];
static uType* TYPES[4];

namespace g{

// public partial sealed class StatisticPage.Template2 :71
// {
// static Template2() :82
static void StatisticPage__Template2__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    StatisticPage__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void StatisticPage__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::STRINGS[1] = uString::Const("SelectUsage");
    ::STRINGS[2] = uString::Const("name");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetFields(2,
        ::g::StatisticPage_typeof(), offsetof(StatisticPage__Template2, __parent1), uFieldFlagsWeak,
        ::g::StatisticPage_typeof(), offsetof(StatisticPage__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage__Template2, temp_Text_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(StatisticPage__Template2, temp_eb59), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage__Template2::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* StatisticPage__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(StatisticPage__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("StatisticPage.Template2", options);
    type->fp_build_ = StatisticPage__Template2_build;
    type->fp_cctor_ = StatisticPage__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))StatisticPage__Template2__New1_fn;
    return type;
}

// public Template2(StatisticPage parent, StatisticPage parentInstance) :75
void StatisticPage__Template2__ctor_1_fn(StatisticPage__Template2* __this, ::g::StatisticPage* parent, ::g::StatisticPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :85
void StatisticPage__Template2__New1_fn(StatisticPage__Template2* __this, uObject** __retval)
{
    ::g::Fuse::Controls::ScrollView* __self1 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"SelectUsage"*/]);
    ::g::wbButton_Left* temp = ::g::wbButton_Left::New6();
    __this->temp_Text_inst = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(temp, StatisticPage__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"name"*/]);
    ::g::Fuse::Gestures::Clicked* temp3 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::PlaySound* temp4 = ::g::Fuse::PlaySound::New2();
    __this->temp_eb59 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Text_inst, (uObject*)temp2, 3);
    __self1->AllowedScrollDirections(3);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb59)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp4);
    temp4->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    return *__retval = __self1, void();
}

// public Template2 New(StatisticPage parent, StatisticPage parentInstance) :75
void StatisticPage__Template2__New2_fn(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance, StatisticPage__Template2** __retval)
{
    *__retval = StatisticPage__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector StatisticPage__Template2::__selector0_;

// public Template2(StatisticPage parent, StatisticPage parentInstance) [instance] :75
void StatisticPage__Template2::ctor_1(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(StatisticPage parent, StatisticPage parentInstance) [static] :75
StatisticPage__Template2* StatisticPage__Template2::New2(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance)
{
    StatisticPage__Template2* obj1 = (StatisticPage__Template2*)uNew(StatisticPage__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
