// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/dayButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_acc-5ae249b1.h>
#include <_root.AccountBook_acc-77e8d5bb.h>
#include <_root.AccountBook_acc-c52018cc.h>
#include <_root.AccountBook_bundle.h>
#include <_root.AccountBook_day-10672da9.h>
#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.AccountBook_Fus-77da25d.h>
#include <_root.AccountBook_Fus-adda9b82.h>
#include <_root.dayButton.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.PlaySound.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
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
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[7];
static uType* TYPES[5];

namespace g{

// public partial sealed class dayButton :2
// {
// static dayButton() :53
static void dayButton__cctor_5_fn(uType* __type)
{
    dayButton::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"FontSize"*/]);
    dayButton::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Color"*/]);
    dayButton::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Value"*/]);
    dayButton::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"textcolor"*/]);
}

static void dayButton_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FontSize");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("textcolor");
    ::STRINGS[4] = uString::Const("ListPage.ux");
    ::STRINGS[5] = uString::Const("fontsize");
    ::STRINGS[6] = uString::Const("text");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::AccountBook_accessor_dayButton_fontsize_typeof(),
        ::g::AccountBook_accessor_dayButton_text_typeof(),
        ::g::AccountBook_accessor_dayButton_textcolor_typeof(),
        ::g::AccountBook_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(116,
        ::g::Uno::String_typeof(), offsetof(dayButton, _field_text), 0,
        ::g::Uno::Float4_typeof(), offsetof(dayButton, _field_textcolor), 0,
        ::g::Uno::Int_typeof(), offsetof(dayButton, _field_fontsize), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(dayButton, temp_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(dayButton, temp_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(dayButton, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(dayButton, this_textcolor_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&dayButton::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&dayButton::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&dayButton::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&dayButton::__selector3_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* dayButton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Button_typeof();
    options.FieldCount = 127;
    options.InterfaceCount = 19;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(dayButton);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("dayButton", options);
    type->fp_build_ = dayButton_build;
    type->fp_ctor_ = (void*)dayButton__New6_fn;
    type->fp_cctor_ = dayButton__cctor_5_fn;
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

// public dayButton() :57
void dayButton__ctor_9_fn(dayButton* __this)
{
    __this->ctor_9();
}

// public int get_fontsize() :38
void dayButton__get_fontsize_fn(dayButton* __this, int32_t* __retval)
{
    *__retval = __this->fontsize();
}

// public void set_fontsize(int value) :39
void dayButton__set_fontsize_fn(dayButton* __this, int32_t* value)
{
    __this->fontsize(*value);
}

// private void InitializeUX() :61
void dayButton__InitializeUX1_fn(dayButton* __this)
{
    __this->InitializeUX1();
}

// public dayButton New() :57
void dayButton__New6_fn(dayButton** __retval)
{
    *__retval = dayButton::New6();
}

// public void Setfontsize(int value, Uno.UX.IPropertyListener origin) :41
void dayButton__Setfontsize_fn(dayButton* __this, int32_t* value, uObject* origin)
{
    __this->Setfontsize(*value, origin);
}

// public void Settext(string value, Uno.UX.IPropertyListener origin) :11
void dayButton__Settext_fn(dayButton* __this, uString* value, uObject* origin)
{
    __this->Settext(value, origin);
}

// public void Settextcolor(float4 value, Uno.UX.IPropertyListener origin) :26
void dayButton__Settextcolor_fn(dayButton* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->Settextcolor(*value, origin);
}

// public string get_text() :8
void dayButton__get_text_fn(dayButton* __this, uString** __retval)
{
    *__retval = __this->text();
}

// public void set_text(string value) :9
void dayButton__set_text_fn(dayButton* __this, uString* value)
{
    __this->text(value);
}

// public float4 get_textcolor() :23
void dayButton__get_textcolor_fn(dayButton* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->textcolor();
}

// public void set_textcolor(float4 value) :24
void dayButton__set_textcolor_fn(dayButton* __this, ::g::Uno::Float4* value)
{
    __this->textcolor(*value);
}

::g::Uno::UX::Selector dayButton::__selector0_;
::g::Uno::UX::Selector dayButton::__selector1_;
::g::Uno::UX::Selector dayButton::__selector2_;
::g::Uno::UX::Selector dayButton::__selector3_;

// public dayButton() [instance] :57
void dayButton::ctor_9()
{
    ctor_8();
    InitializeUX1();
}

// public int get_fontsize() [instance] :38
int32_t dayButton::fontsize()
{
    return _field_fontsize;
}

// public void set_fontsize(int value) [instance] :39
void dayButton::fontsize(int32_t value)
{
    Setfontsize(value, NULL);
}

// private void InitializeUX() [instance] :61
void dayButton::InitializeUX1()
{
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_FontSize_inst = ::g::AccountBook_FuseControlsTextControl_FontSize_Property::New1(temp, dayButton::__selector0_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::AccountBook_accessor_dayButton_fontsize::Singleton());
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_Color_inst = ::g::AccountBook_FuseControlsTextControl_Color_Property::New1(temp, dayButton::__selector1_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::AccountBook_accessor_dayButton_textcolor::Singleton());
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp, dayButton::__selector2_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::AccountBook_accessor_dayButton_text::Singleton());
    this_textcolor_inst = ::g::AccountBook_dayButton_textcolor_Property::New1(this, dayButton::__selector3_);
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(temp_FontSize_inst, (uObject*)temp2, 1);
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(temp_Color_inst, (uObject*)temp4, 1);
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp6, 1);
    ::g::Fuse::Gestures::WhilePressed* temp10 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp11 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], this_textcolor_inst);
    ::g::Fuse::Gestures::Clicked* temp12 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::PlaySound* temp13 = ::g::Fuse::PlaySound::New2();
    Width(::g::Uno::UX::Size__New1(100.0f, 4));
    SourceLineNumber(9);
    SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    temp->Alignment(10);
    temp->SourceLineNumber(13);
    temp->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    temp2->SourceLineNumber(13);
    temp2->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    temp1->SourceLineNumber(13);
    temp1->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    temp4->SourceLineNumber(13);
    temp4->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    temp3->SourceLineNumber(13);
    temp3->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    temp6->SourceLineNumber(13);
    temp6->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    temp5->SourceLineNumber(13);
    temp5->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    temp10->SourceLineNumber(14);
    temp10->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Fuse::Animations::Change__set_Value_fn(temp11, uCRef(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f)));
    temp11->Duration(0.05);
    temp11->DurationBack(0.2);
    temp12->SourceLineNumber(17);
    temp12->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp13);
    temp13->SourceLineNumber(18);
    temp13->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    temp13->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
}

