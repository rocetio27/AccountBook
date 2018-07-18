[Uno.Compiler.UxGenerated]
public partial class myButton: Fuse.Controls.Button
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
    Fuse.Font _field_font;
    [global::Uno.UX.UXOriginSetter("Setfont")]
    public Fuse.Font font
    {
        get { return _field_font; }
        set { Setfont(value, null); }
    }
    public void Setfont(Fuse.Font value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_font)
        {
            _field_font = value;
            OnPropertyChanged("font", origin);
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
    global::Uno.UX.Property<Fuse.Font> temp_Font_inst;
    global::Uno.UX.Property<float> temp_FontSize_inst;
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> this_textcolor_inst;
    static myButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public myButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Font_inst = new AccountBook_FuseControlsTextControl_Font_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, AccountBook_accessor_myButton_font.Singleton);
        var temp3 = new global::Fuse.Reactive.Constant(this);
        temp_FontSize_inst = new AccountBook_FuseControlsTextControl_FontSize_Property(temp, __selector1);
        var temp4 = new global::Fuse.Reactive.Property(temp3, AccountBook_accessor_myButton_fontsize.Singleton);
        var temp5 = new global::Fuse.Reactive.Constant(this);
        temp_Color_inst = new AccountBook_FuseControlsTextControl_Color_Property(temp, __selector2);
        var temp6 = new global::Fuse.Reactive.Property(temp5, AccountBook_accessor_myButton_textcolor.Singleton);
        var temp7 = new global::Fuse.Reactive.Constant(this);
        temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector3);
        var temp8 = new global::Fuse.Reactive.Property(temp7, AccountBook_accessor_myButton_text.Singleton);
        this_textcolor_inst = new AccountBook_myButton_textcolor_Property(this, __selector4);
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Font_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp10 = new global::Fuse.Reactive.DataBinding(temp_FontSize_inst, temp4, Fuse.Reactive.BindingMode.Read);
        var temp11 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp6, Fuse.Reactive.BindingMode.Read);
        var temp12 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp8, Fuse.Reactive.BindingMode.Read);
        var temp13 = new global::Fuse.Gestures.WhilePressed();
        var temp14 = new global::Fuse.Animations.Change<float4>(this_textcolor_inst);
        var temp15 = new global::Fuse.Gestures.Clicked();
        var temp16 = new global::Fuse.PlaySound();
        this.SourceLineNumber = 5;
        this.SourceFileName = "StatisticPage.ux";
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 10;
        temp.SourceFileName = "StatisticPage.ux";
        temp.Bindings.Add(temp9);
        temp.Bindings.Add(temp10);
        temp.Bindings.Add(temp11);
        temp.Bindings.Add(temp12);
        temp2.SourceLineNumber = 10;
        temp2.SourceFileName = "StatisticPage.ux";
        temp1.SourceLineNumber = 10;
        temp1.SourceFileName = "StatisticPage.ux";
        temp4.SourceLineNumber = 10;
        temp4.SourceFileName = "StatisticPage.ux";
        temp3.SourceLineNumber = 10;
        temp3.SourceFileName = "StatisticPage.ux";
        temp6.SourceLineNumber = 10;
        temp6.SourceFileName = "StatisticPage.ux";
        temp5.SourceLineNumber = 10;
        temp5.SourceFileName = "StatisticPage.ux";
        temp8.SourceLineNumber = 10;
        temp8.SourceFileName = "StatisticPage.ux";
        temp7.SourceLineNumber = 10;
        temp7.SourceFileName = "StatisticPage.ux";
        temp13.SourceLineNumber = 11;
        temp13.SourceFileName = "StatisticPage.ux";
        temp13.Animators.Add(temp14);
        temp14.Value = float4(0.5333334f, 0.5333334f, 0.5333334f, 1f);
        temp14.Duration = 0.05;
        temp14.DurationBack = 5;
        temp15.SourceLineNumber = 14;
        temp15.SourceFileName = "StatisticPage.ux";
        temp15.Actions.Add(temp16);
        temp16.SourceLineNumber = 15;
        temp16.SourceFileName = "StatisticPage.ux";
        temp16.File = new global::Uno.UX.BundleFileSource(import("../../Click.wav"));
        this.Children.Add(temp);
        this.Children.Add(temp13);
        this.Children.Add(temp15);
    }
    static global::Uno.UX.Selector __selector0 = "Font";
    static global::Uno.UX.Selector __selector1 = "FontSize";
    static global::Uno.UX.Selector __selector2 = "Color";
    static global::Uno.UX.Selector __selector3 = "Value";
    static global::Uno.UX.Selector __selector4 = "textcolor";
}
