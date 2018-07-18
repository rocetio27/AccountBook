// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/BudgetPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-5df6c8c5.h>
#include <_root.BudgetPage.h>
#include <_root.BudgetPage.Template3.h>
#include <_root.wbButtonB.h>
#include <_root.wbTextInput.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[5];
static uType* TYPES[3];

namespace g{

// public partial sealed class BudgetPage.Template3 :130
// {
// static Template3() :141
static void BudgetPage__Template3__cctor__fn(uType* __type)
{
    BudgetPage__Template3::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
}

static void BudgetPage__Template3_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("goal_output");
    ::STRINGS[2] = uString::Const("GoalOutputEntryOk");
    ::STRINGS[3] = uString::Const("BudgetPage.ux");
    ::STRINGS[4] = uString::Const("OK");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::BudgetPage_typeof(), offsetof(BudgetPage__Template3, __parent1), uFieldFlagsWeak,
        ::g::BudgetPage_typeof(), offsetof(BudgetPage__Template3, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage__Template3, temp_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(BudgetPage__Template3, temp_eb5), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage__Template3::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BudgetPage__Template3__New2_fn, 0, true, type, 2, ::g::BudgetPage_typeof(), ::g::BudgetPage_typeof()));
}

::g::Uno::UX::Template_type* BudgetPage__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(BudgetPage__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("BudgetPage.Template3", options);
    type->fp_build_ = BudgetPage__Template3_build;
    type->fp_cctor_ = BudgetPage__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))BudgetPage__Template3__New1_fn;
    return type;
}

// public Template3(BudgetPage parent, BudgetPage parentInstance) :134
void BudgetPage__Template3__ctor_1_fn(BudgetPage__Template3* __this, ::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :144
void BudgetPage__Template3__New1_fn(BudgetPage__Template3* __this, uObject** __retval)
{
    uStackFrame __("BudgetPage.Template3", "New()");
    ::g::Fuse::Controls::Grid* __self1 = ::g::Fuse::Controls::Grid::New4();
    ::g::wbTextInput* temp = ::g::wbTextInput::New4();
    __this->temp_Value_inst = ::g::AccountBook_FuseControlsTextInputControl_Value_Property::New1(temp, BudgetPage__Template3::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"goal_output"*/]);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"GoalOutputE...*/]);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp1, 3);
    ::g::wbButtonB* temp4 = ::g::wbButtonB::New6();
    __this->temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    __self1->ColumnCount(6);
    __self1->SourceLineNumber(60);
    __self1->SourceFileName(::STRINGS[3/*"BudgetPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(__self1, 3);
    temp->InputHint(4);
    temp->SourceLineNumber(61);
    temp->SourceFileName(::STRINGS[3/*"BudgetPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp, 5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    temp1->SourceLineNumber(61);
    temp1->SourceFileName(::STRINGS[3/*"BudgetPage.ux"*/]);
    temp4->Text(::STRINGS[4/*"OK"*/]);
    temp4->SourceLineNumber(62);
    temp4->SourceFileName(::STRINGS[3/*"BudgetPage.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp4, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb5)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb5);
    temp2->SourceLineNumber(62);
    temp2->SourceFileName(::STRINGS[3/*"BudgetPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    return *__retval = __self1, void();
}

// public Template3 New(BudgetPage parent, BudgetPage parentInstance) :134
void BudgetPage__Template3__New2_fn(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance, BudgetPage__Template3** __retval)
{
    *__retval = BudgetPage__Template3::New2(parent, parentInstance);
}

::g::Uno::UX::Selector BudgetPage__Template3::__selector0_;

// public Template3(BudgetPage parent, BudgetPage parentInstance) [instance] :134
void BudgetPage__Template3::ctor_1(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template3 New(BudgetPage parent, BudgetPage parentInstance) [static] :134
BudgetPage__Template3* BudgetPage__Template3::New2(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    BudgetPage__Template3* obj1 = (BudgetPage__Template3*)uNew(BudgetPage__Template3_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
