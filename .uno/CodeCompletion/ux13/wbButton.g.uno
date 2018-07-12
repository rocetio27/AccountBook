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
        var temp5 = new global::Fuse.Effects.DropShadow();
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp7 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Read);
        var temp8 = new global::Fuse.Controls.Rectangle();
        var temp9 = new global::Fuse.Gestures.WhilePressed();
        var temp10 = new global::Fuse.Animations.Change<float4>(wbRecCol_Color_inst);
        var temp11 = new global::Fuse.Animations.Change<float4>(border_Color_inst);
        var temp12 = new global::Fuse.Gestures.Clicked();
        var temp13 = new global::Fuse.PlaySound();
        this.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        this.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        this.Margin = float4(2f, 2f, 2f, 2f);
        this.TextCol = float4(0f, 0f, 0f, 1f);
        temp5.Size = 0.5f;
        temp5.Angle = 90f;
        temp5.Distance = 1f;
        temp5.Spread = 0.2f;
        temp5.Color = float4(0f, 0f, 0f, 0.3764706f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp6);
        temp.Bindings.Add(temp7);
        temp8.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp8.Fills.Add(wbRecCol);
        temp8.Strokes.Add(border);
        wbRecCol.Color = float4(1f, 1f, 1f, 1f);
        border.Color = float4(1f, 1f, 1f, 1f);
        border.Width = 1f;
        temp9.Animators.Add(temp10);
        temp9.Animators.Add(temp11);
        temp10.Value = float4(0.6f, 0.6f, 0.6f, 1f);
        temp10.Duration = 0.05;
        temp10.DurationBack = 0.2;
        temp11.Value = float4(0.6f, 0.6f, 0.6f, 1f);
        temp11.Duration = 0.05;
        temp11.DurationBack = 0.2;
        temp12.Actions.Add(temp13);
        temp13.File = new global::Uno.UX.BundleFileSource(import("../../../Click.wav"));
        this.Children.Add(temp5);
        this.Children.Add(temp);
        this.Children.Add(temp8);
        this.Children.Add(temp9);
        this.Children.Add(temp12);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "Value";
}
