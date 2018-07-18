// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-foreignhelpers/ListDict.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Bolav{namespace ForeignHelpers{struct ForeignDict;}}}

namespace g{
namespace Bolav{
namespace ForeignHelpers{

// public abstract class ForeignDict :165
// {
struct ForeignDict_type : uType
{
    void(*fp_SetKeyVal)(::g::Bolav::ForeignHelpers::ForeignDict*, uString*, uString*);
};

ForeignDict_type* ForeignDict_typeof();
void ForeignDict__ctor__fn(ForeignDict* __this);

struct ForeignDict : uObject
{
    void ctor_();
    void SetKeyVal(uString* key, uString* val) { (((ForeignDict_type*)__type)->fp_SetKeyVal)(this, key, val); }
};
// }

}}} // ::g::Bolav::ForeignHelpers
