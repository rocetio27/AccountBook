// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-3cda4468.h>
#include <_root.AccountBook_Fus-5df6c8c5.h>
#include <_root.AccountBook_Fus-6e985db.h>
#include <_root.MainView.h>
#include <_root.MainView.Template1.h>
#include <_root.wbButton.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.TextBox.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[21];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainView.Template1 :177
// {
// static Template1() :208
static void MainView__Template1__cctor__fn(uType* __type)
{
    MainView__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Text"*/]);
    MainView__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Value"*/]);
    MainView__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Visibility"*/]);
    MainView__Template1::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"aBtn"*/]);
    MainView__Template1::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"bTBox"*/]);
    MainView__Template1::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"aEdit"*/]);
    MainView__Template1::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"bGrid"*/]);
    MainView__Template1::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"bDel"*/]);
    MainView__Template1::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"bComp"*/]);
    MainView__Template1::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"cGrid"*/]);
    MainView__Template1::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[10/*"cCancel"*/]);
    MainView__Template1::__selector11_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[11/*"cDel"*/]);
}

static void MainView__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Visibility");
    ::STRINGS[3] = uString::Const("aBtn");
    ::STRINGS[4] = uString::Const("bTBox");
    ::STRINGS[5] = uString::Const("aEdit");
    ::STRINGS[6] = uString::Const("bGrid");
    ::STRINGS[7] = uString::Const("bDel");
    ::STRINGS[8] = uString::Const("bComp");
    ::STRINGS[9] = uString::Const("cGrid");
    ::STRINGS[10] = uString::Const("cCancel");
    ::STRINGS[11] = uString::Const("cDel");
    ::STRINGS[12] = uString::Const("SelectAccount");
    ::STRINGS[13] = uString::Const("title");
    ::STRINGS[14] = uString::Const("editTitle");
    ::STRINGS[15] = uString::Const("DeleteAccount");
    ::STRINGS[16] = uString::Const("MainView.ux");
    ::STRINGS[17] = uString::Const("EDIT");
    ::STRINGS[18] = uString::Const("DELETE");
    ::STRINGS[19] = uString::Const("OK");
    ::STRINGS[20] = uString::Const("CANCEL");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template1, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView__Template1, aBtn_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView__Template1, bTBox_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView__Template1, aEdit_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView__Template1, aBtn_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView__Template1, bGrid_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView__Template1, bTBox_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView__Template1, bDel_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView__Template1, bComp_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView__Template1, cGrid_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView__Template1, cCancel_Visibility_inst), 0,
        ::g::wbButton_typeof(), offsetof(MainView__Template1, aBtn), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView__Template1, temp_eb42), 0,
        ::g::Fuse::Controls::TextBox_typeof(), offsetof(MainView__Template1, bTBox), 0,
        ::g::wbButton_typeof(), offsetof(MainView__Template1, aEdit), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(MainView__Template1, bGrid), 0,
        ::g::wbButton_typeof(), offsetof(MainView__Template1, bDel), 0,
        ::g::wbButton_typeof(), offsetof(MainView__Template1, bComp), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView__Template1, temp_eb43), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(MainView__Template1, cGrid), 0,
        ::g::wbButton_typeof(), offsetof(MainView__Template1, cCancel), 0,
        ::g::wbButton_typeof(), offsetof(MainView__Template1, cDel), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView__Template1, temp_eb44), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector11_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template1__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 38;
    options.ObjectSize = sizeof(MainView__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template1", options);
    type->fp_build_ = MainView__Template1_build;
    type->fp_cctor_ = MainView__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template1__New1_fn;
    return type;
}

