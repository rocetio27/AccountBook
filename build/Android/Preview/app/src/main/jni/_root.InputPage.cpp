// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/InputPage.g.uno.
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
#include <_root.AccountBook_pmB-c0ef9fa5.h>
#include <_root.InputPage.h>
#include <_root.InputPage.Template.h>
#include <_root.InputPage.Template1.h>
#include <_root.pmButton.h>
#include <_root.wbButton.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.Controls.BottomB-f0a90651.h>
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
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
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
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class InputPage :2
// {
// static InputPage() :188
static void InputPage__cctor_4_fn(uType* __type)
{
    InputPage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 9, uString::Const("router"), uString::Const("FullWindo"), uString::Const("temp_eb10"), uString::Const("usage_button"), uString::Const("temp_eb12"), uString::Const("temp_eb13"), uString::Const("ModalConfirm"), uString::Const("popup_input"), uString::Const("temp_eb14"));
    InputPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    InputPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("TextColor"));
    InputPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Color"));
    InputPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Text"));
    InputPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("IsEnabled"));
    InputPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    InputPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Offset"));
    InputPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Limit"));
    InputPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ParentNode"));
    InputPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("FullWindo"));
    InputPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("usage_button"));
    InputPage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ModalConfirm"));
    InputPage::__selector12_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("popup_input"));
}

