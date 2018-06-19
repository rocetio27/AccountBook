// This file was generated based on C:/Users/SpaceJockey27/AppData/Local/Fusetools/Packages/UnoCore/1.4.3/Source/Uno/IO/Stream.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Uno{
namespace IO{

// public abstract class Stream :7
// {
struct Stream_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose1)(::g::Uno::IO::Stream*, bool*);
    void(*fp_Read)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*);
    void(*fp_Write)(::g::Uno::IO::Stream*, uArray*, int*, int*);
};

Stream_type* Stream_typeof();
void Stream__ctor__fn(Stream* __this);
void Stream__Close_fn(Stream* __this);
void Stream__Dispose_fn(Stream* __this);
void Stream__Dispose1_fn(Stream* __this, bool* disposing);

struct Stream : uObject
{
    void ctor_();
    void Close();
    void Dispose();
    void Dispose1(bool disposing) { (((Stream_type*)__type)->fp_Dispose1)(this, &disposing); }
    int Read(uArray* dst, int byteOffset, int byteCount) { int __retval; return (((Stream_type*)__type)->fp_Read)(this, dst, &byteOffset, &byteCount, &__retval), __retval; }
    void Write(uArray* src, int byteOffset, int byteCount) { (((Stream_type*)__type)->fp_Write)(this, src, &byteOffset, &byteCount); }
    static void Dispose1(Stream* __this, bool disposing) { Stream__Dispose1_fn(__this, &disposing); }
};
// }

}}} // ::g::Uno::IO
