// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ListPage__Template2;}
namespace g{struct ListPage__Template2__Template3;}

namespace g{

// public partial sealed class ListPage.Template2.Template3 :67
// {
::g::Uno::UX::Template_type* ListPage__Template2__Template3_typeof();
void ListPage__Template2__Template3__ctor_1_fn(ListPage__Template2__Template3* __this, ::g::ListPage__Template2* parent, ::g::Fuse::Controls::Rectangle* parentInstance);
void ListPage__Template2__Template3__New1_fn(ListPage__Template2__Template3* __this, uObject** __retval);
void ListPage__Template2__Template3__New2_fn(::g::ListPage__Template2* parent, ::g::Fuse::Controls::Rectangle* parentInstance, ListPage__Template2__Template3** __retval);

struct ListPage__Template2__Template3 : ::g::Uno::UX::Template
{
    uWeak< ::g::ListPage__Template2*> __parent1;
    uWeak< ::g::Fuse::Controls::Rectangle*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> __self_Color_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_Visibility_inst1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb23;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb24;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListPage__Template2__Template3_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListPage__Template2__Template3_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ListPage__Template2__Template3_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ListPage__Template2__Template3_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ListPage__Template2__Template3_typeof()->Init(), __selector4_; }

    void ctor_1(::g::ListPage__Template2* parent, ::g::Fuse::Controls::Rectangle* parentInstance);
    static ListPage__Template2__Template3* New2(::g::ListPage__Template2* parent, ::g::Fuse::Controls::Rectangle* parentInstance);
};
// }

} // ::g
