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
        var temp2 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Property(temp2, AccountBook_accessor_pmButton_Text.Singleton);
        var temp1 = new global::Fuse.Controls.Rectangle();
        temp1_Color_inst = new AccountBook_FuseControlsShape_Color_Property(temp1, __selector1);
        var temp4 = new global::Fuse.Reactive.Data("addingValueColor");
        var temp5 = new global::Fuse.Reactive.Data("PM_TypeChange");
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Read);
        var temp7 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp8 = new global::Fuse.Gestures.Clicked();
        var temp9 = new global::Fuse.PlaySound();
        temp_eb39 = new global::Fuse.Reactive.EventBinding(temp5);
        this.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        this.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        this.Padding = float4(1f, 1f, 1f, 1f);
        this.SourceLineNumber = 43;
        this.SourceFileName = "MainView.ux";
        global::Fuse.Gestures.Clicked.AddHandler(this, temp_eb39.OnEvent);
        temp.Color = float4(1f, 1f, 1f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 45;
        temp.SourceFileName = "MainView.ux";
        temp.Bindings.Add(temp6);
        temp3.SourceLineNumber = 45;
        temp3.SourceFileName = "MainView.ux";
        temp2.SourceLineNumber = 45;
        temp2.SourceFileName = "MainView.ux";
        temp1.SourceLineNumber = 46;
        temp1.SourceFileName = "MainView.ux";
        temp1.Bindings.Add(temp7);
        temp4.SourceLineNumber = 46;
        temp4.SourceFileName = "MainView.ux";
        temp8.SourceLineNumber = 48;
        temp8.SourceFileName = "MainView.ux";
        temp8.Actions.Add(temp9);
        temp9.SourceLineNumber = 49;
        temp9.SourceFileName = "MainView.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../Click.wav"));
        temp5.SourceLineNumber = 43;
        temp5.SourceFileName = "MainView.ux";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp8);
        this.Bindings.Add(temp_eb39);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
}
