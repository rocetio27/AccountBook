// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-foreignhelpers/ListDict.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Bolav.ForeignHelpers.-69acc391.h>
#include <Uno.String.h>

namespace g{
namespace Bolav{
namespace ForeignHelpers{

// public abstract class ForeignDict :165
// {
static void ForeignDict_build(uType* type)
{
}

ForeignDict_type* ForeignDict_typeof()
{
    static uSStrong<ForeignDict_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ForeignDict);
    options.TypeSize = sizeof(ForeignDict_type);
    type = (ForeignDict_type*)uClassType::New("Bolav.ForeignHelpers.ForeignDict", options);
    type->fp_build_ = ForeignDict_build;
    return type;
}

// protected generated ForeignDict() :165
void ForeignDict__ctor__fn(ForeignDict* __this)
{
    __this->ctor_();
}

// protected generated ForeignDict() [instance] :165
void ForeignDict::ctor_()
{
}
// }

}}} // ::g::Bolav::ForeignHelpers
