// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AccountBook_myButton_text_Property;}
namespace g{struct myButton;}

namespace g{

// internal sealed class AccountBook_myButton_text_Property :264
// {
::g::Uno::UX::Property1_type* AccountBook_myButton_text_Property_typeof();
void AccountBook_myButton_text_Property__ctor_3_fn(AccountBook_myButton_text_Property* __this, ::g::myButton* obj, ::g::Uno::UX::Selector* name);
void AccountBook_myButton_text_Property__Get1_fn(AccountBook_myButton_text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void AccountBook_myButton_text_Property__New1_fn(::g::myButton* obj, ::g::Uno::UX::Selector* name, AccountBook_myButton_text_Property** __retval);
void AccountBook_myButton_text_Property__get_Object_fn(AccountBook_myButton_text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void AccountBook_myButton_text_Property__Set1_fn(AccountBook_myButton_text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void AccountBook_myButton_text_Property__get_SupportsOriginSetter_fn(AccountBook_myButton_text_Property* __this, bool* __retval);

struct AccountBook_myButton_text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::myButton*> _obj;

    void ctor_3(::g::myButton* obj, ::g::Uno::UX::Selector name);
    static AccountBook_myButton_text_Property* New1(::g::myButton* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
