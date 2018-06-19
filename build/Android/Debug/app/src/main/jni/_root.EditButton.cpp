// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/EditButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_acc-73077105.h>
#include <_root.AccountBook_acc-87597136.h>
#include <_root.AccountBook_acc-aa7836ab.h>
#include <_root.AccountBook_bundle.h>
#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.AccountBook_Fus-77da25d.h>
#include <_root.AccountBook_Fus-adda9b82.h>
#include <_root.AccountBook_Fus-ece4b8e4.h>
#include <_root.EditButton.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layer.h>
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
static uString* STRINGS[7];
static uType* TYPES[6];

namespace g{

// public partial sealed class EditButton :2
// {
// static EditButton() :54
static void EditButton__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    EditButton::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Color"*/]);
    EditButton::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    EditButton::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"FontSize"*/]);
    EditButton::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"back"*/]);
}

static void EditButton_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("FontSize");
    ::STRINGS[3] = uString::Const("back");
    ::STRINGS[4] = uString::Const("fontsize");
    ::STRINGS[5] = uString::Const("text");
    ::STRINGS[6] = uString::Const("textcolor");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::AccountBook_accessor_EditButton_fontsize_typeof(),
        ::g::AccountBook_accessor_EditButton_text_typeof(),
        ::g::AccountBook_accessor_EditButton_textcolor_typeof(),
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(113,
        ::g::Uno::String_typeof(), offsetof(EditButton, _field_text), 0,
        ::g::Uno::Float4_typeof(), offsetof(EditButton, _field_textcolor), 0,
        ::g::Uno::Int_typeof(), offsetof(EditButton, _field_fontsize), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(EditButton, back_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(EditButton, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(EditButton, temp_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(EditButton, temp_FontSize_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(EditButton, back), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&EditButton::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&EditButton::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&EditButton::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&EditButton::__selector3_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* EditButton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Button_typeof();
    options.FieldCount = 125;
    options.InterfaceCount = 18;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(EditButton);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("EditButton", options);
    type->fp_build_ = EditButton_build;
    type->fp_ctor_ = (void*)EditButton__New6_fn;
    type->fp_cctor_ = EditButton__cctor_5_fn;
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

// public EditButton() :58
void EditButton__ctor_9_fn(EditButton* __this)
{
    __this->ctor_9();
}

// public int get_fontsize() :38
void EditButton__get_fontsize_fn(EditButton* __this, int* __retval)
{
    *__retval = __this->fontsize();
}

// public void set_fontsize(int value) :39
void EditButton__set_fontsize_fn(EditButton* __this, int* value)
{
    __this->fontsize(*value);
}

// private void InitializeUX() :62
void EditButton__InitializeUX1_fn(EditButton* __this)
{
    __this->InitializeUX1();
}

// public EditButton New() :58
void EditButton__New6_fn(EditButton** __retval)
{
    *__retval = EditButton::New6();
}

// public void Setfontsize(int value, Uno.UX.IPropertyListener origin) :41
void EditButton__Setfontsize_fn(EditButton* __this, int* value, uObject* origin)
{
    __this->Setfontsize(*value, origin);
}

// public void Settext(string value, Uno.UX.IPropertyListener origin) :11
void EditButton__Settext_fn(EditButton* __this, uString* value, uObject* origin)
{
    __this->Settext(value, origin);
}

// public void Settextcolor(float4 value, Uno.UX.IPropertyListener origin) :26
void EditButton__Settextcolor_fn(EditButton* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->Settextcolor(*value, origin);
}

// public string get_text() :8
void EditButton__get_text_fn(EditButton* __this, uString** __retval)
{
    *__retval = __this->text();
}

// public void set_text(string value) :9
void EditButton__set_text_fn(EditButton* __this, uString* value)
{
    __this->text(value);
}

// public float4 get_textcolor() :23
void EditButton__get_textcolor_fn(EditButton* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->textcolor();
}

// public void set_textcolor(float4 value) :24
void EditButton__set_textcolor_fn(EditButton* __this, ::g::Uno::Float4* value)
{
    __this->textcolor(*value);
}

::g::Uno::UX::Selector EditButton::__selector0_;
::g::Uno::UX::Selector EditButton::__selector1_;
::g::Uno::UX::Selector EditButton::__selector2_;
::g::Uno::UX::Selector EditButton::__selector3_;

// public EditButton() [instance] :58
void EditButton::ctor_9()
{
    ctor_8();
    InitializeUX1();
}

// public int get_fontsize() [instance] :38
int EditButton::fontsize()
{
    return _field_fontsize;
}

// public void set_fontsize(int value) [instance] :39
void EditButton::fontsize(int value)
{
    Setfontsize(value, NULL);
}

// private void InitializeUX() [instance] :62
void EditButton::InitializeUX1()
{
    back = ::g::Fuse::Controls::Rectangle::New3();
    back_Color_inst = ::g::AccountBook_FuseControlsShape_Color_Property::New1(back, EditButton::__selector0_);
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp, EditButton::__selector1_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::AccountBook_accessor_EditButton_text::Singleton_);
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_Color_inst = ::g::AccountBook_FuseControlsTextControl_Color_Property::New1(temp, EditButton::__selector0_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::AccountBook_accessor_EditButton_textcolor::Singleton_);
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_FontSize_inst = ::g::AccountBook_FuseControlsTextControl_FontSize_Property::New1(temp, EditButton::__selector2_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::AccountBook_accessor_EditButton_fontsize::Singleton_);
    ::g::Fuse::Gestures::WhilePressed* temp7 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp8 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], back_Color_inst);
    ::g::Fuse::PlaySound* temp9 = ::g::Fuse::PlaySound::New2();
    ::g::Fuse::Drawing::Stroke* temp10 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 1);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp_Color_inst, (uObject*)temp4, 1);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(temp_FontSize_inst, (uObject*)temp6, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp9);
    ::g::Fuse::Animations::Change__set_Value_fn(temp8, uCRef(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f)));
    temp8->Duration(0.05);
    temp8->DurationBack(0.2);
    temp9->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    uPtr(back)->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(back)->Color(::g::Fuse::Drawing::Colors::White_);
    uPtr(back)->Layer(1);
    uPtr(back)->Name(EditButton::__selector3_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(back)->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp10);
    temp10->Color(::g::Uno::Float4__New2(0.5333334f, 0.5333334f, 0.5333334f, 1.0f));
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), back);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
}

