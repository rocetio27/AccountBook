// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template4.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Removin-3934475f.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{

// public partial sealed class MainView.Template4 :657
// {
// static Template4() :666
static void MainView__Template4__cctor__fn(uType* __type)
{
}

static void MainView__Template4_build(uType* type)
{
    ::STRINGS[0] = uString::Const("MainView.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::TranslationModes_typeof());
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template4, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template4, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template4__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template4_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(MainView__Template4);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template4", options);
    type->fp_build_ = MainView__Template4_build;
    type->fp_cctor_ = MainView__Template4__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template4__New1_fn;
    return type;
}

// public Template4(MainView parent, MainView parentInstance) :661
void MainView__Template4__ctor_1_fn(MainView__Template4* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :669
void MainView__Template4__New1_fn(MainView__Template4* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template4", "New()");
    ::g::Fuse::Triggers::RemovingAnimation* __self1 = ::g::Fuse::Triggers::RemovingAnimation::New2();
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    __self1->SourceLineNumber(225);
    __self1->SourceFileName(::STRINGS[0/*"MainView.ux"*/]);
    temp->X(-1.0f);
    temp->Duration(0.4);
    temp->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp->Easing(::g::Fuse::Animations::Easing::CircularOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
    return *__retval = __self1, void();
}

// public Template4 New(MainView parent, MainView parentInstance) :661
void MainView__Template4__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template4** __retval)
{
    *__retval = MainView__Template4::New2(parent, parentInstance);
}

// public Template4(MainView parent, MainView parentInstance) [instance] :661
void MainView__Template4::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template4 New(MainView parent, MainView parentInstance) [static] :661
MainView__Template4* MainView__Template4::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template4* obj1 = (MainView__Template4*)uNew(MainView__Template4_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
