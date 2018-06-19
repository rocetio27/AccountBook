// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/wbButtonB.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
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
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct wbButtonB;}

namespace g{

// public partial sealed class wbButtonB :2
// {
::g::Fuse::Controls::Panel_type* wbButtonB_typeof();
void wbButtonB__ctor_9_fn(wbButtonB* __this);
void wbButtonB__InitializeUX1_fn(wbButtonB* __this);
void wbButtonB__New6_fn(wbButtonB** __retval);
void wbButtonB__Settextcolor_fn(wbButtonB* __this, ::g::Uno::Float4* value, uObject* origin);
void wbButtonB__get_textcolor_fn(wbButtonB* __this, ::g::Uno::Float4* __retval);
void wbButtonB__set_textcolor_fn(wbButtonB* __this, ::g::Uno::Float4* value);

struct wbButtonB : ::g::Fuse::Controls::Button
{
    ::g::Uno::Float4 _field_textcolor;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> wbRec_Color_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> wbRec;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return wbButtonB_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return wbButtonB_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return wbButtonB_typeof()->Init(), __selector2_; }

    void ctor_9();
    void InitializeUX1();
    void Settextcolor(::g::Uno::Float4 value, uObject* origin);
    ::g::Uno::Float4 textcolor();
    void textcolor(::g::Uno::Float4 value);
    static wbButtonB* New6();
};
// }

} // ::g
