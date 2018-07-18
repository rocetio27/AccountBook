[Uno.Compiler.UxGenerated]
public partial class ccButton: Fuse.Controls.Button
{
    string _field_text;
    [global::Uno.UX.UXOriginSetter("Settext")]
    public string text
    {
        get { return _field_text; }
        set { Settext(value, null); }
    }
    public void Settext(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_text)
        {
            _field_text = value;
            OnPropertyChanged("text", origin);
        }
    }
    float4 _field_textcolor;
    [global::Uno.UX.UXOriginSetter("Settextcolor")]
    public float4 textcolor
    {
        get { return _field_textcolor; }
        set { Settextcolor(value, null); }
    }
    public void Settextcolor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_textcolor)
        {
            _field_textcolor = value;
            OnPropertyChanged("textcolor", origin);
        }
    }
    int _field_fontsize;
    [global::Uno.UX.UXOriginSetter("Setfontsize")]
    public int fontsize
    {
        get { return _field_fontsize; }
        set { Setfontsize(value, null); }
    }
    public void Setfontsize(int value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_fontsize)
        {
            _field_fontsize = value;
            OnPropertyChanged("fontsize", origin);
        }
    }
    global::Uno.UX.Property<float> temp_FontSize_inst;
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> this_textcolor_inst;
    static ccButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ccButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_FontSize_inst = new AccountBook_FuseControlsTextControl_FontSize_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, AccountBook_accessor_ccButton_fontsize.Singleton);
        var temp3 = new global::Fuse.Reactive.Constant(this);
        temp_Color_inst = new AccountBook_FuseControlsTextControl_Color_Property(temp, __selector1);
        var temp4 = new global::Fuse.Reactive.Property(temp3, AccountBook_accessor_ccButton_textcolor.Singleton);
        var temp5 = new global::Fuse.Reactive.Constant(this);
        temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector2);
        var temp6 = new global::Fuse.Reactive.Property(temp5, AccountBook_accessor_ccButton_text.Singleton);
        this_textcolor_inst = new AccountBook_ccButton_textcolor_Property(this, __selector3);
        var temp7 = new global::Fuse.Reactive.DataBinding(temp_FontSize_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp8 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp4, Fuse.Reactive.BindingMode.Read);
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp6, Fuse.Reactive.BindingMode.Read);
        var temp10 = new global::Fuse.Gestures.WhilePressed();
        var temp11 = new global::Fuse.Animations.Change<float4>(this_textcolor_inst);
        var temp12 = new global::Fuse.Gestures.Clicked();
        var temp13 = new global::Fuse.PlaySound();
        this.SourceLineNumber = 22;
        this.SourceFileName = "ListPage.ux";
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 26;
        temp.SourceFileName = "ListPage.ux";
        temp.Font = global::ListPage.Bold;
        temp.Bindings.Add(temp7);
        temp.Bindings.Add(temp8);
        temp.Bindings.Add(temp9);
        temp2.SourceLineNumber = 26;
        temp2.SourceFileName = "ListPage.ux";
        temp1.SourceLineNumber = 26;
        temp1.SourceFileName = "ListPage.ux";
        temp4.SourceLineNumber = 26;
        temp4.SourceFileName = "ListPage.ux";
        temp3.SourceLineNumber = 26;
        temp3.SourceFileName = "ListPage.ux";
        temp6.SourceLineNumber = 26;
        temp6.SourceFileName = "ListPage.ux";
        temp5.SourceLineNumber = 26;
        temp5.SourceFileName = "ListPage.ux";
        temp10.SourceLineNumber = 27;
        temp10.SourceFileName = "ListPage.ux";
        temp10.Animators.Add(temp11);
        temp11.Value = float4(0.6f, 0.6f, 0.6f, 1f);
        temp11.Duration = 0.05;
        temp11.DurationBack = 0.2;
        temp12.SourceLineNumber = 30;
        temp12.SourceFileName = "ListPage.ux";
        temp12.Actions.Add(temp13);
        temp13.SourceLineNumber = 31;
        temp13.SourceFileName = "ListPage.ux";
        temp13.File = new global::Uno.UX.BundleFileSource(import("../../../Click.wav"));
        this.Children.Add(temp);
        this.Children.Add(temp10);
        this.Children.Add(temp12);
    }
    static global::Uno.UX.Selector __selector0 = "FontSize";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "textcolor";
}
