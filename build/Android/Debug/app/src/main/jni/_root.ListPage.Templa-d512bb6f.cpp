// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_bundle.h>
#include <_root.AccountBook_Fus-641d8117.h>
#include <_root.AccountBook_Fus-6e985db.h>
#include <_root.AccountBook_Fus-7ed8148.h>
#include <_root.AccountBook_Fus-9d2d7d8d.h>
#include <_root.ListPage.h>
#include <_root.ListPage.Templa-c4066cfd.h>
#include <_root.ListPage.Templa-d512bb6f.h>
#include <_root.ListPage.Template2.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Gestures.LongPre-ba2c5b25.h>
#include <Fuse.Gestures.LongPressed.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Gestures.TappedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.PlaySound.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
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
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class ListPage.Template2.Template3 :61
// {
// static Template3() :293
static void ListPage__Template2__Template3__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ListPage__Template2__Template3::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("IsEnabled"));
    ListPage__Template2__Template3::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    ListPage__Template2__Template3::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Color"));
    ListPage__Template2__Template3::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Visibility"));
    ListPage__Template2__Template3::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("grid"));
}

static void ListPage__Template2__Template3_build(uType* type)
{
    type->SetFields(2,
        ::g::ListPage__Template2_typeof(), offsetof(ListPage__Template2__Template3, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(ListPage__Template2__Template3, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(ListPage__Template2__Template3, ModalConfirm_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(ListPage__Template2__Template3, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ListPage__Template2__Template3, __self_Color_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(ListPage__Template2__Template3, __self_Visibility_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage__Template2__Template3, temp_eb23), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage__Template2__Template3, temp_eb24), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2__Template3::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2__Template3::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2__Template3::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2__Template3::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2__Template3::__selector4_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* ListPage__Template2__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 15;
    options.ObjectSize = sizeof(ListPage__Template2__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ListPage.Template2.Template3", options);
    type->fp_build_ = ListPage__Template2__Template3_build;
    type->fp_cctor_ = ListPage__Template2__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ListPage__Template2__Template3__New1_fn;
    return type;
}

// public Template3(ListPage.Template2 parent, Fuse.Controls.Rectangle parentInstance) :65
void ListPage__Template2__Template3__ctor_1_fn(ListPage__Template2__Template3* __this, ::g::ListPage__Template2* parent, ::g::Fuse::Controls::Rectangle* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :296
void ListPage__Template2__Template3__New1_fn(ListPage__Template2__Template3* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Grid* __self1 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(uString::Const("ClickNormal"));
    __this->ModalConfirm_IsEnabled_inst = ::g::AccountBook_FuseAlternateRoot_IsEnabled_Property::New1(uPtr(uPtr(__this->__parent1)->__parent1)->ModalConfirm, ListPage__Template2__Template3::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(uString::Const("LongClickNormal"));
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    __this->temp_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp, ListPage__Template2__Template3::__selector1_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("vars"));
    __this->__self_Color_inst1 = ::g::AccountBook_FuseControlsPanel_Color_Property::New1(__self1, ListPage__Template2__Template3::__selector2_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(uString::Const("vars_color"));
    __this->__self_Visibility_inst1 = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__self1, ListPage__Template2__Template3::__selector3_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(uString::Const("vars_visibility"));
    ::g::Fuse::Gestures::Tapped* temp6 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::PlaySound* temp7 = ::g::Fuse::PlaySound::New2();
    __this->temp_eb23 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    ::g::Fuse::Gestures::LongPressed* temp8 = ::g::Fuse::Gestures::LongPressed::New2();
    ::g::Fuse::Triggers::Actions::Set* temp9 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), __this->ModalConfirm_IsEnabled_inst);
    ::g::Fuse::Animations::Rotate* temp10 = ::g::Fuse::Animations::Rotate::New2();
    __this->temp_eb24 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ListPage__Template2__Template3__Template4* temp11 = ListPage__Template2__Template3__Template4::New2(__this, __self1);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Items_inst, (uObject*)temp3, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Color_inst1, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Visibility_inst1, (uObject*)temp5, 3);
    __self1->ColumnCount(3);
    __self1->Height(::g::Uno::UX::Size__New1(24.0f, 1));
    __self1->Name(ListPage__Template2__Template3::__selector4_);
    temp6->add_Handler(uDelegate::New(::g::Fuse::Gestures::TappedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb23)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), __this->temp_eb23);
    temp7->File(::g::Uno::UX::BundleFileSource::New1(::g::AccountBook_bundle::Clickd3560fbe()));
    temp8->add_Handler(uDelegate::New(::g::Fuse::Gestures::LongPressedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb24)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), __this->temp_eb24);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp9, uCRef(true));
    temp10->Degrees(2.0f);
    temp10->Duration(0.4);
    temp10->DurationBack(0.2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp14);
    return *__retval = __self1, void();
}

// public Template3 New(ListPage.Template2 parent, Fuse.Controls.Rectangle parentInstance) :65
void ListPage__Template2__Template3__New2_fn(::g::ListPage__Template2* parent, ::g::Fuse::Controls::Rectangle* parentInstance, ListPage__Template2__Template3** __retval)
{
    *__retval = ListPage__Template2__Template3::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ListPage__Template2__Template3::__selector0_;
::g::Uno::UX::Selector ListPage__Template2__Template3::__selector1_;
::g::Uno::UX::Selector ListPage__Template2__Template3::__selector2_;
::g::Uno::UX::Selector ListPage__Template2__Template3::__selector3_;
::g::Uno::UX::Selector ListPage__Template2__Template3::__selector4_;

// public Template3(ListPage.Template2 parent, Fuse.Controls.Rectangle parentInstance) [instance] :65
void ListPage__Template2__Template3::ctor_1(::g::ListPage__Template2* parent, ::g::Fuse::Controls::Rectangle* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template3 New(ListPage.Template2 parent, Fuse.Controls.Rectangle parentInstance) [static] :65
ListPage__Template2__Template3* ListPage__Template2__Template3::New2(::g::ListPage__Template2* parent, ::g::Fuse::Controls::Rectangle* parentInstance)
{
    ListPage__Template2__Template3* obj1 = (ListPage__Template2__Template3*)uNew(ListPage__Template2__Template3_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
