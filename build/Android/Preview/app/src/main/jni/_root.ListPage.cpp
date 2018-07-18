// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_bundle.h>
#include <_root.AccountBook_Edi-a16f2ba2.h>
#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.AccountBook_Fus-3a6a4ff1.h>
#include <_root.AccountBook_Fus-5df6c8c5.h>
#include <_root.AccountBook_Fus-641d8117.h>
#include <_root.AccountBook_Fus-6f21f71a.h>
#include <_root.AccountBook_Fus-7ed8148.h>
#include <_root.AccountBook_Fus-9d2d7d8d.h>
#include <_root.AccountBook_Fus-ce9862f8.h>
#include <_root.AccountBook_Fus-f200852b.h>
#include <_root.ccButton.h>
#include <_root.EditButton.h>
#include <_root.EditTextBox.h>
#include <_root.EditTitleText.h>
#include <_root.ListPage.h>
#include <_root.ListPage.Template.h>
#include <_root.ListPage.Template1.h>
#include <_root.ListPage.Template2.h>
#include <_root.ListPage.Template3.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ClientPanel.h>
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
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
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
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Match.h>
#include <Fuse.Reactive.Member.h>
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
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
#include <Uno.UX.ValueChangedHandler-1.h>

namespace g{

// public partial sealed class ListPage :2
// {
// static ListPage() :675
static void ListPage__cctor_4_fn(uType* __type)
{
    ::g::AccountBook_bundle_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    ListPage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 30, uString::Const("EditOrDeletePopup"), uString::Const("ListEditPopup"), uString::Const("YearMonthEditPopup"), uString::Const("router"), uString::Const("cash"), uString::Const("temp_eb17"), uString::Const("card"), uString::Const("temp_eb18"), uString::Const("yearmonth"), uString::Const("lbutton"), uString::Const("temp_eb19"), uString::Const("rbutton"), uString::Const("temp_eb20"), uString::Const("ModalConfirm"), uString::Const("temp_eb25"), uString::Const("temp_eb26"), uString::Const("temp_eb27"), uString::Const("ModalConfirm2"), uString::Const("temp_eb28"), uString::Const("temp_eb29"), uString::Const("temp_eb30"), uString::Const("temp_eb31"), uString::Const("temp_eb32"), uString::Const("temp_eb33"), uString::Const("temp_eb34"), uString::Const("temp_eb35"), uString::Const("ModalConfirm3"), uString::Const("temp_eb36"), uString::Const("temp_eb37"), uString::Const("temp_eb38"));
    ListPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    ListPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Color"));
    ListPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("IsEnabled"));
    ListPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    ListPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ParentNode"));
    ListPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("text"));
    ListPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("EditOrDeletePopup"));
    ListPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ListEditPopup"));
    ListPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("YearMonthEditPopup"));
    ListPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("cash"));
    ListPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("card"));
    ListPage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("yearmonth"));
    ListPage::__selector12_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("lbutton"));
    ListPage::__selector13_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("rbutton"));
    ListPage::__selector14_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ModalConfirm"));
    ListPage::__selector15_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ModalConfirm2"));
    ListPage::__selector16_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ModalConfirm3"));
    ListPage::Bold_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::NotoSansBoldd01b0e45()));
    ListPage::lArrow_ = ::g::Fuse::Controls::Image::New3();
    ListPage::rArrow_ = ::g::Fuse::Controls::Image::New3();
    ::g::Uno::UX::Resource::SetGlobalKey(ListPage::Bold_, uString::Const("Bold"));
    uPtr(ListPage::lArrow_)->SourceLineNumber(7);
    uPtr(ListPage::lArrow_)->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::UX::Resource::SetGlobalKey(ListPage::lArrow_, uString::Const("lArrow"));
    uPtr(ListPage::lArrow_)->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::lArrowc76aec54()));
    uPtr(ListPage::rArrow_)->SourceLineNumber(8);
    uPtr(ListPage::rArrow_)->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::UX::Resource::SetGlobalKey(ListPage::rArrow_, uString::Const("rArrow"));
    uPtr(ListPage::rArrow_)->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::rArrowd43ec882()));
}

static void ListPage_build(uType* type)
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
    type->SetFields(120,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(ListPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ListPage, cash_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ListPage, card_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ListPage, lbutton_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(ListPage, ModalConfirm3_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(ListPage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(ListPage, temp4_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(ListPage, ModalConfirm_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ListPage, temp5_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(ListPage, ModalConfirm2_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(ListPage, ModalConfirm_ParentNode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp9_text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp11_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp12_text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp13_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp14_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp15_text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(ListPage, ModalConfirm2_ParentNode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp16_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage, temp17_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(ListPage, ModalConfirm3_ParentNode_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(ListPage, EditOrDeletePopup), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(ListPage, ListEditPopup), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(ListPage, YearMonthEditPopup), 0,
        ::g::ccButton_typeof(), offsetof(ListPage, cash), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb17), 0,
        ::g::ccButton_typeof(), offsetof(ListPage, card), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb18), 0,
        ::g::Fuse::Controls::Button_typeof(), offsetof(ListPage, yearmonth), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(ListPage, lbutton), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb19), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(ListPage, rbutton), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb20), 0,
        ::g::Fuse::AlternateRoot_typeof(), offsetof(ListPage, ModalConfirm), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb25), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb26), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb27), 0,
        ::g::Fuse::AlternateRoot_typeof(), offsetof(ListPage, ModalConfirm2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb28), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb29), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb30), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb31), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb32), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb33), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb34), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb35), 0,
        ::g::Fuse::AlternateRoot_typeof(), offsetof(ListPage, ModalConfirm3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb36), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb37), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage, temp_eb38), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(ListPage, __g_nametable1), 0,
        ::g::Fuse::Font_typeof(), (uintptr_t)&ListPage::Bold_, uFieldFlagsStatic,
        ::g::Fuse::Controls::Image_typeof(), (uintptr_t)&ListPage::lArrow_, uFieldFlagsStatic,
        ::g::Fuse::Controls::Image_typeof(), (uintptr_t)&ListPage::rArrow_, uFieldFlagsStatic,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&ListPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage::__selector16_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("Bold", 178),
        new uField("lArrow", 179),
        new uField("rArrow", 180));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ListPage__New4_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* ListPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 199;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ListPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ListPage", options);
    type->fp_build_ = ListPage_build;
    type->fp_cctor_ = ListPage__cctor_4_fn;
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

