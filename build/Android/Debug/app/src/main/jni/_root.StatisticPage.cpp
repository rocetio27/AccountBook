// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/StatisticPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_bundle.h>
#include <_root.AccountBook_Fus-12bb75b3.h>
#include <_root.AccountBook_Fus-2ef55d3f.h>
#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.AccountBook_Fus-641d8117.h>
#include <_root.AccountBook_Fus-6f21f71a.h>
#include <_root.AccountBook_Fus-7ed8148.h>
#include <_root.AccountBook_Fus-ce9862f8.h>
#include <_root.AccountBook_Fus-f200852b.h>
#include <_root.AccountBook_myB-36d4be4.h>
#include <_root.ccButton.h>
#include <_root.ListPage.h>
#include <_root.myButton.h>
#include <_root.StatisticPage.h>
#include <_root.StatisticPage.Template.h>
#include <_root.StatisticPage.Template1.h>
#include <_root.StatisticPage.Template2.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.PlaySound.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Resources.Resour-4d20d44f.h>
#include <Fuse.Resources.ResourceObject.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
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
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class StatisticPage :2
// {
// static StatisticPage() :171
static void StatisticPage__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    StatisticPage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 16, uString::Const("router"), uString::Const("FullWindo"), uString::Const("FullWindo2"), uString::Const("temp_eb50"), uString::Const("temp_eb51"), uString::Const("temp_eb52"), uString::Const("temp_eb53"), uString::Const("temp_eb54"), uString::Const("ModalConfirm"), uString::Const("calendar_lbutton"), uString::Const("temp_eb55"), uString::Const("calendar_rbutton"), uString::Const("temp_eb56"), uString::Const("temp_eb58"), uString::Const("ModalConfirm2"), uString::Const("temp_eb60"));
    StatisticPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("IsEnabled"));
    StatisticPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("text"));
    StatisticPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    StatisticPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Color"));
    StatisticPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    StatisticPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("ParentNode"));
    StatisticPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Offset"));
    StatisticPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Limit"));
    StatisticPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("FullWindo"));
    StatisticPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("FullWindo2"));
    StatisticPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("ModalConfirm"));
    StatisticPage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("calendar_lbutton"));
    StatisticPage::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("calendar_rbutton"));
    StatisticPage::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("ModalConfirm2"));
}

