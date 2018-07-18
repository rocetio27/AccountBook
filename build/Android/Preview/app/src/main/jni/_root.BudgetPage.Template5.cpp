// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/BudgetPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-6e985db.h>
#include <_root.AccountBook_myB-36d4be4.h>
#include <_root.BudgetPage.h>
#include <_root.BudgetPage.Template5.h>
#include <_root.ListPage.h>
#include <_root.myButton.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
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
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[6];
static uType* TYPES[3];

namespace g{

// public partial sealed class BudgetPage.Template5 :209
// {
// static Template5() :221
static void BudgetPage__Template5__cctor__fn(uType* __type)
{
    BudgetPage__Template5::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Visibility"*/]);
    BudgetPage__Template5::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"text"*/]);
}

static void BudgetPage__Template5_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Visibility");
    ::STRINGS[1] = uString::Const("text");
    ::STRINGS[2] = uString::Const("visibility");
    ::STRINGS[3] = uString::Const("value");
    ::STRINGS[4] = uString::Const("Click_calendar_number");
    ::STRINGS[5] = uString::Const("BudgetPage.ux");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::ListPage_typeof());
    type->SetFields(2,
        ::g::BudgetPage_typeof(), offsetof(BudgetPage__Template5, __parent1), uFieldFlagsWeak,
        ::g::BudgetPage_typeof(), offsetof(BudgetPage__Template5, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(BudgetPage__Template5, __self_Visibility_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BudgetPage__Template5, __self_text_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(BudgetPage__Template5, temp_eb8), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage__Template5::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BudgetPage__Template5::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BudgetPage__Template5__New2_fn, 0, true, type, 2, ::g::BudgetPage_typeof(), ::g::BudgetPage_typeof()));
}

::g::Uno::UX::Template_type* BudgetPage__Template5_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(BudgetPage__Template5);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("BudgetPage.Template5", options);
    type->fp_build_ = BudgetPage__Template5_build;
    type->fp_cctor_ = BudgetPage__Template5__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))BudgetPage__Template5__New1_fn;
    return type;
}

// public Template5(BudgetPage parent, BudgetPage parentInstance) :213
void BudgetPage__Template5__ctor_1_fn(BudgetPage__Template5* __this, ::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :224
void BudgetPage__Template5__New1_fn(BudgetPage__Template5* __this, uObject** __retval)
{
    uStackFrame __("BudgetPage.Template5", "New()");
    ::g::myButton* __self1 = ::g::myButton::New6();
    __this->__self_Visibility_inst1 = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(__self1, BudgetPage__Template5::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"visibility"*/]);
    __this->__self_text_inst1 = ::g::AccountBook_myButton_text_Property::New1(__self1, BudgetPage__Template5::__selector1_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"value"*/]);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"Click_calen...*/]);
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Visibility_inst1, (uObject*)temp, 3);
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_text_inst1, (uObject*)temp1, 3);
    __this->temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    __self1->textcolor(::g::Fuse::Drawing::Colors::Black());
    __self1->fontsize(15);
    __self1->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    __self1->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    __self1->SourceLineNumber(170);
    __self1->SourceFileName(::STRINGS[5/*"BudgetPage.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb8)));
    temp3->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp3->Color(::g::Fuse::Drawing::Colors::White());
    temp3->SourceLineNumber(171);
    temp3->SourceFileName(::STRINGS[5/*"BudgetPage.ux"*/]);
    temp->SourceLineNumber(170);
    temp->SourceFileName(::STRINGS[5/*"BudgetPage.ux"*/]);
    temp1->SourceLineNumber(170);
    temp1->SourceFileName(::STRINGS[5/*"BudgetPage.ux"*/]);
    temp2->SourceLineNumber(170);
    temp2->SourceFileName(::STRINGS[5/*"BudgetPage.ux"*/]);
    __self1->font(::g::ListPage::Bold());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb8);
    return *__retval = __self1, void();
}

// public Template5 New(BudgetPage parent, BudgetPage parentInstance) :213
void BudgetPage__Template5__New2_fn(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance, BudgetPage__Template5** __retval)
{
    *__retval = BudgetPage__Template5::New2(parent, parentInstance);
}

::g::Uno::UX::Selector BudgetPage__Template5::__selector0_;
::g::Uno::UX::Selector BudgetPage__Template5::__selector1_;

// public Template5(BudgetPage parent, BudgetPage parentInstance) [instance] :213
void BudgetPage__Template5::ctor_1(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template5 New(BudgetPage parent, BudgetPage parentInstance) [static] :213
BudgetPage__Template5* BudgetPage__Template5::New2(::g::BudgetPage* parent, ::g::BudgetPage* parentInstance)
{
    BudgetPage__Template5* obj1 = (BudgetPage__Template5*)uNew(BudgetPage__Template5_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