// public ListPage(Fuse.Navigation.Router router) :691
void ListPage__ctor_7_fn(ListPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_7(router1);
}

// private void InitializeUX() :697
void ListPage__InitializeUX_fn(ListPage* __this)
{
    __this->InitializeUX();
}

// public ListPage New(Fuse.Navigation.Router router) :691
void ListPage__New4_fn(::g::Fuse::Navigation::Router* router1, ListPage** __retval)
{
    *__retval = ListPage::New4(router1);
}

uSStrong< ::g::Fuse::Font*> ListPage::Bold_;
uSStrong< ::g::Fuse::Controls::Image*> ListPage::lArrow_;
uSStrong< ::g::Fuse::Controls::Image*> ListPage::rArrow_;
uSStrong<uArray*> ListPage::__g_static_nametable1_;
::g::Uno::UX::Selector ListPage::__selector0_;
::g::Uno::UX::Selector ListPage::__selector1_;
::g::Uno::UX::Selector ListPage::__selector2_;
::g::Uno::UX::Selector ListPage::__selector3_;
::g::Uno::UX::Selector ListPage::__selector4_;
::g::Uno::UX::Selector ListPage::__selector5_;
::g::Uno::UX::Selector ListPage::__selector6_;
::g::Uno::UX::Selector ListPage::__selector7_;
::g::Uno::UX::Selector ListPage::__selector8_;
::g::Uno::UX::Selector ListPage::__selector9_;
::g::Uno::UX::Selector ListPage::__selector10_;
::g::Uno::UX::Selector ListPage::__selector11_;
::g::Uno::UX::Selector ListPage::__selector12_;
::g::Uno::UX::Selector ListPage::__selector13_;
::g::Uno::UX::Selector ListPage::__selector14_;
::g::Uno::UX::Selector ListPage::__selector15_;
::g::Uno::UX::Selector ListPage::__selector16_;

