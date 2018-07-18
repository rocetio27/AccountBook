// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/dayButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
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
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct dayButton;}

namespace g{

// public partial sealed class dayButton :2
// {
::g::Fuse::Controls::Panel_type* dayButton_typeof();
void dayButton__ctor_9_fn(dayButton* __this);
void dayButton__get_fontsize_fn(dayButton* __this, int32_t* __retval);
void dayButton__set_fontsize_fn(dayButton* __this, int32_t* value);
void dayButton__InitializeUX1_fn(dayButton* __this);
void dayButton__New6_fn(dayButton** __retval);
void dayButton__Setfontsize_fn(dayButton* __this, int32_t* value, uObject* origin);
void dayButton__Settext_fn(dayButton* __this, uString* value, uObject* origin);
void dayButton__Settextcolor_fn(dayButton* __this, ::g::Uno::Float4* value, uObject* origin);
void dayButton__get_text_fn(dayButton* __this, uString** __retval);
void dayButton__set_text_fn(dayButton* __this, uString* value);
void dayButton__get_textcolor_fn(dayButton* __this, ::g::Uno::Float4* __retval);
void dayButton__set_textcolor_fn(dayButton* __this, ::g::Uno::Float4* value);

struct dayButton : ::g::Fuse::Controls::Button
{
    uStrong<uString*> _field_text;
    ::g::Uno::Float4 _field_textcolor;
    int32_t _field_fontsize;
    uStrong< ::g::Uno::UX::Property1*> temp_FontSize_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_textcolor_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return dayButton_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return dayButton_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return dayButton_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return dayButton_typeof()->Init(), __selector3_; }

    void ctor_9();
    int32_t fontsize();
    void fontsize(int32_t value);
    void InitializeUX1();
    void Setfontsize(int32_t value, uObject* origin);
    void Settext(uString* value, uObject* origin);
    void Settextcolor(::g::Uno::Float4 value, uObject* origin);
    uString* text();
    void text(uString* value);
    ::g::Uno::Float4 textcolor();
    void textcolor(::g::Uno::Float4 value);
    static dayButton* New6();
};
// }

} // ::g
