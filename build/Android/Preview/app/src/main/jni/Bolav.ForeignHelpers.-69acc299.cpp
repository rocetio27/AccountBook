// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-foreignhelpers/ListDict.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Bolav.ForeignHelpers.-69acc299.h>
#include <Bolav.ForeignHelpers.-69acc391.h>

namespace g{
namespace Bolav{
namespace ForeignHelpers{

// public abstract class ForeignList :161
// {
static void ForeignList_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("NewDictRow", NULL, NULL, offsetof(ForeignList_type, fp_NewDictRow), false, ::g::Bolav::ForeignHelpers::ForeignDict_typeof(), 0));
}

ForeignList_type* ForeignList_typeof()
{
    static uSStrong<ForeignList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ForeignList);
    options.TypeSize = sizeof(ForeignList_type);
    type = (ForeignList_type*)uClassType::New("Bolav.ForeignHelpers.ForeignList", options);
    type->fp_build_ = ForeignList_build;
    return type;
}

// protected generated ForeignList() :161
void ForeignList__ctor__fn(ForeignList* __this)
{
    __this->ctor_();
}

// protected generated ForeignList() [instance] :161
void ForeignList::ctor_()
{
}
// }

}}} // ::g::Bolav::ForeignHelpers