// public void Setfontsize(int value, Uno.UX.IPropertyListener origin) [instance] :41
void EditButton::Setfontsize(int value, uObject* origin)
{
    if (value != _field_fontsize)
    {
        _field_fontsize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"fontsize"*/]), origin);
    }
}

// public void Settext(string value, Uno.UX.IPropertyListener origin) [instance] :11
void EditButton::Settext(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_text))
    {
        _field_text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"text"*/]), origin);
    }
}

// public void Settextcolor(float4 value, Uno.UX.IPropertyListener origin) [instance] :26
void EditButton::Settextcolor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_textcolor))
    {
        _field_textcolor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"textcolor"*/]), origin);
    }
}

// public string get_text() [instance] :8
uString* EditButton::text()
{
    return _field_text;
}

// public void set_text(string value) [instance] :9
void EditButton::text(uString* value)
{
    Settext(value, NULL);
}

// public float4 get_textcolor() [instance] :23
::g::Uno::Float4 EditButton::textcolor()
{
    return _field_textcolor;
}

// public void set_textcolor(float4 value) [instance] :24
void EditButton::textcolor(::g::Uno::Float4 value)
{
    Settextcolor(value, NULL);
}

// public EditButton New() [static] :58
EditButton* EditButton::New6()
{
    EditButton* obj1 = (EditButton*)uNew(EditButton_typeof());
    obj1->ctor_9();
    return obj1;
}
// }

} // ::g
