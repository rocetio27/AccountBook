// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AccountBook_FuseReactiveEach_Items_Property;}

namespace g{

// internal sealed class AccountBook_FuseReactiveEach_Items_Property :257
// {
::g::Uno::UX::Property1_type* AccountBook_FuseReactiveEach_Items_Property_typeof();
void AccountBook_FuseReactiveEach_Items_Property__ctor_3_fn(AccountBook_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name);
void AccountBook_FuseReactiveEach_Items_Property__Get1_fn(AccountBook_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void AccountBook_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, AccountBook_FuseReactiveEach_Items_Property** __retval);
void AccountBook_FuseReactiveEach_Items_Property__get_Object_fn(AccountBook_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void AccountBook_FuseReactiveEach_Items_Property__Set1_fn(AccountBook_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);

struct AccountBook_FuseReactiveEach_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_3(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
    static AccountBook_FuseReactiveEach_Items_Property* New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
