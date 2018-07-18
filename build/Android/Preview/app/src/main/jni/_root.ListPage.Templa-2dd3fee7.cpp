// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.AccountBook_Fus-6e985db.h>
#include <_root.ListPage.Templa-2580276.h>
#include <_root.ListPage.Templa-2dd3fee7.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
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
static uType* TYPES[2];

namespace g{

// public partial sealed class ListPage.Template2.Template4.Template5 :427
// {
// static Template5() :438
static void ListPage__Template2__Template4__Template5__cctor__fn(uType* __type)
{
    ListPage__Template2__Template4__Template5::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Visibility"*/]);
    ListPage__Template2__Template4__Template5::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Value"*/]);
}

static void ListPage__Template2__Template4__Template5_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Visibility");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("attb_visibility");
    ::STRINGS[3] = uString::Const("attb");
    ::STRINGS[4] = uString::Const("ListPage.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::ListPage__Template2__Template4_typeof(), offsetof(ListPage__Template2__Template4__Template5, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Reactive::Each_typeof(), offsetof(ListPage__Template2__Template4__Template5, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(ListPage__Template2__Template4__Template5, temp_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage__Template2__Template4__Template5, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2__Template4__Template5::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2__Template4__Template5::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ListPage__Template2__Template4__Template5__New2_fn, 0, true, type, 2, ::g::ListPage__Template2__Template4_typeof(), ::g::Fuse::Reactive::Each_typeof()));
}

::g::Uno::UX::Template_type* ListPage__Template2__Template4__Template5_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ListPage__Template2__Template4__Template5);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ListPage.Template2.Template4.Template5", options);
    type->fp_build_ = ListPage__Template2__Template4__Template5_build;
    type->fp_cctor_ = ListPage__Template2__Template4__Template5__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ListPage__Template2__Template4__Template5__New1_fn;
    return type;
}

// public Template5(ListPage.Template2.Template4 parent, Fuse.Reactive.Each parentInstance) :431
void ListPage__Template2__Template4__Template5__ctor_1_fn(ListPage__Template2__Template4__Template5* __this, ::g::ListPage__Template2__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :441
void ListPage__Template2__Template4__Template5__New1_fn(ListPage__Template2__Template4__Template5* __this, uObject** __retval)
{
    uStackFrame __("ListPage.Template2.Template4.Template5", "New()");
    ::g::Fuse::Controls::Grid* __self1 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Visibility_inst = ::g::AccountBook_FuseElementsElement_Visibility_Property::New1(temp, ListPage__Template2__Template4__Template5::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"attb_visibi...*/]);
    __this->temp_Value_inst = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(temp, ListPage__Template2__Template4__Template5::__selector1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"attb"*/]);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Visibility_inst, (uObject*)temp1, 3);
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp2, 3);
    __self1->ColumnCount(3);
    __self1->SourceLineNumber(115);
    __self1->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    temp->Alignment(10);
    temp->SourceLineNumber(116);
    temp->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    temp1->SourceLineNumber(116);
    temp1->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    temp2->SourceLineNumber(116);
    temp2->SourceFileName(::STRINGS[4/*"ListPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    return *__retval = __self1, void();
}

// public Template5 New(ListPage.Template2.Template4 parent, Fuse.Reactive.Each parentInstance) :431
void ListPage__Template2__Template4__Template5__New2_fn(::g::ListPage__Template2__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance, ListPage__Template2__Template4__Template5** __retval)
{
    *__retval = ListPage__Template2__Template4__Template5::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ListPage__Template2__Template4__Template5::__selector0_;
::g::Uno::UX::Selector ListPage__Template2__Template4__Template5::__selector1_;

// public Template5(ListPage.Template2.Template4 parent, Fuse.Reactive.Each parentInstance) [instance] :431
void ListPage__Template2__Template4__Template5::ctor_1(::g::ListPage__Template2__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template5 New(ListPage.Template2.Template4 parent, Fuse.Reactive.Each parentInstance) [static] :431
ListPage__Template2__Template4__Template5* ListPage__Template2__Template4__Template5::New2(::g::ListPage__Template2__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    ListPage__Template2__Template4__Template5* obj1 = (ListPage__Template2__Template4__Template5*)uNew(ListPage__Template2__Template4__Template5_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
