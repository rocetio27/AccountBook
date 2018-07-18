// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_bundle.h>
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
// static MainView() :1138
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
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 18, uString::Const("sidebar"), uString::Const("shadow"), uString::Const("temp_eb45"), uString::Const("router"), uString::Const("indicator"), uString::Const("Hamburger"), uString::Const("InputTab"), uString::Const("Tab1"), uString::Const("temp_eb46"), uString::Const("ListTab"), uString::Const("Tab2"), uString::Const("temp_eb47"), uString::Const("StatisticTab"), uString::Const("Tab3"), uString::Const("temp_eb48"), uString::Const("BudgetTab"), uString::Const("Tab4"), uString::Const("temp_eb49"));
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Color"));
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sidebar"));
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("shadow"));
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("router"));
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("indicator"));
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Hamburger"));
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("InputTab"));
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Tab1"));
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ListTab"));
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Tab2"));
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("StatisticTab"));
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Tab3"));
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("BudgetTab"));
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Tab4"));
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
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Navigation::EdgeNavigation_typeof(),
        ::g::Fuse::Triggers::LayoutTransition_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0),
        ::g::Fuse::IRootVisualProvider_typeof(), offsetof(::g::Fuse::AppBase_type, interface1));
    type->SetFields(7,
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
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector15_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("SQLite", 49));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 67;
    options.InterfaceCount = 2;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface1.fp_get_Root = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::AppBase__FuseIRootVisualProviderget_Root_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :1256
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :1260
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :1256
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

