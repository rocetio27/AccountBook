// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct Shadow;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}
namespace g{struct SQLite;}
namespace g{struct TabButton;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_4_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::Property1*> shadow_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> indicator_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> Hamburger_Color_inst;
    static uSStrong< ::g::SQLite*> SQLite_;
    static uSStrong< ::g::SQLite*>& SQLite() { return MainView_typeof()->Init(), SQLite_; }
    uStrong< ::g::Fuse::Controls::Grid*> sidebar;
    uStrong< ::g::Fuse::Controls::Shadow*> shadow;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb45;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Controls::Rectangle*> indicator;
    uStrong< ::g::Fuse::Controls::Grid*> Hamburger;
    uStrong< ::g::Fuse::Controls::Panel*> InputTab;
    uStrong< ::g::TabButton*> Tab1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb46;
    uStrong< ::g::Fuse::Controls::Panel*> ListTab;
    uStrong< ::g::TabButton*> Tab2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb47;
    uStrong< ::g::Fuse::Controls::Panel*> StatisticTab;
    uStrong< ::g::TabButton*> Tab3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb48;
    uStrong< ::g::Fuse::Controls::Panel*> BudgetTab;
    uStrong< ::g::TabButton*> Tab4;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb49;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainView_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MainView_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MainView_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MainView_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MainView_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MainView_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return MainView_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return MainView_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return MainView_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return MainView_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return MainView_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return MainView_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return MainView_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return MainView_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return MainView_typeof()->Init(), __selector15_; }

    void ctor_4();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
