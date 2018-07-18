[Uno.Compiler.UxGenerated]
public partial class EditButton: Fuse.Controls.Button
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
    global::Uno.UX.Property<float4> back_Color_inst;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<float> temp_FontSize_inst;
    internal global::Fuse.Controls.Rectangle back;
    static EditButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EditButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        back = new global::Fuse.Controls.Rectangle();
        back_Color_inst = new AccountBook_FuseControlsShape_Color_Property(back, __selector0);
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector1);
        var temp2 = new global::Fuse.Reactive.Property(temp1, AccountBook_accessor_EditButton_text.Singleton);
        var temp3 = new global::Fuse.Reactive.Constant(this);
        temp_Color_inst = new AccountBook_FuseControlsTextControl_Color_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Property(temp3, AccountBook_accessor_EditButton_textcolor.Singleton);
        var temp5 = new global::Fuse.Reactive.Constant(this);
        temp_FontSize_inst = new AccountBook_FuseControlsTextControl_FontSize_Property(temp, __selector2);
        var temp6 = new global::Fuse.Reactive.Property(temp5, AccountBook_accessor_EditButton_fontsize.Singleton);
        var temp7 = new global::Fuse.Gestures.WhilePressed();
        var temp8 = new global::Fuse.Animations.Change<float4>(back_Color_inst);
        var temp9 = new global::Fuse.PlaySound();
        var temp10 = new global::Fuse.Drawing.Stroke();
        var temp11 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp12 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp4, Fuse.Reactive.BindingMode.Read);
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_FontSize_inst, temp6, Fuse.Reactive.BindingMode.Read);
        this.SourceLineNumber = 154;
        this.SourceFileName = "ListPage.ux";
        temp7.SourceLineNumber = 155;
        temp7.SourceFileName = "ListPage.ux";
        temp7.Animators.Add(temp8);
        temp7.Actions.Add(temp9);
        temp8.Value = float4(0.6f, 0.6f, 0.6f, 1f);
        temp8.Duration = 0.05;
        temp8.DurationBack = 0.2;
        temp9.SourceLineNumber = 157;
        temp9.SourceFileName = "ListPage.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../Click.wav"));
        back.CornerRadius = float4(5f, 5f, 5f, 5f);
        back.Color = Fuse.Drawing.Colors.White;
        back.Layer = Fuse.Layer.Background;
        back.Name = __selector3;
        back.SourceLineNumber = 162;
        back.SourceFileName = "ListPage.ux";
        back.Strokes.Add(temp10);
        temp10.Color = float4(0.5333334f, 0.5333334f, 0.5333334f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 165;
        temp.SourceFileName = "ListPage.ux";
        temp.Bindings.Add(temp11);
        temp.Bindings.Add(temp12);
        temp.Bindings.Add(temp13);
        temp2.SourceLineNumber = 165;
        temp2.SourceFileName = "ListPage.ux";
        temp1.SourceLineNumber = 165;
        temp1.SourceFileName = "ListPage.ux";
        temp4.SourceLineNumber = 165;
        temp4.SourceFileName = "ListPage.ux";
        temp3.SourceLineNumber = 165;
        temp3.SourceFileName = "ListPage.ux";
        temp6.SourceLineNumber = 165;
        temp6.SourceFileName = "ListPage.ux";
        temp5.SourceLineNumber = 165;
        temp5.SourceFileName = "ListPage.ux";
        this.Children.Add(temp7);
        this.Children.Add(back);
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "FontSize";
    static global::Uno.UX.Selector __selector3 = "back";
}
