// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/InputPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_bundle.h>
#include <_root.AccountBook_Fus-12bb75b3.h>
#include <_root.AccountBook_Fus-2ef55d3f.h>
#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.AccountBook_Fus-3cda4468.h>
#include <_root.AccountBook_Fus-5df6c8c5.h>
#include <_root.AccountBook_Fus-641d8117.h>
#include <_root.AccountBook_Fus-6f21f71a.h>
#include <_root.AccountBook_Fus-7ed8148.h>
#include <_root.AccountBook_Fus-9d2d7d8d.h>
#include <_root.AccountBook_Fus-ae2a47c.h>
#include <_root.AccountBook_Fus-ece4b8e4.h>
#include <_root.AccountBook_Fus-f200852b.h>
#include <_root.InputPage.h>
#include <_root.InputPage.Template.h>
#include <_root.InputPage.Template1.h>
#include <_root.InputPage.Template2.h>
#include <_root.InputPage.Template3.h>
#include <_root.pmButton.h>
#include <_root.wbButton.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.PlaySound.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Resources.Resour-4d20d44f.h>
#include <Fuse.Resources.ResourceObject.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class InputPage :2
// {
// static InputPage() :211
static void InputPage__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    InputPage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 9, uString::Const("router"), uString::Const("FullWindo"), uString::Const("temp_eb10"), uString::Const("usage_button"), uString::Const("temp_eb12"), uString::Const("temp_eb13"), uString::Const("ModalConfirm"), uString::Const("popup_input"), uString::Const("temp_eb14"));
    InputPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    InputPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("TextColor"));
    InputPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Color"));
    InputPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Text"));
    InputPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("IsEnabled"));
    InputPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    InputPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Offset"));
    InputPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Limit"));
    InputPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("ParentNode"));
    InputPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("FullWindo"));
    InputPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("usage_button"));
    InputPage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("ModalConfirm"));
    InputPage::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("popup_input"));
}

