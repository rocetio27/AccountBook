// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_Fus-3a22a8bb.h>
#include <_root.AccountBook_Fus-77da25d.h>
#include <_root.ListPage.Templa-c4066cfd.h>
#include <_root.ListPage.Templa-f0e8dcb3.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[6];
static uType* TYPES[1];

namespace g{

// public partial sealed class ListPage.Template2.Template3.Template4.Template8 :257
// {
// static Template8() :268
static void ListPage__Template2__Template3__Template4__Template8__cctor__fn(uType* __type)
{
    ListPage__Template2__Template3__Template4__Template8::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
    ListPage__Template2__Template3__Template4__Template8::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Color"*/]);
}

static void ListPage__Template2__Template3__Template4__Template8_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("group:");
    ::STRINGS[3] = uString::Const("group_id");
    ::STRINGS[4] = uString::Const("group_color");
    ::STRINGS[5] = uString::Const("ListPage.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::ListPage__Template2__Template3__Template4_typeof(), offsetof(ListPage__Template2__Template3__Template4__Template8, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Reactive::Each_typeof(), offsetof(ListPage__Template2__Template3__Template4__Template8, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListPage__Template2__Template3__Template4__Template8, __self_Value_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ListPage__Template2__Template3__Template4__Template8, __self_Color_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2__Template3__Template4__Template8::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListPage__Template2__Template3__Template4__Template8::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ListPage__Template2__Template3__Template4__Template8__New2_fn, 0, true, type, 2, ::g::ListPage__Template2__Template3__Template4_typeof(), ::g::Fuse::Reactive::Each_typeof()));
}

::g::Uno::UX::Template_type* ListPage__Template2__Template3__Template4__Template8_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ListPage__Template2__Template3__Template4__Template8);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ListPage.Template2.Template3.Template4.Template8", options);
    type->fp_build_ = ListPage__Template2__Template3__Template4__Template8_build;
    type->fp_cctor_ = ListPage__Template2__Template3__Template4__Template8__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ListPage__Template2__Template3__Template4__Template8__New1_fn;
    return type;
}

// public Template8(ListPage.Template2.Template3.Template4 parent, Fuse.Reactive.Each parentInstance) :261
void ListPage__Template2__Template3__Template4__Template8__ctor_1_fn(ListPage__Template2__Template3__Template4__Template8* __this, ::g::ListPage__Template2__Template3__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :271
void ListPage__Template2__Template3__Template4__Template8__New1_fn(ListPage__Template2__Template3__Template4__Template8* __this, uObject** __retval)
{
    uStackFrame __("ListPage.Template2.Template3.Template4.Template8", "New()");
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    uString* temp = ::STRINGS[2/*"group:"*/];
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(temp);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"group_id"*/]);
    __this->__self_Value_inst1 = ::g::AccountBook_FuseControlsTextControl_Value_Property::New1(__self1, ListPage__Template2__Template3__Template4__Template8::__selector0_);
    ::g::Fuse::Reactive::Add* temp3 = ::g::Fuse::Reactive::Add::New1(temp1, temp2);
    __this->__self_Color_inst1 = ::g::AccountBook_FuseControlsTextControl_Color_Property::New1(__self1, ListPage__Template2__Template3__Template4__Template8::__selector1_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"group_color"*/]);
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp3, 3);
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Color_inst1, (uObject*)temp4, 3);
    __self1->Alignment(10);
    __self1->Opacity(0.2f);
    __self1->SourceLineNumber(110);
    __self1->SourceFileName(::STRINGS[5/*"ListPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRow(__self1, 1);
    ::g::Fuse::Controls::Grid::SetColumnSpan(__self1, 3);
    temp3->SourceLineNumber(110);
    temp3->SourceFileName(::STRINGS[5/*"ListPage.ux"*/]);
    temp1->SourceLineNumber(110);
    temp1->SourceFileName(::STRINGS[5/*"ListPage.ux"*/]);
    temp2->SourceLineNumber(110);
    temp2->SourceFileName(::STRINGS[5/*"ListPage.ux"*/]);
    temp4->SourceLineNumber(110);
    temp4->SourceFileName(::STRINGS[5/*"ListPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    return *__retval = __self1, void();
}

// public Template8 New(ListPage.Template2.Template3.Template4 parent, Fuse.Reactive.Each parentInstance) :261
void ListPage__Template2__Template3__Template4__Template8__New2_fn(::g::ListPage__Template2__Template3__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance, ListPage__Template2__Template3__Template4__Template8** __retval)
{
    *__retval = ListPage__Template2__Template3__Template4__Template8::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ListPage__Template2__Template3__Template4__Template8::__selector0_;
::g::Uno::UX::Selector ListPage__Template2__Template3__Template4__Template8::__selector1_;

// public Template8(ListPage.Template2.Template3.Template4 parent, Fuse.Reactive.Each parentInstance) [instance] :261
void ListPage__Template2__Template3__Template4__Template8::ctor_1(::g::ListPage__Template2__Template3__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template8 New(ListPage.Template2.Template3.Template4 parent, Fuse.Reactive.Each parentInstance) [static] :261
ListPage__Template2__Template3__Template4__Template8* ListPage__Template2__Template3__Template4__Template8::New2(::g::ListPage__Template2__Template3__Template4* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    ListPage__Template2__Template3__Template4__Template8* obj1 = (ListPage__Template2__Template3__Template4__Template8*)uNew(ListPage__Template2__Template3__Template4__Template8_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
