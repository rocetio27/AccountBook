// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/myButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_acc-10b12007.h>
#include <_root.AccountBook_acc-2c9dedce.h>
#include <_root.AccountBook_acc-2d074dc4.h>
#include <_root.AccountBook_acc-77439101.h>
#include <_root.AccountBook_bundle.h>
#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.AccountBook_Fus-5a6734b7.h>
#include <_root.AccountBook_Fus-77da25d.h>
#include <_root.AccountBook_Fus-adda9b82.h>
#include <_root.AccountBook_myB-b7793c55.h>
#include <_root.myButton.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
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
#include <Uno.Int.h>
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
static uString* STRINGS[8];
static uType* TYPES[5];

namespace g{

// public partial sealed class myButton :2
// {
// static myButton() :69
static void myButton__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    myButton::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Font"*/]);
    myButton::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"FontSize"*/]);
    myButton::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Color"*/]);
    myButton::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Value"*/]);
    myButton::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"textcolor"*/]);
}

static void myButton_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Font");
    ::STRINGS[1] = uString::Const("FontSize");
    ::STRINGS[2] = uString::Const("Color");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("textcolor");
    ::STRINGS[5] = uString::Const("font");
    ::STRINGS[6] = uString::Const("fontsize");
    ::STRINGS[7] = uString::Const("text");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::AccountBook_accessor_myButton_font_typeof(),
        ::g::AccountBook_accessor_myButton_fontsize_typeof(),
        ::g::AccountBook_accessor_myButton_text_typeof(),
        ::g::AccountBook_accessor_myButton_textcolor_typeof(),
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
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(113,
        ::g::Uno::String_typeof(), offsetof(myButton, _field_text), 0,
        ::g::Fuse::Font_typeof(), offsetof(myButton, _field_font), 0,
        ::g::Uno::Float4_typeof(), offsetof(myButton, _field_textcolor), 0,
        ::g::Uno::Int_typeof(), offsetof(myButton, _field_fontsize), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Font_typeof(), NULL), offsetof(myButton, temp_Font_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(myButton, temp_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(myButton, temp_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(myButton, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(myButton, this_textcolor_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myButton::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myButton::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myButton::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myButton::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myButton::__selector4_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* myButton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Button_typeof();
    options.FieldCount = 127;
    options.InterfaceCount = 18;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(myButton);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("myButton", options);
    type->fp_build_ = myButton_build;
    type->fp_ctor_ = (void*)myButton__New6_fn;
    type->fp_cctor_ = myButton__cctor_5_fn;
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

// public myButton() :73
void myButton__ctor_9_fn(myButton* __this)
{
    __this->ctor_9();
}

// public Fuse.Font get_font() :23
void myButton__get_font_fn(myButton* __this, ::g::Fuse::Font** __retval)
{
    *__retval = __this->font();
}

// public void set_font(Fuse.Font value) :24
void myButton__set_font_fn(myButton* __this, ::g::Fuse::Font* value)
{
    __this->font(value);
}

// public int get_fontsize() :53
void myButton__get_fontsize_fn(myButton* __this, int* __retval)
{
    *__retval = __this->fontsize();
}

// public void set_fontsize(int value) :54
void myButton__set_fontsize_fn(myButton* __this, int* value)
{
    __this->fontsize(*value);
}

// private void InitializeUX() :77
void myButton__InitializeUX1_fn(myButton* __this)
{
    __this->InitializeUX1();
}

// public myButton New() :73
void myButton__New6_fn(myButton** __retval)
{
    *__retval = myButton::New6();
}

// public void Setfont(Fuse.Font value, Uno.UX.IPropertyListener origin) :26
void myButton__Setfont_fn(myButton* __this, ::g::Fuse::Font* value, uObject* origin)
{
    __this->Setfont(value, origin);
}

// public void Setfontsize(int value, Uno.UX.IPropertyListener origin) :56
void myButton__Setfontsize_fn(myButton* __this, int* value, uObject* origin)
{
    __this->Setfontsize(*value, origin);
}

// public void Settext(string value, Uno.UX.IPropertyListener origin) :11
void myButton__Settext_fn(myButton* __this, uString* value, uObject* origin)
{
    __this->Settext(value, origin);
}

// public void Settextcolor(float4 value, Uno.UX.IPropertyListener origin) :41
void myButton__Settextcolor_fn(myButton* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->Settextcolor(*value, origin);
}

// public string get_text() :8
void myButton__get_text_fn(myButton* __this, uString** __retval)
{
    *__retval = __this->text();
}

// public void set_text(string value) :9
void myButton__set_text_fn(myButton* __this, uString* value)
{
    __this->text(value);
}

// public float4 get_textcolor() :38
void myButton__get_textcolor_fn(myButton* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->textcolor();
}

// public void set_textcolor(float4 value) :39
void myButton__set_textcolor_fn(myButton* __this, ::g::Uno::Float4* value)
{
    __this->textcolor(*value);
}

::g::Uno::UX::Selector myButton::__selector0_;
::g::Uno::UX::Selector myButton::__selector1_;
::g::Uno::UX::Selector myButton::__selector2_;
::g::Uno::UX::Selector myButton::__selector3_;
::g::Uno::UX::Selector myButton::__selector4_;

// public myButton() [instance] :73
void myButton::ctor_9()
{
    ctor_8();
    InitializeUX1();
}

// public Fuse.Font get_font() [instance] :23
::g::Fuse::Font* myButton::font()
{
    return _field_font;
}

// public void set_font(Fuse.Font value) [instance] :24
void myButton::font(::g::Fuse::Font* value)
{
    Setfont(value, NULL);
}

// public int get_fontsize() [instance] :53
int myButton::fontsize()
{
    return _field_fontsize;
}

// public void set_fontsize(int value) [instance] :54
void myButton::fontsize(int value)
{
    Setfontsize(value, NULL);
}

// private void InitializeUX() [instance] :77
void myButton::InitializeUX1()
{
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Font_inst = ::g::AccountBook_FuseControlsTextControl_Font_Property::New1(temp, myButton::__selector0_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::AccountBook_accessor_myButton_font::Singleton_);
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_FontSize_inst = ::g::AccountBook_FuseControlsTextControl_FontSize_Property::New1(temp, myButton::__selector1_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::AccountBook_accessor_myButton_fontsize::Singleton_);
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_Color_inst = ::g::AccountBook_FuseControlsTextControl_Color_Property::New1(temp, myButton::__selector2_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::AccountBook_accessor_myButton_textcolor::Singleton_);
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp, myButton::__selector3_);
    ::g::Fuse::Reactive::Property* temp8 = ::g::Fuse::Reactive::Property::New1(temp7, ::g::AccountBook_accessor_myButton_text::Singleton_);
    this_textcolor_inst = ::g::AccountBook_myButton_textcolor_Property::New1(this, myButton::__selector4_);
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(temp_Font_inst, (uObject*)temp2, 1);
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(temp_FontSize_inst, (uObject*)temp4, 1);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp_Color_inst, (uObject*)temp6, 1);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp8, 1);
    ::g::Fuse::Gestures::WhilePressed* temp13 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp14 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], this_textcolor_inst);
    ::g::Fuse::Gestures::Clicked* temp15 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::PlaySound* temp16 = ::g::Fuse::PlaySound::New2();
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    ::g::Fuse::Animations::Change__set_Value_fn(temp14, uCRef(::g::Uno::Float4__New2(0.5333334f, 0.5333334f, 0.5333334f, 1.0f)));
    temp14->Duration(0.05);
    temp14->DurationBack(5.0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp16);
    temp16->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
}