static void InputPage_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Controls::Grid_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(112,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(InputPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp2_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp3_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp4_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(InputPage, ModalConfirm_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, usage_button_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(InputPage, temp5_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp6_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp7_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp8_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, popup_input_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp9_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(InputPage, temp10_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(InputPage, temp10_Offset_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(InputPage, temp10_Limit_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp11_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(InputPage, ModalConfirm_ParentNode_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(InputPage, FullWindo), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(InputPage, temp_eb10), 0,
        ::g::wbButton_typeof(), offsetof(InputPage, usage_button), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(InputPage, temp_eb12), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(InputPage, temp_eb13), 0,
        ::g::Fuse::AlternateRoot_typeof(), offsetof(InputPage, ModalConfirm), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(InputPage, popup_input), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(InputPage, temp_eb14), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(InputPage, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&InputPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector12_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* InputPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 155;
    options.InterfaceCount = 18;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(InputPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("InputPage", options);
    type->fp_build_ = InputPage_build;
    type->fp_cctor_ = InputPage__cctor_4_fn;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public InputPage(Fuse.Navigation.Router router) :215
void InputPage__ctor_7_fn(InputPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_7(router1);
}

// private void InitializeUX() :221
void InputPage__InitializeUX_fn(InputPage* __this)
{
    __this->InitializeUX();
}

// public InputPage New(Fuse.Navigation.Router router) :215
void InputPage__New4_fn(::g::Fuse::Navigation::Router* router1, InputPage** __retval)
{
    *__retval = InputPage::New4(router1);
}

uSStrong<uArray*> InputPage::__g_static_nametable1_;
::g::Uno::UX::Selector InputPage::__selector0_;
::g::Uno::UX::Selector InputPage::__selector1_;
::g::Uno::UX::Selector InputPage::__selector2_;
::g::Uno::UX::Selector InputPage::__selector3_;
::g::Uno::UX::Selector InputPage::__selector4_;
::g::Uno::UX::Selector InputPage::__selector5_;
::g::Uno::UX::Selector InputPage::__selector6_;
::g::Uno::UX::Selector InputPage::__selector7_;
::g::Uno::UX::Selector InputPage::__selector8_;
::g::Uno::UX::Selector InputPage::__selector9_;
::g::Uno::UX::Selector InputPage::__selector10_;
::g::Uno::UX::Selector InputPage::__selector11_;
::g::Uno::UX::Selector InputPage::__selector12_;

// public InputPage(Fuse.Navigation.Router router) [instance] :215
void InputPage::ctor_7(::g::Fuse::Navigation::Router* router1)
{
    ctor_6();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :221
void InputPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, InputPage::__g_static_nametable1_);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp, InputPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(uString::Const("cashOrCardText"));
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp1, InputPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(uString::Const("currentBalance"));
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_TextColor_inst = ::g::AccountBook_FuseControlsTextControl_TextColor_Property::New1(temp2, InputPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(uString::Const("addingValueColor"));
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(uString::Const("inputVars"));
    ::g::Fuse::Reactive::Member* temp16 = ::g::Fuse::Reactive::Member::New1(temp15, uString::Const("pmType"));
    uString* temp17 = uString::Const(" ");
    ::g::Fuse::Reactive::Constant* temp18 = ::g::Fuse::Reactive::Constant::New1(temp17);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(uString::Const("addingValue"));
    ::g::Fuse::Reactive::Add* temp20 = ::g::Fuse::Reactive::Add::New1(temp18, temp19);
    temp2_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp2, InputPage::__selector0_);
    ::g::Fuse::Reactive::Add* temp21 = ::g::Fuse::Reactive::Add::New1(temp16, temp20);
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    temp3_Color_inst = ::g::AccountBook_FuseControlsShape_Color_Property::New1(temp3, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp22 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ::g::wbButton* temp4 = ::g::wbButton::New6();
    temp4_Text_inst = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(temp4, InputPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("payTypeText"));
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("PayTypeChange"));
    ModalConfirm = ::g::Fuse::AlternateRoot::New2();
    ModalConfirm_IsEnabled_inst = ::g::AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(ModalConfirm, InputPage::__selector4_);
    usage_button = ::g::wbButton::New6();
    usage_button_Text_inst = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(usage_button, InputPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(uString::Const("selected"));
    ::g::Fuse::Reactive::Each* temp5 = ::g::Fuse::Reactive::Each::New4();
    temp5_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp5, InputPage::__selector5_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("numSet"));
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(uString::Const("Backspace"));
    ::g::pmButton* temp6 = ::g::pmButton::New6();
    temp6_Text_inst = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(temp6, InputPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(uString::Const("pmTypeText"));
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(uString::Const("Submit"));
    ::g::Fuse::Controls::Grid* temp7 = ::g::Fuse::Controls::Grid::New4();
    temp7_Color_inst = ::g::AccountBook_FuseControlsPanel_Color_Property::New1(temp7, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp30 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ::g::Fuse::Drawing::Stroke* temp8 = ::g::Fuse::Drawing::Stroke::New2();
    temp8_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp8, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp31 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    popup_input = ::g::Fuse::Controls::TextInput::New3();
    popup_input_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(popup_input, InputPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(uString::Const("usageListAddInput"));
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(uString::Const("AddToTempUsageList"));
    ::g::Fuse::Controls::Rectangle* temp9 = ::g::Fuse::Controls::Rectangle::New3();
    temp9_Color_inst = ::g::AccountBook_FuseControlsShape_Color_Property::New1(temp9, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp34 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ::g::Fuse::Reactive::Each* temp10 = ::g::Fuse::Reactive::Each::New4();
    temp10_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp10, InputPage::__selector5_);
    ::g::Fuse::Reactive::Data* temp35 = ::g::Fuse::Reactive::Data::New1(uString::Const("tempUsageList"));
    temp10_Offset_inst = ::g::AccountBook_FuseReactiveEach_Offset_Property::New1(temp10, InputPage::__selector6_);
    ::g::Fuse::Reactive::Data* temp36 = ::g::Fuse::Reactive::Data::New1(uString::Const("offset"));
    temp10_Limit_inst = ::g::AccountBook_FuseReactiveEach_Limit_Property::New1(temp10, InputPage::__selector7_);
    ::g::Fuse::Reactive::Data* temp37 = ::g::Fuse::Reactive::Data::New1(uString::Const("limit"));
    ::g::Fuse::Drawing::Stroke* temp11 = ::g::Fuse::Drawing::Stroke::New2();
    temp11_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp11, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp38 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ModalConfirm_ParentNode_inst = ::g::AccountBook_FuseAlternateRoot_ParentNode_Property::New1(ModalConfirm, InputPage::__selector8_);
    ::g::Fuse::Reactive::Resource* temp39 = ::g::Fuse::Reactive::Resource::New1(uString::Const("FullWindow"));
    ::g::Fuse::Reactive::JavaScript* temp40 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    FullWindo = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp41 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp42 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp43 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Controls::Text* temp44 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp45 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp13, 3);
    ::g::Fuse::Reactive::DataBinding* temp46 = ::g::Fuse::Reactive::DataBinding::New1(temp2_TextColor_inst, (uObject*)temp14, 3);
    ::g::Fuse::Reactive::DataBinding* temp47 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp21, 3);
    ::g::Fuse::Controls::Panel* temp48 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::Each* temp49 = ::g::Fuse::Reactive::Each::New4();
    InputPage__Template* temp50 = InputPage__Template::New2(this, this);
    InputPage__Template1* temp51 = InputPage__Template1::New2(this, this);
    ::g::Fuse::Controls::Panel* temp52 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp53 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Color_inst, (uObject*)temp22, 3);
    ::g::Fuse::Effects::DropShadow* temp54 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Text_inst, (uObject*)temp23, 3);
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp24);
    ::g::Fuse::Controls::Grid* temp56 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Gestures::Clicked* temp57 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp58 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    ::g::Fuse::Reactive::DataBinding* temp59 = ::g::Fuse::Reactive::DataBinding::New1(usage_button_Text_inst, (uObject*)temp25, 3);
    InputPage__Template2* temp60 = InputPage__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp61 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Items_inst, (uObject*)temp26, 3);
    ::g::wbButton* temp62 = ::g::wbButton::New6();
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp27);
    ::g::Fuse::Reactive::DataBinding* temp63 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Text_inst, (uObject*)temp28, 3);
    ::g::wbButton* temp64 = ::g::wbButton::New6();
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp29);
    ::g::Fuse::Reactive::DataBinding* temp65 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Color_inst, (uObject*)temp30, 3);
    ::g::Fuse::Resources::ResourceObject* temp66 = ::g::Fuse::Resources::ResourceObject::New2();
    ::g::Fuse::Controls::Panel* temp67 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp68 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp69 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp70 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Color_inst, (uObject*)temp31, 3);
    ::g::Fuse::Controls::ScrollView* temp71 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::Grid* temp72 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp73 = ::g::Fuse::Reactive::DataBinding::New1(popup_input_Value_inst, (uObject*)temp32, 3);
    ::g::wbButton* temp74 = ::g::wbButton::New6();
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp33);
    ::g::Fuse::Reactive::DataBinding* temp75 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Color_inst, (uObject*)temp34, 3);
    ::g::Fuse::Controls::DockPanel* temp76 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::ScrollView* temp77 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp78 = ::g::Fuse::Controls::StackPanel::New4();
    InputPage__Template3* temp79 = InputPage__Template3::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp80 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Items_inst, (uObject*)temp35, 3);
    ::g::Fuse::Reactive::DataBinding* temp81 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Offset_inst, (uObject*)temp36, 3);
    ::g::Fuse::Reactive::DataBinding* temp82 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Limit_inst, (uObject*)temp37, 3);
    ::g::Fuse::Controls::Button* temp83 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp84 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp85 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp86 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Color_inst, (uObject*)temp38, 3);
    ::g::Fuse::Gestures::Clicked* temp87 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp88 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    ::g::Fuse::PlaySound* temp89 = ::g::Fuse::PlaySound::New2();
    ::g::Fuse::Reactive::DataBinding* temp90 = ::g::Fuse::Reactive::DataBinding::New1(ModalConfirm_ParentNode_inst, (uObject*)temp39, 3);
    temp40->LineNumber(3);
    temp40->FileName(uString::Const("InputPage.ux"));
    temp40->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::InputPage7ad7b1e5()));
    uPtr(FullWindo)->Layer(3);
    uPtr(FullWindo)->Name(InputPage::__selector9_);
    temp41->RowCount(100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp42, 21);
    temp->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp43);
    temp44->Value(uString::Const("Current Balance"));
    temp44->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp44->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp44, 3);
    temp1->FontSize(45.0f);
    temp1->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp1, 7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp45);
    temp2->FontSize(30.0f);
    temp2->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp2, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp47);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp48, 15);
    temp49->Count1(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp51);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp52, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp53);
    temp7->RowCount(4);
    temp7->ColumnCount(5);
    temp7->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp7->Alignment(12);
    temp7->Padding(::g::Uno::Float4__New2(5.0f, 10.0f, 5.0f, 10.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp7, 66);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp7, 35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp65);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp4, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp4, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb10);
    temp54->Size(4.0f);
    temp54->Angle(90.0f);
    temp54->Distance(1.0f);
    temp54->Spread(0.2f);
    temp54->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3764706f));
    temp56->RowCount(1);
    temp56->ColumnCount(8);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp56, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), usage_button);
    uPtr(usage_button)->Name(InputPage::__selector10_);
    ::g::Fuse::Controls::Grid::SetColumnSpan(usage_button, 8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(usage_button)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(usage_button)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp58);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp58, uCRef(true));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp61);
    temp62->Text(uString::Const("\342\227\200"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp62, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb12);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp6, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp63);
    temp64->Text(uString::Const("PUT"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp64, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp64, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb13);
    temp66->Key(uString::Const("FullWindow"));
    ::g::Fuse::Resources::ResourceSetter__set_Value_fn(temp66, FullWindo);
    uPtr(ModalConfirm)->IsEnabled(false);
    uPtr(ModalConfirm)->Name(InputPage::__selector11_);
    uPtr(ModalConfirm)->Node(temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ModalConfirm)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp90);
    temp67->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f));
    temp67->Layer(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp68);
    temp68->Alignment(10);
    temp68->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp83);
    temp69->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp69->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp69->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp70);
    temp8->Width(2.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    temp9->CornerRadius(::g::Uno::Float4__New2(8.0f, 8.0f, 8.0f, 8.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp75);
    temp72->ColumnCount(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), popup_input);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp74);
    uPtr(popup_input)->PlaceholderText(uString::Const("add your usage"));
    uPtr(popup_input)->TextAlignment(1);
    uPtr(popup_input)->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(popup_input)->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(popup_input)->Name(InputPage::__selector12_);
    ::g::Fuse::Controls::Grid::SetColumnSpan(popup_input, 6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popup_input)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp73);
    temp74->Text(uString::Const("ADD"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp74, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp74, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp77);
    temp77->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp77->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp79);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp87);
    temp84->Value(uString::Const("OK"));
    temp84->TextAlignment(1);
    temp84->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp84->Alignment(10);
    temp85->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp86);
    temp11->Width(2.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp89);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp88, uCRef(false));
    temp89->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), FullWindo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), usage_button);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), ModalConfirm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), popup_input);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), FullWindo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ModalConfirm);
}

// public InputPage New(Fuse.Navigation.Router router) [static] :215
InputPage* InputPage::New4(::g::Fuse::Navigation::Router* router1)
{
    InputPage* obj1 = (InputPage*)uNew(InputPage_typeof());
    obj1->ctor_7(router1);
    return obj1;
}
// }

} // ::g
