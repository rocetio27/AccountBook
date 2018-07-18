// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/InputPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct InputPage;}
namespace g{struct InputPage__Template1;}

namespace g{

// public partial sealed class InputPage.Template1 :42
// {
::g::Uno::UX::Template_type* InputPage__Template1_typeof();
void InputPage__Template1__ctor_1_fn(InputPage__Template1* __this, ::g::InputPage* parent, ::g::InputPage* parentInstance);
void InputPage__Template1__New1_fn(InputPage__Template1* __this, uObject** __retval);
void InputPage__Template1__New2_fn(::g::InputPage* parent, ::g::InputPage* parentInstance, InputPage__Template1** __retval);

struct InputPage__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::InputPage*> __parent1;
    uWeak< ::g::InputPage*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> ModalConfirm_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Text_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb15;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb16;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return InputPage__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return InputPage__Template1_typeof()->Init(), __selector1_; }

    void ctor_1(::g::InputPage* parent, ::g::InputPage* parentInstance);
    static InputPage__Template1* New2(::g::InputPage* parent, ::g::InputPage* parentInstance);
};
// }

} // ::g