static void StatisticPage_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
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
        ::g::Fuse::Navigation::Router_typeof(), offsetof(StatisticPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(StatisticPage, ModalConfirm_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp_text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp3_text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp4_text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp7_text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp8_text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(StatisticPage, ModalConfirm2_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp9_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp11_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(StatisticPage, temp12_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(StatisticPage, calendar_lbutton_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp13_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(StatisticPage, calendar_rbutton_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(StatisticPage, temp14_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(StatisticPage, temp15_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(StatisticPage, temp16_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(StatisticPage, ModalConfirm_ParentNode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(StatisticPage, temp17_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage, temp18_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(StatisticPage, temp19_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(StatisticPage, temp19_Offset_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(StatisticPage, temp19_Limit_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(StatisticPage, temp20_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(StatisticPage, ModalConfirm2_ParentNode_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(StatisticPage, FullWindo), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(StatisticPage, FullWindo2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(StatisticPage, temp_eb50), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(StatisticPage, temp_eb51), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(StatisticPage, temp_eb52), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(StatisticPage, temp_eb53), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(StatisticPage, temp_eb54), 0,
        ::g::Fuse::AlternateRoot_typeof(), offsetof(StatisticPage, ModalConfirm), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(StatisticPage, calendar_lbutton), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(StatisticPage, temp_eb55), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(StatisticPage, calendar_rbutton), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(StatisticPage, temp_eb56), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(StatisticPage, temp_eb58), 0,
        ::g::Fuse::AlternateRoot_typeof(), offsetof(StatisticPage, ModalConfirm2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(StatisticPage, temp_eb60), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(StatisticPage, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&StatisticPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage::__selector13_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* StatisticPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 173;
    options.InterfaceCount = 18;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(StatisticPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("StatisticPage", options);
    type->fp_build_ = StatisticPage_build;
    type->fp_cctor_ = StatisticPage__cctor_4_fn;
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

// public StatisticPage(Fuse.Navigation.Router router) :175
void StatisticPage__ctor_7_fn(StatisticPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_7(router1);
}

// private void InitializeUX() :181
void StatisticPage__InitializeUX_fn(StatisticPage* __this)
{
    __this->InitializeUX();
}

// public StatisticPage New(Fuse.Navigation.Router router) :175
void StatisticPage__New4_fn(::g::Fuse::Navigation::Router* router1, StatisticPage** __retval)
{
    *__retval = StatisticPage::New4(router1);
}

uSStrong<uArray*> StatisticPage::__g_static_nametable1_;
::g::Uno::UX::Selector StatisticPage::__selector0_;
::g::Uno::UX::Selector StatisticPage::__selector1_;
::g::Uno::UX::Selector StatisticPage::__selector2_;
::g::Uno::UX::Selector StatisticPage::__selector3_;
::g::Uno::UX::Selector StatisticPage::__selector4_;
::g::Uno::UX::Selector StatisticPage::__selector5_;
::g::Uno::UX::Selector StatisticPage::__selector6_;
::g::Uno::UX::Selector StatisticPage::__selector7_;
::g::Uno::UX::Selector StatisticPage::__selector8_;
::g::Uno::UX::Selector StatisticPage::__selector9_;
::g::Uno::UX::Selector StatisticPage::__selector10_;
::g::Uno::UX::Selector StatisticPage::__selector11_;
::g::Uno::UX::Selector StatisticPage::__selector12_;
::g::Uno::UX::Selector StatisticPage::__selector13_;

// public StatisticPage(Fuse.Navigation.Router router) [instance] :175
void StatisticPage::ctor_7(::g::Fuse::Navigation::Router* router1)
{
    ctor_6();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :181
void StatisticPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, StatisticPage::__g_static_nametable1_);
    ModalConfirm = ::g::Fuse::AlternateRoot::New2();
    ModalConfirm_IsEnabled_inst = ::g::AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(ModalConfirm, StatisticPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_spcf_total_date"));
    ::g::myButton* temp = ::g::myButton::New6();
    temp_text_inst = ::g::AccountBook_myButton_text_Property::New1(temp, StatisticPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(uString::Const("screen_spcf_datetime_string"));
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp1, StatisticPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("spcf_input_total"));
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp2, StatisticPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("spcf_output_total"));
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_intv_tot_date_left"));
    ::g::myButton* temp3 = ::g::myButton::New6();
    temp3_text_inst = ::g::AccountBook_myButton_text_Property::New1(temp3, StatisticPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("screen_intv_tot_datetime_left_string"));
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_intv_tot_date_right"));
    ::g::myButton* temp4 = ::g::myButton::New6();
    temp4_text_inst = ::g::AccountBook_myButton_text_Property::New1(temp4, StatisticPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(uString::Const("screen_intv_tot_datetime_right_string"));
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    temp5_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp5, StatisticPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(uString::Const("intv_tot_input_total"));
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    temp6_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp6, StatisticPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(uString::Const("intv_tot_output_total"));
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_item_tot_date_left"));
    ::g::myButton* temp7 = ::g::myButton::New6();
    temp7_text_inst = ::g::AccountBook_myButton_text_Property::New1(temp7, StatisticPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(uString::Const("screen_item_tot_datetime_left_string"));
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_item_tot_date_right"));
    ::g::myButton* temp8 = ::g::myButton::New6();
    temp8_text_inst = ::g::AccountBook_myButton_text_Property::New1(temp8, StatisticPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(uString::Const("screen_item_tot_datetime_right_string"));
    ModalConfirm2 = ::g::Fuse::AlternateRoot::New2();
    ModalConfirm2_IsEnabled_inst = ::g::AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(ModalConfirm2, StatisticPage::__selector0_);
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    temp9_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp9, StatisticPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp35 = ::g::Fuse::Reactive::Data::New1(uString::Const("selected_item"));
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New3();
    temp10_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp10, StatisticPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp36 = ::g::Fuse::Reactive::Data::New1(uString::Const("item_tot_input_total"));
    ::g::Fuse::Controls::Text* temp11 = ::g::Fuse::Controls::Text::New3();
    temp11_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp11, StatisticPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp37 = ::g::Fuse::Reactive::Data::New1(uString::Const("item_tot_output_total"));
    ::g::Fuse::Drawing::Stroke* temp12 = ::g::Fuse::Drawing::Stroke::New2();
    temp12_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp12, StatisticPage::__selector3_);
    ::g::Fuse::Reactive::Resource* temp38 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    calendar_lbutton = ::g::Fuse::Controls::Image::New3();
    calendar_lbutton_Color_inst = ::g::AccountBook_FuseControlsImage_Color_Property::New1(calendar_lbutton, StatisticPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp39 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_calendar_lArrow"));
    ::g::Fuse::Controls::Text* temp13 = ::g::Fuse::Controls::Text::New3();
    temp13_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp13, StatisticPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp40 = ::g::Fuse::Reactive::Data::New1(uString::Const("calendarDateTime"));
    calendar_rbutton = ::g::Fuse::Controls::Image::New3();
    calendar_rbutton_Color_inst = ::g::AccountBook_FuseControlsImage_Color_Property::New1(calendar_rbutton, StatisticPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp41 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_calendar_rArrow"));
    ::g::Fuse::Reactive::Each* temp14 = ::g::Fuse::Reactive::Each::New4();
    temp14_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp14, StatisticPage::__selector4_);
    ::g::Fuse::Reactive::Data* temp42 = ::g::Fuse::Reactive::Data::New1(uString::Const("dayNameMatrix"));
    ::g::Fuse::Reactive::Each* temp15 = ::g::Fuse::Reactive::Each::New4();
    temp15_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp15, StatisticPage::__selector4_);
    ::g::Fuse::Reactive::Data* temp43 = ::g::Fuse::Reactive::Data::New1(uString::Const("calendarMatrix"));
    ::g::Fuse::Drawing::Stroke* temp16 = ::g::Fuse::Drawing::Stroke::New2();
    temp16_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp16, StatisticPage::__selector3_);
    ::g::Fuse::Reactive::Resource* temp44 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ::g::Fuse::Reactive::Data* temp45 = ::g::Fuse::Reactive::Data::New1(uString::Const("Ok_click"));
    ModalConfirm_ParentNode_inst = ::g::AccountBook_FuseAlternateRoot_ParentNode_Property::New1(ModalConfirm, StatisticPage::__selector5_);
    ::g::Fuse::Reactive::Resource* temp46 = ::g::Fuse::Reactive::Resource::New1(uString::Const("FullWindow"));
    ::g::Fuse::Drawing::Stroke* temp17 = ::g::Fuse::Drawing::Stroke::New2();
    temp17_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp17, StatisticPage::__selector3_);
    ::g::Fuse::Reactive::Resource* temp47 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ::g::Fuse::Controls::Text* temp18 = ::g::Fuse::Controls::Text::New3();
    temp18_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp18, StatisticPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp48 = ::g::Fuse::Reactive::Data::New1(uString::Const("selected_item"));
    ::g::Fuse::Reactive::Each* temp19 = ::g::Fuse::Reactive::Each::New4();
    temp19_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp19, StatisticPage::__selector4_);
    ::g::Fuse::Reactive::Data* temp49 = ::g::Fuse::Reactive::Data::New1(uString::Const("tempUsageList"));
    temp19_Offset_inst = ::g::AccountBook_FuseReactiveEach_Offset_Property::New1(temp19, StatisticPage::__selector6_);
    ::g::Fuse::Reactive::Data* temp50 = ::g::Fuse::Reactive::Data::New1(uString::Const("offset"));
    temp19_Limit_inst = ::g::AccountBook_FuseReactiveEach_Limit_Property::New1(temp19, StatisticPage::__selector7_);
    ::g::Fuse::Reactive::Data* temp51 = ::g::Fuse::Reactive::Data::New1(uString::Const("limit"));
    ::g::Fuse::Drawing::Stroke* temp20 = ::g::Fuse::Drawing::Stroke::New2();
    temp20_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp20, StatisticPage::__selector3_);
    ::g::Fuse::Reactive::Resource* temp52 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ::g::Fuse::Reactive::Data* temp53 = ::g::Fuse::Reactive::Data::New1(uString::Const("CalculateIntervalItemTotal"));
    ModalConfirm2_ParentNode_inst = ::g::AccountBook_FuseAlternateRoot_ParentNode_Property::New1(ModalConfirm2, StatisticPage::__selector5_);
    ::g::Fuse::Reactive::Resource* temp54 = ::g::Fuse::Reactive::Resource::New1(uString::Const("FullWindow2"));
    FullWindo = ::g::Fuse::Controls::Panel::New3();
    FullWindo2 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::JavaScript* temp55 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Grid* temp56 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Rectangle* temp57 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::ScrollView* temp58 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp59 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp60 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp61 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Gestures::Clicked* temp62 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp63 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    temp_eb50 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp21);
    ::g::Fuse::Reactive::DataBinding* temp64 = ::g::Fuse::Reactive::DataBinding::New1(temp_text_inst, (uObject*)temp22, 3);
    ::g::Fuse::Controls::Rectangle* temp65 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp66 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp67 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp68 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp23, 3);
    ::g::Fuse::Controls::Text* temp69 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp70 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp24, 3);
    ::g::Fuse::Controls::Text* temp71 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp72 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Gestures::Clicked* temp73 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp74 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    temp_eb51 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp25);
    ::g::Fuse::Reactive::DataBinding* temp75 = ::g::Fuse::Reactive::DataBinding::New1(temp3_text_inst, (uObject*)temp26, 3);
    ::g::Fuse::Controls::Text* temp76 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp77 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp78 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    temp_eb52 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp27);
    ::g::Fuse::Reactive::DataBinding* temp79 = ::g::Fuse::Reactive::DataBinding::New1(temp4_text_inst, (uObject*)temp28, 3);
    ::g::Fuse::Controls::Rectangle* temp80 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp81 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp82 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp83 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp29, 3);
    ::g::Fuse::Controls::Text* temp84 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp85 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp30, 3);
    ::g::Fuse::Controls::Text* temp86 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp87 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Gestures::Clicked* temp88 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp89 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    temp_eb53 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp31);
    ::g::Fuse::Reactive::DataBinding* temp90 = ::g::Fuse::Reactive::DataBinding::New1(temp7_text_inst, (uObject*)temp32, 3);
    ::g::Fuse::Controls::Text* temp91 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp92 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp93 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    temp_eb54 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp33);
    ::g::Fuse::Reactive::DataBinding* temp94 = ::g::Fuse::Reactive::DataBinding::New1(temp8_text_inst, (uObject*)temp34, 3);
    ::g::Fuse::Controls::Rectangle* temp95 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp96 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Button* temp97 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Gestures::Clicked* temp98 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp99 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm2_IsEnabled_inst);
    ::g::Fuse::PlaySound* temp100 = ::g::Fuse::PlaySound::New2();
    ::g::Fuse::Reactive::DataBinding* temp101 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp35, 3);
    ::g::Fuse::Controls::Text* temp102 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp103 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp36, 3);
    ::g::Fuse::Controls::Text* temp104 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp105 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Value_inst, (uObject*)temp37, 3);
    ::g::Fuse::Controls::Rectangle* temp106 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp107 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    ::g::Fuse::Resources::ResourceObject* temp108 = ::g::Fuse::Resources::ResourceObject::New2();
    ::g::Fuse::Resources::ResourceObject* temp109 = ::g::Fuse::Resources::ResourceObject::New2();
    ::g::Fuse::Controls::Panel* temp110 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp111 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp112 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp113 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Color_inst, (uObject*)temp38, 3);
    ::g::Fuse::Controls::StackPanel* temp114 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::ccButton* temp115 = ::g::ccButton::New6();
    ::g::Fuse::Gestures::WhilePressed* temp116 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp117 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), calendar_lbutton_Color_inst);
    ::g::Fuse::Effects::DropShadow* temp118 = ::g::Fuse::Effects::DropShadow::New2();
    temp_eb55 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp39);
    ::g::Fuse::Reactive::DataBinding* temp119 = ::g::Fuse::Reactive::DataBinding::New1(temp13_Value_inst, (uObject*)temp40, 3);
    ::g::ccButton* temp120 = ::g::ccButton::New6();
    ::g::Fuse::Gestures::WhilePressed* temp121 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp122 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), calendar_rbutton_Color_inst);
    ::g::Fuse::Effects::DropShadow* temp123 = ::g::Fuse::Effects::DropShadow::New2();
    temp_eb56 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp41);
    ::g::Fuse::Controls::Grid* temp124 = ::g::Fuse::Controls::Grid::New4();
    StatisticPage__Template* temp125 = StatisticPage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp126 = ::g::Fuse::Reactive::DataBinding::New1(temp14_Items_inst, (uObject*)temp42, 3);
    StatisticPage__Template1* temp127 = StatisticPage__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp128 = ::g::Fuse::Reactive::DataBinding::New1(temp15_Items_inst, (uObject*)temp43, 3);
    ::g::Fuse::Controls::Button* temp129 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp130 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp131 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp132 = ::g::Fuse::Reactive::DataBinding::New1(temp16_Color_inst, (uObject*)temp44, 3);
    ::g::Fuse::Gestures::Clicked* temp133 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp134 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    ::g::Fuse::PlaySound* temp135 = ::g::Fuse::PlaySound::New2();
    temp_eb58 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp45);
    ::g::Fuse::Reactive::DataBinding* temp136 = ::g::Fuse::Reactive::DataBinding::New1(ModalConfirm_ParentNode_inst, (uObject*)temp46, 3);
    ::g::Fuse::Controls::Panel* temp137 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp138 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp139 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp140 = ::g::Fuse::Reactive::DataBinding::New1(temp17_Color_inst, (uObject*)temp47, 3);
    ::g::Fuse::Controls::ScrollView* temp141 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp142 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp143 = ::g::Fuse::Reactive::DataBinding::New1(temp18_Value_inst, (uObject*)temp48, 3);
    StatisticPage__Template2* temp144 = StatisticPage__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp145 = ::g::Fuse::Reactive::DataBinding::New1(temp19_Items_inst, (uObject*)temp49, 3);
    ::g::Fuse::Reactive::DataBinding* temp146 = ::g::Fuse::Reactive::DataBinding::New1(temp19_Offset_inst, (uObject*)temp50, 3);
    ::g::Fuse::Reactive::DataBinding* temp147 = ::g::Fuse::Reactive::DataBinding::New1(temp19_Limit_inst, (uObject*)temp51, 3);
    ::g::Fuse::Controls::Button* temp148 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp149 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp150 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp151 = ::g::Fuse::Reactive::DataBinding::New1(temp20_Color_inst, (uObject*)temp52, 3);
    ::g::Fuse::Gestures::Clicked* temp152 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp153 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm2_IsEnabled_inst);
    ::g::Fuse::PlaySound* temp154 = ::g::Fuse::PlaySound::New2();
    temp_eb60 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp53);
    ::g::Fuse::Reactive::DataBinding* temp155 = ::g::Fuse::Reactive::DataBinding::New1(ModalConfirm2_ParentNode_inst, (uObject*)temp54, 3);
    uPtr(FullWindo)->Layer(3);
    uPtr(FullWindo)->Name(StatisticPage::__selector8_);
    uPtr(FullWindo2)->Layer(3);
    uPtr(FullWindo2)->Name(StatisticPage::__selector9_);
    temp55->LineNumber(5);
    temp55->FileName(uString::Const("StatisticPage.ux"));
    temp55->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::StatisticPagef553aba9()));
    temp56->RowCount(100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp58);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp57, 14);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp58, 86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp59);
    temp59->Background(temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp95);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp106);
    temp60->Value(uString::Const("SPECIFIC DATE TOTAL"));
    temp60->FontSize(15.0f);
    temp60->Color(::g::Fuse::Drawing::Colors::White_);
    temp60->Alignment(10);
    temp60->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp60->Font(::g::ListPage::Bold());
    temp61->Orientation(0);
    temp61->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp61->Height(::g::Uno::UX::Size__New1(22.0f, 1));
    temp61->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    temp->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp->textcolor(::g::Fuse::Drawing::Colors::White_);
    temp->fontsize(15);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb50)));
    temp->font(::g::ListPage::Bold());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp63);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp63, uCRef(true));
    temp65->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp65->Color(::g::Fuse::Drawing::Colors::White_);
    temp65->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp65->Height(::g::Uno::UX::Size__New1(50.0f, 4));
    temp65->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp66);
    temp66->RowCount(2);
    temp66->ColumnCount(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    temp67->Value(uString::Const("Input"));
    temp67->FontSize(15.0f);
    temp67->Alignment(10);
    temp67->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp67->Font(::g::ListPage::Bold());
    temp1->FontSize(17.0f);
    temp1->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.0f, 1.0f));
    temp1->Alignment(10);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp1, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp68);
    temp69->Value(uString::Const("Output"));
    temp69->FontSize(15.0f);
    temp69->Alignment(10);
    temp69->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp69->Font(::g::ListPage::Bold());
    temp2->FontSize(17.0f);
    temp2->Color(::g::Uno::Float4__New2(0.9333333f, 0.0f, 0.0f, 1.0f));
    temp2->Alignment(10);
    temp2->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp2, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp70);
    temp71->Value(uString::Const("INTERVAL DATE TOTAL"));
    temp71->FontSize(15.0f);
    temp71->Color(::g::Fuse::Drawing::Colors::White_);
    temp71->Alignment(10);
    temp71->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp71->Font(::g::ListPage::Bold());
    temp72->Orientation(0);
    temp72->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    temp3->textcolor(::g::Fuse::Drawing::Colors::White_);
    temp3->fontsize(15);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp3, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb51)));
    temp3->font(::g::ListPage::Bold());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp73->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp74);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp74, uCRef(true));
    temp76->Value(uString::Const("~"));
    temp76->FontSize(15.0f);
    temp76->Color(::g::Fuse::Drawing::Colors::White_);
    temp76->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp76->Font(::g::ListPage::Bold());
    temp4->textcolor(::g::Fuse::Drawing::Colors::White_);
    temp4->fontsize(15);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp4, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb52)));
    temp4->font(::g::ListPage::Bold());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp79);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp78);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp78, uCRef(true));
    temp80->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp80->Color(::g::Fuse::Drawing::Colors::White_);
    temp80->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp80->Height(::g::Uno::UX::Size__New1(50.0f, 4));
    temp80->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp81);
    temp81->RowCount(2);
    temp81->ColumnCount(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    temp82->Value(uString::Const("Input"));
    temp82->FontSize(15.0f);
    temp82->Alignment(10);
    temp82->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp82->Font(::g::ListPage::Bold());
    temp5->FontSize(17.0f);
    temp5->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.0f, 1.0f));
    temp5->Alignment(10);
    temp5->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp5, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp83);
    temp84->Value(uString::Const("Output"));
    temp84->FontSize(15.0f);
    temp84->Alignment(10);
    temp84->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp84->Font(::g::ListPage::Bold());
    temp6->FontSize(17.0f);
    temp6->Color(::g::Uno::Float4__New2(0.9333333f, 0.0f, 0.0f, 1.0f));
    temp6->Alignment(10);
    temp6->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp6, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp85);
    temp86->Value(uString::Const("ITEM TOTAL"));
    temp86->FontSize(15.0f);
    temp86->Color(::g::Fuse::Drawing::Colors::White_);
    temp86->Alignment(10);
    temp86->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp86->Font(::g::ListPage::Bold());
    temp87->Orientation(0);
    temp87->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    temp7->textcolor(::g::Fuse::Drawing::Colors::White_);
    temp7->fontsize(15);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp7, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb53)));
    temp7->font(::g::ListPage::Bold());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp89);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp89, uCRef(true));
    temp91->Value(uString::Const("~"));
    temp91->FontSize(15.0f);
    temp91->Color(::g::Fuse::Drawing::Colors::White_);
    temp91->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp91->Font(::g::ListPage::Bold());
    temp8->textcolor(::g::Fuse::Drawing::Colors::White_);
    temp8->fontsize(15);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp8, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb54)));
    temp8->font(::g::ListPage::Bold());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp92);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp92->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp93);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp93, uCRef(true));
    temp95->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp95->Color(::g::Fuse::Drawing::Colors::White_);
    temp95->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp95->Height(::g::Uno::UX::Size__New1(50.0f, 4));
    temp95->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp96);
    temp96->RowCount(3);
    temp96->ColumnCount(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp97);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
    temp97->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp97->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp97->Alignment(10);
    temp97->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp97, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp97->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp97->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp100);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp99, uCRef(true));
    temp100->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    temp9->FontSize(15.0f);
    temp9->Alignment(10);
    temp9->Font(::g::ListPage::Bold());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp101);
    temp102->Value(uString::Const("Input"));
    temp102->FontSize(15.0f);
    temp102->Alignment(10);
    temp102->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp102->Font(::g::ListPage::Bold());
    temp10->FontSize(17.0f);
    temp10->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.0f, 1.0f));
    temp10->Alignment(10);
    temp10->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp10, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp103);
    temp104->Value(uString::Const("Output"));
    temp104->FontSize(15.0f);
    temp104->Alignment(10);
    temp104->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp104->Font(::g::ListPage::Bold());
    temp11->FontSize(17.0f);
    temp11->Color(::g::Uno::Float4__New2(0.9333333f, 0.0f, 0.0f, 1.0f));
    temp11->Alignment(10);
    temp11->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp11, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp105);
    temp106->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp106->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    temp108->Key(uString::Const("FullWindow"));
    ::g::Fuse::Resources::ResourceSetter__set_Value_fn(temp108, FullWindo);
    temp109->Key(uString::Const("FullWindow2"));
    ::g::Fuse::Resources::ResourceSetter__set_Value_fn(temp109, FullWindo2);
    uPtr(ModalConfirm)->IsEnabled(false);
    uPtr(ModalConfirm)->Name(StatisticPage::__selector10_);
    uPtr(ModalConfirm)->Node(temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ModalConfirm)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp136);
    temp110->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f));
    temp110->Layer(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp111);
    temp111->Alignment(10);
    temp111->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp111->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp112);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp111->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp114);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp111->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp124);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp111->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp129);
    temp112->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp112->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp112->Width(::g::Uno::UX::Size__New1(250.0f, 1));
    temp112->Height(::g::Uno::UX::Size__New1(300.0f, 1));
    temp112->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp113);
    temp12->Width(2.0f);
    temp114->Orientation(0);
    temp114->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp114->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp120);
    temp115->Alignment(10);
    temp115->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 2.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp115, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb55)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), calendar_lbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp116);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb55);
    uPtr(calendar_lbutton)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(calendar_lbutton)->Name(StatisticPage::__selector11_);
    uPtr(calendar_lbutton)->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::lArrowc76aec54()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp117);
    ::g::Fuse::Animations::Change__set_Value_fn(temp117, uCRef(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f)));
    temp117->Duration(0.05);
    temp117->DurationBack(0.2);
    temp118->Distance(0.02f);
    temp118->Color(::g::Fuse::Drawing::Colors::Black_);
    temp13->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp119);
    temp120->Alignment(10);
    temp120->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 2.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp120, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb56)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), calendar_rbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp123);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb56);
    uPtr(calendar_rbutton)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(calendar_rbutton)->Name(StatisticPage::__selector12_);
    uPtr(calendar_rbutton)->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::rArrowd43ec882()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp122);
    ::g::Fuse::Animations::Change__set_Value_fn(temp122, uCRef(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f)));
    temp122->Duration(0.05);
    temp122->DurationBack(0.2);
    temp123->Distance(0.02f);
    temp123->Color(::g::Fuse::Drawing::Colors::Black_);
    temp124->RowCount(7);
    temp124->ColumnCount(7);
    temp124->Width(::g::Uno::UX::Size__New1(220.0f, 1));
    temp124->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp125);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp126);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp128);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp129, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb58)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp129->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp130);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp129->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp131);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp129->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp129->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb58);
    temp130->Value(uString::Const("OK"));
    temp130->TextAlignment(1);
    temp130->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp130->Alignment(10);
    temp131->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp132);
    temp16->Width(2.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp133->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp134);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp133->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp135);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp134, uCRef(false));
    temp135->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    uPtr(ModalConfirm2)->IsEnabled(false);
    uPtr(ModalConfirm2)->Name(StatisticPage::__selector13_);
    uPtr(ModalConfirm2)->Node(temp137);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ModalConfirm2)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp155);
    temp137->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f));
    temp137->Layer(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp138);
    temp138->Alignment(10);
    temp138->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp139);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp141);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp148);
    temp139->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp139->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp139->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp140);
    temp17->Width(2.0f);
    temp141->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp141->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp142);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp142->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp142->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp143);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp144);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp145);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp146);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp147);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp148, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb60)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp149);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp150);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp152);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb60);
    temp149->Value(uString::Const("OK"));
    temp149->TextAlignment(1);
    temp149->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp149->Alignment(10);
    temp150->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp151);
    temp20->Width(2.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp152->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp153);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp152->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp154);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp153, uCRef(false));
    temp154->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), FullWindo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), FullWindo2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), ModalConfirm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), calendar_lbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), calendar_rbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), ModalConfirm2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), FullWindo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), FullWindo2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp108);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp109);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ModalConfirm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ModalConfirm2);
}

// public StatisticPage New(Fuse.Navigation.Router router) [static] :175
StatisticPage* StatisticPage::New4(::g::Fuse::Navigation::Router* router1)
{
    StatisticPage* obj1 = (StatisticPage*)uNew(StatisticPage_typeof());
    obj1->ctor_7(router1);
    return obj1;
}
// }

} // ::g
