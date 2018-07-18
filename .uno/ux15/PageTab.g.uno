[Uno.Compiler.UxGenerated]
public partial class PageTab: Fuse.Controls.Panel
{
    string _field_Label;
    [global::Uno.UX.UXOriginSetter("SetLabel")]
    public string Label
    {
        get { return _field_Label; }
        set { SetLabel(value, null); }
    }
    public void SetLabel(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Label)
        {
            _field_Label = value;
            OnPropertyChanged("Label", origin);
        }
    }
    readonly Fuse.Controls.PageControl pageControl;
    readonly Fuse.Controls.Page page;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> this_Color_inst;
    static PageTab()
    {
    }
    [global::Uno.UX.UXConstructor]
    public PageTab(
		[global::Uno.UX.UXParameter("pageControl")] Fuse.Controls.PageControl pageControl, 
		[global::Uno.UX.UXParameter("page")] Fuse.Controls.Page page)
    {
        this.pageControl = pageControl;
        this.page = page;
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, AccountBook_accessor_PageTab_Label.Singleton);
        this_Color_inst = new AccountBook_FuseControlsPanel_Color_Property(this, __selector1);
        var temp3 = new global::Fuse.Reactive.Resource("Col_type3");
        var temp4 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp5 = new global::Fuse.Gestures.Clicked();
        var temp6 = new global::Fuse.Navigation.NavigateTo();
        var temp7 = new global::Fuse.PlaySound();
        var temp8 = new global::Fuse.Gestures.WhilePressed();
        var temp9 = new global::Fuse.Animations.Scale();
        var temp10 = new global::Fuse.Reactive.DataBinding(this_Color_inst, temp3, Fuse.Reactive.BindingMode.Default);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        this.SourceLineNumber = 65;
        this.SourceFileName = "MainView.ux";
        temp.FontSize = 15f;
        temp.Color = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 69;
        temp.SourceFileName = "MainView.ux";
        temp.Bindings.Add(temp4);
        temp2.SourceLineNumber = 69;
        temp2.SourceFileName = "MainView.ux";
        temp1.SourceLineNumber = 69;
        temp1.SourceFileName = "MainView.ux";
        temp5.SourceLineNumber = 70;
        temp5.SourceFileName = "MainView.ux";
        temp5.Actions.Add(temp6);
        temp5.Actions.Add(temp7);
        temp6.SourceLineNumber = 71;
        temp6.SourceFileName = "MainView.ux";
        temp6.Target = page;
        temp6.NavigationContext = pageControl;
        temp7.SourceLineNumber = 72;
        temp7.SourceFileName = "MainView.ux";
        temp7.File = new global::Uno.UX.BundleFileSource(import("../../Click.wav"));
        temp8.SourceLineNumber = 74;
        temp8.SourceFileName = "MainView.ux";
        temp8.Animators.Add(temp9);
        temp9.Factor = 1.2f;
        temp9.Duration = 0.08;
        temp9.Easing = Fuse.Animations.Easing.QuadraticInOut;
        temp3.SourceLineNumber = 65;
        temp3.SourceFileName = "MainView.ux";
        this.Children.Add(temp);
        this.Children.Add(temp5);
        this.Children.Add(temp8);
        this.Bindings.Add(temp10);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
}
