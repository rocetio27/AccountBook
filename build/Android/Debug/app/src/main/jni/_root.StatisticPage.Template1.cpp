// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/StatisticPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_myB-36d4be4.h>
#include <_root.ListPage.h>
#include <_root.myButton.h>
#include <_root.StatisticPage.h>
#include <_root.StatisticPage.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Element.h>
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
static uString* STRINGS[4];
static uType* TYPES[3];

namespace g{

// public partial sealed class StatisticPage.Template1 :35
// {
// static Template1() :46
static void StatisticPage__Template1__cctor__fn(uType* __type)
{
    StatisticPage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"text"*/]);
}

static void StatisticPage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("text");
    ::STRINGS[1] = uString::Const("value");
    ::STRINGS[2] = uString::Const("Click_calendar_number");
    ::STRINGS[3] = uString::Const("StatisticPage.ux");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::ListPage_typeof());
    type->SetFields(2,
        ::g::StatisticPage_typeof(), offsetof(StatisticPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::StatisticPage_typeof(), offsetof(StatisticPage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatisticPage__Template1, __self_text_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(StatisticPage__Template1, temp_eb53), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatisticPage__Template1::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* StatisticPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(StatisticPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("StatisticPage.Template1", options);
    type->fp_build_ = StatisticPage__Template1_build;
    type->fp_cctor_ = StatisticPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))StatisticPage__Template1__New1_fn;
    return type;
}

// public Template1(StatisticPage parent, StatisticPage parentInstance) :39
void StatisticPage__Template1__ctor_1_fn(StatisticPage__Template1* __this, ::g::StatisticPage* parent, ::g::StatisticPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :49
void StatisticPage__Template1__New1_fn(StatisticPage__Template1* __this, uObject** __retval)
{
    ::g::myButton* __self1 = ::g::myButton::New6();
    __this->__self_text_inst1 = ::g::AccountBook_myButton_text_Property::New1(__self1, StatisticPage__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"value"*/]);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"Click_calen...*/]);
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_text_inst1, (uObject*)temp, 3);
    __this->temp_eb53 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    __self1->textcolor(::g::Fuse::Drawing::Colors::Black());
    __self1->fontsize(15);
    __self1->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    __self1->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    __self1->SourceLineNumber(124);
    __self1->SourceFileName(::STRINGS[3/*"StatisticPa...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb53)));
    temp2->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp2->Color(::g::Fuse::Drawing::Colors::White());
    temp2->SourceLineNumber(125);
    temp2->SourceFileName(::STRINGS[3/*"StatisticPa...*/]);
    temp->SourceLineNumber(124);
    temp->SourceFileName(::STRINGS[3/*"StatisticPa...*/]);
    temp1->SourceLineNumber(124);
    temp1->SourceFileName(::STRINGS[3/*"StatisticPa...*/]);
    __self1->font(::g::ListPage::Bold());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb53);
    return *__retval = __self1, void();
}

// public Template1 New(StatisticPage parent, StatisticPage parentInstance) :39
void StatisticPage__Template1__New2_fn(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance, StatisticPage__Template1** __retval)
{
    *__retval = StatisticPage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector StatisticPage__Template1::__selector0_;

// public Template1(StatisticPage parent, StatisticPage parentInstance) [instance] :39
void StatisticPage__Template1::ctor_1(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(StatisticPage parent, StatisticPage parentInstance) [static] :39
StatisticPage__Template1* StatisticPage__Template1::New2(::g::StatisticPage* parent, ::g::StatisticPage* parentInstance)
{
    StatisticPage__Template1* obj1 = (StatisticPage__Template1*)uNew(StatisticPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
