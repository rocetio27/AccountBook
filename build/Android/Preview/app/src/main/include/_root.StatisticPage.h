// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/StatisticPage.g.uno.
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
namespace g{struct StatisticPage;}

namespace g{

// public partial sealed class StatisticPage :2
// {
::g::Fuse::Controls::Panel_type* StatisticPage_typeof();
void StatisticPage__ctor_7_fn(StatisticPage* __this, ::g::Fuse::Navigation::Router* router1);
void StatisticPage__InitializeUX_fn(StatisticPage* __this);
void StatisticPage__New4_fn(::g::Fuse::Navigation::Router* router1, StatisticPage** __retval);

struct StatisticPage : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_text_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_text_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_text_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_text_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_text_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm2_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp11_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp12_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> calendar_lbutton_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp13_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> calendar_rbutton_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp14_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp15_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp16_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm_ParentNode_inst;
    uStrong< ::g::Uno::UX::Property1*> temp17_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp18_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp19_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp19_Offset_inst;
    uStrong< ::g::Uno::UX::Property1*> temp19_Limit_inst;
    uStrong< ::g::Uno::UX::Property1*> temp20_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm2_ParentNode_inst;
    uStrong< ::g::Fuse::Controls::Panel*> FullWindo;
    uStrong< ::g::Fuse::Controls::Panel*> FullWindo2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb50;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb51;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb52;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb53;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb54;
    uStrong< ::g::Fuse::AlternateRoot*> ModalConfirm;
    uStrong< ::g::Fuse::Controls::Image*> calendar_lbutton;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb55;
    uStrong< ::g::Fuse::Controls::Image*> calendar_rbutton;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb56;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb58;
    uStrong< ::g::Fuse::AlternateRoot*> ModalConfirm2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb60;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return StatisticPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return StatisticPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return StatisticPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return StatisticPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return StatisticPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return StatisticPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return StatisticPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return StatisticPage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return StatisticPage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return StatisticPage_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return StatisticPage_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return StatisticPage_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return StatisticPage_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return StatisticPage_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return StatisticPage_typeof()->Init(), __selector13_; }

    void ctor_7(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static StatisticPage* New4(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
