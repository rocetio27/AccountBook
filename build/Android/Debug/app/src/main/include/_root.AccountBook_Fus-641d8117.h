// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{struct AlternateRoot;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AccountBook_FuseAlternateRoot_IsEnabled_Property;}

namespace g{

// internal sealed class AccountBook_FuseAlternateRoot_IsEnabled_Property :234
// {
::g::Uno::UX::Property1_type* AccountBook_FuseAlternateRoot_IsEnabled_Property_typeof();
void AccountBook_FuseAlternateRoot_IsEnabled_Property__ctor_3_fn(AccountBook_FuseAlternateRoot_IsEnabled_Property* __this, ::g::Fuse::AlternateRoot* obj, ::g::Uno::UX::Selector* name);
void AccountBook_FuseAlternateRoot_IsEnabled_Property__Get1_fn(AccountBook_FuseAlternateRoot_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void AccountBook_FuseAlternateRoot_IsEnabled_Property__New1_fn(::g::Fuse::AlternateRoot* obj, ::g::Uno::UX::Selector* name, AccountBook_FuseAlternateRoot_IsEnabled_Property** __retval);
void AccountBook_FuseAlternateRoot_IsEnabled_Property__get_Object_fn(AccountBook_FuseAlternateRoot_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void AccountBook_FuseAlternateRoot_IsEnabled_Property__Set1_fn(AccountBook_FuseAlternateRoot_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct AccountBook_FuseAlternateRoot_IsEnabled_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::AlternateRoot*> _obj;

    void ctor_3(::g::Fuse::AlternateRoot* obj, ::g::Uno::UX::Selector name);
    static AccountBook_FuseAlternateRoot_IsEnabled_Property* New1(::g::Fuse::AlternateRoot* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
