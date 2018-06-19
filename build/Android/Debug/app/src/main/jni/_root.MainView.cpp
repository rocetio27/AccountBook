// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.AccountBook_Fus-78f233b1.h>
#include <_root.AccountBook_Fus-7ed8148.h>
#include <_root.AccountBook_Fus-9d2d7d8d.h>
#include <_root.AccountBook_Fus-ece4b8e4.h>
#include <_root.Banner.h>
#include <_root.ListPage.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template2.h>
#include <_root.MainView.Template3.h>
#include <_root.MainView.Template4.h>
#include <_root.MainView.Template5.h>
#include <_root.MainView.Template6.h>
#include <_root.MainView.Template7.h>
#include <_root.MainView.Template8.h>
#include <_root.SQLite.h>
#include <_root.TabButton.h>
#include <_root.wbButton.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.AppBase.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.EdgeNavigator.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileS-3c9ac41b.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Activ-5bc1c951.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSoc-2254f404.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :841
static void MainView__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    ::g::Fuse::Animations::Easing_typeof()->Init();
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    ::g::Fuse::Drawing::Brushes_typeof()->Init();
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    ::g::Fuse::Elements::TranslationModes_typeof()->Init();
    ::g::Fuse::TranslationModes_typeof()->Init();
    ::g::Fuse::Triggers::Actions::GiveFocus_typeof()->Init();
    ::g::Fuse::Triggers::WhileKeyboardVisible_typeof()->Init();
    ::g::Fuse::Triggers::LayoutTransition_typeof()->Init();
    ::g::Fuse::Triggers::IScrolledLengths_typeof()->Init();
    ::g::Fuse::Resources::MemoryPolicy_typeof()->Init();
    ::g::Fuse::Font_typeof()->Init();
    ::g::Fuse::ScalingModes_typeof()->Init();
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 18, uString::Const("sidebar"), uString::Const("shadow"), uString::Const("temp_eb45"), uString::Const("router"), uString::Const("indicator"), uString::Const("Hamburger"), uString::Const("InputTab"), uString::Const("Tab1"), uString::Const("temp_eb46"), uString::Const("ListTab"), uString::Const("Tab2"), uString::Const("temp_eb47"), uString::Const("StatisticTab"), uString::Const("Tab3"), uString::Const("temp_eb48"), uString::Const("BudgetTab"), uString::Const("Tab4"), uString::Const("temp_eb49"));
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Color"));
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("sidebar"));
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("shadow"));
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("router"));
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("indicator"));
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Hamburger"));
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("InputTab"));
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Tab1"));
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("ListTab"));
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Tab2"));
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("StatisticTab"));
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Tab3"));
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("BudgetTab"));
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Tab4"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear_, uString::Const("Linear"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn_, uString::Const("QuadraticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut_, uString::Const("QuadraticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut_, uString::Const("QuadraticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn_, uString::Const("CubicIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut_, uString::Const("CubicOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut_, uString::Const("CubicInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn_, uString::Const("QuarticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut_, uString::Const("QuarticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut_, uString::Const("QuarticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn_, uString::Const("QuinticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut_, uString::Const("QuinticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut_, uString::Const("QuinticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn_, uString::Const("SinusoidalIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut_, uString::Const("SinusoidalOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut_, uString::Const("SinusoidalInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn_, uString::Const("ExponentialIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut_, uString::Const("ExponentialOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut_, uString::Const("ExponentialInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn_, uString::Const("CircularIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut_, uString::Const("CircularOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut_, uString::Const("CircularInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn_, uString::Const("ElasticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut_, uString::Const("ElasticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut_, uString::Const("ElasticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn_, uString::Const("BackIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut_, uString::Const("BackOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut_, uString::Const("BackInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn_, uString::Const("BounceIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut_, uString::Const("BounceOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut_, uString::Const("BounceInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent_), uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent_, uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black_), uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black_, uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver_), uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver_, uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray_), uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray_, uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White_), uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White_, uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon_), uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon_, uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red_), uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red_, uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple_), uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple_, uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia_), uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia_, uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green_), uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green_, uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime_), uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime_, uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive_), uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive_, uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow_), uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow_, uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy_), uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy_, uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue_), uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue_, uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal_), uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal_, uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua_), uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua_, uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft_, uString::Const("TopLeft"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center_, uString::Const("Center"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor_, uString::Const("Anchor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter_, uString::Const("HorizontalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter_, uString::Const("VerticalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset_, uString::Const("TransformOriginOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset_, uString::Const("PositionOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor_, uString::Const("SizeFactor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size_, uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size_, uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton_, uString::Const("GiveFocus"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard_, uString::Const("Keyboard"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, uString::Const("WorldPositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange_, uString::Const("PositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points_, uString::Const("Points"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels_, uString::Const("Pixels"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize_, uString::Const("ContentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize_, uString::Const("ScrollViewSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain_, uString::Const("PreloadRetain"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused_, uString::Const("UnloadUnused"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload_, uString::Const("QuickUnload"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy_, uString::Const("UnloadInBackground"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin_, uString::Const("Thin"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light_, uString::Const("Light"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular_, uString::Const("Regular"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium_, uString::Const("Medium"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold_, uString::Const("Bold"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::ListPage::Bold(), uString::Const("Bold"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic_, uString::Const("ThinItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic_, uString::Const("LightItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic_, uString::Const("Italic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic_, uString::Const("MediumItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic_, uString::Const("BoldItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), uString::Const("PlatformDefault"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity_, uString::Const("Identity"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local_, uString::Const("Local"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize_, uString::Const("ParentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width_, uString::Const("Width"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height_, uString::Const("Height"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::ListPage::lArrow(), uString::Const("lArrow"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::ListPage::rArrow(), uString::Const("rArrow"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::SQLite_, uString::Const("SQLite"));
    MainView::SQLite_ = ::g::SQLite::New2();
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::SQLite_, uString::Const("SQLite"));
}

static void MainView_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Controls::DockPanel_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Navigation::EdgeNavigation_typeof(),
        ::g::Fuse::Controls::Grid_typeof(),
        ::g::Fuse::Controls::LayoutControl_typeof(),
        ::g::Fuse::Triggers::LayoutTransition_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(9,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView, shadow_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MainView, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MainView, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView, indicator_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView, Hamburger_Color_inst), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(MainView, sidebar), 0,
        ::g::Fuse::Controls::Shadow_typeof(), offsetof(MainView, shadow), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb45), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(MainView, router), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, indicator), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(MainView, Hamburger), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, InputTab), 0,
        ::g::TabButton_typeof(), offsetof(MainView, Tab1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb46), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, ListTab), 0,
        ::g::TabButton_typeof(), offsetof(MainView, Tab2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb47), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, StatisticTab), 0,
        ::g::TabButton_typeof(), offsetof(MainView, Tab3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb48), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, BudgetTab), 0,
        ::g::TabButton_typeof(), offsetof(MainView, Tab4), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb49), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MainView, __g_nametable1), 0,
        ::g::SQLite_typeof(), (uintptr_t)&MainView::SQLite_, uFieldFlagsStatic,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector15_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 52;
    options.InterfaceCount = 1;
    options.DependencyCount = 6;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :958
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :962
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :958
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong< ::g::SQLite*> MainView::SQLite_;
uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;
::g::Uno::UX::Selector MainView::__selector10_;
::g::Uno::UX::Selector MainView::__selector11_;
::g::Uno::UX::Selector MainView::__selector12_;
::g::Uno::UX::Selector MainView::__selector13_;
::g::Uno::UX::Selector MainView::__selector14_;
::g::Uno::UX::Selector MainView::__selector15_;

// public MainView() [instance] :958
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :962
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp3 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp4 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp5 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Drawing::BrushConverter* temp6 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp7 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp8 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp9 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp10 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp11 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp12 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp13 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp14 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp15 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp16 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp17 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp18 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp19 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1_);
    ::g::Uno::Float4 temp20 = ::g::Uno::Float4__New2(0.9568627f, 0.827451f, 0.0f, 1.0f);
    ::g::Uno::Float4 temp21 = ::g::Uno::Float4__New2(1.0f, 0.9529412f, 0.6509804f, 1.0f);
    ::g::Uno::Float4 temp22 = ::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f);
    ::g::Uno::Float4 temp23 = ::g::Uno::Float4__New2(1.0f, 1.0f, 0.9333333f, 1.0f);
    shadow = ::g::Fuse::Controls::Shadow::New2();
    shadow_Color_inst = ::g::AccountBook_FuseControlsShadow_Color_Property::New1(shadow, MainView::__selector0_);
    uString* temp24 = uString::Const("Selected : ");
    ::g::Fuse::Reactive::Constant* temp25 = ::g::Fuse::Reactive::Constant::New1(temp24);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("currentTitle"));
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp, MainView::__selector1_);
    ::g::Fuse::Reactive::Add* temp27 = ::g::Fuse::Reactive::Add::New1(temp25, temp26);
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp1, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(uString::Const("tempList"));
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp2, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(uString::Const("tempList"));
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(uString::Const("tempListAdd"));
    indicator = ::g::Fuse::Controls::Rectangle::New3();
    indicator_Color_inst = ::g::AccountBook_FuseControlsShape_Color_Property::New1(indicator, MainView::__selector0_);
    ::g::Fuse::Reactive::Resource* temp31 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    Hamburger = ::g::Fuse::Controls::Grid::New4();
    Hamburger_Color_inst = ::g::AccountBook_FuseControlsPanel_Color_Property::New1(Hamburger, MainView::__selector0_);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(uString::Const("goToInput"));
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(uString::Const("goToList"));
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(uString::Const("goToStatistic"));
    ::g::Fuse::Reactive::Data* temp35 = ::g::Fuse::Reactive::Data::New1(uString::Const("goToBudget"));
    ::g::Fuse::Reactive::JavaScript* temp36 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Uno::UX::Resource* temp37 = ::g::Uno::UX::Resource::New1(uString::Const("Col_type1"), uBox(::g::Uno::Float4_typeof(), temp20));
    ::g::Uno::UX::Resource* temp38 = ::g::Uno::UX::Resource::New1(uString::Const("Col_type2"), uBox(::g::Uno::Float4_typeof(), temp21));
    ::g::Uno::UX::Resource* temp39 = ::g::Uno::UX::Resource::New1(uString::Const("Col_type3"), uBox(::g::Uno::Float4_typeof(), temp22));
    ::g::Uno::UX::Resource* temp40 = ::g::Uno::UX::Resource::New1(uString::Const("Col_type4"), uBox(::g::Uno::Float4_typeof(), temp23));
    ::g::Fuse::Controls::EdgeNavigator* temp41 = ::g::Fuse::Controls::EdgeNavigator::New4();
    sidebar = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Navigation::ActivatingAnimation* temp42 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp43 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), shadow_Color_inst);
    ::g::Fuse::Controls::Text* temp44 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp45 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp27, 3);
    ::g::Fuse::Controls::Rectangle* temp46 = ::g::Fuse::Controls::Rectangle::New3();
    MainView__Template* temp47 = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp48 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp28, 3);
    ::g::Fuse::Controls::ScrollView* temp49 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::Grid* temp50 = ::g::Fuse::Controls::Grid::New4();
    MainView__Template1* temp51 = MainView__Template1::New2(this, this);
    MainView__Template2* temp52 = MainView__Template2::New2(this, this);
    MainView__Template3* temp53 = MainView__Template3::New2(this, this);
    MainView__Template4* temp54 = MainView__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp29, 3);
    ::g::wbButton* temp56 = ::g::wbButton::New6();
    temp_eb45 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp30);
    ::g::Fuse::Drawing::StaticSolidColor* temp57 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    router = ::g::Fuse::Navigation::Router::New2();
    ::g::Fuse::Controls::DockPanel* temp58 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp59 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp60 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5333334f, 0.5333334f, 0.5333334f, 1.0f));
    ::g::Fuse::Triggers::LayoutAnimation* temp61 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp62 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp63 = ::g::Fuse::Reactive::DataBinding::New1(indicator_Color_inst, (uObject*)temp31, 3);
    ::g::Fuse::Controls::Grid* temp64 = ::g::Fuse::Controls::Grid::New4();
    ::g::Banner* temp65 = ::g::Banner::New4();
    ::g::Fuse::Controls::Button* temp66 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Gestures::Clicked* temp67 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp68 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Controls::Rectangle* temp69 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp70 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp71 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp72 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp73 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp74 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp75 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::WhilePressed* temp76 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp77 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), Hamburger_Color_inst);
    ::g::Fuse::Controls::Grid* temp78 = ::g::Fuse::Controls::Grid::New4();
    InputTab = ::g::Fuse::Controls::Panel::New3();
    Tab1 = ::g::TabButton::New6();
    ::g::Fuse::Controls::Text* temp79 = ::g::Fuse::Controls::Text::New3();
    temp_eb46 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp32);
    ListTab = ::g::Fuse::Controls::Panel::New3();
    Tab2 = ::g::TabButton::New6();
    ::g::Fuse::Controls::Text* temp80 = ::g::Fuse::Controls::Text::New3();
    temp_eb47 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp33);
    StatisticTab = ::g::Fuse::Controls::Panel::New3();
    Tab3 = ::g::TabButton::New6();
    ::g::Fuse::Controls::Text* temp81 = ::g::Fuse::Controls::Text::New3();
    temp_eb48 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp34);
    BudgetTab = ::g::Fuse::Controls::Panel::New3();
    Tab4 = ::g::TabButton::New6();
    ::g::Fuse::Controls::Text* temp82 = ::g::Fuse::Controls::Text::New3();
    temp_eb49 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp35);
    ::g::Fuse::Controls::Navigator* temp83 = ::g::Fuse::Controls::Navigator::New4();
    MainView__Template5* inputPanel = MainView__Template5::New2(this, this);
    MainView__Template6* listPanel = MainView__Template6::New2(this, this);
    MainView__Template7* statisticPanel = MainView__Template7::New2(this, this);
    MainView__Template8* budgetPanel = MainView__Template8::New2(this, this);
    temp36->Code(uString::Const("\n"
        "\tvar moment=require(\"Modules/moment\");\n"
        "\tvar Observable=require(\"FuseJS/Observable\");\n"
        "\tvar Show=require(\"Modules/Show\");\n"
        "\tvar TempDB=require(\"Modules/tempDB\");\n"
        "\tvar sqlite = require('SQLite');\n"
        "\tvar db = sqlite.open(\"file.sqlite\");\n"
        "\t//get currentDateTime\n"
        "\n"
        "\t// for swipe navigation Start;\n"
        "\trouter.bookmark({\n"
        "\t\tname: \"input\",\n"
        "\t\tpath: [\"inputPanel\",{}]\n"
        "\t})\n"
        "\trouter.bookmark({\n"
        "\t\tname: \"list\",\n"
        "\t\tpath: [\"listPanel\",{}]\n"
        "\t})\n"
        "\trouter.bookmark({\n"
        "\t\tname: \"statistic\",\n"
        "\t\tpath: [\"statisticPanel\",{}]\n"
        "\t})\n"
        "\trouter.bookmark({\n"
        "\t\tname: \"budget\",\n"
        "\t\tpath: [\"budgetPanel\",{}]\n"
        "\t})\n"
        "\n"
        "\n"
        "\t//for swipe navigation End \n"
        "\n"
        "\t//for AccountList Start \n"
        "\tvar AccountList=require(\"Modules/AccountList\");\n"
        "\tvar tempList=AccountList.tempAccountList;\n"
        "\n"
        "\tvar clicked_Account = Observable();\n"
        "\tvar clicked_Account_id=clicked_Account.map(function(x){return x.db_id.value;});\n"
        "\tvar clicked_Account_title=clicked_Account.map(function(x){return x.title.value;}); // list click\354\213\234\354\227\254\352\270\260\354\227\220 id\353\245\274 \353\213\264\354\235\214\n"
        "\tvar index = clicked_Account.map(function(x){return tempList.indexOf(x)});\n"
        "\tvar tempListLastIndex=AccountList.idCount;\n"
        "\t\n"
        "\tvar currentTitle=Observable(tempList.getAt(0).title.value);\n"
        "\t \n"
        "\t// currentTitleId\353\212\224 AccountList.js\354\227\220 \354\240\200\354\236\245\353\220\230\354\226\264\354\236\210\354\235\214 Edge\354\227\220\354\204\234 list \354\204\240\355\203\235\354\213\234 current title\352\263\274 current id \353\221\230 \353\213\244 \354\210\230\354\240\225\355\225\264\354\243\274\354\226\264\354\225\274\355\225\250.\n"
        "\tfunction editTitle(arg){\n"
        "\t\tconsole.log(\"arg.data.title.value:\"+arg.data.title.value);\n"
        "\t\tTempDB.EditAccountListDB_byID(arg.data.db_id.value,arg.data.title.value);\n"
        "\t}\n"
        "\n"
        "\tfunction goToInput(){\n"
        "\t\trouter.goto(\"inputPanel\");\n"
        "\t}\n"
        " \n"
        "\tfunction goToList(){\n"
        "\t\trouter.goto(\"listPanel\");\n"
        "\t}\n"
        "\n"
        "\tfunction goToStatistic(){ \n"
        "\t\trouter.goto(\"statisticPanel\");\n"
        "\t}\n"
        "\tfunction goToBudget(){ \n"
        "\t\trouter.goto(\"budgetPanel\");\n"
        "\t}\n"
        "\tfunction tempListAdd(){\n"
        "\t\tdb.execute(\"insert into ACCOUNTLIST (title) values('\"+\"default\"+\"')\");\n"
        "\t\tTempDB.getAccountListDB();\n"
        "\t}\n"
        "\n"
        "\tfunction DeleteAccount(arg){\n"
        "\t\tTempDB.DeleteAccountListDB_byID(arg.data.db_id.value);\n"
        "\t\tAccountList.currentAccountId.value=1;\n"
        "\t\tcurrentTitle.value=TempDB.tempAccountList.getAt(0).title.value;\n"
        "\t\tShow.RenewInputCurrentBalance();\n"
        "\t\tShow.ReloadHistories();\n"
        "\t\tShow.CalculateSpcfTotal();\n"
        "\t\tShow.CalculateIntervalTotal();\n"
        "\t\tShow.CalculateIntervalItemTotal();\n"
        "\t\tShow.RenewOutputTable();\n"
        "\t}\n"
        "\n"
        "\tfunction SelectAccount(arg){\n"
        "\t\tAccountList.currentAccountId.value=arg.data.db_id.value;\n"
        "\t\tcurrentTitle.value=arg.data.title.value;\n"
        "\t\tShow.RenewInputCurrentBalance();\n"
        "\t\tShow.ReloadHistories();\n"
        "\t\tShow.CalculateSpcfTotal();\n"
        "\t\tShow.CalculateIntervalTotal();\n"
        "\t\tShow.CalculateIntervalItemTotal();\n"
        "\t\tShow.RenewOutputTable();\n"
        "\t}\n"
        "\n"
        "\t//for AccountList End\n"
        "\tmodule.exports={  \n"
        "\t\tgoToInput: goToInput,\n"
        "\t\tgoToList: goToList,\n"
        "\t\tgoToStatistic: goToStatistic,\n"
        "\t\tgoToBudget,\n"
        "\n"
        "\t\ttempListAdd: tempListAdd,\n"
        "\t\ttempList: tempList,\n"
        "\t\ttempListLastIndex: tempListLastIndex,\n"
        "\n"
        "\t\tcurrentTitle: currentTitle,\n"
        "\t\tDeleteAccount: DeleteAccount,\n"
        "\n"
        "\t\tclicked_Account_id: clicked_Account_id,\n"
        "\t\tclicked_Account_title: clicked_Account_title,\n"
        "\t\tindex: index,\n"
        "\t\tSelectAccount: SelectAccount,\n"
        "\t\teditTitle\n"
        "\t}\n"
        "\n"
        "\t"));
    temp36->LineNumber(3);
    temp36->FileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp58);
    uPtr(sidebar)->RowCount(100);
    uPtr(sidebar)->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    uPtr(sidebar)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebar)->Name(MainView::__selector3_);
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebar, 0);
    uPtr(sidebar)->Background(temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp56);
    uPtr(shadow)->Angle(180.0f);
    uPtr(shadow)->Distance(8.0f);
    uPtr(shadow)->Size(16.0f);
    uPtr(shadow)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadow)->Name(MainView::__selector4_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp43);
    ::g::Fuse::Animations::Change__set_Value_fn(temp43, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f)));
    temp44->Value(uString::Const("Book List"));
    temp44->FontSize(45.0f);
    temp44->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp44, 18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp45);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp46, 5);
    temp1->Limit1(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp48);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp49, 41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp50);
    temp50->ColumnCount(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    temp2->Offset1(1);
    temp2->Limit1(10000);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp55);
    temp56->Text(uString::Const("ADD"));
    temp56->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Fuse::Controls::Grid::SetRow(temp56, 74);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp56, 8);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp56, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb45)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb45);
    uPtr(router)->Name(MainView::__selector5_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp83);
    ::g::Fuse::Controls::DockPanel::SetDock(temp59, 2);
    temp59->Background(temp60);
    uPtr(indicator)->Height(::g::Uno::UX::Size__New1(4.0f, 1));
    uPtr(indicator)->Alignment(12);
    uPtr(indicator)->Name(MainView::__selector6_);
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, InputTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp62);
    temp62->X(1.0f);
    temp62->Duration(0.0);
    temp62->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_);
    temp62->Easing(::g::Fuse::Animations::Easing::CircularIn_);
    temp62->EasingBack(::g::Fuse::Animations::Easing::CircularIn_);
    temp64->RowCount(100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp78);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp65, 5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp66);
    temp66->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp66->Alignment(1);
    temp66->Layer(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Hamburger);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp68);
    temp68->Target(sidebar);
    uPtr(Hamburger)->RowCount(7);
    uPtr(Hamburger)->Padding(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    uPtr(Hamburger)->Name(MainView::__selector7_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp75);
    temp69->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp70->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp70->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp71->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp72->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp72->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp73->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp74->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp74->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp75->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp77);
    ::g::Fuse::Animations::Change__set_Value_fn(temp77, uCRef(::g::Uno::Float4__New2(0.5333334f, 0.5333334f, 0.5333334f, 1.0f)));
    temp77->Duration(0.05);
    temp77->DurationBack(0.2);
    temp78->ColumnCount(4);
    temp78->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Fuse::Controls::DockPanel::SetDock(temp78, 2);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp78, 8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), InputTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ListTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), StatisticTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), BudgetTab);
    uPtr(InputTab)->Name(MainView::__selector8_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(InputTab)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Tab1);
    uPtr(Tab1)->Name(MainView::__selector9_);
    ::g::Fuse::Gestures::Clicked::AddHandler(Tab1, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb46)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab1)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp79);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab1)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb46);
    temp79->Value(uString::Const("INPUT"));
    temp79->FontSize(15.0f);
    temp79->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp79->Alignment(10);
    uPtr(ListTab)->Name(MainView::__selector10_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ListTab)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Tab2);
    uPtr(Tab2)->Name(MainView::__selector11_);
    ::g::Fuse::Gestures::Clicked::AddHandler(Tab2, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb47)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab2)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb47);
    temp80->Value(uString::Const("LIST"));
    temp80->FontSize(15.0f);
    temp80->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp80->Alignment(10);
    uPtr(StatisticTab)->Name(MainView::__selector12_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(StatisticTab)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Tab3);
    uPtr(Tab3)->Name(MainView::__selector13_);
    ::g::Fuse::Gestures::Clicked::AddHandler(Tab3, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb48)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab3)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb48);
    temp81->Value(uString::Const("STATISTIC"));
    temp81->FontSize(15.0f);
    temp81->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp81->Alignment(10);
    uPtr(BudgetTab)->Name(MainView::__selector14_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(BudgetTab)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Tab4);
    uPtr(Tab4)->Name(MainView::__selector15_);
    ::g::Fuse::Gestures::Clicked::AddHandler(Tab4, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb49)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab4)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab4)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb49);
    temp82->Value(uString::Const("BUDGET"));
    temp82->FontSize(15.0f);
    temp82->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp82->Alignment(10);
    temp83->DefaultPath(uString::Const("inputPanel"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), inputPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), listPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), statisticPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), budgetPanel);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), Hamburger);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), InputTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), Tab1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), ListTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), Tab2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), StatisticTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), Tab3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), BudgetTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), Tab4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp40);
}

// public MainView New() [static] :958
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
