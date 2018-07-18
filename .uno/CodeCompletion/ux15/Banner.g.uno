[Uno.Compiler.UxGenerated]
public partial class Banner: Fuse.Controls.Panel
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    static Banner()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Banner()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("currentTitle");
        var temp1 = new global::Fuse.Controls.Rectangle();
        temp1_Color_inst = new AccountBook_FuseControlsShape_Color_Property(temp1, __selector1);
        var temp3 = new global::Fuse.Reactive.Resource("Col_type3");
        var temp4 = new global::Fuse.Controls.DockPanel();
        var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp6 = new global::Fuse.Effects.DropShadow();
        var temp7 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp3, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 62;
        this.SourceFileName = "MainView.ux";
        temp4.SourceLineNumber = 63;
        temp4.SourceFileName = "MainView.ux";
        temp4.Children.Add(temp);
        temp4.Children.Add(temp1);
        temp.Color = Fuse.Drawing.Colors.Black;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 64;
        temp.SourceFileName = "MainView.ux";
        temp.Bindings.Add(temp5);
        temp2.SourceLineNumber = 64;
        temp2.SourceFileName = "MainView.ux";
        temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp1.SourceLineNumber = 65;
        temp1.SourceFileName = "MainView.ux";
        temp1.Children.Add(temp6);
        temp1.Bindings.Add(temp7);
        temp6.Size = 2f;
        temp6.Angle = 0f;
        temp6.Distance = 1f;
        temp6.Spread = 0.2f;
        temp6.Color = float4(0f, 0f, 0f, 0.3764706f);
        temp6.SourceLineNumber = 66;
        temp6.SourceFileName = "MainView.ux";
        temp3.SourceLineNumber = 65;
        temp3.SourceFileName = "MainView.ux";
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
}
