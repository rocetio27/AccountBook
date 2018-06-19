// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/BudgetPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct BudgetPage;}
namespace g{struct BudgetPage__Template5;}

namespace g{

// public partial sealed class BudgetPage.Template5 :173
// {
::g::Uno::UX::Template_type* BudgetPage__Template5_typeof();
void BudgetPage__Template5__ctor_1_fn(BudgetPage__Template5* __this, ::g::BudgetPage* parent, ::g::BudgetPage* parentInstance);
void BudgetPage__Template5__New1_fn(BudgetPage__Template5* __this, uObject** __retval);
void BudgetPage__Template5__New2_fn(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance, BudgetPage__Template5** __retval);

struct BudgetPage__Template5 : ::g::Uno::UX::Template
{
    uWeak< ::g::BudgetPage*> __parent1;
    uWeak< ::g::BudgetPage*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> __self_Visibility_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_text_inst1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb8;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return BudgetPage__Template5_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return BudgetPage__Template5_typeof()->Init(), __selector1_; }

    void ctor_1(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance);
    static BudgetPage__Template5* New2(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance);
};
// }

} // ::g