// public MainView() [instance] :1256
void MainView::ctor_4()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :1260
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
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
    indicator = ::g::Fuse::Controls::Rectangle::New3();
    indicator_Color_inst = ::g::AccountBook_FuseControlsShape_Color_Property::New1(indicator, MainView::__selector0_);
    ::g::Fuse::Reactive::Resource* temp14 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Col_type3"));
    Hamburger = ::g::Fuse::Controls::Grid::New4();
    Hamburger_Color_inst = ::g::AccountBook_FuseControlsPanel_Color_Property::New1(Hamburger, MainView::__selector0_);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(uString::Const("goToInput"));
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(uString::Const("goToList"));
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(uString::Const("goToStatistic"));
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(uString::Const("goToBudget"));
    ::g::Fuse::Reactive::JavaScript* temp19 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Uno::UX::Resource* temp20 = ::g::Uno::UX::Resource::New1(uString::Const("Col_type1"), uBox(::g::Uno::Float4_typeof(), temp3));
    ::g::Uno::UX::Resource* temp21 = ::g::Uno::UX::Resource::New1(uString::Const("Col_type2"), uBox(::g::Uno::Float4_typeof(), temp4));
    ::g::Uno::UX::Resource* temp22 = ::g::Uno::UX::Resource::New1(uString::Const("Col_type3"), uBox(::g::Uno::Float4_typeof(), temp5));
    ::g::Uno::UX::Resource* temp23 = ::g::Uno::UX::Resource::New1(uString::Const("Col_type4"), uBox(::g::Uno::Float4_typeof(), temp6));
    ::g::Fuse::Controls::EdgeNavigator* temp24 = ::g::Fuse::Controls::EdgeNavigator::New4();
    sidebar = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Navigation::ActivatingAnimation* temp25 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp26 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), shadow_Color_inst);
    ::g::Fuse::Controls::Text* temp27 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Controls::Rectangle* temp29 = ::g::Fuse::Controls::Rectangle::New3();
    MainView__Template* temp30 = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::ScrollView* temp32 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::Grid* temp33 = ::g::Fuse::Controls::Grid::New4();
    MainView__Template1* temp34 = MainView__Template1::New2(this, this);
    MainView__Template2* temp35 = MainView__Template2::New2(this, this);
    MainView__Template3* temp36 = MainView__Template3::New2(this, this);
    MainView__Template4* temp37 = MainView__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp12, 3);
    ::g::wbButton* temp39 = ::g::wbButton::New6();
    temp_eb45 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp13);
    ::g::Fuse::Drawing::StaticSolidColor* temp40 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    router = ::g::Fuse::Navigation::Router::New2();
    ::g::Fuse::Controls::DockPanel* temp41 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp42 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp43 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5333334f, 0.5333334f, 0.5333334f, 1.0f));
    ::g::Fuse::Triggers::LayoutAnimation* temp44 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp45 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp46 = ::g::Fuse::Reactive::DataBinding::New1(indicator_Color_inst, (uObject*)temp14, 3);
    ::g::Fuse::Controls::Grid* temp47 = ::g::Fuse::Controls::Grid::New4();
    ::g::Banner* temp48 = ::g::Banner::New4();
    ::g::Fuse::Controls::Button* temp49 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Gestures::Clicked* temp50 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp51 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Controls::Rectangle* temp52 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp53 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp54 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp55 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp56 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp57 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp58 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::WhilePressed* temp59 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp60 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), Hamburger_Color_inst);
    ::g::Fuse::Controls::Grid* temp61 = ::g::Fuse::Controls::Grid::New4();
    InputTab = ::g::Fuse::Controls::Panel::New3();
    Tab1 = ::g::TabButton::New6();
    ::g::Fuse::Controls::Text* temp62 = ::g::Fuse::Controls::Text::New3();
    temp_eb46 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp15);
    ListTab = ::g::Fuse::Controls::Panel::New3();
    Tab2 = ::g::TabButton::New6();
    ::g::Fuse::Controls::Text* temp63 = ::g::Fuse::Controls::Text::New3();
    temp_eb47 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp16);
    StatisticTab = ::g::Fuse::Controls::Panel::New3();
    Tab3 = ::g::TabButton::New6();
    ::g::Fuse::Controls::Text* temp64 = ::g::Fuse::Controls::Text::New3();
    temp_eb48 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp17);
    BudgetTab = ::g::Fuse::Controls::Panel::New3();
    Tab4 = ::g::TabButton::New6();
    ::g::Fuse::Controls::Text* temp65 = ::g::Fuse::Controls::Text::New3();
    temp_eb49 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp18);
    ::g::Fuse::Controls::Navigator* temp66 = ::g::Fuse::Controls::Navigator::New4();
    MainView__Template5* inputPanel = MainView__Template5::New2(this, this);
    MainView__Template6* listPanel = MainView__Template6::New2(this, this);
    MainView__Template7* statisticPanel = MainView__Template7::New2(this, this);
    MainView__Template8* budgetPanel = MainView__Template8::New2(this, this);
    temp19->LineNumber(3);
    temp19->FileName(uString::Const("MainView.ux"));
    temp19->SourceLineNumber(3);
    temp19->SourceFileName(uString::Const("MainView.ux"));
    temp19->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::MainView22996bfa()));
    temp24->SourceLineNumber(79);
    temp24->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp41);
    uPtr(sidebar)->RowCount(100);
    uPtr(sidebar)->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    uPtr(sidebar)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebar)->Name(MainView::__selector3_);
    uPtr(sidebar)->SourceLineNumber(81);
    uPtr(sidebar)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebar, 0);
    uPtr(sidebar)->Background(temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp39);
    uPtr(shadow)->Angle(180.0f);
    uPtr(shadow)->Distance(8.0f);
    uPtr(shadow)->Size(16.0f);
    uPtr(shadow)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadow)->Name(MainView::__selector4_);
    uPtr(shadow)->SourceLineNumber(82);
    uPtr(shadow)->SourceFileName(uString::Const("MainView.ux"));
    temp25->SourceLineNumber(83);
    temp25->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp26);
    ::g::Fuse::Animations::Change__set_Value_fn(temp26, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f)));
    temp27->Value(uString::Const("Book List"));
    temp27->FontSize(45.0f);
    temp27->Alignment(10);
    temp27->SourceLineNumber(87);
    temp27->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp27, 18);
    temp->SourceLineNumber(88);
    temp->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp28);
    temp10->SourceLineNumber(88);
    temp10->SourceFileName(uString::Const("MainView.ux"));
    temp8->SourceLineNumber(88);
    temp8->SourceFileName(uString::Const("MainView.ux"));
    temp9->SourceLineNumber(88);
    temp9->SourceFileName(uString::Const("MainView.ux"));
    temp29->SourceLineNumber(89);
    temp29->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp29, 5);
    temp1->Limit1(1);
    temp1->SourceLineNumber(91);
    temp1->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp31);
    temp11->SourceLineNumber(91);
    temp11->SourceFileName(uString::Const("MainView.ux"));
    temp32->SourceLineNumber(122);
    temp32->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp32, 41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp33);
    temp33->ColumnCount(1);
    temp33->SourceLineNumber(123);
    temp33->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    temp2->Offset1(1);
    temp2->Limit1(10000);
    temp2->SourceLineNumber(124);
    temp2->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp38);
    temp12->SourceLineNumber(124);
    temp12->SourceFileName(uString::Const("MainView.ux"));
    temp39->Text(uString::Const("ADD"));
    temp39->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp39->SourceLineNumber(231);
    temp39->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::Grid::SetRow(temp39, 74);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp39, 8);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp39, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb45)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb45);
    temp13->SourceLineNumber(231);
    temp13->SourceFileName(uString::Const("MainView.ux"));
    uPtr(router)->Name(MainView::__selector5_);
    uPtr(router)->SourceLineNumber(237);
    uPtr(router)->SourceFileName(uString::Const("MainView.ux"));
    temp41->SourceLineNumber(238);
    temp41->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp66);
    temp42->SourceLineNumber(239);
    temp42->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp42, 2);
    temp42->Background(temp43);
    uPtr(indicator)->Height(::g::Uno::UX::Size__New1(4.0f, 1));
    uPtr(indicator)->Alignment(12);
    uPtr(indicator)->Name(MainView::__selector6_);
    uPtr(indicator)->SourceLineNumber(242);
    uPtr(indicator)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, InputTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp46);
    temp44->SourceLineNumber(243);
    temp44->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp45);
    temp45->X(1.0f);
    temp45->Duration(0.0);
    temp45->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp45->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp45->EasingBack(::g::Fuse::Animations::Easing::CircularIn());
    temp14->SourceLineNumber(242);
    temp14->SourceFileName(uString::Const("MainView.ux"));
    temp47->RowCount(100);
    temp47->SourceLineNumber(248);
    temp47->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp61);
    temp48->SourceLineNumber(249);
    temp48->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::Grid::SetRowSpan(temp48, 5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp49);
    temp49->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp49->Alignment(1);
    temp49->Layer(3);
    temp49->SourceLineNumber(250);
    temp49->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Hamburger);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp59);
    temp50->SourceLineNumber(252);
    temp50->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp51);
    temp51->SourceLineNumber(253);
    temp51->SourceFileName(uString::Const("MainView.ux"));
    temp51->Target(sidebar);
    uPtr(Hamburger)->RowCount(7);
    uPtr(Hamburger)->Padding(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    uPtr(Hamburger)->Name(MainView::__selector7_);
    uPtr(Hamburger)->SourceLineNumber(255);
    uPtr(Hamburger)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp58);
    temp52->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp52->SourceLineNumber(256);
    temp52->SourceFileName(uString::Const("MainView.ux"));
    temp53->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp53->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp53->SourceLineNumber(257);
    temp53->SourceFileName(uString::Const("MainView.ux"));
    temp54->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp54->SourceLineNumber(258);
    temp54->SourceFileName(uString::Const("MainView.ux"));
    temp55->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp55->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp55->SourceLineNumber(259);
    temp55->SourceFileName(uString::Const("MainView.ux"));
    temp56->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp56->SourceLineNumber(260);
    temp56->SourceFileName(uString::Const("MainView.ux"));
    temp57->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp57->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp57->SourceLineNumber(261);
    temp57->SourceFileName(uString::Const("MainView.ux"));
    temp58->Color(::g::Uno::Float4__New2(1.0f, 0.7411765f, 0.0f, 1.0f));
    temp58->SourceLineNumber(262);
    temp58->SourceFileName(uString::Const("MainView.ux"));
    temp59->SourceLineNumber(264);
    temp59->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp60);
    ::g::Fuse::Animations::Change__set_Value_fn(temp60, uCRef(::g::Uno::Float4__New2(0.5333334f, 0.5333334f, 0.5333334f, 1.0f)));
    temp60->Duration(0.05);
    temp60->DurationBack(0.2);
    temp61->ColumnCount(4);
    temp61->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp61->SourceLineNumber(269);
    temp61->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp61, 2);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp61, 8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), InputTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ListTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), StatisticTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), BudgetTab);
    uPtr(InputTab)->Name(MainView::__selector8_);
    uPtr(InputTab)->SourceLineNumber(270);
    uPtr(InputTab)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(InputTab)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Tab1);
    uPtr(Tab1)->Name(MainView::__selector9_);
    uPtr(Tab1)->SourceLineNumber(271);
    uPtr(Tab1)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(Tab1, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb46)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab1)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab1)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb46);
    temp62->Value(uString::Const("INPUT"));
    temp62->FontSize(15.0f);
    temp62->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp62->Alignment(10);
    temp62->SourceLineNumber(272);
    temp62->SourceFileName(uString::Const("MainView.ux"));
    temp15->SourceLineNumber(271);
    temp15->SourceFileName(uString::Const("MainView.ux"));
    uPtr(ListTab)->Name(MainView::__selector10_);
    uPtr(ListTab)->SourceLineNumber(275);
    uPtr(ListTab)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ListTab)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Tab2);
    uPtr(Tab2)->Name(MainView::__selector11_);
    uPtr(Tab2)->SourceLineNumber(276);
    uPtr(Tab2)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(Tab2, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb47)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab2)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb47);
    temp63->Value(uString::Const("LIST"));
    temp63->FontSize(15.0f);
    temp63->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp63->Alignment(10);
    temp63->SourceLineNumber(277);
    temp63->SourceFileName(uString::Const("MainView.ux"));
    temp16->SourceLineNumber(276);
    temp16->SourceFileName(uString::Const("MainView.ux"));
    uPtr(StatisticTab)->Name(MainView::__selector12_);
    uPtr(StatisticTab)->SourceLineNumber(280);
    uPtr(StatisticTab)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(StatisticTab)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Tab3);
    uPtr(Tab3)->Name(MainView::__selector13_);
    uPtr(Tab3)->SourceLineNumber(281);
    uPtr(Tab3)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(Tab3, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb48)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab3)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb48);
    temp64->Value(uString::Const("STATISTIC"));
    temp64->FontSize(15.0f);
    temp64->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp64->Alignment(10);
    temp64->SourceLineNumber(282);
    temp64->SourceFileName(uString::Const("MainView.ux"));
    temp17->SourceLineNumber(281);
    temp17->SourceFileName(uString::Const("MainView.ux"));
    uPtr(BudgetTab)->Name(MainView::__selector14_);
    uPtr(BudgetTab)->SourceLineNumber(285);
    uPtr(BudgetTab)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(BudgetTab)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Tab4);
    uPtr(Tab4)->Name(MainView::__selector15_);
    uPtr(Tab4)->SourceLineNumber(286);
    uPtr(Tab4)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(Tab4, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb49)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab4)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Tab4)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb49);
    temp65->Value(uString::Const("BUDGET"));
    temp65->FontSize(15.0f);
    temp65->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp65->Alignment(10);
    temp65->SourceLineNumber(287);
    temp65->SourceFileName(uString::Const("MainView.ux"));
    temp18->SourceLineNumber(286);
    temp18->SourceFileName(uString::Const("MainView.ux"));
    temp66->DefaultPath(uString::Const("inputPanel"));
    temp66->SourceLineNumber(293);
    temp66->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), inputPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), listPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), statisticPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), budgetPanel);
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
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp23);
}

// public MainView New() [static] :1256
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
