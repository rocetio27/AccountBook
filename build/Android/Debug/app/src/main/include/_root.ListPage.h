// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
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
namespace g{namespace Fuse{namespace Controls{struct Button;}}}
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{struct AlternateRoot;}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ccButton;}
namespace g{struct ListPage;}

namespace g{

// public partial sealed class ListPage :2
// {
::g::Fuse::Controls::Panel_type* ListPage_typeof();
void ListPage__ctor_7_fn(ListPage* __this, ::g::Fuse::Navigation::Router* router1);
void ListPage__InitializeUX_fn(ListPage* __this);
void ListPage__New4_fn(::g::Fuse::Navigation::Router* router1, ListPage** __retval);

struct ListPage : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> cash_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> card_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> lbutton_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm3_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm2_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm_ParentNode_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_text_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp11_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp12_text_inst;
    uStrong< ::g::Uno::UX::Property1*> temp13_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp14_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp15_text_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm2_ParentNode_inst;
    uStrong< ::g::Uno::UX::Property1*> temp16_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp17_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm3_ParentNode_inst;
    uStrong< ::g::Fuse::Controls::Panel*> EditOrDeletePopup;
    uStrong< ::g::Fuse::Controls::Panel*> ListEditPopup;
    uStrong< ::g::Fuse::Controls::Panel*> YearMonthEditPopup;
    static uSStrong< ::g::Fuse::Font*> Bold_;
    static uSStrong< ::g::Fuse::Font*>& Bold() { return ListPage_typeof()->Init(), Bold_; }
    static uSStrong< ::g::Fuse::Controls::Image*> lArrow_;
    static uSStrong< ::g::Fuse::Controls::Image*>& lArrow() { return ListPage_typeof()->Init(), lArrow_; }
    static uSStrong< ::g::Fuse::Controls::Image*> rArrow_;
    static uSStrong< ::g::Fuse::Controls::Image*>& rArrow() { return ListPage_typeof()->Init(), rArrow_; }
    uStrong< ::g::ccButton*> cash;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb17;
    uStrong< ::g::ccButton*> card;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb18;
    uStrong< ::g::Fuse::Controls::Button*> yearmonth;
    uStrong< ::g::Fuse::Controls::Image*> lbutton;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb19;
    uStrong< ::g::Fuse::Controls::Image*> rbutton;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb20;
    uStrong< ::g::Fuse::AlternateRoot*> ModalConfirm;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb25;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb26;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb27;
    uStrong< ::g::Fuse::AlternateRoot*> ModalConfirm2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb28;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb29;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb30;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb31;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb32;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb33;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb34;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb35;
    uStrong< ::g::Fuse::AlternateRoot*> ModalConfirm3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb36;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb37;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb38;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ListPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ListPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ListPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ListPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return ListPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return ListPage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return ListPage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return ListPage_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return ListPage_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return ListPage_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return ListPage_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return ListPage_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return ListPage_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return ListPage_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return ListPage_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return ListPage_typeof()->Init(), __selector16_; }

    void ctor_7(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static ListPage* New4(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