// public void Setfont(Fuse.Font value, Uno.UX.IPropertyListener origin) [instance] :26
void myButton::Setfont(::g::Fuse::Font* value, uObject* origin)
{
    if (value != _field_font)
    {
        _field_font = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"font"*/]), origin);
    }
}

// public void Setfontsize(int value, Uno.UX.IPropertyListener origin) [instance] :56
void myButton::Setfontsize(int value, uObject* origin)
{
    if (value != _field_fontsize)
    {
        _field_fontsize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"fontsize"*/]), origin);
    }
}

// public void Settext(string value, Uno.UX.IPropertyListener origin) [instance] :11
void myButton::Settext(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_text))
    {
        _field_text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"text"*/]), origin);
    }
}

// public void Settextcolor(float4 value, Uno.UX.IPropertyListener origin) [instance] :41
void myButton::Settextcolor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_textcolor))
    {
        _field_textcolor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"textcolor"*/]), origin);
    }
}

// public string get_text() [instance] :8
uString* myButton::text()
{
    return _field_text;
}

// public void set_text(string value) [instance] :9
void myButton::text(uString* value)
{
    Settext(value, NULL);
}

// public float4 get_textcolor() [instance] :38
::g::Uno::Float4 myButton::textcolor()
{
    return _field_textcolor;
}

// public void set_textcolor(float4 value) [instance] :39
void myButton::textcolor(::g::Uno::Float4 value)
{
    Settextcolor(value, NULL);
}

// public myButton New() [static] :73
myButton* myButton::New6()
{
    myButton* obj1 = (myButton*)uNew(myButton_typeof());
    obj1->ctor_9();
    return obj1;
}
// }

} // ::g
