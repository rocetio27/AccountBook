// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/BudgetPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-5df6c8c5.h>
#include <_root.BudgetPage.h>
#include <_root.BudgetPage.Template1.h>
#include <_root.wbButtonB.h>
#include <_root.wbTextInput.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.TextInputControl.h>
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
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[4];
static uType* TYPES[3];

namespace g{

// public partial sealed class BudgetPage.Template1 :38
// {
// static Template1() :49
static void BudgetPage__Template1__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    BudgetPage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void BudgetPage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("title");
    ::STRINGS[2] = uString::Const("TitleEntryOk");
    ::STRINGS[3] = uString::Const("OK");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Controls::Grid_typeof());
    type->SetFields(2,
        ::g::BudgetPage_typeof(), offsetof(BudgetPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::BudgetPage_typeof(), offsetof(BudgetPage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage__Template1, temp_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(BudgetPage__Template1, temp_eb1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage__Template1::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* BudgetPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(BudgetPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("BudgetPage.Template1", options);
    type->fp_build_ = BudgetPage__Template1_build;
    type->fp_cctor_ = BudgetPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))BudgetPage__Template1__New1_fn;
    return type;
}

// public Template1(BudgetPage parent, BudgetPage parentInstance) :42
void BudgetPage__Template1__ctor_1_fn(BudgetPage__Template1* __this, ::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :52
void BudgetPage__Template1__New1_fn(BudgetPage__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Grid* __self1 = ::g::Fuse::Controls::Grid::New4();
    ::g::wbTextInput* temp = ::g::wbTextInput::New4();
    __this->temp_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp, BudgetPage__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"title"*/]);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"TitleEntryOk"*/]);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp1, 3);
    ::g::wbButtonB* temp4 = ::g::wbButtonB::New6();
    __this->temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    __self1->ColumnCount(6);
    ::g::Fuse::Controls::Grid::SetColumnSpan(__self1, 3);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp, 5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    temp4->Text(::STRINGS[3/*"OK"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp4, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    return *__retval = __self1, void();
}

// public Template1 New(BudgetPage parent, BudgetPage parentInstance) :42
void BudgetPage__Template1__New2_fn(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance, BudgetPage__Template1** __retval)
{
    *__retval = BudgetPage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector BudgetPage__Template1::__selector0_;

// public Template1(BudgetPage parent, BudgetPage parentInstance) [instance] :42
void BudgetPage__Template1::ctor_1(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(BudgetPage parent, BudgetPage parentInstance) [static] :42
BudgetPage__Template1* BudgetPage__Template1::New2(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    BudgetPage__Template1* obj1 = (BudgetPage__Template1*)uNew(BudgetPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
