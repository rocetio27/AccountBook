// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ListPage.h>
#include <_root.ListPage.Template3.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class ListPage.Template3 :464
// {
// static Template3() :473
static void ListPage__Template3__cctor__fn(uType* __type)
{
}

static void ListPage__Template3_build(uType* type)
{
    type->SetFields(2,
        ::g::ListPage_typeof(), offsetof(ListPage__Template3, __parent1), uFieldFlagsWeak,
        ::g::ListPage_typeof(), offsetof(ListPage__Template3, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* ListPage__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ListPage__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ListPage.Template3", options);
    type->fp_build_ = ListPage__Template3_build;
    type->fp_cctor_ = ListPage__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ListPage__Template3__New1_fn;
    return type;
}

// public Template3(ListPage parent, ListPage parentInstance) :468
void ListPage__Template3__ctor_1_fn(ListPage__Template3* __this, ::g::ListPage* parent, ::g::ListPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :476
void ListPage__Template3__New1_fn(ListPage__Template3* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* __self1 = ::g::Fuse::Controls::Panel::New3();
    __self1->Height(::g::Uno::UX::Size__New1(5.0f, 1));
    return *__retval = __self1, void();
}

// public Template3 New(ListPage parent, ListPage parentInstance) :468
void ListPage__Template3__New2_fn(::g::ListPage* parent, ::g::ListPage* parentInstance, ListPage__Template3** __retval)
{
    *__retval = ListPage__Template3::New2(parent, parentInstance);
}

// public Template3(ListPage parent, ListPage parentInstance) [instance] :468
void ListPage__Template3::ctor_1(::g::ListPage* parent, ::g::ListPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template3 New(ListPage parent, ListPage parentInstance) [static] :468
ListPage__Template3* ListPage__Template3::New2(::g::ListPage* parent, ::g::ListPage* parentInstance)
{
    ListPage__Template3* obj1 = (ListPage__Template3*)uNew(ListPage__Template3_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
