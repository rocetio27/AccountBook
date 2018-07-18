// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/BudgetPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_bundle.h>
#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.AccountBook_Fus-3a6a4ff1.h>
#include <_root.AccountBook_Fus-3cda4468.h>
#include <_root.AccountBook_Fus-5df6c8c5.h>
#include <_root.AccountBook_Fus-641d8117.h>
#include <_root.AccountBook_Fus-6f21f71a.h>
#include <_root.AccountBook_Fus-7ed8148.h>
#include <_root.AccountBook_Fus-ce9862f8.h>
#include <_root.AccountBook_Fus-f200852b.h>
#include <_root.BudgetPage.h>
#include <_root.BudgetPage.Template.h>
#include <_root.BudgetPage.Template1.h>
#include <_root.BudgetPage.Template2.h>
#include <_root.BudgetPage.Template3.h>
#include <_root.BudgetPage.Template4.h>
#include <_root.BudgetPage.Template5.h>
#include <_root.ccButton.h>
#include <_root.wbButtonB.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextView.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.PlaySound.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Match.h>
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
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class BudgetPage :2
// {
// static BudgetPage() :306
static void BudgetPage__cctor_4_fn(uType* __type)
{
    BudgetPage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 9, uString::Const("FullWindo"), uString::Const("temp_eb2"), uString::Const("temp_eb3"), uString::Const("ModalConfirm"), uString::Const("calendar_lbutton"), uString::Const("temp_eb6"), uString::Const("calendar_rbutton"), uString::Const("temp_eb7"), uString::Const("temp_eb9"));
    BudgetPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    BudgetPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("IsEnabled"));
    BudgetPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Text"));
    BudgetPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Color"));
    BudgetPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    BudgetPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ParentNode"));
    BudgetPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("FullWindo"));
    BudgetPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ModalConfirm"));
    BudgetPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("calendar_lbutton"));
    BudgetPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("calendar_rbutton"));
}

