// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AccountBook_EditButton_text_Property;}
namespace g{struct EditButton;}

namespace g{

// internal sealed class AccountBook_EditButton_text_Property :360
// {
::g::Uno::UX::Property1_type* AccountBook_EditButton_text_Property_typeof();
void AccountBook_EditButton_text_Property__ctor_3_fn(AccountBook_EditButton_text_Property* __this, ::g::EditButton* obj, ::g::Uno::UX::Selector* name);
void AccountBook_EditButton_text_Property__Get1_fn(AccountBook_EditButton_text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void AccountBook_EditButton_text_Property__New1_fn(::g::EditButton* obj, ::g::Uno::UX::Selector* name, AccountBook_EditButton_text_Property** __retval);
void AccountBook_EditButton_text_Property__get_Object_fn(AccountBook_EditButton_text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void AccountBook_EditButton_text_Property__Set1_fn(AccountBook_EditButton_text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void AccountBook_EditButton_text_Property__get_SupportsOriginSetter_fn(AccountBook_EditButton_text_Property* __this, bool* __retval);

struct AccountBook_EditButton_text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::EditButton*> _obj;

    void ctor_3(::g::EditButton* obj, ::g::Uno::UX::Selector name);
    static AccountBook_EditButton_text_Property* New1(::g::EditButton* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
