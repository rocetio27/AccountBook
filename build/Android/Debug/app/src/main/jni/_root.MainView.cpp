// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_bundle.h>
#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.AccountBook_Fus-78f233b1.h>
#include <_root.AccountBook_Fus-7ed8148.h>
#include <_root.AccountBook_Fus-9d2d7d8d.h>
#include <_root.Banner.h>
#include <_root.BudgetPage.h>
#include <_root.InputPage.h>
#include <_root.ListPage.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template2.h>
#include <_root.MainView.Template3.h>
#include <_root.MainView.Template4.h>
#include <_root.PageTab.h>
#include <_root.SQLite.h>
#include <_root.StatisticPage.h>
#include <_root.wbButton.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.AppBase.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.EdgeNavigator.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
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
#include <Fuse.Reactive.DeviceCaps.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
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

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :731
static void MainView__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Resource_typeof()->Init();
    ::g::Fuse::Reactive::DeviceCaps_typeof()->Init();
    ::g::Fuse::Animations::Easing_typeof()->Init();
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    ::g::Fuse::Drawing::Brushes_typeof()->Init();
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    ::g::Fuse::Elements::TranslationModes_typeof()->Init();
    ::g::Fuse::TranslationModes_typeof()->Init();
    ::g::Fuse::Triggers::Actions::GiveFocus_typeof()->Init();
    ::g::Fuse::Triggers::LayoutTransition_typeof()->Init();
    ::g::Fuse::Triggers::WhileKeyboardVisible_typeof()->Init();
    ::g::Fuse::Triggers::IScrolledLengths_typeof()->Init();
    ::g::Fuse::Resources::MemoryPolicy_typeof()->Init();
    ::g::Fuse::Font_typeof()->Init();
    ::g::ListPage_typeof()->Init();
    ::g::Fuse::ScalingModes_typeof()->Init();
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 11, uString::Const("sidebar"), uString::Const("shadow"), uString::Const("temp_eb45"), uString::Const("router"), uString::Const("Hamburger"), uString::Const("router_pages"), uString::Const("pageControl"), uString::Const("input"), uString::Const("list"), uString::Const("statistic"), uString::Const("budget"));
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Color"));
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sidebar"));
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("shadow"));
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("router"));
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Hamburger"));
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("router_pages"));
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("pageControl"));
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("input"));
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("list"));
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("statistic"));
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("budget"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Reactive::DeviceCaps::Device(), uString::Const("Device"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), uString::Const("Linear"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), uString::Const("QuadraticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), uString::Const("QuadraticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), uString::Const("QuadraticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), uString::Const("CubicIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), uString::Const("CubicOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), uString::Const("CubicInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), uString::Const("QuarticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), uString::Const("QuarticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), uString::Const("QuarticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), uString::Const("QuinticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), uString::Const("QuinticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), uString::Const("QuinticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), uString::Const("SinusoidalIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), uString::Const("SinusoidalOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), uString::Const("SinusoidalInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), uString::Const("ExponentialIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), uString::Const("ExponentialOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), uString::Const("ExponentialInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), uString::Const("CircularIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), uString::Const("CircularOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), uString::Const("CircularInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), uString::Const("ElasticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), uString::Const("ElasticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), uString::Const("ElasticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), uString::Const("BackIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), uString::Const("BackOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), uString::Const("BackInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), uString::Const("BounceIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), uString::Const("BounceOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), uString::Const("BounceInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), uString::Const("TopLeft"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), uString::Const("Center"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), uString::Const("Anchor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), uString::Const("HorizontalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), uString::Const("VerticalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), uString::Const("TransformOriginOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), uString::Const("PositionOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), uString::Const("SizeFactor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), uString::Const("GiveFocus"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), uString::Const("WorldPositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), uString::Const("PositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), uString::Const("Keyboard"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), uString::Const("Points"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), uString::Const("Pixels"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), uString::Const("ContentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), uString::Const("ScrollViewSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), uString::Const("PreloadRetain"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), uString::Const("UnloadUnused"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload(), uString::Const("QuickUnload"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), uString::Const("UnloadInBackground"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin(), uString::Const("Thin"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light(), uString::Const("Light"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular(), uString::Const("Regular"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium(), uString::Const("Medium"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold(), uString::Const("Bold"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::ListPage::Bold(), uString::Const("Bold"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic(), uString::Const("ThinItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic(), uString::Const("LightItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic(), uString::Const("Italic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic(), uString::Const("MediumItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic(), uString::Const("BoldItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), uString::Const("PlatformDefault"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), uString::Const("Identity"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), uString::Const("Local"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), uString::Const("ParentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), uString::Const("Width"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), uString::Const("Height"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::ListPage::lArrow(), uString::Const("lArrow"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::ListPage::rArrow(), uString::Const("rArrow"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::SQLite_, uString::Const("SQLite"));
    MainView::SQLite_ = ::g::SQLite::New2();
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::SQLite_, uString::Const("SQLite"));
}

static void MainView_build(uType* type)
{
    type->SetDependencies(
        ::g::AccountBook_bundle_typeof(),
        ::g::Fuse::Navigation::EdgeNavigation_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(7,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView, shadow_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MainView, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MainView, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView, Hamburger_Color_inst), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(MainView, sidebar), 0,
        ::g::Fuse::Controls::Shadow_typeof(), offsetof(MainView, shadow), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb45), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(MainView, router), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(MainView, Hamburger), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(MainView, router_pages), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(MainView, pageControl), 0,
        ::g::InputPage_typeof(), offsetof(MainView, input), 0,
        ::g::ListPage_typeof(), offsetof(MainView, list), 0,
        ::g::StatisticPage_typeof(), offsetof(MainView, statistic), 0,
        ::g::BudgetPage_typeof(), offsetof(MainView, budget), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MainView, __g_nametable1), 0,
        ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule_typeof(), offsetof(MainView, FuseReactiveFuseJSDiagnosticsImplModule), 0,
        ::g::Fuse::Reactive::FuseJS::Http_typeof(), offsetof(MainView, FuseReactiveFuseJSHttp), 0,
        ::g::Fuse::Reactive::FuseJS::TimerModule_typeof(), offsetof(MainView, FuseReactiveFuseJSTimerModule), 0,
        ::g::Fuse::Drawing::BrushConverter_typeof(), offsetof(MainView, FuseDrawingBrushConverter), 0,
        ::g::Fuse::Triggers::BusyTaskModule_typeof(), offsetof(MainView, FuseTriggersBusyTaskModule), 0,
        ::g::Fuse::Testing::UnoTestingHelper_typeof(), offsetof(MainView, FuseTestingUnoTestingHelper), 0,
        ::g::Fuse::FileSystem::FileSystemModule_typeof(), offsetof(MainView, FuseFileSystemFileSystemModule), 0,
        ::g::Fuse::Storage::StorageModule_typeof(), offsetof(MainView, FuseStorageStorageModule), 0,
        ::g::Fuse::WebSocket::WebSocketClientModule_typeof(), offsetof(MainView, FuseWebSocketWebSocketClientModule), 0,
        ::g::Polyfills::Window::WindowModule_typeof(), offsetof(MainView, PolyfillsWindowWindowModule), 0,
        ::g::FuseJS::Globals_typeof(), offsetof(MainView, FuseJSGlobals), 0,
        ::g::FuseJS::Lifecycle_typeof(), offsetof(MainView, FuseJSLifecycle), 0,
        ::g::FuseJS::Environment_typeof(), offsetof(MainView, FuseJSEnvironment), 0,
        ::g::FuseJS::Base64_typeof(), offsetof(MainView, FuseJSBase64), 0,
        ::g::FuseJS::Bundle_typeof(), offsetof(MainView, FuseJSBundle), 0,
        ::g::FuseJS::FileReaderImpl_typeof(), offsetof(MainView, FuseJSFileReaderImpl), 0,
        ::g::FuseJS::UserEvents_typeof(), offsetof(MainView, FuseJSUserEvents), 0,
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
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector12_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 56;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :849
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :853
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :849
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

// public MainView() [instance] :849
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :853
void MainView::InitializeUX()
{
    FuseReactiveFuseJSDiagnosticsImplModule = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    FuseReactiveFuseJSHttp = ::g::Fuse::Reactive::FuseJS::Http::New2();
    FuseReactiveFuseJSTimerModule = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    FuseDrawingBrushConverter = ::g::Fuse::Drawing::BrushConverter::New1();
    FuseTriggersBusyTaskModule = ::g::Fuse::Triggers::BusyTaskModule::New2();
    FuseTestingUnoTestingHelper = ::g::Fuse::Testing::UnoTestingHelper::New2();
    FuseFileSystemFileSystemModule = ::g::Fuse::FileSystem::FileSystemModule::New2();
    FuseStorageStorageModule = ::g::Fuse::Storage::StorageModule::New2();
    FuseWebSocketWebSocketClientModule = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    PolyfillsWindowWindowModule = ::g::Polyfills::Window::WindowModule::New3();
    FuseJSGlobals = ::g::FuseJS::Globals::New2();
    FuseJSLifecycle = ::g::FuseJS::Lifecycle::New3();
    FuseJSEnvironment = ::g::FuseJS::Environment::New2();
    FuseJSBase64 = ::g::FuseJS::Base64::New2();
    FuseJSBundle = ::g::FuseJS::Bundle::New2();
    FuseJSFileReaderImpl = ::g::FuseJS::FileReaderImpl::New2();
    FuseJSUserEvents = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1_);
    ::g::Uno::Float4 temp3 = ::g::Uno::Float4__New2(0.9568627f, 0.827451f, 0.0f, 1.0f);
    ::g::Uno::Float4 temp4 = ::g::Uno::Float4__New2(1.0f, 0.9529412f, 0.6509804f, 1.0f);
    ::g::Uno::Float4 temp5 = ::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f);
    ::g::Uno::Float4 temp6 = ::g::Uno::Float4__New2(1.0f, 1.0f, 0.9333333f, 1.0f);
    shadow = ::g::Fuse::Controls::Shadow::New2();
    shadow_Color_inst = ::g::AccountBook_FuseControlsShadow_Color_Property::New1(shadow, MainView::__selector0_);
    uString* temp7 = uString::Const("Selected : ");
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(temp7);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(uString::Const("currentTitle"));
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp, MainView::__selector1_);
    ::g::Fuse::Reactive::Add* temp10 = ::g::Fuse::Reactive::Add::New1(temp8, temp9);
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp1, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(uString::Const("tempList"));
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp2, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(uString::Const("tempList"));
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(uString::Const("tempListAdd"));
    Hamburger = ::g::Fuse::Controls::Grid::New4();
    Hamburger_Color_inst = ::g::AccountBook_FuseControlsPanel_Color_Property::New1(Hamburger, MainView::__selector0_);
    pageControl = ::g::Fuse::Controls::PageControl::New4();
    input = ::g::InputPage::New5();
    list = ::g::ListPage::New5();
    statistic = ::g::StatisticPage::New5();
    budget = ::g::BudgetPage::New5();
    ::g::Fuse::Reactive::JavaScript* temp14 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Uno::UX::Resource* temp15 = ::g::Uno::UX::Resource::New1(uString::Const("Col_type1"), uBox(::g::Uno::Float4_typeof(), temp3));
    ::g::Uno::UX::Resource* temp16 = ::g::Uno::UX::Resource::New1(uString::Const("Col_type2"), uBox(::g::Uno::Float4_typeof(), temp4));
    ::g::Uno::UX::Resource* temp17 = ::g::Uno::UX::Resource::New1(uString::Const("Col_type3"), uBox(::g::Uno::Float4_typeof(), temp5));
    ::g::Uno::UX::Resource* temp18 = ::g::Uno::UX::Resource::New1(uString::Const("Col_type4"), uBox(::g::Uno::Float4_typeof(), temp6));
    ::g::Fuse::Controls::EdgeNavigator* temp19 = ::g::Fuse::Controls::EdgeNavigator::New4();
    sidebar = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Navigation::ActivatingAnimation* temp20 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), shadow_Color_inst);
    ::g::Fuse::Controls::Text* temp22 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Controls::Rectangle* temp24 = ::g::Fuse::Controls::Rectangle::New3();
    MainView__Template* temp25 = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::ScrollView* temp27 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::Grid* temp28 = ::g::Fuse::Controls::Grid::New4();
    MainView__Template1* temp29 = MainView__Template1::New2(this, this);
    MainView__Template2* temp30 = MainView__Template2::New2(this, this);
    MainView__Template3* temp31 = MainView__Template3::New2(this, this);
    MainView__Template4* temp32 = MainView__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp12, 3);
    ::g::wbButton* temp34 = ::g::wbButton::New6();
    temp_eb45 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp13);
    ::g::Fuse::Drawing::StaticSolidColor* temp35 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    router = ::g::Fuse::Navigation::Router::New2();
    ::g::Fuse::Controls::DockPanel* temp36 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp37 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp38 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5333334f, 0.5333334f, 0.5333334f, 1.0f));
    ::g::Fuse::Controls::Grid* temp39 = ::g::Fuse::Controls::Grid::New4();
    ::g::Banner* temp40 = ::g::Banner::New4();
    ::g::Fuse::Controls::Button* temp41 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Gestures::Clicked* temp42 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp43 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Controls::Rectangle* temp44 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp45 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp46 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp47 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp48 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp49 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp50 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::WhilePressed* temp51 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp52 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), Hamburger_Color_inst);
    ::g::Fuse::Controls::Grid* temp53 = ::g::Fuse::Controls::Grid::New4();
    ::g::PageTab* temp54 = ::g::PageTab::New4(pageControl, input);
    ::g::PageTab* temp55 = ::g::PageTab::New4(pageControl, list);
    ::g::PageTab* temp56 = ::g::PageTab::New4(pageControl, statistic);
    ::g::PageTab* temp57 = ::g::PageTab::New4(pageControl, budget);
    ::g::Fuse::Controls::Page* temp58 = ::g::Fuse::Controls::Page::New4();
    router_pages = ::g::Fuse::Navigation::Router::New2();
    temp14->LineNumber(3);
    temp14->FileName(uString::Const("MainView.ux"));
    temp14->SourceLineNumber(3);
    temp14->SourceFileName(uString::Const("MainView.ux"));
    temp14->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::MainView22996bfa()));
    temp19->SourceLineNumber(80);
    temp19->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp36);
    uPtr(sidebar)->RowCount(100);
    uPtr(sidebar)->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    uPtr(sidebar)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebar)->Name(MainView::__selector3_);
    uPtr(sidebar)->SourceLineNumber(82);
    uPtr(sidebar)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebar, 0);
    uPtr(sidebar)->Background(temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp34);
    uPtr(shadow)->Angle(180.0f);
    uPtr(shadow)->Distance(8.0f);
    uPtr(shadow)->Size(16.0f);
    uPtr(shadow)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadow)->Name(MainView::__selector4_);
    uPtr(shadow)->SourceLineNumber(83);
    uPtr(shadow)->SourceFileName(uString::Const("MainView.ux"));
    temp20->SourceLineNumber(84);
    temp20->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp21);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f)));
    temp22->Value(uString::Const("Book List"));
    temp22->FontSize(45.0f);
    temp22->Alignment(10);
    temp22->SourceLineNumber(88);
    temp22->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp22, 18);
    temp->SourceLineNumber(89);
    temp->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp23);
    temp10->SourceLineNumber(89);
    temp10->SourceFileName(uString::Const("MainView.ux"));
    temp8->SourceLineNumber(89);
    temp8->SourceFileName(uString::Const("MainView.ux"));
    temp9->SourceLineNumber(89);
    temp9->SourceFileName(uString::Const("MainView.ux"));
    temp24->SourceLineNumber(90);
    temp24->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp24, 5);
    temp1->Limit1(1);
    temp1->SourceLineNumber(92);
    temp1->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp26);
    temp11->SourceLineNumber(92);
    temp11->SourceFileName(uString::Const("MainView.ux"));
    temp27->SourceLineNumber(123);
    temp27->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp27, 41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp28);
    temp28->ColumnCount(1);
    temp28->SourceLineNumber(124);
    temp28->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    temp2->Offset1(1);
    temp2->Limit1(10000);
    temp2->SourceLineNumber(125);
    temp2->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp33);
    temp12->SourceLineNumber(125);
    temp12->SourceFileName(uString::Const("MainView.ux"));
    temp34->Text(uString::Const("ADD"));
    temp34->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp34->SourceLineNumber(232);
    temp34->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::Grid::SetRow(temp34, 74);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp34, 8);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp34, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb45)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb45);
    temp13->SourceLineNumber(232);
    temp13->SourceFileName(uString::Const("MainView.ux"));
    uPtr(router)->Name(MainView::__selector5_);
    uPtr(router)->SourceLineNumber(238);
    uPtr(router)->SourceFileName(uString::Const("MainView.ux"));
    temp36->SourceLineNumber(239);
    temp36->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp58);
    temp37->SourceLineNumber(240);
    temp37->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp37, 2);
    temp37->Background(temp38);
    temp39->RowCount(100);
    temp39->SourceLineNumber(243);
    temp39->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp53);
    temp40->SourceLineNumber(245);
    temp40->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp40, 5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp41);
    temp41->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp41->Alignment(1);
    temp41->Layer(3);
    temp41->SourceLineNumber(246);
    temp41->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Hamburger);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp51);
    temp42->SourceLineNumber(248);
    temp42->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp43);
    temp43->SourceLineNumber(249);
    temp43->SourceFileName(uString::Const("MainView.ux"));
    temp43->Target(sidebar);
    uPtr(Hamburger)->RowCount(7);
    uPtr(Hamburger)->Padding(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    uPtr(Hamburger)->Name(MainView::__selector6_);
    uPtr(Hamburger)->SourceLineNumber(251);
    uPtr(Hamburger)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp50);
    temp44->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp44->SourceLineNumber(252);
    temp44->SourceFileName(uString::Const("MainView.ux"));
    temp45->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp45->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp45->SourceLineNumber(253);
    temp45->SourceFileName(uString::Const("MainView.ux"));
    temp46->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp46->SourceLineNumber(254);
    temp46->SourceFileName(uString::Const("MainView.ux"));
    temp47->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp47->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp47->SourceLineNumber(255);
    temp47->SourceFileName(uString::Const("MainView.ux"));
    temp48->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp48->SourceLineNumber(256);
    temp48->SourceFileName(uString::Const("MainView.ux"));
    temp49->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp49->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp49->SourceLineNumber(257);
    temp49->SourceFileName(uString::Const("MainView.ux"));
    temp50->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp50->SourceLineNumber(258);
    temp50->SourceFileName(uString::Const("MainView.ux"));
    temp51->SourceLineNumber(260);
    temp51->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp52);
    ::g::Fuse::Animations::Change__set_Value_fn(temp52, uCRef(::g::Uno::Float4__New2(0.5333334f, 0.5333334f, 0.5333334f, 1.0f)));
    temp52->Duration(0.05);
    temp52->DurationBack(0.2);
    temp53->ColumnCount(4);
    temp53->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp53->SourceLineNumber(267);
    temp53->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp53, 2);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp53, 8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp57);
    temp54->Label(uString::Const("INPUT"));
    temp54->SourceLineNumber(268);
    temp54->SourceFileName(uString::Const("MainView.ux"));
    temp55->Label(uString::Const("LIST"));
    temp55->SourceLineNumber(269);
    temp55->SourceFileName(uString::Const("MainView.ux"));
    temp56->Label(uString::Const("STATISTIC"));
    temp56->SourceLineNumber(270);
    temp56->SourceFileName(uString::Const("MainView.ux"));
    temp57->Label(uString::Const("BUDGET"));
    temp57->SourceLineNumber(271);
    temp57->SourceFileName(uString::Const("MainView.ux"));
    temp58->SourceLineNumber(278);
    temp58->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), router_pages);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), pageControl);
    uPtr(router_pages)->Name(MainView::__selector7_);
    uPtr(router_pages)->SourceLineNumber(279);
    uPtr(router_pages)->SourceFileName(uString::Const("MainView.ux"));
    uPtr(pageControl)->Name(MainView::__selector8_);
    uPtr(pageControl)->SourceLineNumber(280);
    uPtr(pageControl)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pageControl)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), input);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pageControl)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), list);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pageControl)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), statistic);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pageControl)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), budget);
    uPtr(input)->Name(MainView::__selector9_);
    uPtr(input)->SourceLineNumber(281);
    uPtr(input)->SourceFileName(uString::Const("MainView.ux"));
    uPtr(list)->Name(MainView::__selector10_);
    uPtr(list)->SourceLineNumber(282);
    uPtr(list)->SourceFileName(uString::Const("MainView.ux"));
    uPtr(statistic)->Name(MainView::__selector11_);
    uPtr(statistic)->SourceLineNumber(283);
    uPtr(statistic)->SourceFileName(uString::Const("MainView.ux"));
    uPtr(budget)->Name(MainView::__selector12_);
    uPtr(budget)->SourceLineNumber(284);
    uPtr(budget)->SourceFileName(uString::Const("MainView.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), Hamburger);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router_pages);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), pageControl);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), input);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), list);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), statistic);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), budget);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp18);
}

// public MainView New() [static] :849
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
