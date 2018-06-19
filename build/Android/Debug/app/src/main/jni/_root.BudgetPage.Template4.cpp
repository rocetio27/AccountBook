// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/BudgetPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.BudgetPage.h>
#include <_root.BudgetPage.Template4.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];
static uType* TYPES[1];

namespace g{

// public partial sealed class BudgetPage.Template4 :147
// {
// static Template4() :157
static void BudgetPage__Template4__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    BudgetPage__Template4::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void BudgetPage__Template4_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::BudgetPage_typeof(), offsetof(BudgetPage__Template4, __parent1), uFieldFlagsWeak,
        ::g::BudgetPage_typeof(), offsetof(BudgetPage__Template4, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage__Template4, __self_Value_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage__Template4::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* BudgetPage__Template4_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(BudgetPage__Template4);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("BudgetPage.Template4", options);
    type->fp_build_ = BudgetPage__Template4_build;
    type->fp_cctor_ = BudgetPage__Template4__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))BudgetPage__Template4__New1_fn;
    return type;
}

// public Template4(BudgetPage parent, BudgetPage parentInstance) :151
void BudgetPage__Template4__ctor_1_fn(BudgetPage__Template4* __this, ::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :160
void BudgetPage__Template4__New1_fn(BudgetPage__Template4* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __this->__self_Value_inst1 = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(__self1, BudgetPage__Template4::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*""*/]);
    ::g::Fuse::Reactive::DataBinding* temp1 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp, 3);
    __self1->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template4 New(BudgetPage parent, BudgetPage parentInstance) :151
void BudgetPage__Template4__New2_fn(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance, BudgetPage__Template4** __retval)
{
    *__retval = BudgetPage__Template4::New2(parent, parentInstance);
}

::g::Uno::UX::Selector BudgetPage__Template4::__selector0_;

// public Template4(BudgetPage parent, BudgetPage parentInstance) [instance] :151
void BudgetPage__Template4::ctor_1(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template4 New(BudgetPage parent, BudgetPage parentInstance) [static] :151
BudgetPage__Template4* BudgetPage__Template4::New2(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    BudgetPage__Template4* obj1 = (BudgetPage__Template4*)uNew(BudgetPage__Template4_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
