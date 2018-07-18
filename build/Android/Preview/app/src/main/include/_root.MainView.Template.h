// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct TextBox;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}
namespace g{struct MainView__Template;}
namespace g{struct wbButton;}

namespace g{

// public partial sealed class MainView.Template :5
// {
::g::Uno::UX::Template_type* MainView__Template_typeof();
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent, ::g::MainView* parentInstance);
void MainView__Template__New1_fn(MainView__Template* __this, uObject** __retval);
void MainView__Template__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template** __retval);

struct MainView__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::MainView*> __parent1;
    uWeak< ::g::MainView*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> aBtn_Text_inst;
    uStrong< ::g::Uno::UX::Property1*> bTBox_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> bTBox_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> bEdit_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> aBtn_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> OK_Visibility_inst;
    uStrong< ::g::wbButton*> aBtn;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb40;
    uStrong< ::g::Fuse::Controls::TextBox*> bTBox;
    uStrong< ::g::wbButton*> bEdit;
    uStrong< ::g::wbButton*> OK;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb41;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainView__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MainView__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MainView__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MainView__Template_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MainView__Template_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MainView__Template_typeof()->Init(), __selector6_; }

    void ctor_1(::g::MainView* parent, ::g::MainView* parentInstance);
    static MainView__Template* New2(::g::MainView* parent, ::g::MainView* parentInstance);
};
// }

} // ::g
