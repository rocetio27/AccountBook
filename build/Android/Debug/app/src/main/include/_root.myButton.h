// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/.uno/ux13/myButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct myButton;}

namespace g{

// public partial sealed class myButton :2
// {
::g::Fuse::Controls::Panel_type* myButton_typeof();
void myButton__ctor_9_fn(myButton* __this);
void myButton__get_font_fn(myButton* __this, ::g::Fuse::Font** __retval);
void myButton__set_font_fn(myButton* __this, ::g::Fuse::Font* value);
void myButton__get_fontsize_fn(myButton* __this, int* __retval);
void myButton__set_fontsize_fn(myButton* __this, int* value);
void myButton__InitializeUX1_fn(myButton* __this);
void myButton__New6_fn(myButton** __retval);
void myButton__Setfont_fn(myButton* __this, ::g::Fuse::Font* value, uObject* origin);
void myButton__Setfontsize_fn(myButton* __this, int* value, uObject* origin);
void myButton__Settext_fn(myButton* __this, uString* value, uObject* origin);
void myButton__Settextcolor_fn(myButton* __this, ::g::Uno::Float4* value, uObject* origin);
void myButton__get_text_fn(myButton* __this, uString** __retval);
void myButton__set_text_fn(myButton* __this, uString* value);
void myButton__get_textcolor_fn(myButton* __this, ::g::Uno::Float4* __retval);
void myButton__set_textcolor_fn(myButton* __this, ::g::Uno::Float4* value);

struct myButton : ::g::Fuse::Controls::Button
{
    uStrong<uString*> _field_text;
    uStrong< ::g::Fuse::Font*> _field_font;
    ::g::Uno::Float4 _field_textcolor;
    int _field_fontsize;
    uStrong< ::g::Uno::UX::Property1*> temp_Font_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_FontSize_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_textcolor_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return myButton_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return myButton_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return myButton_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return myButton_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return myButton_typeof()->Init(), __selector4_; }

    void ctor_9();
    ::g::Fuse::Font* font();
    void font(::g::Fuse::Font* value);
    int fontsize();
    void fontsize(int value);
    void InitializeUX1();
    void Setfont(::g::Fuse::Font* value, uObject* origin);
    void Setfontsize(int value, uObject* origin);
    void Settext(uString* value, uObject* origin);
    void Settextcolor(::g::Uno::Float4 value, uObject* origin);
    uString* text();
    void text(uString* value);
    ::g::Uno::Float4 textcolor();
    void textcolor(::g::Uno::Float4 value);
    static myButton* New6();
};
// }

} // ::g
