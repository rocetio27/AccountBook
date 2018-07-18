// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/StatisticPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct StatisticPage;}
namespace g{struct StatisticPage__Template1;}

namespace g{

// public partial sealed class StatisticPage.Template1 :35
// {
::g::Uno::UX::Template_type* StatisticPage__Template1_typeof();
void StatisticPage__Template1__ctor_1_fn(StatisticPage__Template1* __this, ::g::StatisticPage* parent, ::g::StatisticPage* parentInstance);
void StatisticPage__Template1__New1_fn(StatisticPage__Template1* __this, uObject** __retval);
void StatisticPage__Template1__New2_fn(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance, StatisticPage__Template1** __retval);

struct StatisticPage__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::StatisticPage*> __parent1;
    uWeak< ::g::StatisticPage*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> __self_text_inst1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb53;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return StatisticPage__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance);
    static StatisticPage__Template1* New2(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance);
};
// }

} // ::g
