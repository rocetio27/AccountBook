// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/pmButton.g.uno.
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
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct pmButton;}

namespace g{

// public partial sealed class pmButton :2
// {
::g::Fuse::Controls::Panel_type* pmButton_typeof();
void pmButton__ctor_9_fn(pmButton* __this);
void pmButton__InitializeUX1_fn(pmButton* __this);
void pmButton__New6_fn(pmButton** __retval);
void pmButton__SetText1_fn(pmButton* __this, uString* value, uObject* origin);
void pmButton__get_Text1_fn(pmButton* __this, uString** __retval);
void pmButton__set_Text1_fn(pmButton* __this, uString* value);

struct pmButton : ::g::Fuse::Controls::Button
{
    uStrong<uString*> _field_Text;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb39;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return pmButton_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return pmButton_typeof()->Init(), __selector1_; }

    void ctor_9();
    void InitializeUX1();
    void SetText1(uString* value, uObject* origin);
    uString* Text1();
    void Text1(uString* value);
    static pmButton* New6();
};
// }

} // ::g