// public ListPage(Fuse.Navigation.Router router) [instance] :691
void ListPage::ctor_7(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("ListPage", ".ctor(Fuse.Navigation.Router)");
    ctor_6();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :697
void ListPage::InitializeUX()
{
    uStackFrame __("ListPage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, ListPage::__g_static_nametable1_);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp, ListPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(uString::Const("currentBalance"));
    cash = ::g::ccButton::New6();
    cash_Color_inst = ::g::AccountBook_FuseControlsPanel_Color_Property::New1(cash, ListPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(uString::Const("ChangeListCashShow"));
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(uString::Const("list_cash_show_color"));
    card = ::g::ccButton::New6();
    card_Color_inst = ::g::AccountBook_FuseControlsPanel_Color_Property::New1(card, ListPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(uString::Const("ChangeListCardShow"));
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(uString::Const("list_card_show_color"));
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp1, ListPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("screenYear"));
    lbutton = ::g::Fuse::Controls::Image::New3();
    lbutton_Color_inst = ::g::AccountBook_FuseControlsImage_Color_Property::New1(lbutton, ListPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_lArrow"));
    ModalConfirm3 = ::g::Fuse::AlternateRoot::New2();
    ModalConfirm3_IsEnabled_inst = ::g::AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(ModalConfirm3, ListPage::__selector2_);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp2, ListPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(uString::Const("screenMonth"));
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("Click_rArrow"));
    ::g::Fuse::Reactive::Match* temp3 = ::g::Fuse::Reactive::Match::New2();
    temp3_Value_inst = ::g::AccountBook_FuseReactiveMatch_Value_Property::New1(temp3, ListPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(uString::Const("grouping_activation"));
    ::g::Fuse::Reactive::Each* temp4 = ::g::Fuse::Reactive::Each::New4();
    temp4_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp4, ListPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(uString::Const("histories"));
    ModalConfirm = ::g::Fuse::AlternateRoot::New2();
    ModalConfirm_IsEnabled_inst = ::g::AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(ModalConfirm, ListPage::__selector2_);
    ::g::Fuse::Drawing::Stroke* temp5 = ::g::Fuse::Drawing::Stroke::New2();
    temp5_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(temp5, ListPage::__selector1_);
    ::g::Fuse::Reactive::Resource* temp29 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    ModalConfirm2 = ::g::Fuse::AlternateRoot::New2();
    ModalConfirm2_IsEnabled_inst = ::g::AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(ModalConfirm2, ListPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(uString::Const("PushListEditPage"));
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(uString::Const("Delete"));
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(uString::Const("GetInGroupingMode"));
    ModalConfirm_ParentNode_inst = ::g::AccountBook_FuseAlternateRoot_ParentNode_Property::New1(ModalConfirm, ListPage::__selector4_);
    ::g::Fuse::Reactive::Resource* temp33 = ::g::Fuse::Reactive::Resource::New1(uString::Const("FullWindow"));
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(uString::Const("editVars"));
    ::g::EditTextBox* temp6 = ::g::EditTextBox::New4();
    temp6_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp6, ListPage::__selector0_);
    ::g::Fuse::Reactive::Member* temp35 = ::g::Fuse::Reactive::Member::New1(temp34, uString::Const("year"));
    ::g::Fuse::Reactive::Data* temp36 = ::g::Fuse::Reactive::Data::New1(uString::Const("EditMonthHandler"));
    ::g::Fuse::Reactive::Data* temp37 = ::g::Fuse::Reactive::Data::New1(uString::Const("editVars"));
    ::g::EditTextBox* temp7 = ::g::EditTextBox::New4();
    temp7_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp7, ListPage::__selector0_);
    ::g::Fuse::Reactive::Member* temp38 = ::g::Fuse::Reactive::Member::New1(temp37, uString::Const("month"));
    ::g::Fuse::Reactive::Data* temp39 = ::g::Fuse::Reactive::Data::New1(uString::Const("EditDayHandler"));
    ::g::Fuse::Reactive::Data* temp40 = ::g::Fuse::Reactive::Data::New1(uString::Const("editVars"));
    ::g::EditTextBox* temp8 = ::g::EditTextBox::New4();
    temp8_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp8, ListPage::__selector0_);
    ::g::Fuse::Reactive::Member* temp41 = ::g::Fuse::Reactive::Member::New1(temp40, uString::Const("day"));
    ::g::Fuse::Reactive::Data* temp42 = ::g::Fuse::Reactive::Data::New1(uString::Const("ClickEditabstractButton"));
    ::g::Fuse::Reactive::Data* temp43 = ::g::Fuse::Reactive::Data::New1(uString::Const("editVars"));
    ::g::EditButton* temp9 = ::g::EditButton::New6();
    temp9_text_inst = ::g::AccountBook_EditButton_text_Property::New1(temp9, ListPage::__selector5_);
    ::g::Fuse::Reactive::Member* temp44 = ::g::Fuse::Reactive::Member::New1(temp43, uString::Const("abstract"));
    ::g::Fuse::Reactive::Data* temp45 = ::g::Fuse::Reactive::Data::New1(uString::Const("EditHourHandler"));
    ::g::Fuse::Reactive::Data* temp46 = ::g::Fuse::Reactive::Data::New1(uString::Const("editVars"));
    ::g::EditTextBox* temp10 = ::g::EditTextBox::New4();
    temp10_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp10, ListPage::__selector0_);
    ::g::Fuse::Reactive::Member* temp47 = ::g::Fuse::Reactive::Member::New1(temp46, uString::Const("hour"));
    ::g::Fuse::Reactive::Data* temp48 = ::g::Fuse::Reactive::Data::New1(uString::Const("EditMinuteHandler"));
    ::g::Fuse::Reactive::Data* temp49 = ::g::Fuse::Reactive::Data::New1(uString::Const("editVars"));
    ::g::EditTextBox* temp11 = ::g::EditTextBox::New4();
    temp11_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp11, ListPage::__selector0_);
    ::g::Fuse::Reactive::Member* temp50 = ::g::Fuse::Reactive::Member::New1(temp49, uString::Const("minute"));
    ::g::Fuse::Reactive::Data* temp51 = ::g::Fuse::Reactive::Data::New1(uString::Const("ClickEditpmtypeButton"));
    ::g::Fuse::Reactive::Data* temp52 = ::g::Fuse::Reactive::Data::New1(uString::Const("editVars"));
    ::g::EditButton* temp12 = ::g::EditButton::New6();
    temp12_text_inst = ::g::AccountBook_EditButton_text_Property::New1(temp12, ListPage::__selector5_);
    ::g::Fuse::Reactive::Member* temp53 = ::g::Fuse::Reactive::Member::New1(temp52, uString::Const("pmType"));
    ::g::Fuse::Reactive::Data* temp54 = ::g::Fuse::Reactive::Data::New1(uString::Const("editVars"));
    ::g::EditTextBox* temp13 = ::g::EditTextBox::New4();
    temp13_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp13, ListPage::__selector0_);
    ::g::Fuse::Reactive::Member* temp55 = ::g::Fuse::Reactive::Member::New1(temp54, uString::Const("amount"));
    ::g::Fuse::Reactive::Data* temp56 = ::g::Fuse::Reactive::Data::New1(uString::Const("editVars"));
    ::g::EditTextBox* temp14 = ::g::EditTextBox::New4();
    temp14_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp14, ListPage::__selector0_);
    ::g::Fuse::Reactive::Member* temp57 = ::g::Fuse::Reactive::Member::New1(temp56, uString::Const("usage"));
    ::g::Fuse::Reactive::Data* temp58 = ::g::Fuse::Reactive::Data::New1(uString::Const("ClickEditpaytypeButton"));
    ::g::Fuse::Reactive::Data* temp59 = ::g::Fuse::Reactive::Data::New1(uString::Const("editVars"));
    ::g::EditButton* temp15 = ::g::EditButton::New6();
    temp15_text_inst = ::g::AccountBook_EditButton_text_Property::New1(temp15, ListPage::__selector5_);
    ::g::Fuse::Reactive::Member* temp60 = ::g::Fuse::Reactive::Member::New1(temp59, uString::Const("payType"));
    ::g::Fuse::Reactive::Data* temp61 = ::g::Fuse::Reactive::Data::New1(uString::Const("EditConfirm"));
    ModalConfirm2_ParentNode_inst = ::g::AccountBook_FuseAlternateRoot_ParentNode_Property::New1(ModalConfirm2, ListPage::__selector4_);
    ::g::Fuse::Reactive::Resource* temp62 = ::g::Fuse::Reactive::Resource::New1(uString::Const("FullWindow2"));
    ::g::Fuse::Reactive::Data* temp63 = ::g::Fuse::Reactive::Data::New1(uString::Const("ScreenEditYearHandler"));
    ::g::Fuse::Controls::TextInput* temp16 = ::g::Fuse::Controls::TextInput::New3();
    temp16_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp16, ListPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp64 = ::g::Fuse::Reactive::Data::New1(uString::Const("screenYear"));
    ::g::Fuse::Controls::TextInput* temp17 = ::g::Fuse::Controls::TextInput::New3();
    temp17_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp17, ListPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp65 = ::g::Fuse::Reactive::Data::New1(uString::Const("screenMonth"));
    ::g::Fuse::Reactive::Data* temp66 = ::g::Fuse::Reactive::Data::New1(uString::Const("ScreenEditMonthHandler"));
    ::g::Fuse::Reactive::Data* temp67 = ::g::Fuse::Reactive::Data::New1(uString::Const("YearMonthEditConfirm"));
    ModalConfirm3_ParentNode_inst = ::g::AccountBook_FuseAlternateRoot_ParentNode_Property::New1(ModalConfirm3, ListPage::__selector4_);
    ::g::Fuse::Reactive::Resource* temp68 = ::g::Fuse::Reactive::Resource::New1(uString::Const("FullWindow2"));
    ::g::Fuse::Reactive::JavaScript* temp69 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    EditOrDeletePopup = ::g::Fuse::Controls::Panel::New3();
    ListEditPopup = ::g::Fuse::Controls::Panel::New3();
    YearMonthEditPopup = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp70 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp71 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp72 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp73 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp18, 3);
    ::g::Fuse::Controls::Grid* temp74 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Gestures::WhilePressed* temp75 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp76 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), cash_Color_inst);
    temp_eb17 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp19);
    ::g::Fuse::Reactive::DataBinding* temp77 = ::g::Fuse::Reactive::DataBinding::New1(cash_Color_inst, (uObject*)temp20, 3);
    ::g::Fuse::Gestures::WhilePressed* temp78 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp79 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), card_Color_inst);
    temp_eb18 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp21);
    ::g::Fuse::Reactive::DataBinding* temp80 = ::g::Fuse::Reactive::DataBinding::New1(card_Color_inst, (uObject*)temp22, 3);
    yearmonth = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Grid* temp81 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp82 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp23, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp83 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp84 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::ccButton* temp85 = ::g::ccButton::New6();
    ::g::Fuse::Gestures::WhilePressed* temp86 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp87 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), lbutton_Color_inst);
    temp_eb19 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp24);
    ::g::Fuse::Gestures::Clicked* temp88 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp89 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm3_IsEnabled_inst);
    ::g::Fuse::Reactive::DataBinding* temp90 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp25, 3);
    ::g::ccButton* temp91 = ::g::ccButton::New6();
    rbutton = ::g::Fuse::Controls::Image::New3();
    temp_eb20 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp26);
    ::g::Fuse::Controls::ScrollView* temp92 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp93 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::Case* temp94 = ::g::Fuse::Reactive::Case::New1();
    ListPage__Template* temp95 = ListPage__Template::New2(this, this);
    ListPage__Template1* temp96 = ListPage__Template1::New2(this, this);
    ::g::Fuse::Reactive::Case* temp97 = ::g::Fuse::Reactive::Case::New1();
    ::g::Fuse::Reactive::DataBinding* temp98 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp27, 3);
    ListPage__Template2* temp99 = ListPage__Template2::New2(this, this);
    ListPage__Template3* temp100 = ListPage__Template3::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp101 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Items_inst, (uObject*)temp28, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp102 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    ::g::Fuse::Resources::ResourceObject* temp103 = ::g::Fuse::Resources::ResourceObject::New2();
    ::g::Fuse::Resources::ResourceObject* temp104 = ::g::Fuse::Resources::ResourceObject::New2();
    ::g::Fuse::Resources::ResourceObject* temp105 = ::g::Fuse::Resources::ResourceObject::New2();
    ::g::Fuse::Controls::Panel* temp106 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::Clicked* temp107 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp108 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm_IsEnabled_inst);
    ::g::Fuse::Controls::StackPanel* temp109 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp110 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp111 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Color_inst, (uObject*)temp29, 3);
    ::g::ccButton* temp112 = ::g::ccButton::New6();
    ::g::Fuse::Gestures::Clicked* temp113 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp114 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm2_IsEnabled_inst);
    temp_eb25 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp30);
    ::g::ccButton* temp115 = ::g::ccButton::New6();
    temp_eb26 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp31);
    ::g::ccButton* temp116 = ::g::ccButton::New6();
    temp_eb27 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp32);
    ::g::Fuse::Reactive::DataBinding* temp117 = ::g::Fuse::Reactive::DataBinding::New1(ModalConfirm_ParentNode_inst, (uObject*)temp33, 3);
    ::g::Fuse::Controls::Panel* temp118 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::ClientPanel* temp119 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Grid* temp120 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp121 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp122 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp123 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Grid* temp124 = ::g::Fuse::Controls::Grid::New4();
    ::g::EditTitleText* temp125 = ::g::EditTitleText::New4();
    ::g::EditTitleText* temp126 = ::g::EditTitleText::New4();
    ::g::EditTitleText* temp127 = ::g::EditTitleText::New4();
    ::g::Fuse::Controls::Grid* temp128 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp129 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp35, 3);
    temp_eb28 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp36);
    ::g::Fuse::Reactive::DataBinding* temp130 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp38, 3);
    temp_eb29 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp39);
    ::g::Fuse::Reactive::DataBinding* temp131 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp41, 3);
    ::g::Fuse::Controls::Grid* temp132 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp133 = ::g::Fuse::Controls::Text::New3();
    ::g::EditTitleText* temp134 = ::g::EditTitleText::New4();
    ::g::EditTitleText* temp135 = ::g::EditTitleText::New4();
    ::g::Fuse::Controls::Grid* temp136 = ::g::Fuse::Controls::Grid::New4();
    temp_eb30 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp42);
    ::g::Fuse::Reactive::DataBinding* temp137 = ::g::Fuse::Reactive::DataBinding::New1(temp9_text_inst, (uObject*)temp44, 3);
    temp_eb31 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp45);
    ::g::Fuse::Reactive::DataBinding* temp138 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp47, 3);
    temp_eb32 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp48);
    ::g::Fuse::Reactive::DataBinding* temp139 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Value_inst, (uObject*)temp50, 3);
    ::g::Fuse::Controls::Grid* temp140 = ::g::Fuse::Controls::Grid::New4();
    ::g::EditTitleText* temp141 = ::g::EditTitleText::New4();
    ::g::EditTitleText* temp142 = ::g::EditTitleText::New4();
    ::g::Fuse::Controls::Grid* temp143 = ::g::Fuse::Controls::Grid::New4();
    temp_eb33 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp51);
    ::g::Fuse::Reactive::DataBinding* temp144 = ::g::Fuse::Reactive::DataBinding::New1(temp12_text_inst, (uObject*)temp53, 3);
    ::g::Fuse::Reactive::DataBinding* temp145 = ::g::Fuse::Reactive::DataBinding::New1(temp13_Value_inst, (uObject*)temp55, 3);
    ::g::Fuse::Reactive::DataBinding* temp146 = ::g::Fuse::Reactive::DataBinding::New1(temp14_Value_inst, (uObject*)temp57, 3);
    ::g::EditTitleText* temp147 = ::g::EditTitleText::New4();
    temp_eb34 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp58);
    ::g::Fuse::Reactive::DataBinding* temp148 = ::g::Fuse::Reactive::DataBinding::New1(temp15_text_inst, (uObject*)temp60, 3);
    ::g::Fuse::Controls::Text* temp149 = ::g::Fuse::Controls::Text::New3();
    ::g::EditButton* temp150 = ::g::EditButton::New6();
    ::g::Fuse::Gestures::Clicked* temp151 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp152 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm2_IsEnabled_inst);
    temp_eb35 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp61);
    ::g::Fuse::Reactive::DataBinding* temp153 = ::g::Fuse::Reactive::DataBinding::New1(ModalConfirm2_ParentNode_inst, (uObject*)temp62, 3);
    ::g::Fuse::Controls::Panel* temp154 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp155 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp156 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Grid* temp157 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp158 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp159 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp160 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Effects::DropShadow* temp161 = ::g::Fuse::Effects::DropShadow::New2();
    temp_eb36 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp63);
    ::g::Fuse::Reactive::DataBinding* temp162 = ::g::Fuse::Reactive::DataBinding::New1(temp16_Value_inst, (uObject*)temp64, 3);
    ::g::Fuse::Controls::Text* temp163 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Effects::DropShadow* temp164 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Reactive::DataBinding* temp165 = ::g::Fuse::Reactive::DataBinding::New1(temp17_Value_inst, (uObject*)temp65, 3);
    temp_eb37 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp66);
    ::g::EditButton* temp166 = ::g::EditButton::New6();
    ::g::Fuse::Gestures::Clicked* temp167 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp168 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ModalConfirm3_IsEnabled_inst);
    temp_eb38 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp67);
    ::g::Fuse::Reactive::DataBinding* temp169 = ::g::Fuse::Reactive::DataBinding::New1(ModalConfirm3_ParentNode_inst, (uObject*)temp68, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp170 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    Height(::g::Uno::UX::Size__New1(86.0f, 4));
    Alignment(12);
    SourceLineNumber(1);
    SourceFileName(uString::Const("ListPage.ux"));
    temp69->LineNumber(2);
    temp69->FileName(uString::Const("ListPage.ux"));
    temp69->SourceLineNumber(2);
    temp69->SourceFileName(uString::Const("ListPage.ux"));
    temp69->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::ListPage5d08328d()));
    uPtr(EditOrDeletePopup)->Layer(3);
    uPtr(EditOrDeletePopup)->Name(ListPage::__selector6_);
    uPtr(EditOrDeletePopup)->SourceLineNumber(3);
    uPtr(EditOrDeletePopup)->SourceFileName(uString::Const("ListPage.ux"));
    uPtr(ListEditPopup)->Layer(3);
    uPtr(ListEditPopup)->Name(ListPage::__selector7_);
    uPtr(ListEditPopup)->SourceLineNumber(4);
    uPtr(ListEditPopup)->SourceFileName(uString::Const("ListPage.ux"));
    uPtr(YearMonthEditPopup)->Layer(3);
    uPtr(YearMonthEditPopup)->Name(ListPage::__selector8_);
    uPtr(YearMonthEditPopup)->SourceLineNumber(5);
    uPtr(YearMonthEditPopup)->SourceFileName(uString::Const("ListPage.ux"));
    temp70->RowCount(100);
    temp70->SourceLineNumber(35);
    temp70->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), yearmonth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp92);
    temp71->SourceLineNumber(36);
    temp71->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp71, 1);
    temp72->Value(uString::Const("CurrentBalance"));
    temp72->FontSize(12.0f);
    temp72->Alignment(10);
    temp72->SourceLineNumber(37);
    temp72->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp72, 2);
    temp->FontSize(32.0f);
    temp->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(10);
    temp->SourceLineNumber(38);
    temp->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp, 12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp73);
    temp18->SourceLineNumber(38);
    temp18->SourceFileName(uString::Const("ListPage.ux"));
    temp74->ColumnCount(2);
    temp74->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp74->SourceLineNumber(39);
    temp74->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp74, 5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), cash);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), card);
    uPtr(cash)->text(uString::Const("CASH"));
    uPtr(cash)->textcolor(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    uPtr(cash)->fontsize(18);
    uPtr(cash)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(cash)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(cash)->Alignment(10);
    uPtr(cash)->Name(ListPage::__selector9_);
    uPtr(cash)->SourceLineNumber(40);
    uPtr(cash)->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(cash, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb17)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cash)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cash)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cash)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp77);
    temp75->SourceLineNumber(41);
    temp75->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp76);
    ::g::Fuse::Animations::Change__set_Value_fn(temp76, uCRef(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f)));
    temp76->Duration(0.05);
    temp76->DurationBack(0.2);
    temp19->SourceLineNumber(40);
    temp19->SourceFileName(uString::Const("ListPage.ux"));
    temp20->SourceLineNumber(40);
    temp20->SourceFileName(uString::Const("ListPage.ux"));
    uPtr(card)->text(uString::Const("CARD"));
    uPtr(card)->textcolor(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    uPtr(card)->fontsize(18);
    uPtr(card)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(card)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(card)->Alignment(10);
    uPtr(card)->Name(ListPage::__selector10_);
    uPtr(card)->SourceLineNumber(45);
    uPtr(card)->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(card, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb18)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(card)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(card)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(card)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp80);
    temp78->SourceLineNumber(46);
    temp78->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp79);
    ::g::Fuse::Animations::Change__set_Value_fn(temp79, uCRef(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f)));
    temp79->Duration(0.05);
    temp79->DurationBack(0.2);
    temp21->SourceLineNumber(45);
    temp21->SourceFileName(uString::Const("ListPage.ux"));
    temp22->SourceLineNumber(45);
    temp22->SourceFileName(uString::Const("ListPage.ux"));
    uPtr(yearmonth)->Name(ListPage::__selector11_);
    uPtr(yearmonth)->SourceLineNumber(51);
    uPtr(yearmonth)->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(yearmonth, 7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(yearmonth)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp81);
    temp81->RowCount(7);
    temp81->SourceLineNumber(52);
    temp81->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp84);
    temp1->FontSize(12.0f);
    temp1->TextAlignment(1);
    temp1->Color(::g::Fuse::Drawing::Colors::White());
    temp1->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp1->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp1->SourceLineNumber(53);
    temp1->SourceFileName(uString::Const("ListPage.ux"));
    temp1->Font(ListPage::Bold_);
    temp1->Background(temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp82);
    temp23->SourceLineNumber(53);
    temp23->SourceFileName(uString::Const("ListPage.ux"));
    temp84->Orientation(0);
    temp84->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp84->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp84->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp84->Alignment(10);
    temp84->SourceLineNumber(54);
    temp84->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp84, 6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp91);
    temp85->Alignment(10);
    temp85->SourceLineNumber(55);
    temp85->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp85, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb19)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), lbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb19);
    uPtr(lbutton)->Height(::g::Uno::UX::Size__New1(80.0f, 4));
    uPtr(lbutton)->Name(ListPage::__selector12_);
    uPtr(lbutton)->SourceLineNumber(56);
    uPtr(lbutton)->SourceFileName(uString::Const("ListPage.ux"));
    uPtr(lbutton)->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::lArrowc76aec54()));
    temp86->SourceLineNumber(57);
    temp86->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp87);
    ::g::Fuse::Animations::Change__set_Value_fn(temp87, uCRef(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f)));
    temp87->Duration(0.05);
    temp87->DurationBack(0.2);
    temp24->SourceLineNumber(55);
    temp24->SourceFileName(uString::Const("ListPage.ux"));
    temp2->FontSize(30.0f);
    temp2->Color(::g::Fuse::Drawing::Colors::White());
    temp2->Alignment(10);
    temp2->SourceLineNumber(61);
    temp2->SourceFileName(uString::Const("ListPage.ux"));
    temp2->Font(ListPage::Bold_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp90);
    temp88->SourceLineNumber(62);
    temp88->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp89);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp89, uCRef(true));
    temp89->SourceLineNumber(63);
    temp89->SourceFileName(uString::Const("ListPage.ux"));
    temp25->SourceLineNumber(61);
    temp25->SourceFileName(uString::Const("ListPage.ux"));
    temp91->Alignment(10);
    temp91->SourceLineNumber(66);
    temp91->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp91, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb20)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), rbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb20);
    uPtr(rbutton)->Height(::g::Uno::UX::Size__New1(80.0f, 4));
    uPtr(rbutton)->Name(ListPage::__selector13_);
    uPtr(rbutton)->SourceLineNumber(67);
    uPtr(rbutton)->SourceFileName(uString::Const("ListPage.ux"));
    uPtr(rbutton)->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::rArrowd43ec882()));
    temp26->SourceLineNumber(66);
    temp26->SourceFileName(uString::Const("ListPage.ux"));
    temp92->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 0.0f));
    temp92->SourceLineNumber(72);
    temp92->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp92, 75);
    temp92->Background(temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp92->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp93);
    temp93->SourceLineNumber(73);
    temp93->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    temp3->SourceLineNumber(74);
    temp3->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Cases()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL)), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Cases()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL)), temp97);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp98);
    temp94->Bool(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp95);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp96);
    temp97->Bool(false);
    temp27->SourceLineNumber(74);
    temp27->SourceFileName(uString::Const("ListPage.ux"));
    temp4->SourceLineNumber(82);
    temp4->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp101);
    temp28->SourceLineNumber(82);
    temp28->SourceFileName(uString::Const("ListPage.ux"));
    temp103->Key(uString::Const("FullWindow"));
    temp103->SourceLineNumber(127);
    temp103->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Resources::ResourceSetter__set_Value_fn(temp103, EditOrDeletePopup);
    temp104->Key(uString::Const("FullWindow2"));
    temp104->SourceLineNumber(128);
    temp104->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Resources::ResourceSetter__set_Value_fn(temp104, ListEditPopup);
    temp105->Key(uString::Const("FullWindow3"));
    temp105->SourceLineNumber(129);
    temp105->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Resources::ResourceSetter__set_Value_fn(temp105, YearMonthEditPopup);
    uPtr(ModalConfirm)->IsEnabled(false);
    uPtr(ModalConfirm)->Name(ListPage::__selector14_);
    uPtr(ModalConfirm)->SourceLineNumber(130);
    uPtr(ModalConfirm)->SourceFileName(uString::Const("ListPage.ux"));
    uPtr(ModalConfirm)->Node(temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ModalConfirm)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp117);
    temp106->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f));
    temp106->Layer(3);
    temp106->SourceLineNumber(131);
    temp106->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp106->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp106->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp109);
    temp107->SourceLineNumber(132);
    temp107->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp107->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp108);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp108, uCRef(false));
    temp108->SourceLineNumber(133);
    temp108->SourceFileName(uString::Const("ListPage.ux"));
    temp109->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp109->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp109->Alignment(10);
    temp109->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp109->SourceLineNumber(135);
    temp109->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp112);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp116);
    temp110->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp110->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp110->Layer(1);
    temp110->SourceLineNumber(136);
    temp110->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp111);
    temp5->Width(2.0f);
    temp29->SourceLineNumber(137);
    temp29->SourceFileName(uString::Const("ListPage.ux"));
    temp112->text(uString::Const("EDIT"));
    temp112->textcolor(::g::Fuse::Drawing::Colors::Black());
    temp112->fontsize(18);
    temp112->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp112->SourceLineNumber(139);
    temp112->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp112, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb25)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb25);
    temp113->SourceLineNumber(140);
    temp113->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp113->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp114);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp114, uCRef(true));
    temp114->SourceLineNumber(141);
    temp114->SourceFileName(uString::Const("ListPage.ux"));
    temp30->SourceLineNumber(139);
    temp30->SourceFileName(uString::Const("ListPage.ux"));
    temp115->text(uString::Const("DELETE"));
    temp115->textcolor(::g::Fuse::Drawing::Colors::Black());
    temp115->fontsize(18);
    temp115->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp115->SourceLineNumber(144);
    temp115->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp115, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb26)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb26);
    temp31->SourceLineNumber(144);
    temp31->SourceFileName(uString::Const("ListPage.ux"));
    temp116->text(uString::Const("Grouping"));
    temp116->textcolor(::g::Fuse::Drawing::Colors::Black());
    temp116->fontsize(18);
    temp116->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp116->SourceLineNumber(145);
    temp116->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp116, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb27)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb27);
    temp32->SourceLineNumber(145);
    temp32->SourceFileName(uString::Const("ListPage.ux"));
    temp33->SourceLineNumber(130);
    temp33->SourceFileName(uString::Const("ListPage.ux"));
    uPtr(ModalConfirm2)->IsEnabled(false);
    uPtr(ModalConfirm2)->Name(ListPage::__selector15_);
    uPtr(ModalConfirm2)->SourceLineNumber(169);
    uPtr(ModalConfirm2)->SourceFileName(uString::Const("ListPage.ux"));
    uPtr(ModalConfirm2)->Node(temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ModalConfirm2)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp153);
    temp118->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp118->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp118->Layer(3);
    temp118->SourceLineNumber(170);
    temp118->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp118->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp119);
    temp119->SourceLineNumber(171);
    temp119->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp119->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp120);
    temp120->RowCount(11);
    temp120->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp120->Height(::g::Uno::UX::Size__New1(70.0f, 4));
    temp120->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp120->SourceLineNumber(172);
    temp120->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp122);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp124);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp128);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp132);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp136);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp140);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp143);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp147);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp149);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp150);
    temp121->Value(uString::Const("EDIT PAGE"));
    temp121->FontSize(30.0f);
    temp121->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp121->Alignment(6);
    temp121->SourceLineNumber(173);
    temp121->SourceFileName(uString::Const("ListPage.ux"));
    temp122->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp122->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp122->Layer(1);
    temp122->SourceLineNumber(174);
    temp122->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp122->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp123);
    temp123->Color(::g::Fuse::Drawing::Colors::Black());
    temp123->Width(1.0f);
    temp124->ColumnCount(3);
    temp124->SourceLineNumber(177);
    temp124->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp125);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp126);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp127);
    temp125->Value(uString::Const("Year"));
    temp125->SourceLineNumber(178);
    temp125->SourceFileName(uString::Const("ListPage.ux"));
    temp126->Value(uString::Const("Month"));
    temp126->SourceLineNumber(179);
    temp126->SourceFileName(uString::Const("ListPage.ux"));
    temp127->Value(uString::Const("Day"));
    temp127->SourceLineNumber(180);
    temp127->SourceFileName(uString::Const("ListPage.ux"));
    temp128->ColumnCount(3);
    temp128->SourceLineNumber(182);
    temp128->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    temp6->InputHint(4);
    temp6->SourceLineNumber(183);
    temp6->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp129);
    temp34->SourceLineNumber(183);
    temp34->SourceFileName(uString::Const("ListPage.ux"));
    temp35->SourceLineNumber(183);
    temp35->SourceFileName(uString::Const("ListPage.ux"));
    temp7->InputHint(4);
    temp7->SourceLineNumber(184);
    temp7->SourceFileName(uString::Const("ListPage.ux"));
    temp7->add_ValueChanged(uDelegate::New(::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof(), NULL), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb28)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp130);
    temp36->SourceLineNumber(184);
    temp36->SourceFileName(uString::Const("ListPage.ux"));
    temp37->SourceLineNumber(184);
    temp37->SourceFileName(uString::Const("ListPage.ux"));
    temp38->SourceLineNumber(184);
    temp38->SourceFileName(uString::Const("ListPage.ux"));
    temp8->InputHint(4);
    temp8->SourceLineNumber(185);
    temp8->SourceFileName(uString::Const("ListPage.ux"));
    temp8->add_ValueChanged(uDelegate::New(::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof(), NULL), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb29)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp131);
    temp39->SourceLineNumber(185);
    temp39->SourceFileName(uString::Const("ListPage.ux"));
    temp40->SourceLineNumber(185);
    temp40->SourceFileName(uString::Const("ListPage.ux"));
    temp41->SourceLineNumber(185);
    temp41->SourceFileName(uString::Const("ListPage.ux"));
    temp132->ColumnCount(3);
    temp132->SourceLineNumber(187);
    temp132->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp132->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp132->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp134);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp132->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp135);
    temp133->SourceLineNumber(188);
    temp133->SourceFileName(uString::Const("ListPage.ux"));
    temp134->Value(uString::Const("Hour"));
    temp134->SourceLineNumber(189);
    temp134->SourceFileName(uString::Const("ListPage.ux"));
    temp135->Value(uString::Const("Minute"));
    temp135->SourceLineNumber(190);
    temp135->SourceFileName(uString::Const("ListPage.ux"));
    temp136->ColumnCount(3);
    temp136->SourceLineNumber(192);
    temp136->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
    temp9->textcolor(::g::Fuse::Drawing::Colors::Black());
    temp9->fontsize(14);
    temp9->SourceLineNumber(193);
    temp9->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp9, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb30)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp137);
    temp42->SourceLineNumber(193);
    temp42->SourceFileName(uString::Const("ListPage.ux"));
    temp43->SourceLineNumber(193);
    temp43->SourceFileName(uString::Const("ListPage.ux"));
    temp44->SourceLineNumber(193);
    temp44->SourceFileName(uString::Const("ListPage.ux"));
    temp10->InputHint(4);
    temp10->SourceLineNumber(194);
    temp10->SourceFileName(uString::Const("ListPage.ux"));
    temp10->add_ValueChanged(uDelegate::New(::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof(), NULL), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb31)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp138);
    temp45->SourceLineNumber(194);
    temp45->SourceFileName(uString::Const("ListPage.ux"));
    temp46->SourceLineNumber(194);
    temp46->SourceFileName(uString::Const("ListPage.ux"));
    temp47->SourceLineNumber(194);
    temp47->SourceFileName(uString::Const("ListPage.ux"));
    temp11->InputHint(4);
    temp11->SourceLineNumber(195);
    temp11->SourceFileName(uString::Const("ListPage.ux"));
    temp11->add_ValueChanged(uDelegate::New(::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof(), NULL), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb32)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp139);
    temp48->SourceLineNumber(195);
    temp48->SourceFileName(uString::Const("ListPage.ux"));
    temp49->SourceLineNumber(195);
    temp49->SourceFileName(uString::Const("ListPage.ux"));
    temp50->SourceLineNumber(195);
    temp50->SourceFileName(uString::Const("ListPage.ux"));
    temp140->ColumnCount(2);
    temp140->SourceLineNumber(197);
    temp140->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp141);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp142);
    temp141->Value(uString::Const("Amount"));
    temp141->SourceLineNumber(198);
    temp141->SourceFileName(uString::Const("ListPage.ux"));
    temp142->Value(uString::Const("Usage"));
    temp142->SourceLineNumber(199);
    temp142->SourceFileName(uString::Const("ListPage.ux"));
    temp143->ColumnCount(8);
    temp143->SourceLineNumber(201);
    temp143->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp14);
    temp12->textcolor(::g::Fuse::Drawing::Colors::Black());
    temp12->fontsize(16);
    temp12->SourceLineNumber(202);
    temp12->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp12, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb33)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp144);
    temp51->SourceLineNumber(202);
    temp51->SourceFileName(uString::Const("ListPage.ux"));
    temp52->SourceLineNumber(202);
    temp52->SourceFileName(uString::Const("ListPage.ux"));
    temp53->SourceLineNumber(202);
    temp53->SourceFileName(uString::Const("ListPage.ux"));
    temp13->InputHint(4);
    temp13->SourceLineNumber(203);
    temp13->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp13, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp145);
    temp54->SourceLineNumber(203);
    temp54->SourceFileName(uString::Const("ListPage.ux"));
    temp55->SourceLineNumber(203);
    temp55->SourceFileName(uString::Const("ListPage.ux"));
    temp14->SourceLineNumber(204);
    temp14->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp14, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp146);
    temp56->SourceLineNumber(204);
    temp56->SourceFileName(uString::Const("ListPage.ux"));
    temp57->SourceLineNumber(204);
    temp57->SourceFileName(uString::Const("ListPage.ux"));
    temp147->Value(uString::Const("PayType"));
    temp147->SourceLineNumber(206);
    temp147->SourceFileName(uString::Const("ListPage.ux"));
    temp15->textcolor(::g::Fuse::Drawing::Colors::Black());
    temp15->fontsize(16);
    temp15->SourceLineNumber(207);
    temp15->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp15, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb34)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp148);
    temp58->SourceLineNumber(207);
    temp58->SourceFileName(uString::Const("ListPage.ux"));
    temp59->SourceLineNumber(207);
    temp59->SourceFileName(uString::Const("ListPage.ux"));
    temp60->SourceLineNumber(207);
    temp60->SourceFileName(uString::Const("ListPage.ux"));
    temp149->SourceLineNumber(208);
    temp149->SourceFileName(uString::Const("ListPage.ux"));
    temp150->text(uString::Const("OK"));
    temp150->textcolor(::g::Fuse::Drawing::Colors::Black());
    temp150->fontsize(16);
    temp150->SourceLineNumber(209);
    temp150->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp150, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb35)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp151);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb35);
    temp151->SourceLineNumber(210);
    temp151->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp152);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp152, uCRef(false));
    temp152->SourceLineNumber(211);
    temp152->SourceFileName(uString::Const("ListPage.ux"));
    temp61->SourceLineNumber(209);
    temp61->SourceFileName(uString::Const("ListPage.ux"));
    temp62->SourceLineNumber(169);
    temp62->SourceFileName(uString::Const("ListPage.ux"));
    uPtr(ModalConfirm3)->IsEnabled(false);
    uPtr(ModalConfirm3)->Name(ListPage::__selector16_);
    uPtr(ModalConfirm3)->SourceLineNumber(218);
    uPtr(ModalConfirm3)->SourceFileName(uString::Const("ListPage.ux"));
    uPtr(ModalConfirm3)->Node(temp154);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ModalConfirm3)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp169);
    temp154->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp154->Width(::g::Uno::UX::Size__New1(50.0f, 4));
    temp154->Height(::g::Uno::UX::Size__New1(20.0f, 4));
    temp154->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp154->Layer(3);
    temp154->SourceLineNumber(219);
    temp154->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp155);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp157);
    temp155->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp155->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp155->Layer(1);
    temp155->SourceLineNumber(220);
    temp155->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp156);
    temp156->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp156->Width(2.0f);
    temp157->RowCount(4);
    temp157->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp157->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp157->SourceLineNumber(223);
    temp157->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp158);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp159);
    temp158->Value(uString::Const("EDIT PAGE"));
    temp158->FontSize(20.0f);
    temp158->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp158->Alignment(6);
    temp158->SourceLineNumber(224);
    temp158->SourceFileName(uString::Const("ListPage.ux"));
    temp159->RowCount(2);
    temp159->ColumnCount(4);
    temp159->SourceLineNumber(225);
    temp159->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp159, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp160);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp163);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp166);
    temp160->Value(uString::Const("Year"));
    temp160->Alignment(10);
    temp160->SourceLineNumber(226);
    temp160->SourceFileName(uString::Const("ListPage.ux"));
    temp16->InputHint(4);
    temp16->Alignment(10);
    temp16->SourceLineNumber(227);
    temp16->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp16, 3);
    temp16->add_ValueChanged(uDelegate::New(::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof(), NULL), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb36)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp161);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp162);
    temp161->Size(0.5f);
    temp161->Angle(90.0f);
    temp161->Distance(1.0f);
    temp161->Spread(0.2f);
    temp161->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3764706f));
    temp161->SourceLineNumber(228);
    temp161->SourceFileName(uString::Const("ListPage.ux"));
    temp63->SourceLineNumber(227);
    temp63->SourceFileName(uString::Const("ListPage.ux"));
    temp64->SourceLineNumber(227);
    temp64->SourceFileName(uString::Const("ListPage.ux"));
    temp163->Value(uString::Const("Month"));
    temp163->Alignment(10);
    temp163->SourceLineNumber(230);
    temp163->SourceFileName(uString::Const("ListPage.ux"));
    temp17->InputHint(4);
    temp17->Alignment(10);
    temp17->SourceLineNumber(231);
    temp17->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp17, 3);
    temp17->add_ValueChanged(uDelegate::New(::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof(), NULL), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb37)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp164);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp165);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb37);
    temp164->Size(0.5f);
    temp164->Angle(90.0f);
    temp164->Distance(1.0f);
    temp164->Spread(0.2f);
    temp164->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3764706f));
    temp164->SourceLineNumber(232);
    temp164->SourceFileName(uString::Const("ListPage.ux"));
    temp65->SourceLineNumber(231);
    temp65->SourceFileName(uString::Const("ListPage.ux"));
    temp66->SourceLineNumber(231);
    temp66->SourceFileName(uString::Const("ListPage.ux"));
    temp166->text(uString::Const("OK"));
    temp166->textcolor(::g::Fuse::Drawing::Colors::Black());
    temp166->fontsize(16);
    temp166->SourceLineNumber(234);
    temp166->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp166, 4);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp166, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb38)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp166->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp167);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp166->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb38);
    temp167->SourceLineNumber(235);
    temp167->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp168);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp168, uCRef(false));
    temp168->SourceLineNumber(236);
    temp168->SourceFileName(uString::Const("ListPage.ux"));
    temp67->SourceLineNumber(234);
    temp67->SourceFileName(uString::Const("ListPage.ux"));
    temp68->SourceLineNumber(218);
    temp68->SourceFileName(uString::Const("ListPage.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), EditOrDeletePopup);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), ListEditPopup);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), YearMonthEditPopup);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), cash);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), card);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), yearmonth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), lbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), rbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), ModalConfirm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), ModalConfirm2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), ModalConfirm3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb38);
    Background(temp170);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), EditOrDeletePopup);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ListEditPopup);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), YearMonthEditPopup);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp103);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ModalConfirm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ModalConfirm2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ModalConfirm3);
}

// public ListPage New(Fuse.Navigation.Router router) [static] :691
ListPage* ListPage::New4(::g::Fuse::Navigation::Router* router1)
{
    ListPage* obj1 = (ListPage*)uNew(ListPage_typeof());
    obj1->ctor_7(router1);
    return obj1;
}
// }

} // ::g
