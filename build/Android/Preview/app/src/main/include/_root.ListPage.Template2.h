// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ListPage;}
namespace g{struct ListPage__Template2;}

namespace g{

// public partial sealed class ListPage.Template2 :57
// {
::g::Uno::UX::Template_type* ListPage__Template2_typeof();
void ListPage__Template2__ctor_1_fn(ListPage__Template2* __this, ::g::ListPage* parent, ::g::ListPage* parentInstance);
void ListPage__Template2__New1_fn(ListPage__Template2* __this, uObject** __retval);
void ListPage__Template2__New2_fn(::g::ListPage* parent, ::g::ListPage* parentInstance, ListPage__Template2** __retval);

struct ListPage__Template2 : ::g::Uno::UX::Template
{
    uWeak< ::g::ListPage*> __parent1;
    uWeak< ::g::ListPage*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_text_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb22;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListPage__Template2_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListPage__Template2_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ListPage__Template2_typeof()->Init(), __selector2_; }

    void ctor_1(::g::ListPage* parent, ::g::ListPage* parentInstance);
    static ListPage__Template2* New2(::g::ListPage* parent, ::g::ListPage* parentInstance);
};
// }

} // ::g
