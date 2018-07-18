// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/wbButton.g.uno.
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
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct wbButton;}

namespace g{

// public partial sealed class wbButton :2
// {
::g::Fuse::Controls::Panel_type* wbButton_typeof();
void wbButton__ctor_9_fn(wbButton* __this);
void wbButton__InitializeUX1_fn(wbButton* __this);
void wbButton__New6_fn(wbButton** __retval);
void wbButton__SetTextCol_fn(wbButton* __this, ::g::Uno::Float4* value, uObject* origin);
void wbButton__get_TextCol_fn(wbButton* __this, ::g::Uno::Float4* __retval);
void wbButton__set_TextCol_fn(wbButton* __this, ::g::Uno::Float4* value);

struct wbButton : ::g::Fuse::Controls::Button
{
    ::g::Uno::Float4 _field_TextCol;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> wbRecCol_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> border_Color_inst;
    uStrong< ::g::Fuse::Drawing::SolidColor*> wbRecCol;
    uStrong< ::g::Fuse::Drawing::Stroke*> border;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return wbButton_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return wbButton_typeof()->Init(), __selector1_; }

    void ctor_9();
    void InitializeUX1();
    void SetTextCol(::g::Uno::Float4 value, uObject* origin);
    ::g::Uno::Float4 TextCol();
    void TextCol(::g::Uno::Float4 value);
    static wbButton* New6();
};
// }

} // ::g