// public void Setfontsize(int value, Uno.UX.IPropertyListener origin) [instance] :41
void dayButton::Setfontsize(int32_t value, uObject* origin)
{
    if (value != _field_fontsize)
    {
        _field_fontsize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"fontsize"*/]), origin);
    }
}

// public void Settext(string value, Uno.UX.IPropertyListener origin) [instance] :11
void dayButton::Settext(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_text))
    {
        _field_text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"text"*/]), origin);
    }
}

// public void Settextcolor(float4 value, Uno.UX.IPropertyListener origin) [instance] :26
void dayButton::Settextcolor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_textcolor))
    {
        _field_textcolor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"textcolor"*/]), origin);
    }
}

// public string get_text() [instance] :8
uString* dayButton::text()
{
    return _field_text;
}

// public void set_text(string value) [instance] :9
void dayButton::text(uString* value)
{
    Settext(value, NULL);
}

// public float4 get_textcolor() [instance] :23
::g::Uno::Float4 dayButton::textcolor()
{
    return _field_textcolor;
}

// public void set_textcolor(float4 value) [instance] :24
void dayButton::textcolor(::g::Uno::Float4 value)
{
    Settextcolor(value, NULL);
}

// public dayButton New() [static] :57
dayButton* dayButton::New6()
{
    dayButton* obj1 = (dayButton*)uNew(dayButton_typeof());
    obj1->ctor_9();
    return obj1;
}
// }

} // ::g
