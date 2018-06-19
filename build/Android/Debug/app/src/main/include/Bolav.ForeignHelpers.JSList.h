// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-foreignhelpers/ListDict.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Bolav.ForeignHelpers.-69acc299.h>
namespace g{namespace Bolav{namespace ForeignHelpers{struct ForeignDict;}}}
namespace g{namespace Bolav{namespace ForeignHelpers{struct JSList;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Bolav{
namespace ForeignHelpers{

// public sealed class JSList :8
// {
::g::Bolav::ForeignHelpers::ForeignList_type* JSList_typeof();
void JSList__ctor_1_fn(JSList* __this, ::g::Fuse::Scripting::Context* c);
void JSList__FromJava_fn(JSList* __this, ::g::Java::Object* ary);
void JSList__GetScriptingArray_fn(JSList* __this, ::g::Fuse::Scripting::Array** __retval);
void JSList__New1_fn(::g::Fuse::Scripting::Context* c, JSList** __retval);
void JSList__NewDictRow_fn(JSList* __this, ::g::Bolav::ForeignHelpers::ForeignDict** __retval);

struct JSList : ::g::Bolav::ForeignHelpers::ForeignList
{
    uStrong< ::g::Fuse::Scripting::Context*> ctx;
    uStrong< ::g::Fuse::Scripting::Array*> array;
    int pos;

    void ctor_1(::g::Fuse::Scripting::Context* c);
    void FromJava(::g::Java::Object* ary);
    ::g::Fuse::Scripting::Array* GetScriptingArray();
    static JSList* New1(::g::Fuse::Scripting::Context* c);
};
// }

}}} // ::g::Bolav::ForeignHelpers
