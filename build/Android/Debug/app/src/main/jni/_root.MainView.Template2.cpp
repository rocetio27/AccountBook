// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template2.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uType* TYPES[1];

namespace g{

// public partial sealed class MainView.Template2 :417
// {
// static Template2() :426
static void MainView__Template2__cctor__fn(uType* __type)
{
}

static void MainView__Template2_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Triggers::LayoutTransition_typeof());
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template2, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template2, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* MainView__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(MainView__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template2", options);
    type->fp_build_ = MainView__Template2_build;
    type->fp_cctor_ = MainView__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template2__New1_fn;
    return type;
}

// public Template2(MainView parent, MainView parentInstance) :421
void MainView__Template2__ctor_1_fn(MainView__Template2* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :429
void MainView__Template2__New1_fn(MainView__Template2* __this, uObject** __retval)
{
    ::g::Fuse::Triggers::LayoutAnimation* __self1 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    temp->Y(1.0f);
    temp->Duration(0.4);
    temp->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_);
    temp->Easing(::g::Fuse::Animations::Easing::ElasticIn_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
    return *__retval = __self1, void();
}

// public Template2 New(MainView parent, MainView parentInstance) :421
void MainView__Template2__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template2** __retval)
{
    *__retval = MainView__Template2::New2(parent, parentInstance);
}

// public Template2(MainView parent, MainView parentInstance) [instance] :421
void MainView__Template2::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(MainView parent, MainView parentInstance) [static] :421
MainView__Template2* MainView__Template2::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template2* obj1 = (MainView__Template2*)uNew(MainView__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
