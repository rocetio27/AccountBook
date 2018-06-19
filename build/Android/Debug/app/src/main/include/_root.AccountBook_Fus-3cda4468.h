// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct ButtonBase;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AccountBook_FuseControlsButtonBase_Text_Property;}

namespace g{

// internal sealed class AccountBook_FuseControlsButtonBase_Text_Property :196
// {
::g::Uno::UX::Property1_type* AccountBook_FuseControlsButtonBase_Text_Property_typeof();
void AccountBook_FuseControlsButtonBase_Text_Property__ctor_3_fn(AccountBook_FuseControlsButtonBase_Text_Property* __this, ::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector* name);
void AccountBook_FuseControlsButtonBase_Text_Property__Get1_fn(AccountBook_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void AccountBook_FuseControlsButtonBase_Text_Property__New1_fn(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector* name, AccountBook_FuseControlsButtonBase_Text_Property** __retval);
void AccountBook_FuseControlsButtonBase_Text_Property__get_Object_fn(AccountBook_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void AccountBook_FuseControlsButtonBase_Text_Property__Set1_fn(AccountBook_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void AccountBook_FuseControlsButtonBase_Text_Property__get_SupportsOriginSetter_fn(AccountBook_FuseControlsButtonBase_Text_Property* __this, bool* __retval);

struct AccountBook_FuseControlsButtonBase_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::ButtonBase*> _obj;

    void ctor_3(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector name);
    static AccountBook_FuseControlsButtonBase_Text_Property* New1(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
