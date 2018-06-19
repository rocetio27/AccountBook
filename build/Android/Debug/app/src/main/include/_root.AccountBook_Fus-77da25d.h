// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AccountBook_FuseControlsTextControl_Color_Property;}

namespace g{

// internal sealed class AccountBook_FuseControlsTextControl_Color_Property :170
// {
::g::Uno::UX::Property1_type* AccountBook_FuseControlsTextControl_Color_Property_typeof();
void AccountBook_FuseControlsTextControl_Color_Property__ctor_3_fn(AccountBook_FuseControlsTextControl_Color_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void AccountBook_FuseControlsTextControl_Color_Property__Get1_fn(AccountBook_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void AccountBook_FuseControlsTextControl_Color_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, AccountBook_FuseControlsTextControl_Color_Property** __retval);
void AccountBook_FuseControlsTextControl_Color_Property__get_Object_fn(AccountBook_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void AccountBook_FuseControlsTextControl_Color_Property__Set1_fn(AccountBook_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void AccountBook_FuseControlsTextControl_Color_Property__get_SupportsOriginSetter_fn(AccountBook_FuseControlsTextControl_Color_Property* __this, bool* __retval);

struct AccountBook_FuseControlsTextControl_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static AccountBook_FuseControlsTextControl_Color_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
