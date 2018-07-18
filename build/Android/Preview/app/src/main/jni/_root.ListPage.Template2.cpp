// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_day-96e90464.h>
#include <_root.AccountBook_Fus-6e985db.h>
#include <_root.AccountBook_Fus-7ed8148.h>
#include <_root.dayButton.h>
#include <_root.ListPage.h>
#include <_root.ListPage.Templa-2580276.h>
#include <_root.ListPage.Templa-d512bb6f.h>
#include <_root.ListPage.Template2.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
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

namespace g{

// public partial sealed class ListPage.Template2 :57
// {
// static Template2() :494
static void ListPage__Template2__cctor__fn(uType* __type)
{
    ListPage__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Visibility"));
    ListPage__Template2::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("text"));
    ListPage__Template2::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
}

static void ListPage__Template2_build(uType* type)
{
    type->SetFields(2,
        ::g::ListPage_typeof(), offsetof(ListPage__Template2, __parent1), uFieldFlagsWeak,
        ::g::ListPage_typeof(), offsetof(ListPage__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(ListPage__Template2, temp_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage__Template2, temp_text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(ListPage__Template2, temp1_Items_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage__Template2, temp_eb22), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ListPage__Template2__New2_fn, 0, true, type, 2, ::g::ListPage_typeof(), ::g::ListPage_typeof()));
}

::g::Uno::UX::Template_type* ListPage__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(ListPage__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ListPage.Template2", options);
    type->fp_build_ = ListPage__Template2_build;
    type->fp_cctor_ = ListPage__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ListPage__Template2__New1_fn;
    return type;
}

// public Template2(ListPage parent, ListPage parentInstance) :61
void ListPage__Template2__ctor_1_fn(ListPage__Template2* __this, ::g::ListPage* parent, ::g::ListPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :497
void ListPage__Template2__New1_fn(ListPage__Template2* __this, uObject** __retval)
{
    uStackFrame __("ListPage.Template2", "New()");
    ::g::Fuse::Controls::Rectangle* __self1 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::dayButton* temp = ::g::dayButton::New6();
    __this->temp_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(temp, ListPage__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(uString::Const("day_visibility"));
    uString* temp3 = uString::Const("DAY ");
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(temp3);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(uString::Const("day"));
    __this->temp_text_inst = ::g::AccountBook_dayButton_text_Property::New1(temp, ListPage__Template2::__selector1_);
    ::g::Fuse::Reactive::Add* temp6 = ::g::Fuse::Reactive::Add::New1(temp4, temp5);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(uString::Const("ClickDay"));
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    __this->temp1_Items_inst = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(temp1, ListPage__Template2::__selector2_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(uString::Const("histOfTheDay"));
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Visibility_inst, (uObject*)temp2, 3);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_text_inst, (uObject*)temp6, 3);
    __this->temp_eb22 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7);
    ListPage__Template2__Template3* grid = ListPage__Template2__Template3::New2(__this, __self1);
    ListPage__Template2__Template4* temp12 = ListPage__Template2__Template4::New2(__this, __self1);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Items_inst, (uObject*)temp8, 3);
    __self1->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    __self1->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    __self1->SourceLineNumber(83);
    __self1->SourceFileName(uString::Const("ListPage.ux"));
    temp9->Padding(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp9->SourceLineNumber(84);
    temp9->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    temp->textcolor(::g::Uno::Float4__New2(0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    temp->fontsize(12);
    temp->Alignment(10);
    temp->SourceLineNumber(85);
    temp->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb22)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), __this->temp_eb22);
    temp2->SourceLineNumber(85);
    temp2->SourceFileName(uString::Const("ListPage.ux"));
    temp6->SourceLineNumber(85);
    temp6->SourceFileName(uString::Const("ListPage.ux"));
    temp4->SourceLineNumber(85);
    temp4->SourceFileName(uString::Const("ListPage.ux"));
    temp5->SourceLineNumber(85);
    temp5->SourceFileName(uString::Const("ListPage.ux"));
    temp7->SourceLineNumber(85);
    temp7->SourceFileName(uString::Const("ListPage.ux"));
    temp1->SourceLineNumber(86);
    temp1->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), grid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp13);
    temp8->SourceLineNumber(86);
    temp8->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    return *__retval = __self1, void();
}

// public Template2 New(ListPage parent, ListPage parentInstance) :61
void ListPage__Template2__New2_fn(::g::ListPage* parent, ::g::ListPage* parentInstance, ListPage__Template2** __retval)
{
    *__retval = ListPage__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ListPage__Template2::__selector0_;
::g::Uno::UX::Selector ListPage__Template2::__selector1_;
::g::Uno::UX::Selector ListPage__Template2::__selector2_;

// public Template2(ListPage parent, ListPage parentInstance) [instance] :61
void ListPage__Template2::ctor_1(::g::ListPage* parent, ::g::ListPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(ListPage parent, ListPage parentInstance) [static] :61
ListPage__Template2* ListPage__Template2::New2(::g::ListPage* parent, ::g::ListPage* parentInstance)
{
    ListPage__Template2* obj1 = (ListPage__Template2*)uNew(ListPage__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
