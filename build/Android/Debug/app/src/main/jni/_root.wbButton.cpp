// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/wbButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_acc-1bb9f04f.h>
#include <_root.AccountBook_acc-cae7c22e.h>
#include <_root.AccountBook_bundle.h>
#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.AccountBook_Fus-5cf738db.h>
#include <_root.AccountBook_Fus-77da25d.h>
#include <_root.AccountBook_Fus-f200852b.h>
#include <_root.wbButton.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.PlaySound.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[3];
static uType* TYPES[7];

namespace g{

// public partial sealed class wbButton :2
// {
// static wbButton() :25
static void wbButton__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    wbButton::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Color"*/]);
    wbButton::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void wbButton_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("TextCol");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::AccountBook_accessor_Fuse_Controls_ButtonBase_Text_typeof(),
        ::g::AccountBook_accessor_wbButton_TextCol_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(113,
        ::g::Uno::Float4_typeof(), offsetof(wbButton, _field_TextCol), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(wbButton, temp_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(wbButton, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(wbButton, wbRecCol_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(wbButton, border_Color_inst), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(wbButton, wbRecCol), 0,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(wbButton, border), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&wbButton::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&wbButton::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* wbButton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Button_typeof();
    options.FieldCount = 122;
    options.InterfaceCount = 18;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(wbButton);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("wbButton", options);
    type->fp_build_ = wbButton_build;
    type->fp_ctor_ = (void*)wbButton__New6_fn;
    type->fp_cctor_ = wbButton__cctor_5_fn;
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

// public wbButton() :29
void wbButton__ctor_9_fn(wbButton* __this)
{
    __this->ctor_9();
}

// private void InitializeUX() :33
void wbButton__InitializeUX1_fn(wbButton* __this)
{
    __this->InitializeUX1();
}

// public wbButton New() :29
void wbButton__New6_fn(wbButton** __retval)
{
    *__retval = wbButton::New6();
}

// public void SetTextCol(float4 value, Uno.UX.IPropertyListener origin) :11
void wbButton__SetTextCol_fn(wbButton* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetTextCol(*value, origin);
}

// public float4 get_TextCol() :8
void wbButton__get_TextCol_fn(wbButton* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextCol();
}

// public void set_TextCol(float4 value) :9
void wbButton__set_TextCol_fn(wbButton* __this, ::g::Uno::Float4* value)
{
    __this->TextCol(*value);
}

::g::Uno::UX::Selector wbButton::__selector0_;
::g::Uno::UX::Selector wbButton::__selector1_;

// public wbButton() [instance] :29
void wbButton::ctor_9()
{
    ctor_8();
    InitializeUX1();
}

// private void InitializeUX() [instance] :33
void wbButton::InitializeUX1()
{
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Color_inst = ::g::AccountBook_FuseControlsTextControl_Color_Property::New1(temp, wbButton::__selector0_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::AccountBook_accessor_wbButton_TextCol::Singleton_);
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp, wbButton::__selector1_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::AccountBook_accessor_Fuse_Controls_ButtonBase_Text::Singleton_);
    wbRecCol = ::g::Fuse::Drawing::SolidColor::New2();
    wbRecCol_Color_inst = ::g::AccountBook_FuseDrawingSolidColor_Color_Property::New1(wbRecCol, wbButton::__selector0_);
    border = ::g::Fuse::Drawing::Stroke::New2();
    border_Color_inst = ::g::AccountBook_FuseDrawingStroke_Color_Property::New1(border, wbButton::__selector0_);
    ::g::Fuse::Effects::DropShadow* temp5 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(temp_Color_inst, (uObject*)temp2, 1);
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp4, 1);
    ::g::Fuse::Controls::Rectangle* temp8 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::WhilePressed* temp9 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp10 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], wbRecCol_Color_inst);
    ::g::Fuse::Animations::Change* temp11 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], border_Color_inst);
    ::g::Fuse::Gestures::Clicked* temp12 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::PlaySound* temp13 = ::g::Fuse::PlaySound::New2();
    Width(::g::Uno::UX::Size__New1(100.0f, 4));
    Height(::g::Uno::UX::Size__New1(100.0f, 4));
    Margin(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    TextCol(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp5->Size(0.5f);
    temp5->Angle(90.0f);
    temp5->Distance(1.0f);
    temp5->Spread(0.2f);
    temp5->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3764706f));
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    temp8->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Fills()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), wbRecCol);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), border);
    uPtr(wbRecCol)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(border)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(border)->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Fuse::Animations::Change__set_Value_fn(temp10, uCRef(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f)));
    temp10->Duration(0.05);
    temp10->DurationBack(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp11, uCRef(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f)));
    temp11->Duration(0.05);
    temp11->DurationBack(0.2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp13);
    temp13->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
}

// public void SetTextCol(float4 value, Uno.UX.IPropertyListener origin) [instance] :11
void wbButton::SetTextCol(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_TextCol))
    {
        _field_TextCol = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"TextCol"*/]), origin);
    }
}

// public float4 get_TextCol() [instance] :8
::g::Uno::Float4 wbButton::TextCol()
{
    return _field_TextCol;
}

// public void set_TextCol(float4 value) [instance] :9
void wbButton::TextCol(::g::Uno::Float4 value)
{
    SetTextCol(value, NULL);
}

// public wbButton New() [static] :29
wbButton* wbButton::New6()
{
    wbButton* obj1 = (wbButton*)uNew(wbButton_typeof());
    obj1->ctor_9();
    return obj1;
}
// }

} // ::g
