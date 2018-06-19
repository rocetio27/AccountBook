[Uno.Compiler.UxGenerated]
public partial class pmButton: Fuse.Controls.Button
{
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<float4> temp2_Color_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb39;
    static pmButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public pmButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp3 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Property(temp3, AccountBook_accessor_Fuse_Controls_ButtonBase_Text.Singleton);
        var temp1 = new global::Fuse.Controls.Rectangle();
        temp1_Color_inst = new AccountBook_FuseControlsShape_Color_Property(temp1, __selector1);
        var temp5 = new global::Fuse.Reactive.Data("addingValueColor");
        var temp2 = new global::Fuse.Drawing.Stroke();
        temp2_Color_inst = new AccountBook_FuseDrawingStroke_Color_Property(temp2, __selector1);
        var temp6 = new global::Fuse.Reactive.Resource("Col_type3");
        var temp7 = new global::Fuse.Reactive.Data("PM_TypeChange");
        var temp8 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Read);
        var temp9 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Reactive.DataBinding(temp2_Color_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp11 = new global::Fuse.Gestures.Clicked();
        var temp12 = new global::Fuse.PlaySound();
        temp_eb39 = new global::Fuse.Reactive.EventBinding(temp7);
        this.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        this.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        this.Margin = float4(1f, 1f, 1f, 1f);
        global::Fuse.Gestures.Clicked.AddHandler(this, temp_eb39.OnEvent);
        temp.Color = float4(1f, 1f, 1f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp8);
        temp1.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp1.Strokes.Add(temp2);
        temp1.Bindings.Add(temp9);
        temp1.Bindings.Add(temp10);
        temp2.Width = 1f;
        temp11.Actions.Add(temp12);
        temp12.File = new global::Uno.UX.BundleFileSource(import("../../../../../Click.wav"));
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp11);
        this.Bindings.Add(temp_eb39);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
}
