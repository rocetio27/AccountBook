// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/InputPage.g.uno.
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
#include <_root.AccountBook_Fus-c3df749a.h>
#include <_root.AccountBook_Fus-ece4b8e4.h>
#include <_root.AccountBook_Fus-f200852b.h>
#include <_root.AccountBook_pmB-c0ef9fa5.h>
#include <_root.InputPage.h>
#include <_root.InputPage.Template.h>
#include <_root.InputPage.Template1.h>
#include <_root.pmButton.h>
#include <_root.wbButton.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
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
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class InputPage :2
// {
// static InputPage() :193
static void InputPage__cctor_4_fn(uType* __type)
{
    InputPage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 11, uString::Const("FullWindo"), uString::Const("ScreenGrid"), uString::Const("KeyboardGrid"), uString::Const("usageTextInput"), uString::Const("temp_eb10"), uString::Const("usage_button"), uString::Const("temp_eb12"), uString::Const("temp_eb13"), uString::Const("ModalConfirm"), uString::Const("popup_input"), uString::Const("temp_eb14"));
    InputPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    InputPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("TextColor"));
    InputPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Color"));
    InputPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Opacity"));
    InputPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Text"));
    InputPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("IsEnabled"));
    InputPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    InputPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Offset"));
    InputPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Limit"));
    InputPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ParentNode"));
    InputPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("FullWindo"));
    InputPage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ScreenGrid"));
    InputPage::__selector12_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("KeyboardGrid"));
    InputPage::__selector13_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("usageTextInput"));
    InputPage::__selector14_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("usage_button"));
    InputPage::__selector15_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ModalConfirm"));
    InputPage::__selector16_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("popup_input"));
}

