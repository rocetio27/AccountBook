// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-676d1d1f.h>
#include <_root.AccountBook_Fus-79031009.h>
#include <_root.InputPage.h>
#include <_root.MainView.h>
#include <_root.MainView.Template5.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Navigat-dfe8cc6e.h>
#include <Fuse.Controls.Navigat-fe23abf3.h>
#include <Fuse.Controls.NavigatorSwipe.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Node.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Transition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[8];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainView.Template5 :684
// {
// static Template5() :698
static void MainView__Template5__cctor__fn(uType* __type)
{
    MainView__Template5::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Element.Lay...*/]);
    MainView__Template5::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Margin"*/]);
    MainView__Template5::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"inputPanel"*/]);
}

static void MainView__Template5_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Element.LayoutMaster");
    ::STRINGS[1] = uString::Const("Margin");
    ::STRINGS[2] = uString::Const("inputPanel");
    ::STRINGS[3] = uString::Const("MainView.ux");
    ::STRINGS[4] = uString::Const("budgetPanel");
    ::STRINGS[5] = uString::Const("listPanel");
    ::STRINGS[6] = uString::Const("list");
    ::STRINGS[7] = uString::Const("budget");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template5, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template5, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(MainView__Template5, indicator_Element_LayoutMaster_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView__Template5, InputTab_Margin_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView__Template5, ListTab_Margin_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView__Template5, StatisticTab_Margin_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView__Template5, BudgetTab_Margin_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template5::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template5::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template5::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template5__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template5_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 12;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MainView__Template5);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template5", options);
    type->fp_build_ = MainView__Template5_build;
    type->fp_cctor_ = MainView__Template5__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template5__New1_fn;
    return type;
}

// public Template5(MainView parent, MainView parentInstance) :688
void MainView__Template5__ctor_1_fn(MainView__Template5* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :701
void MainView__Template5__New1_fn(MainView__Template5* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template5", "New()");
    ::g::InputPage* __self1 = ::g::InputPage::New4(uPtr(__this->__parent1)->router);
    __this->indicator_Element_LayoutMaster_inst = ::g::AccountBook_FuseElementsElement_ElementLayoutMaster_Property::New1(uPtr(__this->__parent1)->indicator, MainView__Template5::__selector0_);
    __this->InputTab_Margin_inst = ::g::AccountBook_FuseElementsElement_Margin_Property::New1(uPtr(__this->__parent1)->InputTab, MainView__Template5::__selector1_);
    __this->ListTab_Margin_inst = ::g::AccountBook_FuseElementsElement_Margin_Property::New1(uPtr(__this->__parent1)->ListTab, MainView__Template5::__selector1_);
    __this->StatisticTab_Margin_inst = ::g::AccountBook_FuseElementsElement_Margin_Property::New1(uPtr(__this->__parent1)->StatisticTab, MainView__Template5::__selector1_);
    __this->BudgetTab_Margin_inst = ::g::AccountBook_FuseElementsElement_Margin_Property::New1(uPtr(__this->__parent1)->BudgetTab, MainView__Template5::__selector1_);
    ::g::Fuse::Triggers::Transition* temp = ::g::Fuse::Triggers::Transition::New2();
    ::g::Fuse::Animations::Move* temp1 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::Transition* temp2 = ::g::Fuse::Triggers::Transition::New2();
    ::g::Fuse::Animations::Move* temp3 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::NavigatorSwipe* temp4 = ::g::Fuse::Controls::NavigatorSwipe::New2();
    ::g::Fuse::Controls::NavigatorSwipe* temp5 = ::g::Fuse::Controls::NavigatorSwipe::New2();
    ::g::Fuse::Navigation::WhileActive* temp6 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp7 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], __this->indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Triggers::Actions::Set* temp8 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<float4>*/], __this->InputTab_Margin_inst);
    ::g::Fuse::Triggers::Actions::Set* temp9 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<float4>*/], __this->ListTab_Margin_inst);
    ::g::Fuse::Triggers::Actions::Set* temp10 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<float4>*/], __this->StatisticTab_Margin_inst);
    ::g::Fuse::Triggers::Actions::Set* temp11 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<float4>*/], __this->BudgetTab_Margin_inst);
    __self1->Name(MainView__Template5::__selector2_);
    __self1->SourceLineNumber(294);
    __self1->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    temp->To(::STRINGS[4/*"budgetPanel"*/]);
    temp->SourceLineNumber(295);
    temp->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp1);
    temp1->X(1.0f);
    temp1->Duration(1.0);
    temp1->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp2->From(::STRINGS[5/*"listPanel"*/]);
    temp2->SourceLineNumber(298);
    temp2->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp3);
    temp3->X(-1.0f);
    temp3->Duration(1.0);
    temp3->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp4->Direction(2);
    temp4->How(2);
    temp4->Bookmark(::STRINGS[6/*"list"*/]);
    temp4->SourceLineNumber(301);
    temp4->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    temp5->Direction(4);
    temp5->How(2);
    temp5->Bookmark(::STRINGS[7/*"budget"*/]);
    temp5->SourceLineNumber(302);
    temp5->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    temp6->SourceLineNumber(303);
    temp6->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp11);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp7, uPtr(__this->__parent1)->InputTab);
    temp7->SourceLineNumber(304);
    temp7->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp8, uCRef(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f)));
    temp8->SourceLineNumber(305);
    temp8->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp9, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f)));
    temp9->SourceLineNumber(306);
    temp9->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp10, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f)));
    temp10->SourceLineNumber(307);
    temp10->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp11, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f)));
    temp11->SourceLineNumber(308);
    temp11->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    return *__retval = __self1, void();
}

// public Template5 New(MainView parent, MainView parentInstance) :688
void MainView__Template5__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template5** __retval)
{
    *__retval = MainView__Template5::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template5::__selector0_;
::g::Uno::UX::Selector MainView__Template5::__selector1_;
::g::Uno::UX::Selector MainView__Template5::__selector2_;

// public Template5(MainView parent, MainView parentInstance) [instance] :688
void MainView__Template5::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[2/*"inputPanel"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template5 New(MainView parent, MainView parentInstance) [static] :688
MainView__Template5* MainView__Template5::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template5* obj1 = (MainView__Template5*)uNew(MainView__Template5_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
