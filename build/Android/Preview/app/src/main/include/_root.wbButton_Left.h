// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/wbButton_Left.g.uno.
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
namespace g{struct wbButton_Left;}

namespace g{

// public partial sealed class wbButton_Left :2
// {
::g::Fuse::Controls::Panel_type* wbButton_Left_typeof();
void wbButton_Left__ctor_9_fn(wbButton_Left* __this);
void wbButton_Left__InitializeUX1_fn(wbButton_Left* __this);
void wbButton_Left__New6_fn(wbButton_Left** __retval);

struct wbButton_Left : ::g::Fuse::Controls::Button
{
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> wbRecCol_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> border_Color_inst;
    uStrong< ::g::Fuse::Drawing::SolidColor*> wbRecCol;
    uStrong< ::g::Fuse::Drawing::Stroke*> border;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return wbButton_Left_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return wbButton_Left_typeof()->Init(), __selector1_; }

    void ctor_9();
    void InitializeUX1();
    static wbButton_Left* New6();
};
// }

} // ::g
