// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{struct ListPage;}
namespace g{struct ListPage__Template1;}

namespace g{

// public partial sealed class ListPage.Template1 :26
// {
::g::Uno::UX::Template_type* ListPage__Template1_typeof();
void ListPage__Template1__ctor_1_fn(ListPage__Template1* __this, ::g::ListPage* parent, ::g::ListPage* parentInstance);
void ListPage__Template1__New1_fn(ListPage__Template1* __this, uObject** __retval);
void ListPage__Template1__New2_fn(::g::ListPage* parent, ::g::ListPage* parentInstance, ListPage__Template1** __retval);

struct ListPage__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::ListPage*> __parent1;
    uWeak< ::g::ListPage*> __parentInstance1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb21;

    void ctor_1(::g::ListPage* parent, ::g::ListPage* parentInstance);
    static ListPage__Template1* New2(::g::ListPage* parent, ::g::ListPage* parentInstance);
};
// }

} // ::g
