// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/BudgetPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-3cda4468.h>
#include <_root.BudgetPage.h>
#include <_root.BudgetPage.Template.h>
#include <_root.wbButtonB.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[3];
static uType* TYPES[2];

namespace g{

// public partial sealed class BudgetPage.Template :6
// {
// static Template() :17
static void BudgetPage__Template__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    BudgetPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void BudgetPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::STRINGS[1] = uString::Const("title");
    ::STRINGS[2] = uString::Const("ChangeTitleEntryMode");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Fuse::Controls::Grid_typeof());
    type->SetFields(2,
        ::g::BudgetPage_typeof(), offsetof(BudgetPage__Template, __parent1), uFieldFlagsWeak,
        ::g::BudgetPage_typeof(), offsetof(BudgetPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage__Template, __self_Text_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(BudgetPage__Template, temp_eb0), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage__Template::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* BudgetPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(BudgetPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("BudgetPage.Template", options);
    type->fp_build_ = BudgetPage__Template_build;
    type->fp_cctor_ = BudgetPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))BudgetPage__Template__New1_fn;
    return type;
}

// public Template(BudgetPage parent, BudgetPage parentInstance) :10
void BudgetPage__Template__ctor_1_fn(BudgetPage__Template* __this, ::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :20
void BudgetPage__Template__New1_fn(BudgetPage__Template* __this, uObject** __retval)
{
    ::g::wbButtonB* __self1 = ::g::wbButtonB::New6();
    __this->__self_Text_inst1 = ::g::AccountBook_FuseControlsButtonBase_Text_Property::New1(__self1, BudgetPage__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"title"*/]);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"ChangeTitle...*/]);
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Text_inst1, (uObject*)temp, 3);
    __this->temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    ::g::Fuse::Controls::Grid::SetColumnSpan(__self1, 3);
    __self1->textcolor(::g::Fuse::Drawing::Colors::Black_);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb0);
    return *__retval = __self1, void();
}

// public Template New(BudgetPage parent, BudgetPage parentInstance) :10
void BudgetPage__Template__New2_fn(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance, BudgetPage__Template** __retval)
{
    *__retval = BudgetPage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector BudgetPage__Template::__selector0_;

// public Template(BudgetPage parent, BudgetPage parentInstance) [instance] :10
void BudgetPage__Template::ctor_1(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(BudgetPage parent, BudgetPage parentInstance) [static] :10
BudgetPage__Template* BudgetPage__Template::New2(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    BudgetPage__Template* obj1 = (BudgetPage__Template*)uNew(BudgetPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
