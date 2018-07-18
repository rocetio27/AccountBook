// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.ListPage.Templa-c4066cfd.h>
#include <_root.ListPage.Templa-f3b6da0a.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[3];
static uType* TYPES[1];

namespace g{

// public partial sealed class ListPage.Template2.Template3.Template4.Template7 :226
// {
// static Template7() :236
static void ListPage__Template2__Template3__Template4__Template7__cctor__fn(uType* __type)
{
    ListPage__Template2__Template3__Template4__Template7::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
}

static void ListPage__Template2__Template3__Template4__Template7_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("data_time");
    ::STRINGS[2] = uString::Const("ListPage.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof());
    type->SetFields(2,
        ::g::ListPage__Template2__Template3__Template4_typeof(), offsetof(ListPage__Template2__Template3__Template4__Template7, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Reactive::Each_typeof(), offsetof(ListPage__Template2__Template3__Template4__Template7, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage__Template2__Template3__Template4__Template7, __self_Value_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2__Template3__Template4__Template7::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ListPage__Template2__Template3__Template4__Template7__New2_fn, 0, true, type, 2, ::g::ListPage__Template2__Template3__Template4_typeof(), ::g::Fuse::Reactive::Each_typeof()));
}

::g::Uno::UX::Template_type* ListPage__Template2__Template3__Template4__Template7_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ListPage__Template2__Template3__Template4__Template7);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ListPage.Template2.Template3.Template4.Template7", options);
    type->fp_build_ = ListPage__Template2__Template3__Template4__Template7_build;
    type->fp_cctor_ = ListPage__Template2__Template3__Template4__Template7__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ListPage__Template2__Template3__Template4__Template7__New1_fn;
    return type;
}

// public Template7(ListPage.Template2.Template3.Template4 parent, Fuse.Reactive.Each parentInstance) :230
void ListPage__Template2__Template3__Template4__Template7__ctor_1_fn(ListPage__Template2__Template3__Template4__Template7* __this, ::g::ListPage__Template2__Template3__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :239
void ListPage__Template2__Template3__Template4__Template7__New1_fn(ListPage__Template2__Template3__Template4__Template7* __this, uObject** __retval)
{
    uStackFrame __("ListPage.Template2.Template3.Template4.Template7", "New()");
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __this->__self_Value_inst1 = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(__self1, ListPage__Template2__Template3__Template4__Template7::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"data_time"*/]);
    ::g::Fuse::Reactive::DataBinding* temp1 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp, 3);
    __self1->Color(::g::Fuse::Drawing::Colors::Black());
    __self1->Alignment(10);
    __self1->SourceLineNumber(109);
    __self1->SourceFileName(::STRINGS[2/*"ListPage.ux"*/]);
    temp->SourceLineNumber(109);
    temp->SourceFileName(::STRINGS[2/*"ListPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template7 New(ListPage.Template2.Template3.Template4 parent, Fuse.Reactive.Each parentInstance) :230
void ListPage__Template2__Template3__Template4__Template7__New2_fn(::g::ListPage__Template2__Template3__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance, ListPage__Template2__Template3__Template4__Template7** __retval)
{
    *__retval = ListPage__Template2__Template3__Template4__Template7::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ListPage__Template2__Template3__Template4__Template7::__selector0_;

// public Template7(ListPage.Template2.Template3.Template4 parent, Fuse.Reactive.Each parentInstance) [instance] :230
void ListPage__Template2__Template3__Template4__Template7::ctor_1(::g::ListPage__Template2__Template3__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template7 New(ListPage.Template2.Template3.Template4 parent, Fuse.Reactive.Each parentInstance) [static] :230
ListPage__Template2__Template3__Template4__Template7* ListPage__Template2__Template3__Template4__Template7::New2(::g::ListPage__Template2__Template3__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    ListPage__Template2__Template3__Template4__Template7* obj1 = (ListPage__Template2__Template3__Template4__Template7*)uNew(ListPage__Template2__Template3__Template4__Template7_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
