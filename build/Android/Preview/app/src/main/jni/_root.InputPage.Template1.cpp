// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/InputPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_bundle.h>
#include <_root.AccountBook_Fus-3cda4468.h>
#include <_root.AccountBook_Fus-641d8117.h>
#include <_root.InputPage.h>
#include <_root.InputPage.Template1.h>
#include <_root.wbButton.h>
#include <_root.wbButton_Left.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.PlaySound.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Removin-3934475f.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[7];
static uType* TYPES[6];

namespace g{

// public partial sealed class InputPage.Template1 :42
// {
// static Template1() :55
static void InputPage__Template1__cctor__fn(uType* __type)
{
    InputPage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"IsEnabled"*/]);
    InputPage__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Text"*/]);
}

static void InputPage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsEnabled");
    ::STRINGS[1] = uString::Const("Text");
    ::STRINGS[2] = uString::Const("SelectUsage");
    ::STRINGS[3] = uString::Const("name");
    ::STRINGS[4] = uString::Const("removeItem");
    ::STRINGS[5] = uString::Const("InputPage.ux");
    ::STRINGS[6] = uString::Const("Delete");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::AccountBook_bundle_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Triggers::LayoutTransition_typeof(),
        ::g::Fuse::TranslationModes_typeof());
    type->SetFields(2,
        ::g::InputPage_typeof(), offsetof(InputPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::InputPage_typeof(), offsetof(InputPage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(InputPage__Template1, ModalConfirm_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage__Template1, temp_Text_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(InputPage__Template1, temp_eb15), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(InputPage__Template1, temp_eb16), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage__Template1::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)InputPage__Template1__New2_fn, 0, true, type, 2, ::g::InputPage_typeof(), ::g::InputPage_typeof()));
}

::g::Uno::UX::Template_type* InputPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(InputPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("InputPage.Template1", options);
    type->fp_build_ = InputPage__Template1_build;
    type->fp_cctor_ = InputPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))InputPage__Template1__New1_fn;
    return type;
}

// public Template1(InputPage parent, InputPage parentInstance) :46
void InputPage__Template1__ctor_1_fn(InputPage__Template1* __this, ::g::InputPage* parent, ::g::InputPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :58
void InputPage__Template1__New1_fn(InputPage__Template1* __this, uObject** __retval)
{
    uStackFrame __("InputPage.Template1", "New()");
    ::g::Fuse::Controls::Grid* __self1 = ::g::Fuse::Controls::Grid::New4();
    __this->ModalConfirm_IsEnabled_inst = ::g::AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(uPtr(__this->__parent1)->ModalConfirm, InputPage__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"SelectUsage"*/]);
    ::g::wbButton_Left* temp = ::g::wbButton_Left::New6();
    __this->temp_Text_inst = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(temp, InputPage__Template1::__selector1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"name"*/]);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"removeItem"*/]);
    ::g::Fuse::Controls::ScrollView* temp4 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Gestures::Clicked* temp5 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp6 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<bool>*/], __this->ModalConfirm_IsEnabled_inst);
    ::g::Fuse::PlaySound* temp7 = ::g::Fuse::PlaySound::New2();
    __this->temp_eb15 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Text_inst, (uObject*)temp2, 3);
    ::g::wbButton* temp9 = ::g::wbButton::New6();
    __this->temp_eb16 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Fuse::Triggers::LayoutAnimation* temp10 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp11 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::AddingAnimation* temp12 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Move* temp13 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::RemovingAnimation* temp14 = ::g::Fuse::Triggers::RemovingAnimation::New2();
    ::g::Fuse::Animations::Move* temp15 = ::g::Fuse::Animations::Move::New2();
    __self1->ColumnCount(10);
    __self1->SourceLineNumber(89);
    __self1->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    temp4->AllowedScrollDirections(3);
    temp4->SourceLineNumber(90);
    temp4->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp4, 7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->SourceLineNumber(91);
    temp->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb15)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    temp5->SourceLineNumber(92);
    temp5->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp7);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp6, uCRef(false));
    temp6->SourceLineNumber(93);
    temp6->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    temp7->SourceLineNumber(94);
    temp7->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    temp7->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    temp1->SourceLineNumber(91);
    temp1->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    temp2->SourceLineNumber(91);
    temp2->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    temp9->Text(::STRINGS[6/*"Delete"*/]);
    temp9->Margin(::g::Uno::Float4__New2(7.0f, 7.0f, 7.0f, 7.0f));
    temp9->SourceLineNumber(98);
    temp9->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp9, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp9, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb16)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb16);
    temp3->SourceLineNumber(98);
    temp3->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    temp10->SourceLineNumber(99);
    temp10->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    temp11->Y(1.0f);
    temp11->Duration(0.4);
    temp11->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange());
    temp11->Easing(::g::Fuse::Animations::Easing::ElasticIn());
    temp12->SourceLineNumber(103);
    temp12->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp13);
    temp13->X(1.0f);
    temp13->Duration(0.3);
    temp13->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp13->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp14->SourceLineNumber(107);
    temp14->SourceFileName(::STRINGS[5/*"InputPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    temp15->X(-1.0f);
    temp15->Duration(0.4);
    temp15->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp15->Easing(::g::Fuse::Animations::Easing::CircularOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    return *__retval = __self1, void();
}

// public Template1 New(InputPage parent, InputPage parentInstance) :46
void InputPage__Template1__New2_fn(::g::InputPage* parent, ::g::InputPage* parentInstance, InputPage__Template1** __retval)
{
    *__retval = InputPage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector InputPage__Template1::__selector0_;
::g::Uno::UX::Selector InputPage__Template1::__selector1_;

// public Template1(InputPage parent, InputPage parentInstance) [instance] :46
void InputPage__Template1::ctor_1(::g::InputPage* parent, ::g::InputPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(InputPage parent, InputPage parentInstance) [static] :46
InputPage__Template1* InputPage__Template1::New2(::g::InputPage* parent, ::g::InputPage* parentInstance)
{
    InputPage__Template1* obj1 = (InputPage__Template1*)uNew(InputPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