static void BudgetPage_build(uType* type)
{
    type->SetDependencies(
        ::g::AccountBook_bundle_typeof(),
        ::g::Fuse::Drawing::Colors_typeof());
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
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(BudgetPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(BudgetPage, ModalConfirm_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp1_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp3_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(BudgetPage, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp9_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp11_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp12_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp13_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(BudgetPage, temp14_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(BudgetPage, calendar_lbutton_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage, temp15_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(BudgetPage, calendar_rbutton_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(BudgetPage, temp16_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(BudgetPage, temp17_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(BudgetPage, temp18_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(BudgetPage, ModalConfirm_ParentNode_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(BudgetPage, FullWindo), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(BudgetPage, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(BudgetPage, temp_eb3), 0,
        ::g::Fuse::AlternateRoot_typeof(), offsetof(BudgetPage, ModalConfirm), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(BudgetPage, calendar_lbutton), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(BudgetPage, temp_eb6), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(BudgetPage, calendar_rbutton), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(BudgetPage, temp_eb7), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(BudgetPage, temp_eb9), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(BudgetPage, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&BudgetPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* BudgetPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 165;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(BudgetPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("BudgetPage", options);
    type->fp_build_ = BudgetPage_build;
    type->fp_ctor_ = (void*)BudgetPage__New5_fn;
    type->fp_cctor_ = BudgetPage__cctor_4_fn;
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

// public BudgetPage() :310
void BudgetPage__ctor_8_fn(BudgetPage* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :314
void BudgetPage__InitializeUX_fn(BudgetPage* __this)
{
    __this->InitializeUX();
}

// public BudgetPage New() :310
void BudgetPage__New5_fn(BudgetPage** __retval)
{
    *__retval = BudgetPage::New5();
}

uSStrong<uArray*> BudgetPage::__g_static_nametable1_;
::g::Uno::UX::Selector BudgetPage::__selector0_;
::g::Uno::UX::Selector BudgetPage::__selector1_;
::g::Uno::UX::Selector BudgetPage::__selector2_;
::g::Uno::UX::Selector BudgetPage::__selector3_;
::g::Uno::UX::Selector BudgetPage::__selector4_;
::g::Uno::UX::Selector BudgetPage::__selector5_;
::g::Uno::UX::Selector BudgetPage::__selector6_;
::g::Uno::UX::Selector BudgetPage::__selector7_;
::g::Uno::UX::Selector BudgetPage::__selector8_;
::g::Uno::UX::Selector BudgetPage::__selector9_;

// public BudgetPage() [instance] :310
void BudgetPage::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :314
void BudgetPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, BudgetPage::__g_static_nametable1_);
    ::g::Fuse::Reactive::Match* temp = ::g::Fuse::Reactive::Match::New2();
    temp_Value_inst = ::g::AccountBook_FuseReactiveMatch_Value_Property::New1(temp, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(uString::Const("title_entrymode"));
    ModalConfirm = ::g::Fuse::AlternateRoot::New2();
    ModalConfirm_IsEnabled_inst = ::g::AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(ModalConfirm, BudgetPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_budget_out_datetime_left"));
    ::g::wbButtonB* temp1 = ::g::wbButtonB::New6();
    temp1_Text_inst = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(temp1, BudgetPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(uString::Const("screen_out_budget_datetime_left_string"));
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp2, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(uString::Const("budget_today_datetime_string"));
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_budget_out_datetime_right"));
    ::g::wbButtonB* temp3 = ::g::wbButtonB::New6();
    temp3_Text_inst = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(temp3, BudgetPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("screen_out_budget_datetime_right_string"));
    ::g::Fuse::Reactive::Match* temp4 = ::g::Fuse::Reactive::Match::New2();
    temp4_Value_inst = ::g::AccountBook_FuseReactiveMatch_Value_Property::New1(temp4, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(uString::Const("goal_output_entrymode"));
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    temp5_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp5, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("now_to_right"));
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    temp6_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp6, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(uString::Const("week_left"));
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    temp7_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp7, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(uString::Const("month_left"));
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New3();
    temp8_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp8, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(uString::Const("year_left"));
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    temp9_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp9, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(uString::Const("day_out_limit"));
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New3();
    temp10_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp10, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(uString::Const("week_out_limit"));
    ::g::Fuse::Controls::Text* temp11 = ::g::Fuse::Controls::Text::New3();
    temp11_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp11, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(uString::Const("month_out_limit"));
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New3();
    temp12_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp12, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(uString::Const("year_out_limit"));
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(uString::Const("screen_out_budget_datetime_left_string"));
    uString* temp35 = uString::Const("\353\266\200\355\204\260 ");
    ::g::Fuse::Reactive::Constant* temp36 = ::g::Fuse::Reactive::Constant::New1(temp35);
    ::g::Fuse::Reactive::Data* temp37 = ::g::Fuse::Reactive::Data::New1(uString::Const("screen_out_budget_datetime_right_string"));
    uString* temp38 = uString::Const("\352\271\214\354\247\200 ");
    ::g::Fuse::Reactive::Constant* temp39 = ::g::Fuse::Reactive::Constant::New1(temp38);
    ::g::Fuse::Reactive::Data* temp40 = ::g::Fuse::Reactive::Data::New1(uString::Const("goal_output"));
    uString* temp41 = uString::Const("\354\235\204 \354\247\200\354\266\234 \353\252\251\355\221\234\354\225\241\354\234\274\353\241\234 \354\204\244\354\240\225\355\225\230\354\205\250\354\212\265\353\213\210\353\213\244. ");
    ::g::Fuse::Reactive::Constant* temp42 = ::g::Fuse::Reactive::Constant::New1(temp41);
    ::g::Fuse::Reactive::Data* temp43 = ::g::Fuse::Reactive::Data::New1(uString::Const("screen_out_budget_datetime_left_string"));
    uString* temp44 = uString::Const("\353\266\200\355\204\260 \353\213\271\354\235\274 \354\235\264\354\240\204\352\271\214\354\247\200 ");
    ::g::Fuse::Reactive::Constant* temp45 = ::g::Fuse::Reactive::Constant::New1(temp44);
    ::g::Fuse::Reactive::Data* temp46 = ::g::Fuse::Reactive::Data::New1(uString::Const("output_so_far"));
    uString* temp47 = uString::Const("\353\247\214\355\201\274\354\235\204 \354\247\200\354\266\234 \355\225\230\354\205\250\354\234\274\353\251\260, \353\252\251\355\221\234 \353\213\254\354\204\261\354\235\204 \354\234\204\355\225\264\354\204\240 \354\230\244\353\212\230\354\235\204 \355\217\254\355\225\250\355\225\234 ");
    ::g::Fuse::Reactive::Constant* temp48 = ::g::Fuse::Reactive::Constant::New1(temp47);
    ::g::Fuse::Reactive::Data* temp49 = ::g::Fuse::Reactive::Data::New1(uString::Const("now_to_right"));
    uString* temp50 = uString::Const("\354\235\274 \353\217\231\354\225\210 \355\225\230\353\243\250\354\227\220 \354\265\234\353\214\200 ");
    ::g::Fuse::Reactive::Constant* temp51 = ::g::Fuse::Reactive::Constant::New1(temp50);
    ::g::Fuse::Reactive::Data* temp52 = ::g::Fuse::Reactive::Data::New1(uString::Const("day_out_limit"));
    uString* temp53 = uString::Const("\353\247\214\355\201\274 \354\202\254\354\232\251\355\225\230\354\205\224\354\225\274 \355\225\251\353\213\210\353\213\244.");
    ::g::Fuse::Reactive::Constant* temp54 = ::g::Fuse::Reactive::Constant::New1(temp53);
    ::g::Fuse::Reactive::Add* temp55 = ::g::Fuse::Reactive::Add::New1(temp52, temp54);
    ::g::Fuse::Reactive::Add* temp56 = ::g::Fuse::Reactive::Add::New1(temp51, temp55);
    ::g::Fuse::Reactive::Add* temp57 = ::g::Fuse::Reactive::Add::New1(temp49, temp56);
    ::g::Fuse::Reactive::Add* temp58 = ::g::Fuse::Reactive::Add::New1(temp48, temp57);
    ::g::Fuse::Reactive::Add* temp59 = ::g::Fuse::Reactive::Add::New1(temp46, temp58);
    ::g::Fuse::Reactive::Add* temp60 = ::g::Fuse::Reactive::Add::New1(temp45, temp59);
    ::g::Fuse::Reactive::Add* temp61 = ::g::Fuse::Reactive::Add::New1(temp43, temp60);
    ::g::Fuse::Reactive::Add* temp62 = ::g::Fuse::Reactive::Add::New1(temp42, temp61);
    ::g::Fuse::Reactive::Add* temp63 = ::g::Fuse::Reactive::Add::New1(temp40, temp62);
    ::g::Fuse::Reactive::Add* temp64 = ::g::Fuse::Reactive::Add::New1(temp39, temp63);
    ::g::Fuse::Reactive::Add* temp65 = ::g::Fuse::Reactive::Add::New1(temp37, temp64);
    ::g::Fuse::Reactive::Add* temp66 = ::g::Fuse::Reactive::Add::New1(temp36, temp65);
    ::g::Fuse::Controls::TextView* temp13 = ::g::Fuse::Controls::TextView::New3();
    temp13_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp13, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Add* temp67 = ::g::Fuse::Reactive::Add::New1(temp34, temp66);
    ::g::Fuse::Drawing::Stroke* temp14 = ::g::Fuse::Drawing::Stroke::New2();
    temp14_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp14, BudgetPage::__selector3_);
    ::g::Fuse::Reactive::Resource* temp68 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    calendar_lbutton = ::g::Fuse::Controls::Image::New3();
    calendar_lbutton_Color_inst = ::g::AccountBook_FuseControlsImage_Color_Property::New1(calendar_lbutton, BudgetPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp69 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_calendar_lArrow"));
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New3();
    temp15_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp15, BudgetPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp70 = ::g::Fuse::Reactive::Data::New1(uString::Const("calendarDateTime"));
    calendar_rbutton = ::g::Fuse::Controls::Image::New3();
    calendar_rbutton_Color_inst = ::g::AccountBook_FuseControlsImage_Color_Property::New1(calendar_rbutton, BudgetPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp71 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_calendar_rArrow"));
    ::g::Fuse::Reactive::Each* temp16 = ::g::Fuse::Reactive::Each::New4();
    temp16_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp16, BudgetPage::__selector4_);
    ::g::Fuse::Reactive::Data* temp72 = ::g::Fuse::Reactive::Data::New1(uString::Const("dayNameMatrix"));
    ::g::Fuse::Reactive::Each* temp17 = ::g::Fuse::Reactive::Each::New4();
    temp17_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp17, BudgetPage::__selector4_);
    ::g::Fuse::Reactive::Data* temp73 = ::g::Fuse::Reactive::Data::New1(uString::Const("calendarMatrix"));
    ::g::Fuse::Drawing::Stroke* temp18 = ::g::Fuse::Drawing::Stroke::New2();
    temp18_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp18, BudgetPage::__selector3_);
    ::g::Fuse::Reactive::Resource* temp74 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ::g::Fuse::Reactive::Data* temp75 = ::g::Fuse::Reactive::Data::New1(uString::Const("Ok_click"));
    ModalConfirm_ParentNode_inst = ::g::AccountBook_FuseAlternateRoot_ParentNode_Property::New1(ModalConfirm, BudgetPage::__selector5_);
    ::g::Fuse::Reactive::Resource* temp76 = ::g::Fuse::Reactive::Resource::New1(uString::Const("FullWindow"));
    FullWindo = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::JavaScript* temp77 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp78 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp79 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp80 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp81 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp82 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Grid* temp83 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp84 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::Case* temp85 = ::g::Fuse::Reactive::Case::New1();
    BudgetPage__Template* temp86 = BudgetPage__Template::New2(this, this);
    ::g::Fuse::Reactive::Case* temp87 = ::g::Fuse::Reactive::Case::New1();
    BudgetPage__Template1* temp88 = BudgetPage__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp89 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp19, 3);
    ::g::Fuse::Gestures::Clicked* temp90 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp91 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp20);
    ::g::Fuse::Reactive::DataBinding* temp92 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Text_inst, (uObject*)temp21, 3);
    ::g::Fuse::Controls::Rectangle* temp93 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp94 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp22, 3);
    ::g::Fuse::Gestures::Clicked* temp95 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp96 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp23);
    ::g::Fuse::Reactive::DataBinding* temp97 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Text_inst, (uObject*)temp24, 3);
    ::g::Fuse::Controls::Text* temp98 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::Case* temp99 = ::g::Fuse::Reactive::Case::New1();
    BudgetPage__Template2* temp100 = BudgetPage__Template2::New2(this, this);
    ::g::Fuse::Reactive::Case* temp101 = ::g::Fuse::Reactive::Case::New1();
    BudgetPage__Template3* temp102 = BudgetPage__Template3::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp103 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp25, 3);
    ::g::Fuse::Controls::Panel* temp104 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp105 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp106 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Grid* temp107 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp108 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp109 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp110 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp111 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp112 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp113 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Rectangle* temp114 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp115 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp116 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp117 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp118 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp119 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp120 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp121 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp122 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp123 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp124 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp125 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp126 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Rectangle* temp127 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp128 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp26, 3);
    ::g::Fuse::Controls::Rectangle* temp129 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp130 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp131 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp27, 3);
    ::g::Fuse::Controls::Rectangle* temp132 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp133 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp134 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp28, 3);
    ::g::Fuse::Controls::Rectangle* temp135 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp136 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp29, 3);
    ::g::Fuse::Controls::Panel* temp137 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp138 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp139 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Rectangle* temp140 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp141 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp30, 3);
    ::g::Fuse::Controls::Rectangle* temp142 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp143 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp144 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp31, 3);
    ::g::Fuse::Controls::Rectangle* temp145 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp146 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp147 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Value_inst, (uObject*)temp32, 3);
    ::g::Fuse::Controls::Rectangle* temp148 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp149 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Value_inst, (uObject*)temp33, 3);
    ::g::Fuse::Reactive::DataBinding* temp150 = ::g::Fuse::Reactive::DataBinding::New1(temp13_Value_inst, (uObject*)temp67, 3);
    ::g::Fuse::Resources::ResourceObject* temp151 = ::g::Fuse::Resources::ResourceObject::New2();
    ::g::Fuse::Controls::Panel* temp152 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp153 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp154 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp155 = ::g::Fuse::Reactive::DataBinding::New1(temp14_Color_inst, (uObject*)temp68, 3);
    ::g::Fuse::Controls::StackPanel* temp156 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::ccButton* temp157 = ::g::ccButton::New6();
    ::g::Fuse::Gestures::WhilePressed* temp158 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp159 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), calendar_lbutton_Color_inst);
    ::g::Fuse::Effects::DropShadow* temp160 = ::g::Fuse::Effects::DropShadow::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp69);
    ::g::Fuse::Reactive::DataBinding* temp161 = ::g::Fuse::Reactive::DataBinding::New1(temp15_Value_inst, (uObject*)temp70, 3);
    ::g::ccButton* temp162 = ::g::ccButton::New6();
    ::g::Fuse::Gestures::WhilePressed* temp163 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp164 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), calendar_rbutton_Color_inst);
    ::g::Fuse::Effects::DropShadow* temp165 = ::g::Fuse::Effects::DropShadow::New2();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp71);
    ::g::Fuse::Controls::Grid* temp166 = ::g::Fuse::Controls::Grid::New4();
    BudgetPage__Template4* temp167 = BudgetPage__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp168 = ::g::Fuse::Reactive::DataBinding::New1(temp16_Items_inst, (uObject*)temp72, 3);
    BudgetPage__Template5* temp169 = BudgetPage__Template5::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp170 = ::g::Fuse::Reactive::DataBinding::New1(temp17_Items_inst, (uObject*)temp73, 3);
    ::g::Fuse::Controls::Button* temp171 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp172 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp173 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp174 = ::g::Fuse::Reactive::DataBinding::New1(temp18_Color_inst, (uObject*)temp74, 3);
    ::g::Fuse::Gestures::Clicked* temp175 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp176 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    ::g::Fuse::PlaySound* temp177 = ::g::Fuse::PlaySound::New2();
    temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp75);
    ::g::Fuse::Reactive::DataBinding* temp178 = ::g::Fuse::Reactive::DataBinding::New1(ModalConfirm_ParentNode_inst, (uObject*)temp76, 3);
    Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    Width(::g::Uno::UX::Size__New1(100.0f, 4));
    Height(::g::Uno::UX::Size__New1(86.0f, 4));
    Alignment(14);
    SourceLineNumber(1);
    SourceFileName(uString::Const("BudgetPage.ux"));
    uPtr(FullWindo)->Layer(3);
    uPtr(FullWindo)->Name(BudgetPage::__selector6_);
    uPtr(FullWindo)->SourceLineNumber(2);
    uPtr(FullWindo)->SourceFileName(uString::Const("BudgetPage.ux"));
    temp77->LineNumber(19);
    temp77->FileName(uString::Const("BudgetPage.ux"));
    temp77->SourceLineNumber(19);
    temp77->SourceFileName(uString::Const("BudgetPage.ux"));
    temp77->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::BudgetPagecc02de38()));
    temp78->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 0.0f));
    temp78->SourceLineNumber(21);
    temp78->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp79);
    temp79->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp79->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp79->SourceLineNumber(22);
    temp79->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    temp80->SourceLineNumber(23);
    temp80->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp83);
    temp81->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp81->SourceLineNumber(24);
    temp81->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp82);
    temp82->Color(::g::Fuse::Drawing::Colors::White());
    temp82->Width(2.0f);
    temp83->RowCount(5);
    temp83->ColumnCount(3);
    temp83->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp83->SourceLineNumber(27);
    temp83->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp93);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    temp84->Value(uString::Const("TITLE"));
    temp84->Color(::g::Fuse::Drawing::Colors::Black());
    temp84->Alignment(10);
    temp84->SourceLineNumber(28);
    temp84->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp84, 3);
    temp->SourceLineNumber(29);
    temp->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Cases()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL)), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Cases()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL)), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp89);
    temp85->Bool(false);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp86);
    temp87->Bool(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp88);
    temp19->SourceLineNumber(29);
    temp19->SourceFileName(uString::Const("BudgetPage.ux"));
    temp1->SourceLineNumber(40);
    temp1->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp1, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp92);
    temp90->SourceLineNumber(41);
    temp90->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp91);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp91, uCRef(true));
    temp91->SourceLineNumber(42);
    temp91->SourceFileName(uString::Const("BudgetPage.ux"));
    temp20->SourceLineNumber(40);
    temp20->SourceFileName(uString::Const("BudgetPage.ux"));
    temp21->SourceLineNumber(40);
    temp21->SourceFileName(uString::Const("BudgetPage.ux"));
    temp93->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp93->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp93->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp93->SourceLineNumber(45);
    temp93->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    temp2->Alignment(10);
    temp2->SourceLineNumber(46);
    temp2->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp94);
    temp22->SourceLineNumber(46);
    temp22->SourceFileName(uString::Const("BudgetPage.ux"));
    temp3->SourceLineNumber(48);
    temp3->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp3, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp95);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp97);
    temp95->SourceLineNumber(49);
    temp95->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp96);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp96, uCRef(true));
    temp96->SourceLineNumber(50);
    temp96->SourceFileName(uString::Const("BudgetPage.ux"));
    temp23->SourceLineNumber(48);
    temp23->SourceFileName(uString::Const("BudgetPage.ux"));
    temp24->SourceLineNumber(48);
    temp24->SourceFileName(uString::Const("BudgetPage.ux"));
    temp98->Value(uString::Const("GOAL"));
    temp98->Color(::g::Fuse::Drawing::Colors::Black());
    temp98->Alignment(10);
    temp98->SourceLineNumber(53);
    temp98->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp98, 3);
    temp4->SourceLineNumber(54);
    temp4->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Cases()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL)), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Cases()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL)), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp103);
    temp99->Bool(false);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp99->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp100);
    temp101->Bool(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp102);
    temp25->SourceLineNumber(54);
    temp25->SourceFileName(uString::Const("BudgetPage.ux"));
    temp104->SourceLineNumber(68);
    temp104->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp107);
    temp105->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp105->SourceLineNumber(69);
    temp105->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp105->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp106);
    temp106->Color(::g::Fuse::Drawing::Colors::White());
    temp106->Width(2.0f);
    temp107->RowCount(5);
    temp107->ColumnCount(5);
    temp107->Height(::g::Uno::UX::Size__New1(160.0f, 1));
    temp107->SourceLineNumber(72);
    temp107->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp107->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp108);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp107->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp109);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp107->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp107->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp107->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp124);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp107->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp137);
    temp108->SourceLineNumber(73);
    temp108->SourceFileName(uString::Const("BudgetPage.ux"));
    temp109->Value(uString::Const("remained period"));
    temp109->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp109->Alignment(10);
    temp109->SourceLineNumber(74);
    temp109->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp109, 2);
    temp110->Value(uString::Const("unit output limit"));
    temp110->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp110->Alignment(10);
    temp110->SourceLineNumber(75);
    temp110->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp110, 2);
    temp111->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp111->SourceLineNumber(77);
    temp111->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp111, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp111->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp112);
    temp112->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp112->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp112->SourceLineNumber(78);
    temp112->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp113);
    temp113->RowCount(4);
    temp113->SourceLineNumber(79);
    temp113->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp113->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp114);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp113->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp117);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp113->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp120);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp113->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp123);
    temp114->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp114->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp114->SourceLineNumber(80);
    temp114->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp116);
    temp115->Value(uString::Const("day"));
    temp115->Color(::g::Fuse::Drawing::Colors::Black());
    temp115->Alignment(10);
    temp115->SourceLineNumber(81);
    temp115->SourceFileName(uString::Const("BudgetPage.ux"));
    temp116->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp116->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp116->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp116->Alignment(14);
    temp116->SourceLineNumber(82);
    temp116->SourceFileName(uString::Const("BudgetPage.ux"));
    temp117->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp117->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp117->SourceLineNumber(84);
    temp117->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp119);
    temp118->Value(uString::Const("week"));
    temp118->Color(::g::Fuse::Drawing::Colors::Black());
    temp118->Alignment(10);
    temp118->SourceLineNumber(85);
    temp118->SourceFileName(uString::Const("BudgetPage.ux"));
    temp119->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp119->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp119->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp119->Alignment(14);
    temp119->SourceLineNumber(86);
    temp119->SourceFileName(uString::Const("BudgetPage.ux"));
    temp120->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp120->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp120->SourceLineNumber(88);
    temp120->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp122);
    temp121->Value(uString::Const("month"));
    temp121->Color(::g::Fuse::Drawing::Colors::Black());
    temp121->Alignment(10);
    temp121->SourceLineNumber(89);
    temp121->SourceFileName(uString::Const("BudgetPage.ux"));
    temp122->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp122->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp122->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp122->Alignment(14);
    temp122->SourceLineNumber(90);
    temp122->SourceFileName(uString::Const("BudgetPage.ux"));
    temp123->Value(uString::Const("year"));
    temp123->Color(::g::Fuse::Drawing::Colors::Black());
    temp123->Alignment(10);
    temp123->SourceLineNumber(92);
    temp123->SourceFileName(uString::Const("BudgetPage.ux"));
    temp124->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp124->SourceLineNumber(96);
    temp124->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp124, 4);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp124, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp125);
    temp125->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp125->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp125->SourceLineNumber(97);
    temp125->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp125->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp126);
    temp126->RowCount(4);
    temp126->SourceLineNumber(98);
    temp126->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp130);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    temp127->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp127->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp127->SourceLineNumber(99);
    temp127->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp127->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp127->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp129);
    temp5->Color(::g::Fuse::Drawing::Colors::Black());
    temp5->Alignment(10);
    temp5->SourceLineNumber(100);
    temp5->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp128);
    temp26->SourceLineNumber(100);
    temp26->SourceFileName(uString::Const("BudgetPage.ux"));
    temp129->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp129->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp129->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp129->Alignment(14);
    temp129->SourceLineNumber(101);
    temp129->SourceFileName(uString::Const("BudgetPage.ux"));
    temp130->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp130->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp130->SourceLineNumber(103);
    temp130->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp132);
    temp6->Color(::g::Fuse::Drawing::Colors::Black());
    temp6->Alignment(10);
    temp6->SourceLineNumber(104);
    temp6->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp131);
    temp27->SourceLineNumber(104);
    temp27->SourceFileName(uString::Const("BudgetPage.ux"));
    temp132->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp132->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp132->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp132->Alignment(14);
    temp132->SourceLineNumber(105);
    temp132->SourceFileName(uString::Const("BudgetPage.ux"));
    temp133->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp133->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp133->SourceLineNumber(107);
    temp133->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp133->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp133->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp135);
    temp7->Color(::g::Fuse::Drawing::Colors::Black());
    temp7->Alignment(10);
    temp7->SourceLineNumber(108);
    temp7->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp134);
    temp28->SourceLineNumber(108);
    temp28->SourceFileName(uString::Const("BudgetPage.ux"));
    temp135->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp135->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp135->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp135->Alignment(14);
    temp135->SourceLineNumber(109);
    temp135->SourceFileName(uString::Const("BudgetPage.ux"));
    temp8->Color(::g::Fuse::Drawing::Colors::Black());
    temp8->Alignment(10);
    temp8->SourceLineNumber(111);
    temp8->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp136);
    temp29->SourceLineNumber(111);
    temp29->SourceFileName(uString::Const("BudgetPage.ux"));
    temp137->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp137->SourceLineNumber(116);
    temp137->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp137, 4);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp137, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp138);
    temp138->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp138->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp138->SourceLineNumber(117);
    temp138->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp139);
    temp139->RowCount(4);
    temp139->SourceLineNumber(118);
    temp139->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp140);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp143);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp146);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp12);
    temp140->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp140->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp140->SourceLineNumber(119);
    temp140->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp142);
    temp9->Color(::g::Uno::Float4__New2(0.9333333f, 0.0f, 0.0f, 1.0f));
    temp9->Alignment(10);
    temp9->SourceLineNumber(120);
    temp9->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp141);
    temp30->SourceLineNumber(120);
    temp30->SourceFileName(uString::Const("BudgetPage.ux"));
    temp142->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp142->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp142->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp142->Alignment(14);
    temp142->SourceLineNumber(121);
    temp142->SourceFileName(uString::Const("BudgetPage.ux"));
    temp143->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp143->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp143->SourceLineNumber(123);
    temp143->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp145);
    temp10->Color(::g::Uno::Float4__New2(0.9333333f, 0.0f, 0.0f, 1.0f));
    temp10->Alignment(10);
    temp10->SourceLineNumber(124);
    temp10->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp144);
    temp31->SourceLineNumber(124);
    temp31->SourceFileName(uString::Const("BudgetPage.ux"));
    temp145->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp145->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp145->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp145->Alignment(14);
    temp145->SourceLineNumber(125);
    temp145->SourceFileName(uString::Const("BudgetPage.ux"));
    temp146->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp146->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp146->SourceLineNumber(127);
    temp146->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp148);
    temp11->Color(::g::Uno::Float4__New2(0.9333333f, 0.0f, 0.0f, 1.0f));
    temp11->Alignment(10);
    temp11->SourceLineNumber(128);
    temp11->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp147);
    temp32->SourceLineNumber(128);
    temp32->SourceFileName(uString::Const("BudgetPage.ux"));
    temp148->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp148->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp148->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp148->Alignment(14);
    temp148->SourceLineNumber(129);
    temp148->SourceFileName(uString::Const("BudgetPage.ux"));
    temp12->Color(::g::Uno::Float4__New2(0.9333333f, 0.0f, 0.0f, 1.0f));
    temp12->Alignment(10);
    temp12->SourceLineNumber(131);
    temp12->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp149);
    temp33->SourceLineNumber(131);
    temp33->SourceFileName(uString::Const("BudgetPage.ux"));
    temp13->TextWrapping(1);
    temp13->SourceLineNumber(137);
    temp13->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp150);
    temp67->SourceLineNumber(137);
    temp67->SourceFileName(uString::Const("BudgetPage.ux"));
    temp34->SourceLineNumber(137);
    temp34->SourceFileName(uString::Const("BudgetPage.ux"));
    temp66->SourceLineNumber(137);
    temp66->SourceFileName(uString::Const("BudgetPage.ux"));
    temp36->SourceLineNumber(137);
    temp36->SourceFileName(uString::Const("BudgetPage.ux"));
    temp65->SourceLineNumber(137);
    temp65->SourceFileName(uString::Const("BudgetPage.ux"));
    temp37->SourceLineNumber(137);
    temp37->SourceFileName(uString::Const("BudgetPage.ux"));
    temp64->SourceLineNumber(137);
    temp64->SourceFileName(uString::Const("BudgetPage.ux"));
    temp39->SourceLineNumber(137);
    temp39->SourceFileName(uString::Const("BudgetPage.ux"));
    temp63->SourceLineNumber(137);
    temp63->SourceFileName(uString::Const("BudgetPage.ux"));
    temp40->SourceLineNumber(137);
    temp40->SourceFileName(uString::Const("BudgetPage.ux"));
    temp62->SourceLineNumber(137);
    temp62->SourceFileName(uString::Const("BudgetPage.ux"));
    temp42->SourceLineNumber(137);
    temp42->SourceFileName(uString::Const("BudgetPage.ux"));
    temp61->SourceLineNumber(137);
    temp61->SourceFileName(uString::Const("BudgetPage.ux"));
    temp43->SourceLineNumber(137);
    temp43->SourceFileName(uString::Const("BudgetPage.ux"));
    temp60->SourceLineNumber(137);
    temp60->SourceFileName(uString::Const("BudgetPage.ux"));
    temp45->SourceLineNumber(137);
    temp45->SourceFileName(uString::Const("BudgetPage.ux"));
    temp59->SourceLineNumber(137);
    temp59->SourceFileName(uString::Const("BudgetPage.ux"));
    temp46->SourceLineNumber(137);
    temp46->SourceFileName(uString::Const("BudgetPage.ux"));
    temp58->SourceLineNumber(137);
    temp58->SourceFileName(uString::Const("BudgetPage.ux"));
    temp48->SourceLineNumber(137);
    temp48->SourceFileName(uString::Const("BudgetPage.ux"));
    temp57->SourceLineNumber(137);
    temp57->SourceFileName(uString::Const("BudgetPage.ux"));
    temp49->SourceLineNumber(137);
    temp49->SourceFileName(uString::Const("BudgetPage.ux"));
    temp56->SourceLineNumber(137);
    temp56->SourceFileName(uString::Const("BudgetPage.ux"));
    temp51->SourceLineNumber(137);
    temp51->SourceFileName(uString::Const("BudgetPage.ux"));
    temp55->SourceLineNumber(137);
    temp55->SourceFileName(uString::Const("BudgetPage.ux"));
    temp52->SourceLineNumber(137);
    temp52->SourceFileName(uString::Const("BudgetPage.ux"));
    temp54->SourceLineNumber(137);
    temp54->SourceFileName(uString::Const("BudgetPage.ux"));
    temp151->Key(uString::Const("FullWindow"));
    temp151->SourceLineNumber(140);
    temp151->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Resources::ResourceSetter__set_Value_fn(temp151, FullWindo);
    uPtr(ModalConfirm)->IsEnabled(false);
    uPtr(ModalConfirm)->Name(BudgetPage::__selector7_);
    uPtr(ModalConfirm)->SourceLineNumber(141);
    uPtr(ModalConfirm)->SourceFileName(uString::Const("BudgetPage.ux"));
    uPtr(ModalConfirm)->Node(temp152);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ModalConfirm)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp178);
    temp152->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f));
    temp152->Layer(3);
    temp152->SourceLineNumber(142);
    temp152->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp152->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp153);
    temp153->Alignment(10);
    temp153->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp153->SourceLineNumber(143);
    temp153->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp154);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp156);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp166);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp171);
    temp154->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp154->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp154->Width(::g::Uno::UX::Size__New1(250.0f, 1));
    temp154->Height(::g::Uno::UX::Size__New1(300.0f, 1));
    temp154->Layer(1);
    temp154->SourceLineNumber(144);
    temp154->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp155);
    temp14->Width(2.0f);
    temp68->SourceLineNumber(145);
    temp68->SourceFileName(uString::Const("BudgetPage.ux"));
    temp156->Orientation(0);
    temp156->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp156->Alignment(10);
    temp156->SourceLineNumber(147);
    temp156->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp156->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp157);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp156->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp156->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp162);
    temp157->Alignment(10);
    temp157->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 2.0f, 0.0f));
    temp157->SourceLineNumber(148);
    temp157->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp157, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), calendar_lbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp158);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp160);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb6);
    uPtr(calendar_lbutton)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(calendar_lbutton)->Name(BudgetPage::__selector8_);
    uPtr(calendar_lbutton)->SourceLineNumber(149);
    uPtr(calendar_lbutton)->SourceFileName(uString::Const("BudgetPage.ux"));
    uPtr(calendar_lbutton)->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::lArrowc76aec54()));
    temp158->SourceLineNumber(150);
    temp158->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp159);
    ::g::Fuse::Animations::Change__set_Value_fn(temp159, uCRef(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f)));
    temp159->Duration(0.05);
    temp159->DurationBack(0.2);
    temp160->Distance(0.02f);
    temp160->Color(::g::Fuse::Drawing::Colors::Black());
    temp160->SourceLineNumber(153);
    temp160->SourceFileName(uString::Const("BudgetPage.ux"));
    temp69->SourceLineNumber(148);
    temp69->SourceFileName(uString::Const("BudgetPage.ux"));
    temp15->Alignment(10);
    temp15->SourceLineNumber(155);
    temp15->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp161);
    temp70->SourceLineNumber(155);
    temp70->SourceFileName(uString::Const("BudgetPage.ux"));
    temp162->Alignment(10);
    temp162->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 2.0f, 0.0f));
    temp162->SourceLineNumber(156);
    temp162->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp162, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), calendar_rbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp163);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp165);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb7);
    uPtr(calendar_rbutton)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(calendar_rbutton)->Name(BudgetPage::__selector9_);
    uPtr(calendar_rbutton)->SourceLineNumber(157);
    uPtr(calendar_rbutton)->SourceFileName(uString::Const("BudgetPage.ux"));
    uPtr(calendar_rbutton)->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::rArrowd43ec882()));
    temp163->SourceLineNumber(158);
    temp163->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp163->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp164);
    ::g::Fuse::Animations::Change__set_Value_fn(temp164, uCRef(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f)));
    temp164->Duration(0.05);
    temp164->DurationBack(0.2);
    temp165->Distance(0.02f);
    temp165->Color(::g::Fuse::Drawing::Colors::Black());
    temp165->SourceLineNumber(161);
    temp165->SourceFileName(uString::Const("BudgetPage.ux"));
    temp71->SourceLineNumber(156);
    temp71->SourceFileName(uString::Const("BudgetPage.ux"));
    temp166->RowCount(7);
    temp166->ColumnCount(7);
    temp166->Width(::g::Uno::UX::Size__New1(220.0f, 1));
    temp166->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    temp166->SourceLineNumber(164);
    temp166->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp166->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp166->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp17);
    temp16->SourceLineNumber(165);
    temp16->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp167);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp168);
    temp72->SourceLineNumber(165);
    temp72->SourceFileName(uString::Const("BudgetPage.ux"));
    temp17->SourceLineNumber(168);
    temp17->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp169);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp170);
    temp73->SourceLineNumber(168);
    temp73->SourceFileName(uString::Const("BudgetPage.ux"));
    temp171->SourceLineNumber(176);
    temp171->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp171, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb9)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp172);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp173);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp175);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb9);
    temp172->Value(uString::Const("OK"));
    temp172->TextAlignment(1);
    temp172->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp172->Alignment(10);
    temp172->SourceLineNumber(177);
    temp172->SourceFileName(uString::Const("BudgetPage.ux"));
    temp173->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp173->SourceLineNumber(178);
    temp173->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp173->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp173->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp174);
    temp18->Width(2.0f);
    temp74->SourceLineNumber(179);
    temp74->SourceFileName(uString::Const("BudgetPage.ux"));
    temp175->SourceLineNumber(181);
    temp175->SourceFileName(uString::Const("BudgetPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp176);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp177);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp176, uCRef(false));
    temp176->SourceLineNumber(182);
    temp176->SourceFileName(uString::Const("BudgetPage.ux"));
    temp177->SourceLineNumber(183);
    temp177->SourceFileName(uString::Const("BudgetPage.ux"));
    temp177->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    temp75->SourceLineNumber(176);
    temp75->SourceFileName(uString::Const("BudgetPage.ux"));
    temp76->SourceLineNumber(141);
    temp76->SourceFileName(uString::Const("BudgetPage.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), FullWindo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), ModalConfirm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), calendar_lbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), calendar_rbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), FullWindo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp151);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ModalConfirm);
}

// public BudgetPage New() [static] :310
BudgetPage* BudgetPage::New5()
{
    BudgetPage* obj1 = (BudgetPage*)uNew(BudgetPage_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
