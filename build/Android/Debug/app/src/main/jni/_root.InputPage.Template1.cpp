// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/InputPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.InputPage.h>
#include <_root.InputPage.Template1.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>

namespace g{

// public partial sealed class InputPage.Template1 :41
// {
// static Template1() :50
static void InputPage__Template1__cctor__fn(uType* __type)
{
}

static void InputPage__Template1_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Controls::Grid_typeof());
    type->SetFields(2,
        ::g::InputPage_typeof(), offsetof(InputPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::InputPage_typeof(), offsetof(InputPage__Template1, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* InputPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(InputPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("InputPage.Template1", options);
    type->fp_build_ = InputPage__Template1_build;
    type->fp_cctor_ = InputPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))InputPage__Template1__New1_fn;
    return type;
}

// public Template1(InputPage parent, InputPage parentInstance) :45
void InputPage__Template1__ctor_1_fn(InputPage__Template1* __this, ::g::InputPage* parent, ::g::InputPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :53
void InputPage__Template1__New1_fn(InputPage__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* __self1 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid::SetRowSpan(__self1, 3);
    return *__retval = __self1, void();
}

// public Template1 New(InputPage parent, InputPage parentInstance) :45
void InputPage__Template1__New2_fn(::g::InputPage* parent, ::g::InputPage* parentInstance, InputPage__Template1** __retval)
{
    *__retval = InputPage__Template1::New2(parent, parentInstance);
}

// public Template1(InputPage parent, InputPage parentInstance) [instance] :45
void InputPage__Template1::ctor_1(::g::InputPage* parent, ::g::InputPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(InputPage parent, InputPage parentInstance) [static] :45
InputPage__Template1* InputPage__Template1::New2(::g::InputPage* parent, ::g::InputPage* parentInstance)
{
    InputPage__Template1* obj1 = (InputPage__Template1*)uNew(InputPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
