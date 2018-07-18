// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-3cda4468.h>
#include <_root.AccountBook_Fus-5df6c8c5.h>
#include <_root.AccountBook_Fus-6e985db.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.wbButton.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
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
static uString* STRINGS[12];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainView.Template :5
// {
// static Template() :26
static void MainView__Template__cctor__fn(uType* __type)
{
    MainView__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Text"*/]);
    MainView__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Value"*/]);
    MainView__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Visibility"*/]);
    MainView__Template::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"aBtn"*/]);
    MainView__Template::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"bTBox"*/]);
    MainView__Template::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"bEdit"*/]);
    MainView__Template::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"OK"*/]);
}

static void MainView__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Visibility");
    ::STRINGS[3] = uString::Const("aBtn");
    ::STRINGS[4] = uString::Const("bTBox");
    ::STRINGS[5] = uString::Const("bEdit");
    ::STRINGS[6] = uString::Const("OK");
    ::STRINGS[7] = uString::Const("SelectAccount");
    ::STRINGS[8] = uString::Const("title");
    ::STRINGS[9] = uString::Const("editTitle");
    ::STRINGS[10] = uString::Const("MainView.ux");
    ::STRINGS[11] = uString::Const("EDIT");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView__Template, aBtn_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView__Template, bTBox_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView__Template, bTBox_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView__Template, bEdit_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView__Template, aBtn_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView__Template, OK_Visibility_inst), 0,
        ::g::wbButton_typeof(), offsetof(MainView__Template, aBtn), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView__Template, temp_eb40), 0,
        ::g::Fuse::Controls::TextBox_typeof(), offsetof(MainView__Template, bTBox), 0,
        ::g::wbButton_typeof(), offsetof(MainView__Template, bEdit), 0,
        ::g::wbButton_typeof(), offsetof(MainView__Template, OK), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView__Template, temp_eb41), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector6_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 23;
    options.ObjectSize = sizeof(MainView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template", options);
    type->fp_build_ = MainView__Template_build;
    type->fp_cctor_ = MainView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template__New1_fn;
    return type;
}

