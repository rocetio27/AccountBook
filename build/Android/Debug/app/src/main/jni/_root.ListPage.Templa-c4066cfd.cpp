// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-7ed8148.h>
#include <_root.ListPage.Templa-965e4ea5.h>
#include <_root.ListPage.Templa-ae67f0d4.h>
#include <_root.ListPage.Templa-c4066cfd.h>
#include <_root.ListPage.Templa-d512bb6f.h>
#include <_root.ListPage.Templa-f0e8dcb3.h>
#include <_root.ListPage.Templa-f3b6da0a.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>

namespace g{

// public partial sealed class ListPage.Template2.Template3.Template4 :71
// {
// static Template4() :265
static void ListPage__Template2__Template3__Template4__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ListPage__Template2__Template3__Template4::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
}

static void ListPage__Template2__Template3__Template4_build(uType* type)
{
    type->SetFields(2,
        ::g::ListPage__Template2__Template3_typeof(), offsetof(ListPage__Template2__Template3__Template4, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(ListPage__Template2__Template3__Template4, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(ListPage__Template2__Template3__Template4, __self_Items_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2__Template3__Template4::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* ListPage__Template2__Template3__Template4_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ListPage__Template2__Template3__Template4);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ListPage.Template2.Template3.Template4", options);
    type->fp_build_ = ListPage__Template2__Template3__Template4_build;
    type->fp_cctor_ = ListPage__Template2__Template3__Template4__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ListPage__Template2__Template3__Template4__New1_fn;
    return type;
}

// public Template4(ListPage.Template2.Template3 parent, Fuse.Controls.Grid parentInstance) :75
void ListPage__Template2__Template3__Template4__ctor_1_fn(ListPage__Template2__Template3__Template4* __this, ::g::ListPage__Template2__Template3* parent, ::g::Fuse::Controls::Grid* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :268
void ListPage__Template2__Template3__Template4__New1_fn(ListPage__Template2__Template3__Template4* __this, uObject** __retval)
{
    ::g::Fuse::Reactive::Each* __self1 = ::g::Fuse::Reactive::Each::New4();
    __this->__self_Items_inst1 = ::g::AccountBook_FuseReactiveEach_Items_Property::New1(__self1, ListPage__Template2__Template3__Template4::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(uString::Const("normal"));
    ListPage__Template2__Template3__Template4__Template5* temp1 = ListPage__Template2__Template3__Template4__Template5::New2(__this, __self1);
    ListPage__Template2__Template3__Template4__Template6* temp2 = ListPage__Template2__Template3__Template4__Template6::New2(__this, __self1);
    ListPage__Template2__Template3__Template4__Template7* temp3 = ListPage__Template2__Template3__Template4__Template7::New2(__this, __self1);
    ListPage__Template2__Template3__Template4__Template8* temp4 = ListPage__Template2__Template3__Template4__Template8::New2(__this, __self1);
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Items_inst1, (uObject*)temp, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp5);
    return *__retval = __self1, void();
}

// public Template4 New(ListPage.Template2.Template3 parent, Fuse.Controls.Grid parentInstance) :75
void ListPage__Template2__Template3__Template4__New2_fn(::g::ListPage__Template2__Template3* parent, ::g::Fuse::Controls::Grid* parentInstance, ListPage__Template2__Template3__Template4** __retval)
{
    *__retval = ListPage__Template2__Template3__Template4::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ListPage__Template2__Template3__Template4::__selector0_;

// public Template4(ListPage.Template2.Template3 parent, Fuse.Controls.Grid parentInstance) [instance] :75
void ListPage__Template2__Template3__Template4::ctor_1(::g::ListPage__Template2__Template3* parent, ::g::Fuse::Controls::Grid* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template4 New(ListPage.Template2.Template3 parent, Fuse.Controls.Grid parentInstance) [static] :75
ListPage__Template2__Template3__Template4* ListPage__Template2__Template3__Template4::New2(::g::ListPage__Template2__Template3* parent, ::g::Fuse::Controls::Grid* parentInstance)
{
    ListPage__Template2__Template3__Template4* obj1 = (ListPage__Template2__Template3__Template4*)uNew(ListPage__Template2__Template3__Template4_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
