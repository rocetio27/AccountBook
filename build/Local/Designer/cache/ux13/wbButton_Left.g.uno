[Uno.Compiler.UxGenerated]
public partial class wbButton_Left: Fuse.Controls.Button
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> wbRecCol_Color_inst;
    global::Uno.UX.Property<float4> border_Color_inst;
    internal global::Fuse.Drawing.SolidColor wbRecCol;
    internal global::Fuse.Drawing.Stroke border;
    static wbButton_Left()
    {
    }
    [global::Uno.UX.UXConstructor]
    public wbButton_Left()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, AccountBook_accessor_Fuse_Controls_ButtonBase_Text.Singleton);
        wbRecCol = new global::Fuse.Drawing.SolidColor();
        wbRecCol_Color_inst = new AccountBook_FuseDrawingSolidColor_Color_Property(wbRecCol, __selector1);
        border = new global::Fuse.Drawing.Stroke();
        border_Color_inst = new AccountBook_FuseDrawingStroke_Color_Property(border, __selector1);
        var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp4 = new global::Fuse.Controls.Rectangle();
        var temp5 = new global::Fuse.Gestures.WhilePressed();
        var temp6 = new global::Fuse.Animations.Change<float4>(wbRecCol_Color_inst);
        var temp7 = new global::Fuse.Animations.Change<float4>(border_Color_inst);
        var temp8 = new global::Fuse.Gestures.Clicked();
        var temp9 = new global::Fuse.PlaySound();
        this.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        this.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        this.Margin = float4(2f, 2f, 2f, 2f);
        temp.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp.Color = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp.Bindings.Add(temp3);
        temp4.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp4.Fills.Add(wbRecCol);
        temp4.Strokes.Add(border);
        wbRecCol.Color = float4(1f, 1f, 1f, 1f);
        border.Color = float4(1f, 1f, 1f, 1f);
        border.Width = 1f;
        temp5.Animators.Add(temp6);
        temp5.Animators.Add(temp7);
        temp6.Value = float4(0.6f, 0.6f, 0.6f, 1f);
        temp6.Duration = 0.05;
        temp6.DurationBack = 0.2;
        temp7.Value = float4(0.6f, 0.6f, 0.6f, 1f);
        temp8.Actions.Add(temp9);
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../../../../Click.wav"));
        this.Children.Add(temp);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp8);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
}
