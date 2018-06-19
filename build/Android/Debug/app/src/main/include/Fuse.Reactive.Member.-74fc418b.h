// This file was generated based on C:/Users/SpaceJockey27/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.4.2/Member.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.IProper-fa34e162.h>
#include <Fuse.Reactive.IWriteable.h>
#include <Fuse.Reactive.UnaryOp-a08b90b8.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct Member;}}}
namespace g{namespace Fuse{namespace Reactive{struct Member__MemberSubscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Member.MemberSubscription :27
// {
struct Member__MemberSubscription_type : ::g::Fuse::Reactive::UnaryOperator__Subscription_type
{
    ::g::Fuse::Reactive::IPropertyObserver interface2;
    ::g::Fuse::Reactive::IWriteable interface3;
};

Member__MemberSubscription_type* Member__MemberSubscription_typeof();
void Member__MemberSubscription__ctor_2_fn(Member__MemberSubscription* __this, ::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener);
void Member__MemberSubscription__Dispose_fn(Member__MemberSubscription* __this);
void Member__MemberSubscription__DisposeObservableObjectSubscription_fn(Member__MemberSubscription* __this);
void Member__MemberSubscription__FuseReactiveIWriteableTrySetExclusive_fn(Member__MemberSubscription* __this, uObject* newObj, bool* __retval);
void Member__MemberSubscription__New2_fn(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener, Member__MemberSubscription** __retval);
void Member__MemberSubscription__OnNewOperand_fn(Member__MemberSubscription* __this, uObject* obj);

struct Member__MemberSubscription : ::g::Fuse::Reactive::UnaryOperator__Subscription
{
    uStrong< ::g::Fuse::Reactive::Member*> _member;
    uStrong<uObject*> _obsObjSub;

    void ctor_2(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener);
    void DisposeObservableObjectSubscription();
    static Member__MemberSubscription* New2(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