// public Template(MainView parent, MainView parentInstance) :9
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :29
void MainView__Template__New1_fn(MainView__Template* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template", "New()");
    ::g::Fuse::Controls::Grid* __self1 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"SelectAccount"*/]);
    __this->aBtn = ::g::wbButton::New6();
    __this->aBtn_Text_inst = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(__this->aBtn, MainView__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"title"*/]);
    __this->bTBox = ::g::Fuse::Controls::TextBox::New4();
    __this->bTBox_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(__this->bTBox, MainView__Template::__selector1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"title"*/]);
    __this->bTBox_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__this->bTBox, MainView__Template::__selector2_);
    __this->bEdit = ::g::wbButton::New6();
    __this->bEdit_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__this->bEdit, MainView__Template::__selector2_);
    __this->aBtn_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__this->aBtn, MainView__Template::__selector2_);
    __this->OK = ::g::wbButton::New6();
    __this->OK_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__this->OK, MainView__Template::__selector2_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"editTitle"*/]);
    ::g::Fuse::Controls::DockPanel* temp4 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Effects::DropShadow* temp5 = ::g::Fuse::Effects::DropShadow::New2();
    __this->temp_eb40 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp);
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(__this->aBtn_Text_inst, (uObject*)temp1, 3);
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(__this->bTBox_Value_inst, (uObject*)temp2, 3);
    ::g::Fuse::Controls::DockPanel* temp8 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Gestures::Clicked* temp9 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp10 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bTBox_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp11 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bEdit_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp12 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->aBtn_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp13 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->OK_Visibility_inst);
    ::g::Fuse::Controls::Grid* temp14 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp15 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::Clicked* temp16 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp17 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->OK_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp18 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bTBox_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp19 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->bEdit_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp20 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->aBtn_Visibility_inst);
    __this->temp_eb41 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    __self1->ColumnCount(10);
    __self1->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    __self1->SourceLineNumber(92);
    __self1->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRowSpan(__self1, 8);
    temp4->SourceLineNumber(93);
    temp4->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp4, 8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->aBtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->bTBox);
    uPtr(__this->aBtn)->Name(MainView__Template::__selector3_);
    uPtr(__this->aBtn)->SourceLineNumber(94);
    uPtr(__this->aBtn)->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__this->aBtn, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb40)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->aBtn)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->aBtn)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->aBtn)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    temp5->Size(2.0f);
    temp5->Angle(0.0f);
    temp5->Distance(1.0f);
    temp5->Spread(0.2f);
    temp5->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3764706f));
    temp5->SourceLineNumber(95);
    temp5->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    temp->SourceLineNumber(94);
    temp->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    temp1->SourceLineNumber(94);
    temp1->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    uPtr(__this->bTBox)->Visibility(2);
    uPtr(__this->bTBox)->Name(MainView__Template::__selector4_);
    uPtr(__this->bTBox)->SourceLineNumber(97);
    uPtr(__this->bTBox)->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->bTBox)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    temp2->SourceLineNumber(97);
    temp2->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    temp8->SourceLineNumber(99);
    temp8->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp8, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->bEdit);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    uPtr(__this->bEdit)->Text(::STRINGS[11/*"EDIT"*/]);
    uPtr(__this->bEdit)->Name(MainView__Template::__selector5_);
    uPtr(__this->bEdit)->SourceLineNumber(100);
    uPtr(__this->bEdit)->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->bEdit)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->SourceLineNumber(101);
    temp9->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp13);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp10, uCRef<int32_t>(0));
    temp10->SourceLineNumber(102);
    temp10->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp11, uCRef<int32_t>(2));
    temp11->SourceLineNumber(103);
    temp11->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp12, uCRef<int32_t>(2));
    temp12->SourceLineNumber(104);
    temp12->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp13, uCRef<int32_t>(0));
    temp13->SourceLineNumber(105);
    temp13->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    temp14->RowCount(2);
    temp14->SourceLineNumber(108);
    temp14->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->OK);
    temp15->SourceLineNumber(109);
    temp15->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    uPtr(__this->OK)->TextCol(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(__this->OK)->Text(::STRINGS[6/*"OK"*/]);
    uPtr(__this->OK)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(__this->OK)->Name(MainView__Template::__selector6_);
    uPtr(__this->OK)->SourceLineNumber(110);
    uPtr(__this->OK)->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__this->OK, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb41)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->OK)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->OK)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb41);
    temp16->SourceLineNumber(111);
    temp16->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp20);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp17, uCRef<int32_t>(0));
    temp17->SourceLineNumber(112);
    temp17->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp18, uCRef<int32_t>(2));
    temp18->SourceLineNumber(113);
    temp18->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp19, uCRef<int32_t>(0));
    temp19->SourceLineNumber(114);
    temp19->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp20, uCRef<int32_t>(0));
    temp20->SourceLineNumber(115);
    temp20->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    temp3->SourceLineNumber(110);
    temp3->SourceFileName(::STRINGS[10/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    return *__retval = __self1, void();
}

// public Template New(MainView parent, MainView parentInstance) :9
void MainView__Template__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template** __retval)
{
    *__retval = MainView__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template::__selector0_;
::g::Uno::UX::Selector MainView__Template::__selector1_;
::g::Uno::UX::Selector MainView__Template::__selector2_;
::g::Uno::UX::Selector MainView__Template::__selector3_;
::g::Uno::UX::Selector MainView__Template::__selector4_;
::g::Uno::UX::Selector MainView__Template::__selector5_;
::g::Uno::UX::Selector MainView__Template::__selector6_;

// public Template(MainView parent, MainView parentInstance) [instance] :9
void MainView__Template::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(MainView parent, MainView parentInstance) [static] :9
MainView__Template* MainView__Template::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template* obj1 = (MainView__Template*)uNew(MainView__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
