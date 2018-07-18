// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ListPage.h>
#include <_root.ListPage.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Data.h>
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
static uString* STRINGS[3];
static uType* TYPES[2];

namespace g{

// public partial sealed class ListPage.Template1 :28
// {
// static Template1() :38
static void ListPage__Template1__cctor__fn(uType* __type)
{
}

static void ListPage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("GroupingConfirm");
    ::STRINGS[1] = uString::Const("OK");
    ::STRINGS[2] = uString::Const("ListPage.ux");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::ListPage_typeof(), offsetof(ListPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::ListPage_typeof(), offsetof(ListPage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListPage__Template1, temp_eb21), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ListPage__Template1__New2_fn, 0, true, type, 2, ::g::ListPage_typeof(), ::g::ListPage_typeof()));
}

::g::Uno::UX::Template_type* ListPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ListPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ListPage.Template1", options);
    type->fp_build_ = ListPage__Template1_build;
    type->fp_cctor_ = ListPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ListPage__Template1__New1_fn;
    return type;
}

// public Template1(ListPage parent, ListPage parentInstance) :32
void ListPage__Template1__ctor_1_fn(ListPage__Template1* __this, ::g::ListPage* parent, ::g::ListPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :41
void ListPage__Template1__New1_fn(ListPage__Template1* __this, uObject** __retval)
{
    uStackFrame __("ListPage.Template1", "New()");
    ::g::Fuse::Controls::Button* __self1 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[0/*"GroupingCon...*/]);
    __this->temp_eb21 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp);
    __self1->Text(::STRINGS[1/*"OK"*/]);
    __self1->SourceLineNumber(77);
    __self1->SourceFileName(::STRINGS[2/*"ListPage.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb21)));
    temp->SourceLineNumber(77);
    temp->SourceFileName(::STRINGS[2/*"ListPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb21);
    return *__retval = __self1, void();
}

// public Template1 New(ListPage parent, ListPage parentInstance) :32
void ListPage__Template1__New2_fn(::g::ListPage* parent, ::g::ListPage* parentInstance, ListPage__Template1** __retval)
{
    *__retval = ListPage__Template1::New2(parent, parentInstance);
}

// public Template1(ListPage parent, ListPage parentInstance) [instance] :32
void ListPage__Template1::ctor_1(::g::ListPage* parent, ::g::ListPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(ListPage parent, ListPage parentInstance) [static] :32
ListPage__Template1* ListPage__Template1::New2(::g::ListPage* parent, ::g::ListPage* parentInstance)
{
    ListPage__Template1* obj1 = (ListPage__Template1*)uNew(ListPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
