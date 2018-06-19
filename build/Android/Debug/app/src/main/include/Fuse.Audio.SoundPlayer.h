// This file was generated based on C:/Users/SpaceJockey27/AppData/Local/Fusetools/Packages/Fuse.Audio/1.4.2/Android/AndroidAudio.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Audio{struct SoundPlayer;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace UX{struct BundleFileSource;}}}

namespace g{
namespace Fuse{
namespace Audio{

// internal sealed extern class SoundPlayer :23
// {
uType* SoundPlayer_typeof();
void SoundPlayer__PlaySoundFromAFD_fn(::g::Java::Object* afd);
void SoundPlayer__PlaySoundFromBundle_fn(::g::Uno::UX::BundleFileSource* fileSource);
void SoundPlayer__PlaySoundFromByteArray_fn(uArray* byteArray);
void SoundPlayer__PlaySoundFromByteArrayInner_fn(::g::Java::Object* unoStream);
void SoundPlayer__PlaySoundFromMediaDataSource_fn(::g::Java::Object* mediaDataSource);

struct SoundPlayer : uObject
{
    static void PlaySoundFromAFD(::g::Java::Object* afd);
    static void PlaySoundFromBundle(::g::Uno::UX::BundleFileSource* fileSource);
    static void PlaySoundFromByteArray(uArray* byteArray);
    static void PlaySoundFromByteArrayInner(::g::Java::Object* unoStream);
    static void PlaySoundFromMediaDataSource(::g::Java::Object* mediaDataSource);
};
// }

}}} // ::g::Fuse::Audio
