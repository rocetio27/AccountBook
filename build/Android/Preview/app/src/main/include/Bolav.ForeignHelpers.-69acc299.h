// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-foreignhelpers/ListDict.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Bolav{namespace ForeignHelpers{struct ForeignDict;}}}
namespace g{namespace Bolav{namespace ForeignHelpers{struct ForeignList;}}}

namespace g{
namespace Bolav{
namespace ForeignHelpers{

// public abstract class ForeignList :161
// {
struct ForeignList_type : uType
{
    void(*fp_NewDictRow)(::g::Bolav::ForeignHelpers::ForeignList*, ::g::Bolav::ForeignHelpers::ForeignDict**);
};

ForeignList_type* ForeignList_typeof();
void ForeignList__ctor__fn(ForeignList* __this);

struct ForeignList : uObject
{
    void ctor_();
    ::g::Bolav::ForeignHelpers::ForeignDict* NewDictRow() { ::g::Bolav::ForeignHelpers::ForeignDict* __retval; return (((ForeignList_type*)__type)->fp_NewDictRow)(this, &__retval), __retval; }
};
// }

}}} // ::g::Bolav::ForeignHelpers
