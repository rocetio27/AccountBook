// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/StatisticPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct StatisticPage;}
namespace g{struct StatisticPage__Template2;}

namespace g{

// public partial sealed class StatisticPage.Template2 :83
// {
::g::Uno::UX::Template_type* StatisticPage__Template2_typeof();
void StatisticPage__Template2__ctor_1_fn(StatisticPage__Template2* __this, ::g::StatisticPage* parent, ::g::StatisticPage* parentInstance);
void StatisticPage__Template2__New1_fn(StatisticPage__Template2* __this, uObject** __retval);
void StatisticPage__Template2__New2_fn(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance, StatisticPage__Template2** __retval);

struct StatisticPage__Template2 : ::g::Uno::UX::Template
{
    uWeak< ::g::StatisticPage*> __parent1;
    uWeak< ::g::StatisticPage*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Text_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb59;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return StatisticPage__Template2_typeof()->Init(), __selector0_; }

    void ctor_1(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance);
    static StatisticPage__Template2* New2(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance);
};
// }

} // ::g