// public Template1(MainView parent, MainView parentInstance) :181
void MainView__Template1__ctor_1_fn(MainView__Template1* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :211
void MainView__Template1__New1_fn(MainView__Template1* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template1", "New()");
    ::g::Fuse::Controls::Grid* __self1 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"SelectAccount"*/]);
    __this->aBtn = ::g::wbButton::New6();
    __this->aBtn_Text_inst = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(__this->aBtn, MainView__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"title"*/]);
    __this->bTBox = ::g::Fuse::Controls::TextBox::New4();
    __this->bTBox_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(__this->bTBox, MainView__Template1::__selector1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"title"*/]);
    __this->aEdit = ::g::wbButton::New6();
    __this->aEdit_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__this->aEdit, MainView__Template1::__selector2_);
    __this->aBtn_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__this->aBtn, MainView__Template1::__selector2_);
    __this->bGrid = ::g::Fuse::Controls::Grid::New4();
    __this->bGrid_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__this->bGrid, MainView__Template1::__selector2_);
    __this->bTBox_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__this->bTBox, MainView__Template1::__selector2_);
    __this->bDel = ::g::wbButton::New6();
    __this->bDel_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__this->bDel, MainView__Template1::__selector2_);
    __this->bComp = ::g::wbButton::New6();
    __this->bComp_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__this->bComp, MainView__Template1::__selector2_);
    __this->cGrid = ::g::Fuse::Controls::Grid::New4();
    __this->cGrid_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__this->cGrid, MainView__Template1::__selector2_);
    __this->cCancel = ::g::wbButton::New6();
    __this->cCancel_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__this->cCancel, MainView__Template1::__selector2_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"editTitle"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"DeleteAccount"*/]);
    ::g::Fuse::Controls::DockPanel* temp5 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Effects::DropShadow* temp6 = ::g::Fuse::Effects::DropShadow::New2();
    __this->temp_eb42 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp);
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(__this->aBtn_Text_inst, (uObject*)temp1, 3);
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(__this->bTBox_Value_inst, (uObject*)temp2, 3);
    ::g::Fuse::Controls::DockPanel* temp9 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Effects::DropShadow* temp10 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Gestures::Clicked* temp11 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp12 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->aEdit_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp13 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->aBtn_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp14 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bGrid_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp15 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bTBox_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp16 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bDel_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp17 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bComp_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp18 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cGrid_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp19 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cCancel_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp20 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cCancel_Visibility_inst);
    ::g::Fuse::Gestures::Clicked* temp21 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp22 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->aEdit_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp23 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->aBtn_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp24 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bGrid_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp25 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bTBox_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp26 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bDel_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp27 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bComp_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp28 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cGrid_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp29 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cCancel_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp30 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cCancel_Visibility_inst);
    ::g::Fuse::Gestures::Clicked* temp31 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp32 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->aEdit_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp33 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->aBtn_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp34 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bGrid_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp35 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bTBox_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp36 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bDel_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp37 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bComp_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp38 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cGrid_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp39 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cCancel_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp40 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cCancel_Visibility_inst);
    __this->temp_eb43 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Fuse::Gestures::Clicked* temp41 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp42 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->aEdit_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp43 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->aBtn_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp44 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bGrid_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp45 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bTBox_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp46 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bDel_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp47 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bComp_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp48 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cGrid_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp49 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cCancel_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp50 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cCancel_Visibility_inst);
    __this->cDel = ::g::wbButton::New6();
    ::g::Fuse::Gestures::Clicked* temp51 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp52 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->aEdit_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp53 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->aBtn_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp54 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bGrid_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp55 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bTBox_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp56 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bDel_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp57 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bComp_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp58 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cGrid_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp59 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cCancel_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp60 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->cCancel_Visibility_inst);
    __this->temp_eb44 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    __self1->ColumnCount(10);
    __self1->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    __self1->SourceLineNumber(125);
    __self1->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    temp5->SourceLineNumber(126);
    temp5->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp5, 8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->aBtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->bTBox);
    uPtr(__this->aBtn)->Name(MainView__Template1::__selector3_);
    uPtr(__this->aBtn)->SourceLineNumber(127);
    uPtr(__this->aBtn)->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__this->aBtn, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb42)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->aBtn)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->aBtn)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->aBtn)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    temp6->Size(2.0f);
    temp6->Angle(0.0f);
    temp6->Distance(1.0f);
    temp6->Spread(0.2f);
    temp6->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3764706f));
    temp6->SourceLineNumber(128);
    temp6->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    temp->SourceLineNumber(127);
    temp->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    temp1->SourceLineNumber(127);
    temp1->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    uPtr(__this->bTBox)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(__this->bTBox)->Visibility(2);
    uPtr(__this->bTBox)->Name(MainView__Template1::__selector4_);
    uPtr(__this->bTBox)->SourceLineNumber(130);
    uPtr(__this->bTBox)->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->bTBox)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    temp2->SourceLineNumber(130);
    temp2->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    temp9->SourceLineNumber(133);
    temp9->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp9, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->aEdit);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->bGrid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->cGrid);
    uPtr(__this->aEdit)->Text(::STRINGS[17/*"EDIT"*/]);
    uPtr(__this->aEdit)->Name(MainView__Template1::__selector5_);
    uPtr(__this->aEdit)->SourceLineNumber(134);
    uPtr(__this->aEdit)->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->aEdit)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->aEdit)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp10->Size(2.0f);
    temp10->Angle(0.0f);
    temp10->Distance(1.0f);
    temp10->Spread(0.2f);
    temp10->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3764706f));
    temp10->SourceLineNumber(135);
    temp10->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    temp11->SourceLineNumber(136);
    temp11->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp20);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp12, uCRef<int32_t>(2));
    temp12->SourceLineNumber(137);
    temp12->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp13, uCRef<int32_t>(2));
    temp13->SourceLineNumber(138);
    temp13->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp14, uCRef<int32_t>(0));
    temp14->SourceLineNumber(140);
    temp14->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp15, uCRef<int32_t>(0));
    temp15->SourceLineNumber(141);
    temp15->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp16, uCRef<int32_t>(0));
    temp16->SourceLineNumber(142);
    temp16->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp17, uCRef<int32_t>(0));
    temp17->SourceLineNumber(143);
    temp17->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp18, uCRef<int32_t>(2));
    temp18->SourceLineNumber(145);
    temp18->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp19, uCRef<int32_t>(2));
    temp19->SourceLineNumber(146);
    temp19->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp20, uCRef<int32_t>(2));
    temp20->SourceLineNumber(147);
    temp20->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    uPtr(__this->bGrid)->RowCount(2);
    uPtr(__this->bGrid)->Visibility(2);
    uPtr(__this->bGrid)->Name(MainView__Template1::__selector6_);
    uPtr(__this->bGrid)->SourceLineNumber(150);
    uPtr(__this->bGrid)->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->bGrid)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->bDel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->bGrid)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->bComp);
    uPtr(__this->bDel)->TextCol(::g::Uno::Float4__New2(0.9333333f, 0.0f, 0.0f, 1.0f));
    uPtr(__this->bDel)->Text(::STRINGS[18/*"DELETE"*/]);
    uPtr(__this->bDel)->Name(MainView__Template1::__selector7_);
    uPtr(__this->bDel)->SourceLineNumber(151);
    uPtr(__this->bDel)->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->bDel)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp21->SourceLineNumber(152);
    temp21->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp30);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp22, uCRef<int32_t>(2));
    temp22->SourceLineNumber(153);
    temp22->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp23, uCRef<int32_t>(2));
    temp23->SourceLineNumber(154);
    temp23->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp24, uCRef<int32_t>(2));
    temp24->SourceLineNumber(156);
    temp24->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp25, uCRef<int32_t>(0));
    temp25->SourceLineNumber(157);
    temp25->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp26, uCRef<int32_t>(2));
    temp26->SourceLineNumber(158);
    temp26->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp27, uCRef<int32_t>(2));
    temp27->SourceLineNumber(159);
    temp27->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp28, uCRef<int32_t>(0));
    temp28->SourceLineNumber(161);
    temp28->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp29, uCRef<int32_t>(0));
    temp29->SourceLineNumber(162);
    temp29->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp30, uCRef<int32_t>(0));
    temp30->SourceLineNumber(163);
    temp30->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    uPtr(__this->bComp)->Text(::STRINGS[19/*"OK"*/]);
    uPtr(__this->bComp)->Name(MainView__Template1::__selector8_);
    uPtr(__this->bComp)->SourceLineNumber(166);
    uPtr(__this->bComp)->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__this->bComp, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb43)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->bComp)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->bComp)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb43);
    temp31->SourceLineNumber(167);
    temp31->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp40);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp32, uCRef<int32_t>(0));
    temp32->SourceLineNumber(168);
    temp32->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp33, uCRef<int32_t>(0));
    temp33->SourceLineNumber(169);
    temp33->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp34, uCRef<int32_t>(2));
    temp34->SourceLineNumber(171);
    temp34->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp35, uCRef<int32_t>(2));
    temp35->SourceLineNumber(172);
    temp35->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp36, uCRef<int32_t>(2));
    temp36->SourceLineNumber(173);
    temp36->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp37, uCRef<int32_t>(2));
    temp37->SourceLineNumber(174);
    temp37->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp38, uCRef<int32_t>(2));
    temp38->SourceLineNumber(176);
    temp38->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp39, uCRef<int32_t>(2));
    temp39->SourceLineNumber(177);
    temp39->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp40, uCRef<int32_t>(2));
    temp40->SourceLineNumber(178);
    temp40->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    temp3->SourceLineNumber(166);
    temp3->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    uPtr(__this->cGrid)->RowCount(2);
    uPtr(__this->cGrid)->Visibility(2);
    uPtr(__this->cGrid)->Name(MainView__Template1::__selector9_);
    uPtr(__this->cGrid)->SourceLineNumber(182);
    uPtr(__this->cGrid)->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->cGrid)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->cCancel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->cGrid)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->cDel);
    uPtr(__this->cCancel)->Text(::STRINGS[20/*"CANCEL"*/]);
    uPtr(__this->cCancel)->Name(MainView__Template1::__selector10_);
    uPtr(__this->cCancel)->SourceLineNumber(183);
    uPtr(__this->cCancel)->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->cCancel)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp41->SourceLineNumber(184);
    temp41->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp50);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp42, uCRef<int32_t>(0));
    temp42->SourceLineNumber(185);
    temp42->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp43, uCRef<int32_t>(0));
    temp43->SourceLineNumber(186);
    temp43->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp44, uCRef<int32_t>(2));
    temp44->SourceLineNumber(188);
    temp44->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp45, uCRef<int32_t>(2));
    temp45->SourceLineNumber(189);
    temp45->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp46, uCRef<int32_t>(2));
    temp46->SourceLineNumber(190);
    temp46->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp47, uCRef<int32_t>(2));
    temp47->SourceLineNumber(191);
    temp47->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp48, uCRef<int32_t>(2));
    temp48->SourceLineNumber(193);
    temp48->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp49, uCRef<int32_t>(2));
    temp49->SourceLineNumber(194);
    temp49->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp50, uCRef<int32_t>(2));
    temp50->SourceLineNumber(195);
    temp50->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    uPtr(__this->cDel)->TextCol(::g::Uno::Float4__New2(0.9333333f, 0.0f, 0.0f, 1.0f));
    uPtr(__this->cDel)->Text(::STRINGS[18/*"DELETE"*/]);
    uPtr(__this->cDel)->Name(MainView__Template1::__selector11_);
    uPtr(__this->cDel)->SourceLineNumber(198);
    uPtr(__this->cDel)->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__this->cDel, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb44)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->cDel)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->cDel)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb44);
    temp51->SourceLineNumber(199);
    temp51->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp60);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp52, uCRef<int32_t>(0));
    temp52->SourceLineNumber(200);
    temp52->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp53, uCRef<int32_t>(0));
    temp53->SourceLineNumber(201);
    temp53->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp54, uCRef<int32_t>(2));
    temp54->SourceLineNumber(203);
    temp54->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp55, uCRef<int32_t>(2));
    temp55->SourceLineNumber(204);
    temp55->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp56, uCRef<int32_t>(2));
    temp56->SourceLineNumber(205);
    temp56->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp57, uCRef<int32_t>(2));
    temp57->SourceLineNumber(206);
    temp57->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp58, uCRef<int32_t>(2));
    temp58->SourceLineNumber(208);
    temp58->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp59, uCRef<int32_t>(2));
    temp59->SourceLineNumber(209);
    temp59->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp60, uCRef<int32_t>(2));
    temp60->SourceLineNumber(210);
    temp60->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    temp4->SourceLineNumber(198);
    temp4->SourceFileName(::STRINGS[16/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    return *__retval = __self1, void();
}

// public Template1 New(MainView parent, MainView parentInstance) :181
void MainView__Template1__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template1** __retval)
{
    *__retval = MainView__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template1::__selector0_;
::g::Uno::UX::Selector MainView__Template1::__selector1_;
::g::Uno::UX::Selector MainView__Template1::__selector2_;
::g::Uno::UX::Selector MainView__Template1::__selector3_;
::g::Uno::UX::Selector MainView__Template1::__selector4_;
::g::Uno::UX::Selector MainView__Template1::__selector5_;
::g::Uno::UX::Selector MainView__Template1::__selector6_;
::g::Uno::UX::Selector MainView__Template1::__selector7_;
::g::Uno::UX::Selector MainView__Template1::__selector8_;
::g::Uno::UX::Selector MainView__Template1::__selector9_;
::g::Uno::UX::Selector MainView__Template1::__selector10_;
::g::Uno::UX::Selector MainView__Template1::__selector11_;

// public Template1(MainView parent, MainView parentInstance) [instance] :181
void MainView__Template1::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(MainView parent, MainView parentInstance) [static] :181
MainView__Template1* MainView__Template1::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template1* obj1 = (MainView__Template1*)uNew(MainView__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
