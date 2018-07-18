// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/StatisticPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.StatisticPage.h>
#include <_root.StatisticPage.Template.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[3];
static uType* TYPES[1];

namespace g{

// public partial sealed class StatisticPage.Template :5
// {
// static Template() :15
static void StatisticPage__Template__cctor__fn(uType* __type)
{
    StatisticPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
}

static void StatisticPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("");
    ::STRINGS[2] = uString::Const("StatisticPage.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::StatisticPage_typeof(), offsetof(StatisticPage__Template, __parent1), uFieldFlagsWeak,
        ::g::StatisticPage_typeof(), offsetof(StatisticPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage__Template, __self_Value_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage__Template::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* StatisticPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(StatisticPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("StatisticPage.Template", options);
    type->fp_build_ = StatisticPage__Template_build;
    type->fp_cctor_ = StatisticPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))StatisticPage__Template__New1_fn;
    return type;
}

// public Template(StatisticPage parent, StatisticPage parentInstance) :9
void StatisticPage__Template__ctor_1_fn(StatisticPage__Template* __this, ::g::StatisticPage* parent, ::g::StatisticPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :18
void StatisticPage__Template__New1_fn(StatisticPage__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __this->__self_Value_inst1 = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(__self1, StatisticPage__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*""*/]);
    ::g::Fuse::Reactive::DataBinding* temp1 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp, 3);
    __self1->Alignment(10);
    __self1->SourceLineNumber(121);
    __self1->SourceFileName(::STRINGS[2/*"StatisticPa...*/]);
    temp->SourceLineNumber(121);
    temp->SourceFileName(::STRINGS[2/*"StatisticPa...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template New(StatisticPage parent, StatisticPage parentInstance) :9
void StatisticPage__Template__New2_fn(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance, StatisticPage__Template** __retval)
{
    *__retval = StatisticPage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector StatisticPage__Template::__selector0_;

// public Template(StatisticPage parent, StatisticPage parentInstance) [instance] :9
void StatisticPage__Template::ctor_1(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(StatisticPage parent, StatisticPage parentInstance) [static] :9
StatisticPage__Template* StatisticPage__Template::New2(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance)
{
    StatisticPage__Template* obj1 = (StatisticPage__Template*)uNew(StatisticPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
