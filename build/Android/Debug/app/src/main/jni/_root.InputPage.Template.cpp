// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/InputPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-ece4b8e4.h>
#include <_root.InputPage.h>
#include <_root.InputPage.Template.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{

// public partial sealed class InputPage.Template :6
// {
// static Template() :16
static void InputPage__Template__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    InputPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Color"*/]);
}

static void InputPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const("Col_type3");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Controls::Grid_typeof());
    type->SetFields(2,
        ::g::InputPage_typeof(), offsetof(InputPage__Template, __parent1), uFieldFlagsWeak,
        ::g::InputPage_typeof(), offsetof(InputPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(InputPage__Template, temp_Color_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InputPage__Template::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* InputPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(InputPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("InputPage.Template", options);
    type->fp_build_ = InputPage__Template_build;
    type->fp_cctor_ = InputPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))InputPage__Template__New1_fn;
    return type;
}

// public Template(InputPage parent, InputPage parentInstance) :10
void InputPage__Template__ctor_1_fn(InputPage__Template* __this, ::g::InputPage* parent, ::g::InputPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :19
void InputPage__Template__New1_fn(InputPage__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* __self1 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp = ::g::Fuse::Controls::Rectangle::New3();
    __this->temp_Color_inst = ::g::AccountBook_FuseControlsShape_Color_Property::New1(temp, InputPage__Template::__selector0_);
    ::g::Fuse::Reactive::Resource* temp1 = ::g::Fuse::Reactive::Resource::New1(::STRINGS[1/*"Col_type3"*/]);
    ::g::Fuse::Effects::DropShadow* temp2 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Color_inst, (uObject*)temp1, 3);
    ::g::Fuse::Controls::Grid::SetRowSpan(__self1, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    temp2->Size(0.4f);
    temp2->Angle(90.0f);
    temp2->Distance(1.0f);
    temp2->Spread(0.2f);
    temp2->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3764706f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    return *__retval = __self1, void();
}

// public Template New(InputPage parent, InputPage parentInstance) :10
void InputPage__Template__New2_fn(::g::InputPage* parent, ::g::InputPage* parentInstance, InputPage__Template** __retval)
{
    *__retval = InputPage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector InputPage__Template::__selector0_;

// public Template(InputPage parent, InputPage parentInstance) [instance] :10
void InputPage__Template::ctor_1(::g::InputPage* parent, ::g::InputPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(InputPage parent, InputPage parentInstance) [static] :10
InputPage__Template* InputPage__Template::New2(::g::InputPage* parent, ::g::InputPage* parentInstance)
{
    InputPage__Template* obj1 = (InputPage__Template*)uNew(InputPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
