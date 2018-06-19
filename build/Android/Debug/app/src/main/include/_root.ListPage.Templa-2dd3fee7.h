// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ListPage__Template2__Template4;}
namespace g{struct ListPage__Template2__Template4__Template5;}

namespace g{

// public partial sealed class ListPage.Template2.Template4.Template5 :361
// {
::g::Uno::UX::Template_type* ListPage__Template2__Template4__Template5_typeof();
void ListPage__Template2__Template4__Template5__ctor_1_fn(ListPage__Template2__Template4__Template5* __this, ::g::ListPage__Template2__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance);
void ListPage__Template2__Template4__Template5__New1_fn(ListPage__Template2__Template4__Template5* __this, uObject** __retval);
void ListPage__Template2__Template4__Template5__New2_fn(::g::ListPage__Template2__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance, ListPage__Template2__Template4__Template5** __retval);

struct ListPage__Template2__Template4__Template5 : ::g::Uno::UX::Template
{
    uWeak< ::g::ListPage__Template2__Template4*> __parent1;
    uWeak< ::g::Fuse::Reactive::Each*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListPage__Template2__Template4__Template5_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListPage__Template2__Template4__Template5_typeof()->Init(), __selector1_; }

    void ctor_1(::g::ListPage__Template2__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance);
    static ListPage__Template2__Template4__Template5* New2(::g::ListPage__Template2__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance);
};
// }

} // ::g
