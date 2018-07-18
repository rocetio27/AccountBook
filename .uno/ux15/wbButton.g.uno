[Uno.Compiler.UxGenerated]
public partial class wbButton: Fuse.Controls.Button
{
    float4 _field_TextCol;
    [global::Uno.UX.UXOriginSetter("SetTextCol")]
    public float4 TextCol
    {
        get { return _field_TextCol; }
        set { SetTextCol(value, null); }
    }
    public void SetTextCol(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_TextCol)
        {
            _field_TextCol = value;
            OnPropertyChanged("TextCol", origin);
        }
    }
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> wbRecCol_Color_inst;
    global::Uno.UX.Property<float4> border_Color_inst;
    internal global::Fuse.Drawing.SolidColor wbRecCol;
    internal global::Fuse.Drawing.Stroke border;
    static wbButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public wbButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Color_inst = new AccountBook_FuseControlsTextControl_Color_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, AccountBook_accessor_wbButton_TextCol.Singleton);
        var temp3 = new global::Fuse.Reactive.Constant(this);
        temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector1);
        var temp4 = new global::Fuse.Reactive.Property(temp3, AccountBook_accessor_Fuse_Controls_ButtonBase_Text.Singleton);
        wbRecCol = new global::Fuse.Drawing.SolidColor();
        wbRecCol_Color_inst = new AccountBook_FuseDrawingSolidColor_Color_Property(wbRecCol, __selector0);
        border = new global::Fuse.Drawing.Stroke();
        border_Color_inst = new AccountBook_FuseDrawingStroke_Color_Property(border, __selector0);
        var temp5 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Read);
        var temp7 = new global::Fuse.Controls.Rectangle();
        var temp8 = new global::Fuse.Gestures.WhilePressed();
        var temp9 = new global::Fuse.Animations.Change<float4>(wbRecCol_Color_inst);
        var temp10 = new global::Fuse.Animations.Change<float4>(border_Color_inst);
        var temp11 = new global::Fuse.Gestures.Clicked();
        var temp12 = new global::Fuse.PlaySound();
        this.TextCol = float4(0f, 0f, 0f, 1f);
        this.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        this.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        this.Padding = float4(1f, 1f, 1f, 1f);
        this.SourceLineNumber = 11;
        this.SourceFileName = "MainView.ux";
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 13;
        temp.SourceFileName = "MainView.ux";
        temp.Bindings.Add(temp5);
        temp.Bindings.Add(temp6);
        temp2.SourceLineNumber = 13;
        temp2.SourceFileName = "MainView.ux";
        temp1.SourceLineNumber = 13;
        temp1.SourceFileName = "MainView.ux";
        temp4.SourceLineNumber = 13;
        temp4.SourceFileName = "MainView.ux";
        temp3.SourceLineNumber = 13;
        temp3.SourceFileName = "MainView.ux";
        temp7.SourceLineNumber = 14;
        temp7.SourceFileName = "MainView.ux";
        temp7.Fills.Add(wbRecCol);
        temp7.Strokes.Add(border);
        wbRecCol.Color = float4(1f, 1f, 1f, 1f);
        border.Color = float4(1f, 1f, 1f, 1f);
        border.Width = 1f;
        temp8.SourceLineNumber = 18;
        temp8.SourceFileName = "MainView.ux";
        temp8.Animators.Add(temp9);
        temp8.Animators.Add(temp10);
        temp9.Value = float4(0.6f, 0.6f, 0.6f, 1f);
        temp9.Duration = 0.05;
        temp9.DurationBack = 0.2;
        temp10.Value = float4(0.6f, 0.6f, 0.6f, 1f);
        temp10.Duration = 0.05;
        temp10.DurationBack = 0.2;
        temp11.SourceLineNumber = 22;
        temp11.SourceFileName = "MainView.ux";
        temp11.Actions.Add(temp12);
        temp12.SourceLineNumber = 23;
        temp12.SourceFileName = "MainView.ux";
        temp12.File = new global::Uno.UX.BundleFileSource(import("../../Click.wav"));
        this.Children.Add(temp);
        this.Children.Add(temp7);
        this.Children.Add(temp8);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "Value";
}