static void InputPage_build(uType* type)
{
    type->SetDependencies(
        ::g::AccountBook_bundle_typeof(),
        ::g::Fuse::Triggers::WhileKeyboardVisible_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(121,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp2_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp3_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(InputPage, ScreenGrid_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, usageTextInput_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp4_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(InputPage, ModalConfirm_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(InputPage, temp5_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp6_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, KeyboardGrid_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp7_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, popup_input_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp8_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(InputPage, temp9_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(InputPage, temp9_Offset_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(InputPage, temp9_Limit_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp10_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(InputPage, ModalConfirm_ParentNode_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(InputPage, FullWindo), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(InputPage, ScreenGrid), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(InputPage, KeyboardGrid), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(InputPage, usageTextInput), 0,
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
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage::__selector16_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* InputPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 171;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(InputPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("InputPage", options);
    type->fp_build_ = InputPage_build;
    type->fp_ctor_ = (void*)InputPage__New5_fn;
    type->fp_cctor_ = InputPage__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public InputPage() :197
void InputPage__ctor_8_fn(InputPage* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :201
void InputPage__InitializeUX_fn(InputPage* __this)
{
    __this->InitializeUX();
}

// public InputPage New() :197
void InputPage__New5_fn(InputPage** __retval)
{
    *__retval = InputPage::New5();
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
::g::Uno::UX::Selector InputPage::__selector13_;
::g::Uno::UX::Selector InputPage::__selector14_;
::g::Uno::UX::Selector InputPage::__selector15_;
::g::Uno::UX::Selector InputPage::__selector16_;

// public InputPage() [instance] :197
void InputPage::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :201
void InputPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, InputPage::__g_static_nametable1_);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp, InputPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(uString::Const("cashOrCardText"));
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp1, InputPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(uString::Const("currentBalance"));
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_TextColor_inst = ::g::AccountBook_FuseControlsTextControl_TextColor_Property::New1(temp2, InputPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(uString::Const("addingValueColor"));
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(uString::Const("inputVars"));
    ::g::Fuse::Reactive::Member* temp15 = ::g::Fuse::Reactive::Member::New1(temp14, uString::Const("pmType"));
    uString* temp16 = uString::Const(" ");
    ::g::Fuse::Reactive::Constant* temp17 = ::g::Fuse::Reactive::Constant::New1(temp16);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(uString::Const("addingValue"));
    ::g::Fuse::Reactive::Add* temp19 = ::g::Fuse::Reactive::Add::New1(temp17, temp18);
    temp2_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp2, InputPage::__selector0_);
    ::g::Fuse::Reactive::Add* temp20 = ::g::Fuse::Reactive::Add::New1(temp15, temp19);
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    temp3_Color_inst = ::g::AccountBook_FuseControlsShape_Color_Property::New1(temp3, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp21 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ScreenGrid = ::g::Fuse::Controls::Grid::New4();
    ScreenGrid_Opacity_inst = ::g::AccountBook_FuseElementsElement_Opacity_Property::New1(ScreenGrid, InputPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(uString::Const("inputVars"));
    usageTextInput = ::g::Fuse::Controls::TextInput::New3();
    usageTextInput_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(usageTextInput, InputPage::__selector0_);
    ::g::Fuse::Reactive::Member* temp23 = ::g::Fuse::Reactive::Member::New1(temp22, uString::Const("usage"));
    ::g::wbButton* temp4 = ::g::wbButton::New6();
    temp4_Text_inst = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(temp4, InputPage::__selector4_);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("payTypeText"));
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(uString::Const("PayTypeChange"));
    ModalConfirm = ::g::Fuse::AlternateRoot::New2();
    ModalConfirm_IsEnabled_inst = ::g::AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(ModalConfirm, InputPage::__selector5_);
    ::g::Fuse::Reactive::Each* temp5 = ::g::Fuse::Reactive::Each::New4();
    temp5_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp5, InputPage::__selector6_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("numSet"));
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(uString::Const("Backspace"));
    ::g::pmButton* temp6 = ::g::pmButton::New6();
    temp6_Text_inst = ::g::AccountBook_pmButton_Text_Property::New1(temp6, InputPage::__selector4_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(uString::Const("pmTypeText"));
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(uString::Const("Submit"));
    KeyboardGrid = ::g::Fuse::Controls::Grid::New4();
    KeyboardGrid_Color_inst = ::g::AccountBook_FuseControlsPanel_Color_Property::New1(KeyboardGrid, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp30 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ::g::Fuse::Drawing::Stroke* temp7 = ::g::Fuse::Drawing::Stroke::New2();
    temp7_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp7, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp31 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    popup_input = ::g::Fuse::Controls::TextInput::New3();
    popup_input_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(popup_input, InputPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(uString::Const("usageListAddInput"));
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(uString::Const("AddToTempUsageList"));
    ::g::Fuse::Controls::Rectangle* temp8 = ::g::Fuse::Controls::Rectangle::New3();
    temp8_Color_inst = ::g::AccountBook_FuseControlsShape_Color_Property::New1(temp8, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp34 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ::g::Fuse::Reactive::Each* temp9 = ::g::Fuse::Reactive::Each::New4();
    temp9_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp9, InputPage::__selector6_);
    ::g::Fuse::Reactive::Data* temp35 = ::g::Fuse::Reactive::Data::New1(uString::Const("tempUsageList"));
    temp9_Offset_inst = ::g::AccountBook_FuseReactiveEach_Offset_Property::New1(temp9, InputPage::__selector7_);
    ::g::Fuse::Reactive::Data* temp36 = ::g::Fuse::Reactive::Data::New1(uString::Const("offset"));
    temp9_Limit_inst = ::g::AccountBook_FuseReactiveEach_Limit_Property::New1(temp9, InputPage::__selector8_);
    ::g::Fuse::Reactive::Data* temp37 = ::g::Fuse::Reactive::Data::New1(uString::Const("limit"));
    ::g::Fuse::Drawing::Stroke* temp10 = ::g::Fuse::Drawing::Stroke::New2();
    temp10_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp10, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp38 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ModalConfirm_ParentNode_inst = ::g::AccountBook_FuseAlternateRoot_ParentNode_Property::New1(ModalConfirm, InputPage::__selector9_);
    ::g::Fuse::Reactive::Resource* temp39 = ::g::Fuse::Reactive::Resource::New1(uString::Const("FullWindow"));
    ::g::Fuse::Reactive::JavaScript* temp40 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    FullWindo = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp41 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp42 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp43 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp44 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp45 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp46 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::Text* temp47 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp48 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Reactive::DataBinding* temp49 = ::g::Fuse::Reactive::DataBinding::New1(temp2_TextColor_inst, (uObject*)temp13, 3);
    ::g::Fuse::Reactive::DataBinding* temp50 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp20, 3);
    ::g::Fuse::Controls::Panel* temp51 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp52 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp53 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Color_inst, (uObject*)temp21, 3);
    ::g::Fuse::Triggers::WhileKeyboardVisible* temp54 = ::g::Fuse::Triggers::WhileKeyboardVisible::New2();
    ::g::Fuse::Animations::Change* temp55 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), ScreenGrid_Opacity_inst);
    ::g::Fuse::Controls::DockPanel* temp56 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp57 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::SolidColor* temp58 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Drawing::Stroke* temp59 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Reactive::DataBinding* temp60 = ::g::Fuse::Reactive::DataBinding::New1(usageTextInput_Value_inst, (uObject*)temp23, 3);
    ::g::Fuse::Reactive::DataBinding* temp61 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Text_inst, (uObject*)temp24, 3);
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp25);
    ::g::Fuse::Controls::Grid* temp62 = ::g::Fuse::Controls::Grid::New4();
    usage_button = ::g::wbButton::New6();
    ::g::Fuse::Gestures::Clicked* temp63 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp64 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    InputPage__Template* temp65 = InputPage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp66 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Items_inst, (uObject*)temp26, 3);
    ::g::wbButton* temp67 = ::g::wbButton::New6();
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp27);
    ::g::Fuse::Reactive::DataBinding* temp68 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Text_inst, (uObject*)temp28, 3);
    ::g::wbButton* temp69 = ::g::wbButton::New6();
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp29);
    ::g::Fuse::Triggers::WhileKeyboardVisible* temp70 = ::g::Fuse::Triggers::WhileKeyboardVisible::New2();
    ::g::Fuse::Animations::Move* temp71 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp72 = ::g::Fuse::Reactive::DataBinding::New1(KeyboardGrid_Color_inst, (uObject*)temp30, 3);
    ::g::Fuse::Resources::ResourceObject* temp73 = ::g::Fuse::Resources::ResourceObject::New2();
    ::g::Fuse::Controls::Panel* temp74 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp75 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp76 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp77 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Color_inst, (uObject*)temp31, 3);
    ::g::Fuse::Controls::ScrollView* temp78 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::Grid* temp79 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp80 = ::g::Fuse::Reactive::DataBinding::New1(popup_input_Value_inst, (uObject*)temp32, 3);
    ::g::wbButton* temp81 = ::g::wbButton::New6();
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp33);
    ::g::Fuse::Reactive::DataBinding* temp82 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Color_inst, (uObject*)temp34, 3);
    ::g::Fuse::Controls::DockPanel* temp83 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::ScrollView* temp84 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp85 = ::g::Fuse::Controls::StackPanel::New4();
    InputPage__Template1* temp86 = InputPage__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp87 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Items_inst, (uObject*)temp35, 3);
    ::g::Fuse::Reactive::DataBinding* temp88 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Offset_inst, (uObject*)temp36, 3);
    ::g::Fuse::Reactive::DataBinding* temp89 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Limit_inst, (uObject*)temp37, 3);
    ::g::Fuse::Controls::Button* temp90 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp91 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp92 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp93 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Color_inst, (uObject*)temp38, 3);
    ::g::Fuse::Gestures::Clicked* temp94 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp95 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    ::g::Fuse::PlaySound* temp96 = ::g::Fuse::PlaySound::New2();
    ::g::Fuse::Reactive::DataBinding* temp97 = ::g::Fuse::Reactive::DataBinding::New1(ModalConfirm_ParentNode_inst, (uObject*)temp39, 3);
    SourceLineNumber(1);
    SourceFileName(uString::Const("InputPage.ux"));
    temp40->LineNumber(2);
    temp40->FileName(uString::Const("InputPage.ux"));
    temp40->SourceLineNumber(2);
    temp40->SourceFileName(uString::Const("InputPage.ux"));
    temp40->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::InputPage7ad7b1e5()));
    uPtr(FullWindo)->Layer(3);
    uPtr(FullWindo)->Name(InputPage::__selector10_);
    uPtr(FullWindo)->SourceLineNumber(3);
    uPtr(FullWindo)->SourceFileName(uString::Const("InputPage.ux"));
    temp41->RowCount(100);
    temp41->SourceLineNumber(4);
    temp41->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp56);
    temp42->SourceLineNumber(5);
    temp42->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp42, 57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ScreenGrid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp54);
    uPtr(ScreenGrid)->RowCount(57);
    uPtr(ScreenGrid)->Name(InputPage::__selector11_);
    uPtr(ScreenGrid)->SourceLineNumber(6);
    uPtr(ScreenGrid)->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ScreenGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ScreenGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ScreenGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ScreenGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ScreenGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ScreenGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ScreenGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ScreenGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp52);
    temp43->SourceLineNumber(7);
    temp43->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp43, 21);
    temp44->SourceLineNumber(8);
    temp44->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp44, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp45);
    temp45->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp45->SourceLineNumber(9);
    temp45->SourceFileName(uString::Const("InputPage.ux"));
    temp->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(10);
    temp->SourceLineNumber(12);
    temp->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp46);
    temp11->SourceLineNumber(12);
    temp11->SourceFileName(uString::Const("InputPage.ux"));
    temp47->Value(uString::Const("Current Balance"));
    temp47->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp47->Alignment(10);
    temp47->SourceLineNumber(13);
    temp47->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp47, 3);
    temp1->FontSize(45.0f);
    temp1->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->Alignment(10);
    temp1->SourceLineNumber(14);
    temp1->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp1, 7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp48);
    temp12->SourceLineNumber(14);
    temp12->SourceFileName(uString::Const("InputPage.ux"));
    temp2->FontSize(30.0f);
    temp2->Alignment(10);
    temp2->SourceLineNumber(15);
    temp2->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp2, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp50);
    temp13->SourceLineNumber(15);
    temp13->SourceFileName(uString::Const("InputPage.ux"));
    temp20->SourceLineNumber(15);
    temp20->SourceFileName(uString::Const("InputPage.ux"));
    temp14->SourceLineNumber(15);
    temp14->SourceFileName(uString::Const("InputPage.ux"));
    temp15->SourceLineNumber(15);
    temp15->SourceFileName(uString::Const("InputPage.ux"));
    temp19->SourceLineNumber(15);
    temp19->SourceFileName(uString::Const("InputPage.ux"));
    temp17->SourceLineNumber(15);
    temp17->SourceFileName(uString::Const("InputPage.ux"));
    temp18->SourceLineNumber(15);
    temp18->SourceFileName(uString::Const("InputPage.ux"));
    temp51->SourceLineNumber(16);
    temp51->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp51, 15);
    temp52->SourceLineNumber(17);
    temp52->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp52, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    temp3->SourceLineNumber(18);
    temp3->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp53);
    temp21->SourceLineNumber(18);
    temp21->SourceFileName(uString::Const("InputPage.ux"));
    temp54->SourceLineNumber(22);
    temp54->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp55);
    ::g::Fuse::Animations::Change__set_Value_fn(temp55, uCRef(0.0f));
    temp55->Duration(0.3);
    temp56->SourceLineNumber(26);
    temp56->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp56, 43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), KeyboardGrid);
    uPtr(KeyboardGrid)->RowCount(5);
    uPtr(KeyboardGrid)->ColumnCount(5);
    uPtr(KeyboardGrid)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(KeyboardGrid)->Alignment(12);
    uPtr(KeyboardGrid)->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    uPtr(KeyboardGrid)->Name(InputPage::__selector12_);
    uPtr(KeyboardGrid)->SourceLineNumber(27);
    uPtr(KeyboardGrid)->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(KeyboardGrid, 43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(KeyboardGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), usageTextInput);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(KeyboardGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(KeyboardGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(KeyboardGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(KeyboardGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(KeyboardGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(KeyboardGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(KeyboardGrid)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(KeyboardGrid)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp72);
    uPtr(usageTextInput)->TextAlignment(1);
    uPtr(usageTextInput)->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(usageTextInput)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(usageTextInput)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(usageTextInput)->Padding(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(usageTextInput)->Name(InputPage::__selector13_);
    uPtr(usageTextInput)->SourceLineNumber(29);
    uPtr(usageTextInput)->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(usageTextInput, 5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(usageTextInput)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(usageTextInput)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp60);
    temp57->SourceLineNumber(30);
    temp57->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp59);
    temp58->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp59->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp59->Width(1.0f);
    temp22->SourceLineNumber(29);
    temp22->SourceFileName(uString::Const("InputPage.ux"));
    temp23->SourceLineNumber(29);
    temp23->SourceFileName(uString::Const("InputPage.ux"));
    temp4->SourceLineNumber(35);
    temp4->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp4, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp4, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb10);
    temp24->SourceLineNumber(35);
    temp24->SourceFileName(uString::Const("InputPage.ux"));
    temp25->SourceLineNumber(35);
    temp25->SourceFileName(uString::Const("InputPage.ux"));
    temp62->ColumnCount(8);
    temp62->SourceLineNumber(36);
    temp62->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp62, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), usage_button);
    uPtr(usage_button)->Text(uString::Const("BOOKMARK"));
    uPtr(usage_button)->Name(InputPage::__selector14_);
    uPtr(usage_button)->SourceLineNumber(37);
    uPtr(usage_button)->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(usage_button, 8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(usage_button)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp63);
    temp63->SourceLineNumber(38);
    temp63->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp64);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp64, uCRef(true));
    temp64->SourceLineNumber(39);
    temp64->SourceFileName(uString::Const("InputPage.ux"));
    temp5->SourceLineNumber(44);
    temp5->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp66);
    temp26->SourceLineNumber(44);
    temp26->SourceFileName(uString::Const("InputPage.ux"));
    temp67->Text(uString::Const("<"));
    temp67->SourceLineNumber(47);
    temp67->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp67, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb12);
    temp27->SourceLineNumber(47);
    temp27->SourceFileName(uString::Const("InputPage.ux"));
    temp6->SourceLineNumber(48);
    temp6->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp6, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp68);
    temp28->SourceLineNumber(48);
    temp28->SourceFileName(uString::Const("InputPage.ux"));
    temp69->Text(uString::Const("PUT"));
    temp69->SourceLineNumber(49);
    temp69->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp69, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp69, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb13);
    temp29->SourceLineNumber(49);
    temp29->SourceFileName(uString::Const("InputPage.ux"));
    temp70->SourceLineNumber(51);
    temp70->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp71);
    temp71->Y(-1.0f);
    temp71->RelativeTo(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard());
    temp30->SourceLineNumber(27);
    temp30->SourceFileName(uString::Const("InputPage.ux"));
    temp73->Key(uString::Const("FullWindow"));
    temp73->SourceLineNumber(57);
    temp73->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Resources::ResourceSetter__set_Value_fn(temp73, FullWindo);
    uPtr(ModalConfirm)->IsEnabled(false);
    uPtr(ModalConfirm)->Name(InputPage::__selector15_);
    uPtr(ModalConfirm)->SourceLineNumber(58);
    uPtr(ModalConfirm)->SourceFileName(uString::Const("InputPage.ux"));
    uPtr(ModalConfirm)->Node(temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ModalConfirm)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp97);
    temp74->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f));
    temp74->Layer(3);
    temp74->SourceLineNumber(59);
    temp74->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp75);
    temp75->Alignment(10);
    temp75->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp75->SourceLineNumber(60);
    temp75->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp90);
    temp76->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp76->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp76->Layer(1);
    temp76->SourceLineNumber(61);
    temp76->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp77);
    temp7->Width(2.0f);
    temp31->SourceLineNumber(62);
    temp31->SourceFileName(uString::Const("InputPage.ux"));
    temp78->SourceLineNumber(65);
    temp78->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    temp8->CornerRadius(::g::Uno::Float4__New2(8.0f, 8.0f, 8.0f, 8.0f));
    temp8->SourceLineNumber(66);
    temp8->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp79);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp82);
    temp79->ColumnCount(8);
    temp79->SourceLineNumber(67);
    temp79->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), popup_input);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp81);
    uPtr(popup_input)->PlaceholderText(uString::Const("add your usage"));
    uPtr(popup_input)->TextAlignment(1);
    uPtr(popup_input)->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(popup_input)->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(popup_input)->Name(InputPage::__selector16_);
    uPtr(popup_input)->SourceLineNumber(68);
    uPtr(popup_input)->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(popup_input, 6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popup_input)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp80);
    temp32->SourceLineNumber(68);
    temp32->SourceFileName(uString::Const("InputPage.ux"));
    temp81->Text(uString::Const("ADD"));
    temp81->SourceLineNumber(69);
    temp81->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp81, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp81, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb14);
    temp33->SourceLineNumber(69);
    temp33->SourceFileName(uString::Const("InputPage.ux"));
    temp34->SourceLineNumber(66);
    temp34->SourceFileName(uString::Const("InputPage.ux"));
    temp83->SourceLineNumber(75);
    temp83->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp84);
    temp84->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp84->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp84->SourceLineNumber(76);
    temp84->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp85);
    temp85->SourceLineNumber(77);
    temp85->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    temp9->SourceLineNumber(78);
    temp9->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp89);
    temp35->SourceLineNumber(78);
    temp35->SourceFileName(uString::Const("InputPage.ux"));
    temp36->SourceLineNumber(78);
    temp36->SourceFileName(uString::Const("InputPage.ux"));
    temp37->SourceLineNumber(78);
    temp37->SourceFileName(uString::Const("InputPage.ux"));
    temp90->SourceLineNumber(106);
    temp90->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp92);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp94);
    temp91->Value(uString::Const("OK"));
    temp91->TextAlignment(1);
    temp91->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp91->Alignment(10);
    temp91->SourceLineNumber(107);
    temp91->SourceFileName(uString::Const("InputPage.ux"));
    temp92->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp92->SourceLineNumber(108);
    temp92->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp92->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp92->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp93);
    temp10->Width(2.0f);
    temp38->SourceLineNumber(109);
    temp38->SourceFileName(uString::Const("InputPage.ux"));
    temp94->SourceLineNumber(111);
    temp94->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp95);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp96);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp95, uCRef(false));
    temp95->SourceLineNumber(112);
    temp95->SourceFileName(uString::Const("InputPage.ux"));
    temp96->SourceLineNumber(113);
    temp96->SourceFileName(uString::Const("InputPage.ux"));
    temp96->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    temp39->SourceLineNumber(58);
    temp39->SourceFileName(uString::Const("InputPage.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), FullWindo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), ScreenGrid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), KeyboardGrid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), usageTextInput);
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
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ModalConfirm);
}

// public InputPage New() [static] :197
InputPage* InputPage::New5()
{
    InputPage* obj1 = (InputPage*)uNew(InputPage_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
