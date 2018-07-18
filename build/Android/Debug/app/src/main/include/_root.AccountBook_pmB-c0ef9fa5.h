// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AccountBook_pmButton_Text_Property;}
namespace g{struct pmButton;}

namespace g{

// internal sealed class AccountBook_pmButton_Text_Property :319
// {
::g::Uno::UX::Property1_type* AccountBook_pmButton_Text_Property_typeof();
void AccountBook_pmButton_Text_Property__ctor_3_fn(AccountBook_pmButton_Text_Property* __this, ::g::pmButton* obj, ::g::Uno::UX::Selector* name);
void AccountBook_pmButton_Text_Property__Get1_fn(AccountBook_pmButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void AccountBook_pmButton_Text_Property__New1_fn(::g::pmButton* obj, ::g::Uno::UX::Selector* name, AccountBook_pmButton_Text_Property** __retval);
void AccountBook_pmButton_Text_Property__get_Object_fn(AccountBook_pmButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void AccountBook_pmButton_Text_Property__Set1_fn(AccountBook_pmButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void AccountBook_pmButton_Text_Property__get_SupportsOriginSetter_fn(AccountBook_pmButton_Text_Property* __this, bool* __retval);

struct AccountBook_pmButton_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::pmButton*> _obj;

    void ctor_3(::g::pmButton* obj, ::g::Uno::UX::Selector name);
    static AccountBook_pmButton_Text_Property* New1(::g::pmButton* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
