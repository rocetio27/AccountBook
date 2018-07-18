// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/build/Android/Preview/cache/ux15/ListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ListPage.h>
#include <_root.ListPage.Template.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public partial sealed class ListPage.Template :6
// {
// static Template() :15
static void ListPage__Template__cctor__fn(uType* __type)
{
}

static void ListPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Group : uniting lists to unit list");
    ::STRINGS[1] = uString::Const("ListPage.ux");
    type->SetFields(2,
        ::g::ListPage_typeof(), offsetof(ListPage__Template, __parent1), uFieldFlagsWeak,
        ::g::ListPage_typeof(), offsetof(ListPage__Template, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ListPage__Template__New2_fn, 0, true, type, 2, ::g::ListPage_typeof(), ::g::ListPage_typeof()));
}

::g::Uno::UX::Template_type* ListPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ListPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ListPage.Template", options);
    type->fp_build_ = ListPage__Template_build;
    type->fp_cctor_ = ListPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ListPage__Template__New1_fn;
    return type;
}

// public Template(ListPage parent, ListPage parentInstance) :10
void ListPage__Template__ctor_1_fn(ListPage__Template* __this, ::g::ListPage* parent, ::g::ListPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :18
void ListPage__Template__New1_fn(ListPage__Template* __this, uObject** __retval)
{
    uStackFrame __("ListPage.Template", "New()");
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __self1->Value(::STRINGS[0/*"Group : uni...*/]);
    __self1->SourceLineNumber(76);
    __self1->SourceFileName(::STRINGS[1/*"ListPage.ux"*/]);
    return *__retval = __self1, void();
}

// public Template New(ListPage parent, ListPage parentInstance) :10
void ListPage__Template__New2_fn(::g::ListPage* parent, ::g::ListPage* parentInstance, ListPage__Template** __retval)
{
    *__retval = ListPage__Template::New2(parent, parentInstance);
}

// public Template(ListPage parent, ListPage parentInstance) [instance] :10
void ListPage__Template::ctor_1(::g::ListPage* parent, ::g::ListPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(ListPage parent, ListPage parentInstance) [static] :10
ListPage__Template* ListPage__Template::New2(::g::ListPage* parent, ::g::ListPage* parentInstance)
{
    ListPage__Template* obj1 = (ListPage__Template*)uNew(ListPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
