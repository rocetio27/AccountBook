// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/AccountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AccountBook_accessor_Fuse_Controls_ButtonBase_Text;}

namespace g{

// internal sealed class AccountBook_accessor_Fuse_Controls_ButtonBase_Text :1
// {
::g::Uno::UX::PropertyAccessor_type* AccountBook_accessor_Fuse_Controls_ButtonBase_Text_typeof();
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__ctor_1_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text* __this);
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::Selector* __retval);
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__New1_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text** __retval);
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text* __this, uType** __retval);
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void AccountBook_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn(AccountBook_accessor_Fuse_Controls_ButtonBase_Text* __this, bool* __retval);

struct AccountBook_accessor_Fuse_Controls_ButtonBase_Text : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return AccountBook_accessor_Fuse_Controls_ButtonBase_Text_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return AccountBook_accessor_Fuse_Controls_ButtonBase_Text_typeof()->Init(), _name_; }

    void ctor_1();
    static AccountBook_accessor_Fuse_Controls_ButtonBase_Text* New1();
};
// }

} // ::g
