// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-676d1d1f.h>
#include <_root.AccountBook_Fus-79031009.h>
#include <_root.BudgetPage.h>
#include <_root.MainView.h>
#include <_root.MainView.Template8.h>
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

// public partial sealed class MainView.Template8 :978
// {
// static Template8() :992
static void MainView__Template8__cctor__fn(uType* __type)
{
    MainView__Template8::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Element.Lay...*/]);
    MainView__Template8::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Margin"*/]);
    MainView__Template8::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"budgetPanel"*/]);
}

static void MainView__Template8_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Element.LayoutMaster");
    ::STRINGS[1] = uString::Const("Margin");
    ::STRINGS[2] = uString::Const("budgetPanel");
    ::STRINGS[3] = uString::Const("MainView.ux");
    ::STRINGS[4] = uString::Const("statisticPanel");
    ::STRINGS[5] = uString::Const("inputPanel");
    ::STRINGS[6] = uString::Const("input");
    ::STRINGS[7] = uString::Const("statistic");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template8, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template8, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(MainView__Template8, indicator_Element_LayoutMaster_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView__Template8, InputTab_Margin_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView__Template8, ListTab_Margin_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView__Template8, StatisticTab_Margin_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView__Template8, BudgetTab_Margin_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template8::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template8::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template8::__selector2_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template8_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 12;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MainView__Template8);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template8", options);
    type->fp_build_ = MainView__Template8_build;
    type->fp_cctor_ = MainView__Template8__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template8__New1_fn;
    return type;
}

// public Template8(MainView parent, MainView parentInstance) :982
void MainView__Template8__ctor_1_fn(MainView__Template8* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :995
void MainView__Template8__New1_fn(MainView__Template8* __this, uObject** __retval)
{
    ::g::BudgetPage* __self1 = ::g::BudgetPage::New4(uPtr(__this->__parent1)->router);
    __this->indicator_Element_LayoutMaster_inst = ::g::AccountBook_FuseElementsElement_ElementLayoutMaster_Property::New1(uPtr(__this->__parent1)->indicator, MainView__Template8::__selector0_);
    __this->InputTab_Margin_inst = ::g::AccountBook_FuseElementsElement_Margin_Property::New1(uPtr(__this->__parent1)->InputTab, MainView__Template8::__selector1_);
    __this->ListTab_Margin_inst = ::g::AccountBook_FuseElementsElement_Margin_Property::New1(uPtr(__this->__parent1)->ListTab, MainView__Template8::__selector1_);
    __this->StatisticTab_Margin_inst = ::g::AccountBook_FuseElementsElement_Margin_Property::New1(uPtr(__this->__parent1)->StatisticTab, MainView__Template8::__selector1_);
    __this->BudgetTab_Margin_inst = ::g::AccountBook_FuseElementsElement_Margin_Property::New1(uPtr(__this->__parent1)->BudgetTab, MainView__Template8::__selector1_);
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
    __self1->Name(MainView__Template8::__selector2_);
    __self1->SourceLineNumber(344);
    __self1->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    temp->To(::STRINGS[4/*"statisticPa...*/]);
    temp->SourceLineNumber(345);
    temp->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp1);
    temp1->X(1.0f);
    temp1->Duration(1.0);
    temp1->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp2->From(::STRINGS[5/*"inputPanel"*/]);
    temp2->SourceLineNumber(348);
    temp2->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp3);
    temp3->X(-1.0f);
    temp3->Duration(1.0);
    temp3->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp4->Direction(2);
    temp4->How(2);
    temp4->Bookmark(::STRINGS[6/*"input"*/]);
    temp4->SourceLineNumber(351);
    temp4->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    temp5->Direction(4);
    temp5->How(2);
    temp5->Bookmark(::STRINGS[7/*"statistic"*/]);
    temp5->SourceLineNumber(352);
    temp5->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    temp6->SourceLineNumber(353);
    temp6->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp11);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp7, uPtr(__this->__parent1)->BudgetTab);
    temp7->SourceLineNumber(354);
    temp7->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp8, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f)));
    temp8->SourceLineNumber(355);
    temp8->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp9, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f)));
    temp9->SourceLineNumber(356);
    temp9->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp10, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f)));
    temp10->SourceLineNumber(357);
    temp10->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp11, uCRef(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f)));
    temp11->SourceLineNumber(358);
    temp11->SourceFileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    return *__retval = __self1, void();
}

// public Template8 New(MainView parent, MainView parentInstance) :982
void MainView__Template8__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template8** __retval)
{
    *__retval = MainView__Template8::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template8::__selector0_;
::g::Uno::UX::Selector MainView__Template8::__selector1_;
::g::Uno::UX::Selector MainView__Template8::__selector2_;

// public Template8(MainView parent, MainView parentInstance) [instance] :982
void MainView__Template8::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[2/*"budgetPanel"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template8 New(MainView parent, MainView parentInstance) [static] :982
MainView__Template8* MainView__Template8::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template8* obj1 = (MainView__Template8*)uNew(MainView__Template8_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
