// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-foreignhelpers/ListDict.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Bolav.ForeignHelpers.-69acc391.h>
namespace g{namespace Bolav{namespace ForeignHelpers{struct ForeignList;}}}
namespace g{namespace Bolav{namespace ForeignHelpers{struct JSDict;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Bolav{
namespace ForeignHelpers{

// public sealed class JSDict :65
// {
::g::Bolav::ForeignHelpers::ForeignDict_type* JSDict_typeof();
void JSDict__ctor_1_fn(JSDict* __this, ::g::Fuse::Scripting::Context* c);
void JSDict__AddDictForKey_fn(JSDict* __this, uString* key, ::g::Bolav::ForeignHelpers::ForeignDict** __retval);
void JSDict__AddListForKey_fn(JSDict* __this, uString* key, ::g::Bolav::ForeignHelpers::ForeignList** __retval);
void JSDict__FromJava_fn(JSDict* __this, ::g::Java::Object* dict);
void JSDict__GetScriptingObject_fn(JSDict* __this, ::g::Fuse::Scripting::Object** __retval);
void JSDict__New1_fn(::g::Fuse::Scripting::Context* c, JSDict** __retval);
void JSDict__SetKeyVal_fn(JSDict* __this, uString* key, uString* val);

struct JSDict : ::g::Bolav::ForeignHelpers::ForeignDict
{
    uStrong< ::g::Fuse::Scripting::Context*> ctx;
    uStrong< ::g::Fuse::Scripting::Object*> obj;

    void ctor_1(::g::Fuse::Scripting::Context* c);
    ::g::Bolav::ForeignHelpers::ForeignDict* AddDictForKey(uString* key);
    ::g::Bolav::ForeignHelpers::ForeignList* AddListForKey(uString* key);
    void FromJava(::g::Java::Object* dict);
    ::g::Fuse::Scripting::Object* GetScriptingObject();
    static JSDict* New1(::g::Fuse::Scripting::Context* c);
};
// }

}}} // ::g::Bolav::ForeignHelpers
