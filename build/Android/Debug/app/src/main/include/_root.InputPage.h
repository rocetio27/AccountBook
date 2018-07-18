// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/InputPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
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
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{struct AlternateRoot;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct InputPage;}
namespace g{struct wbButton;}

namespace g{

// public partial sealed class InputPage :2
// {
::g::Fuse::Controls::Panel_type* InputPage_typeof();
void InputPage__ctor_8_fn(InputPage* __this);
void InputPage__InitializeUX_fn(InputPage* __this);
void InputPage__New5_fn(InputPage** __retval);

struct InputPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_TextColor_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> ScreenGrid_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> usageTextInput_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Text_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Text_inst;
    uStrong< ::g::Uno::UX::Property1*> KeyboardGrid_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> popup_input_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Offset_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Limit_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm_ParentNode_inst;
    uStrong< ::g::Fuse::Controls::Panel*> FullWindo;
    uStrong< ::g::Fuse::Controls::Grid*> ScreenGrid;
    uStrong< ::g::Fuse::Controls::Grid*> KeyboardGrid;
    uStrong< ::g::Fuse::Controls::TextInput*> usageTextInput;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb10;
    uStrong< ::g::wbButton*> usage_button;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb12;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb13;
    uStrong< ::g::Fuse::AlternateRoot*> ModalConfirm;
    uStrong< ::g::Fuse::Controls::TextInput*> popup_input;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb14;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return InputPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return InputPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return InputPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return InputPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return InputPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return InputPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return InputPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return InputPage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return InputPage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return InputPage_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return InputPage_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return InputPage_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return InputPage_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return InputPage_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return InputPage_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return InputPage_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return InputPage_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return InputPage_typeof()->Init(), __selector16_; }

    void ctor_8();
    void InitializeUX();
    static InputPage* New5();
};
// }

} // ::g
