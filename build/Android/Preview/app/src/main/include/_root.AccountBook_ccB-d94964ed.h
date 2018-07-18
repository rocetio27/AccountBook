// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AccountBook_ccButton_textcolor_Property;}
namespace g{struct ccButton;}

namespace g{

// internal sealed class AccountBook_ccButton_textcolor_Property :342
// {
::g::Uno::UX::Property1_type* AccountBook_ccButton_textcolor_Property_typeof();
void AccountBook_ccButton_textcolor_Property__ctor_3_fn(AccountBook_ccButton_textcolor_Property* __this, ::g::ccButton* obj, ::g::Uno::UX::Selector* name);
void AccountBook_ccButton_textcolor_Property__Get1_fn(AccountBook_ccButton_textcolor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void AccountBook_ccButton_textcolor_Property__New1_fn(::g::ccButton* obj, ::g::Uno::UX::Selector* name, AccountBook_ccButton_textcolor_Property** __retval);
void AccountBook_ccButton_textcolor_Property__get_Object_fn(AccountBook_ccButton_textcolor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void AccountBook_ccButton_textcolor_Property__Set1_fn(AccountBook_ccButton_textcolor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void AccountBook_ccButton_textcolor_Property__get_SupportsOriginSetter_fn(AccountBook_ccButton_textcolor_Property* __this, bool* __retval);

struct AccountBook_ccButton_textcolor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::ccButton*> _obj;

    void ctor_3(::g::ccButton* obj, ::g::Uno::UX::Selector name);
    static AccountBook_ccButton_textcolor_Property* New1(::g::ccButton* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
