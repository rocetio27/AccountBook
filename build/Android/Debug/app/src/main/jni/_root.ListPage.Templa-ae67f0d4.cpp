// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux15/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-3a6a4ff1.h>
#include <_root.ListPage.Templa-58e0853.h>
#include <_root.ListPage.Templa-a8357cee.h>
#include <_root.ListPage.Templa-ae67f0d4.h>
#include <_root.ListPage.Templa-c4066cfd.h>
#include <Fuse.Binding.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Match.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>

namespace g{

// public partial sealed class ListPage.Template2.Template3.Template4.Template5 :86
// {
// static Template5() :165
static void ListPage__Template2__Template3__Template4__Template5__cctor__fn(uType* __type)
{
    ListPage__Template2__Template3__Template4__Template5::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
}

static void ListPage__Template2__Template3__Template4__Template5_build(uType* type)
{
    type->SetFields(2,
        ::g::ListPage__Template2__Template3__Template4_typeof(), offsetof(ListPage__Template2__Template3__Template4__Template5, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Reactive::Each_typeof(), offsetof(ListPage__Template2__Template3__Template4__Template5, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(ListPage__Template2__Template3__Template4__Template5, __self_Value_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2__Template3__Template4__Template5::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* ListPage__Template2__Template3__Template4__Template5_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ListPage__Template2__Template3__Template4__Template5);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ListPage.Template2.Template3.Template4.Template5", options);
    type->fp_build_ = ListPage__Template2__Template3__Template4__Template5_build;
    type->fp_cctor_ = ListPage__Template2__Template3__Template4__Template5__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ListPage__Template2__Template3__Template4__Template5__New1_fn;
    return type;
}

// public Template5(ListPage.Template2.Template3.Template4 parent, Fuse.Reactive.Each parentInstance) :90
void ListPage__Template2__Template3__Template4__Template5__ctor_1_fn(ListPage__Template2__Template3__Template4__Template5* __this, ::g::ListPage__Template2__Template3__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :168
void ListPage__Template2__Template3__Template4__Template5__New1_fn(ListPage__Template2__Template3__Template4__Template5* __this, uObject** __retval)
{
    ::g::Fuse::Reactive::Match* __self1 = ::g::Fuse::Reactive::Match::New2();
    __this->__self_Value_inst1 = ::g::AccountBook_FuseReactiveMatch_Value_Property::New1(__self1, ListPage__Template2__Template3__Template4__Template5::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(uString::Const("pmType"));
    ::g::Fuse::Reactive::Case* temp1 = ::g::Fuse::Reactive::Case::New1();
    ListPage__Template2__Template3__Template4__Template5__Template6* temp2 = ListPage__Template2__Template3__Template4__Template5__Template6::New2(__this, __self1);
    ::g::Fuse::Reactive::Case* temp3 = ::g::Fuse::Reactive::Case::New1();
    ListPage__Template2__Template3__Template4__Template5__Template7* temp4 = ListPage__Template2__Template3__Template4__Template5__Template7::New2(__this, __self1);
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp, 3);
    __self1->SourceLineNumber(99);
    __self1->SourceFileName(uString::Const("ListPage.ux"));
    temp1->String(uString::Const("+"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp2);
    temp3->String(uString::Const("-"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp4);
    temp->SourceLineNumber(99);
    temp->SourceFileName(uString::Const("ListPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Cases()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Cases()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL)), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp5);
    return *__retval = __self1, void();
}

// public Template5 New(ListPage.Template2.Template3.Template4 parent, Fuse.Reactive.Each parentInstance) :90
void ListPage__Template2__Template3__Template4__Template5__New2_fn(::g::ListPage__Template2__Template3__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance, ListPage__Template2__Template3__Template4__Template5** __retval)
{
    *__retval = ListPage__Template2__Template3__Template4__Template5::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ListPage__Template2__Template3__Template4__Template5::__selector0_;

// public Template5(ListPage.Template2.Template3.Template4 parent, Fuse.Reactive.Each parentInstance) [instance] :90
void ListPage__Template2__Template3__Template4__Template5::ctor_1(::g::ListPage__Template2__Template3__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template5 New(ListPage.Template2.Template3.Template4 parent, Fuse.Reactive.Each parentInstance) [static] :90
ListPage__Template2__Template3__Template4__Template5* ListPage__Template2__Template3__Template4__Template5::New2(::g::ListPage__Template2__Template3__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    ListPage__Template2__Template3__Template4__Template5* obj1 = (ListPage__Template2__Template3__Template4__Template5*)uNew(ListPage__Template2__Template3__Template4__Template5_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