static void InputPage_build(uType* type)
{
    type->SetDependencies(
        ::g::AccountBook_bundle_typeof());
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
    type->SetFields(120,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(InputPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp2_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp3_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp5_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(InputPage, ModalConfirm_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(InputPage, temp6_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, temp7_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp8_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp9_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(InputPage, popup_input_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp10_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(InputPage, temp11_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(InputPage, temp11_Offset_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(InputPage, temp11_Limit_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage, temp12_Color_inst), 0,
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
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)InputPage__New4_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* InputPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 163;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(InputPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("InputPage", options);
    type->fp_build_ = InputPage_build;
    type->fp_cctor_ = InputPage__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
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

// public InputPage(Fuse.Navigation.Router router) :192
void InputPage__ctor_7_fn(InputPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_7(router1);
}

// private void InitializeUX() :198
void InputPage__InitializeUX_fn(InputPage* __this)
{
    __this->InitializeUX();
}

// public InputPage New(Fuse.Navigation.Router router) :192
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

// public InputPage(Fuse.Navigation.Router router) [instance] :192
void InputPage::ctor_7(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("InputPage", ".ctor(Fuse.Navigation.Router)");
    ctor_6();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :198
void InputPage::InitializeUX()
{
    uStackFrame __("InputPage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, InputPage::__g_static_nametable1_);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp, InputPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(uString::Const("cashOrCardText"));
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp1, InputPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(uString::Const("currentBalance"));
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_TextColor_inst = ::g::AccountBook_FuseControlsTextControl_TextColor_Property::New1(temp2, InputPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(uString::Const("addingValueColor"));
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(uString::Const("inputVars"));
    ::g::Fuse::Reactive::Member* temp17 = ::g::Fuse::Reactive::Member::New1(temp16, uString::Const("pmType"));
    uString* temp18 = uString::Const(" ");
    ::g::Fuse::Reactive::Constant* temp19 = ::g::Fuse::Reactive::Constant::New1(temp18);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(uString::Const("addingValue"));
    ::g::Fuse::Reactive::Add* temp21 = ::g::Fuse::Reactive::Add::New1(temp19, temp20);
    temp2_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp2, InputPage::__selector0_);
    ::g::Fuse::Reactive::Add* temp22 = ::g::Fuse::Reactive::Add::New1(temp17, temp21);
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    temp3_Color_inst = ::g::AccountBook_FuseControlsShape_Color_Property::New1(temp3, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp23 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("inputVars"));
    ::g::Fuse::Controls::TextInput* temp4 = ::g::Fuse::Controls::TextInput::New3();
    temp4_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp4, InputPage::__selector0_);
    ::g::Fuse::Reactive::Member* temp25 = ::g::Fuse::Reactive::Member::New1(temp24, uString::Const("usage"));
    ::g::wbButton* temp5 = ::g::wbButton::New6();
    temp5_Text_inst = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(temp5, InputPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("payTypeText"));
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(uString::Const("PayTypeChange"));
    ModalConfirm = ::g::Fuse::AlternateRoot::New2();
    ModalConfirm_IsEnabled_inst = ::g::AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(ModalConfirm, InputPage::__selector4_);
    ::g::Fuse::Reactive::Each* temp6 = ::g::Fuse::Reactive::Each::New4();
    temp6_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp6, InputPage::__selector5_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(uString::Const("numSet"));
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(uString::Const("Backspace"));
    ::g::pmButton* temp7 = ::g::pmButton::New6();
    temp7_Text_inst = ::g::AccountBook_pmButton_Text_Property::New1(temp7, InputPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(uString::Const("pmTypeText"));
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(uString::Const("Submit"));
    ::g::Fuse::Controls::DockPanel* temp8 = ::g::Fuse::Controls::DockPanel::New4();
    temp8_Color_inst = ::g::AccountBook_FuseControlsPanel_Color_Property::New1(temp8, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp32 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ::g::Fuse::Drawing::Stroke* temp9 = ::g::Fuse::Drawing::Stroke::New2();
    temp9_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp9, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp33 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    popup_input = ::g::Fuse::Controls::TextInput::New3();
    popup_input_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(popup_input, InputPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(uString::Const("usageListAddInput"));
    ::g::Fuse::Reactive::Data* temp35 = ::g::Fuse::Reactive::Data::New1(uString::Const("AddToTempUsageList"));
    ::g::Fuse::Controls::Rectangle* temp10 = ::g::Fuse::Controls::Rectangle::New3();
    temp10_Color_inst = ::g::AccountBook_FuseControlsShape_Color_Property::New1(temp10, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp36 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ::g::Fuse::Reactive::Each* temp11 = ::g::Fuse::Reactive::Each::New4();
    temp11_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp11, InputPage::__selector5_);
    ::g::Fuse::Reactive::Data* temp37 = ::g::Fuse::Reactive::Data::New1(uString::Const("tempUsageList"));
    temp11_Offset_inst = ::g::AccountBook_FuseReactiveEach_Offset_Property::New1(temp11, InputPage::__selector6_);
    ::g::Fuse::Reactive::Data* temp38 = ::g::Fuse::Reactive::Data::New1(uString::Const("offset"));
    temp11_Limit_inst = ::g::AccountBook_FuseReactiveEach_Limit_Property::New1(temp11, InputPage::__selector7_);
    ::g::Fuse::Reactive::Data* temp39 = ::g::Fuse::Reactive::Data::New1(uString::Const("limit"));
    ::g::Fuse::Drawing::Stroke* temp12 = ::g::Fuse::Drawing::Stroke::New2();
    temp12_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp12, InputPage::__selector2_);
    ::g::Fuse::Reactive::Resource* temp40 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ModalConfirm_ParentNode_inst = ::g::AccountBook_FuseAlternateRoot_ParentNode_Property::New1(ModalConfirm, InputPage::__selector8_);
    ::g::Fuse::Reactive::Resource* temp41 = ::g::Fuse::Reactive::Resource::New1(uString::Const("FullWindow"));
    ::g::Fuse::Reactive::JavaScript* temp42 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    FullWindo = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp43 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp44 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp45 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp46 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp47 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp13, 3);
    ::g::Fuse::Controls::Text* temp48 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp49 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp14, 3);
    ::g::Fuse::Reactive::DataBinding* temp50 = ::g::Fuse::Reactive::DataBinding::New1(temp2_TextColor_inst, (uObject*)temp15, 3);
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp22, 3);
    ::g::Fuse::Controls::Panel* temp52 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp53 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp54 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Color_inst, (uObject*)temp23, 3);
    ::g::Fuse::Controls::Panel* temp55 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp56 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Rectangle* temp57 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::SolidColor* temp58 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Drawing::Stroke* temp59 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Reactive::DataBinding* temp60 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp25, 3);
    ::g::Fuse::Reactive::DataBinding* temp61 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Text_inst, (uObject*)temp26, 3);
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp27);
    ::g::Fuse::Controls::Grid* temp62 = ::g::Fuse::Controls::Grid::New4();
    usage_button = ::g::wbButton::New6();
    ::g::Fuse::Gestures::Clicked* temp63 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp64 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    InputPage__Template* temp65 = InputPage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp66 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Items_inst, (uObject*)temp28, 3);
    ::g::wbButton* temp67 = ::g::wbButton::New6();
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp29);
    ::g::Fuse::Reactive::DataBinding* temp68 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Text_inst, (uObject*)temp30, 3);
    ::g::wbButton* temp69 = ::g::wbButton::New6();
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp31);
    ::g::Fuse::Controls::BottomBarBackground* temp70 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Reactive::DataBinding* temp71 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Color_inst, (uObject*)temp32, 3);
    ::g::Fuse::Resources::ResourceObject* temp72 = ::g::Fuse::Resources::ResourceObject::New2();
    ::g::Fuse::Controls::Panel* temp73 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp74 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp75 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp76 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Color_inst, (uObject*)temp33, 3);
    ::g::Fuse::Controls::ScrollView* temp77 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::Grid* temp78 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp79 = ::g::Fuse::Reactive::DataBinding::New1(popup_input_Value_inst, (uObject*)temp34, 3);
    ::g::wbButton* temp80 = ::g::wbButton::New6();
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp35);
    ::g::Fuse::Reactive::DataBinding* temp81 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Color_inst, (uObject*)temp36, 3);
    ::g::Fuse::Controls::DockPanel* temp82 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::ScrollView* temp83 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp84 = ::g::Fuse::Controls::StackPanel::New4();
    InputPage__Template1* temp85 = InputPage__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp86 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Items_inst, (uObject*)temp37, 3);
    ::g::Fuse::Reactive::DataBinding* temp87 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Offset_inst, (uObject*)temp38, 3);
    ::g::Fuse::Reactive::DataBinding* temp88 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Limit_inst, (uObject*)temp39, 3);
    ::g::Fuse::Controls::Button* temp89 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp90 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp91 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp92 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Color_inst, (uObject*)temp40, 3);
    ::g::Fuse::Gestures::Clicked* temp93 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp94 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    ::g::Fuse::PlaySound* temp95 = ::g::Fuse::PlaySound::New2();
    ::g::Fuse::Reactive::DataBinding* temp96 = ::g::Fuse::Reactive::DataBinding::New1(ModalConfirm_ParentNode_inst, (uObject*)temp41, 3);
    SourceLineNumber(1);
    SourceFileName(uString::Const("InputPage.ux"));
    temp42->LineNumber(2);
    temp42->FileName(uString::Const("InputPage.ux"));
    temp42->SourceLineNumber(2);
    temp42->SourceFileName(uString::Const("InputPage.ux"));
    temp42->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::InputPage7ad7b1e5()));
    uPtr(FullWindo)->Layer(3);
    uPtr(FullWindo)->Name(InputPage::__selector9_);
    uPtr(FullWindo)->SourceLineNumber(4);
    uPtr(FullWindo)->SourceFileName(uString::Const("InputPage.ux"));
    temp43->RowCount(100);
    temp43->SourceLineNumber(5);
    temp43->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    temp44->SourceLineNumber(6);
    temp44->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp44, 21);
    temp45->SourceLineNumber(7);
    temp45->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp45, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp46);
    temp46->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp46->SourceLineNumber(8);
    temp46->SourceFileName(uString::Const("InputPage.ux"));
    temp->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(10);
    temp->SourceLineNumber(11);
    temp->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp47);
    temp13->SourceLineNumber(11);
    temp13->SourceFileName(uString::Const("InputPage.ux"));
    temp48->Value(uString::Const("Current Balance"));
    temp48->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp48->Alignment(10);
    temp48->SourceLineNumber(12);
    temp48->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp48, 3);
    temp1->FontSize(45.0f);
    temp1->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->Alignment(10);
    temp1->SourceLineNumber(13);
    temp1->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp1, 7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp49);
    temp14->SourceLineNumber(13);
    temp14->SourceFileName(uString::Const("InputPage.ux"));
    temp2->FontSize(30.0f);
    temp2->Alignment(10);
    temp2->SourceLineNumber(14);
    temp2->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp2, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp51);
    temp15->SourceLineNumber(14);
    temp15->SourceFileName(uString::Const("InputPage.ux"));
    temp22->SourceLineNumber(14);
    temp22->SourceFileName(uString::Const("InputPage.ux"));
    temp16->SourceLineNumber(14);
    temp16->SourceFileName(uString::Const("InputPage.ux"));
    temp17->SourceLineNumber(14);
    temp17->SourceFileName(uString::Const("InputPage.ux"));
    temp21->SourceLineNumber(14);
    temp21->SourceFileName(uString::Const("InputPage.ux"));
    temp19->SourceLineNumber(14);
    temp19->SourceFileName(uString::Const("InputPage.ux"));
    temp20->SourceLineNumber(14);
    temp20->SourceFileName(uString::Const("InputPage.ux"));
    temp52->SourceLineNumber(15);
    temp52->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp52, 15);
    temp53->SourceLineNumber(24);
    temp53->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp53, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    temp3->SourceLineNumber(25);
    temp3->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp54);
    temp23->SourceLineNumber(25);
    temp23->SourceFileName(uString::Const("InputPage.ux"));
    temp8->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp8->Alignment(12);
    temp8->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    temp8->SourceLineNumber(28);
    temp8->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp8, 44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp71);
    temp55->SourceLineNumber(29);
    temp55->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp56);
    temp56->RowCount(5);
    temp56->ColumnCount(5);
    temp56->SourceLineNumber(30);
    temp56->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp69);
    temp4->TextAlignment(1);
    temp4->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp4->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp4->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp4->Padding(::g::Uno::Float4__New2(1.5f, 1.5f, 1.5f, 1.5f));
    temp4->SourceLineNumber(32);
    temp4->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp4, 5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp60);
    temp57->SourceLineNumber(37);
    temp57->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp59);
    temp58->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp59->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp59->Width(1.0f);
    temp24->SourceLineNumber(32);
    temp24->SourceFileName(uString::Const("InputPage.ux"));
    temp25->SourceLineNumber(32);
    temp25->SourceFileName(uString::Const("InputPage.ux"));
    temp5->SourceLineNumber(43);
    temp5->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp5, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp5, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb10);
    temp26->SourceLineNumber(43);
    temp26->SourceFileName(uString::Const("InputPage.ux"));
    temp27->SourceLineNumber(43);
    temp27->SourceFileName(uString::Const("InputPage.ux"));
    temp62->ColumnCount(8);
    temp62->SourceLineNumber(46);
    temp62->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp62, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), usage_button);
    uPtr(usage_button)->Text(uString::Const("BOOKMARK"));
    uPtr(usage_button)->Name(InputPage::__selector10_);
    uPtr(usage_button)->SourceLineNumber(47);
    uPtr(usage_button)->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(usage_button, 8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(usage_button)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp63);
    temp63->SourceLineNumber(48);
    temp63->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp64);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp64, uCRef(true));
    temp64->SourceLineNumber(49);
    temp64->SourceFileName(uString::Const("InputPage.ux"));
    temp6->SourceLineNumber(55);
    temp6->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp66);
    temp28->SourceLineNumber(55);
    temp28->SourceFileName(uString::Const("InputPage.ux"));
    temp67->Text(uString::Const("<"));
    temp67->SourceLineNumber(59);
    temp67->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp67, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb12);
    temp29->SourceLineNumber(59);
    temp29->SourceFileName(uString::Const("InputPage.ux"));
    temp7->SourceLineNumber(60);
    temp7->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp7, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp68);
    temp30->SourceLineNumber(60);
    temp30->SourceFileName(uString::Const("InputPage.ux"));
    temp69->Text(uString::Const("PUT"));
    temp69->SourceLineNumber(61);
    temp69->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp69, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp69, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb13);
    temp31->SourceLineNumber(61);
    temp31->SourceFileName(uString::Const("InputPage.ux"));
    temp70->SourceLineNumber(64);
    temp70->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp70, 3);
    temp32->SourceLineNumber(28);
    temp32->SourceFileName(uString::Const("InputPage.ux"));
    temp72->Key(uString::Const("FullWindow"));
    temp72->SourceLineNumber(67);
    temp72->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Resources::ResourceSetter__set_Value_fn(temp72, FullWindo);
    uPtr(ModalConfirm)->IsEnabled(false);
    uPtr(ModalConfirm)->Name(InputPage::__selector11_);
    uPtr(ModalConfirm)->SourceLineNumber(68);
    uPtr(ModalConfirm)->SourceFileName(uString::Const("InputPage.ux"));
    uPtr(ModalConfirm)->Node(temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ModalConfirm)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp96);
    temp73->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f));
    temp73->Layer(3);
    temp73->SourceLineNumber(69);
    temp73->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp73->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp74);
    temp74->Alignment(10);
    temp74->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp74->SourceLineNumber(70);
    temp74->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp89);
    temp75->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp75->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp75->Layer(1);
    temp75->SourceLineNumber(71);
    temp75->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp76);
    temp9->Width(2.0f);
    temp33->SourceLineNumber(72);
    temp33->SourceFileName(uString::Const("InputPage.ux"));
    temp77->SourceLineNumber(75);
    temp77->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    temp10->CornerRadius(::g::Uno::Float4__New2(8.0f, 8.0f, 8.0f, 8.0f));
    temp10->SourceLineNumber(76);
    temp10->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp81);
    temp78->ColumnCount(8);
    temp78->SourceLineNumber(77);
    temp78->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), popup_input);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp80);
    uPtr(popup_input)->PlaceholderText(uString::Const("add your usage"));
    uPtr(popup_input)->TextAlignment(1);
    uPtr(popup_input)->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(popup_input)->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(popup_input)->Name(InputPage::__selector12_);
    uPtr(popup_input)->SourceLineNumber(78);
    uPtr(popup_input)->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(popup_input, 6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popup_input)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp79);
    temp34->SourceLineNumber(78);
    temp34->SourceFileName(uString::Const("InputPage.ux"));
    temp80->Text(uString::Const("ADD"));
    temp80->SourceLineNumber(79);
    temp80->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp80, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp80, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb14);
    temp35->SourceLineNumber(79);
    temp35->SourceFileName(uString::Const("InputPage.ux"));
    temp36->SourceLineNumber(76);
    temp36->SourceFileName(uString::Const("InputPage.ux"));
    temp82->SourceLineNumber(85);
    temp82->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp83);
    temp83->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp83->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp83->SourceLineNumber(86);
    temp83->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp84);
    temp84->SourceLineNumber(87);
    temp84->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
    temp11->SourceLineNumber(88);
    temp11->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp88);
    temp37->SourceLineNumber(88);
    temp37->SourceFileName(uString::Const("InputPage.ux"));
    temp38->SourceLineNumber(88);
    temp38->SourceFileName(uString::Const("InputPage.ux"));
    temp39->SourceLineNumber(88);
    temp39->SourceFileName(uString::Const("InputPage.ux"));
    temp89->SourceLineNumber(116);
    temp89->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp89->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp89->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp89->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp93);
    temp90->Value(uString::Const("OK"));
    temp90->TextAlignment(1);
    temp90->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp90->Alignment(10);
    temp90->SourceLineNumber(117);
    temp90->SourceFileName(uString::Const("InputPage.ux"));
    temp91->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp91->SourceLineNumber(118);
    temp91->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp92);
    temp12->Width(2.0f);
    temp40->SourceLineNumber(119);
    temp40->SourceFileName(uString::Const("InputPage.ux"));
    temp93->SourceLineNumber(121);
    temp93->SourceFileName(uString::Const("InputPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp95);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp94, uCRef(false));
    temp94->SourceLineNumber(122);
    temp94->SourceFileName(uString::Const("InputPage.ux"));
    temp95->SourceLineNumber(123);
    temp95->SourceFileName(uString::Const("InputPage.ux"));
    temp95->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    temp41->SourceLineNumber(68);
    temp41->SourceFileName(uString::Const("InputPage.ux"));
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
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), FullWindo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ModalConfirm);
}

// public InputPage New(Fuse.Navigation.Router router) [static] :192
InputPage* InputPage::New4(::g::Fuse::Navigation::Router* router1)
{
    InputPage* obj1 = (InputPage*)uNew(InputPage_typeof());
    obj1->ctor_7(router1);
    return obj1;
}
// }

} // ::g
