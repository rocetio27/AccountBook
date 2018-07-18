// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/BudgetPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{struct AlternateRoot;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct BudgetPage;}

namespace g{

// public partial sealed class BudgetPage :2
// {
::g::Fuse::Controls::Panel_type* BudgetPage_typeof();
void BudgetPage__ctor_7_fn(BudgetPage* __this, ::g::Fuse::Navigation::Router* router1);
void BudgetPage__InitializeUX_fn(BudgetPage* __this);
void BudgetPage__New4_fn(::g::Fuse::Navigation::Router* router1, BudgetPage** __retval);

struct BudgetPage : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Text_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Text_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp11_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp12_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp13_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp14_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> calendar_lbutton_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp15_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> calendar_rbutton_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp16_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp17_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp18_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm_ParentNode_inst;
    uStrong< ::g::Fuse::Controls::Panel*> FullWindo;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Fuse::AlternateRoot*> ModalConfirm;
    uStrong< ::g::Fuse::Controls::Image*> calendar_lbutton;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb6;
    uStrong< ::g::Fuse::Controls::Image*> calendar_rbutton;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb7;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb9;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return BudgetPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return BudgetPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return BudgetPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return BudgetPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return BudgetPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return BudgetPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return BudgetPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return BudgetPage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return BudgetPage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return BudgetPage_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return BudgetPage_typeof()->Init(), __selector9_; }

    void ctor_7(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static BudgetPage* New4(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
