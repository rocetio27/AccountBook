[Uno.Compiler.UxGenerated]
public partial class wbButtonB: Fuse.Controls.Button
{
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
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<float4> wbRec_Color_inst;
    internal global::Fuse.Controls.Rectangle wbRec;
    static wbButtonB()
    {
    }
    [global::Uno.UX.UXConstructor]
    public wbButtonB()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, AccountBook_accessor_Fuse_Controls_ButtonBase_Text.Singleton);
        var temp3 = new global::Fuse.Reactive.Constant(this);
        temp_Color_inst = new AccountBook_FuseControlsTextControl_Color_Property(temp, __selector1);
        var temp4 = new global::Fuse.Reactive.Property(temp3, AccountBook_accessor_wbButtonB_textcolor.Singleton);
        wbRec = new global::Fuse.Controls.Rectangle();
        wbRec_Color_inst = new AccountBook_FuseControlsShape_Color_Property(wbRec, __selector1);
        var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp4, Fuse.Reactive.BindingMode.Read);
        var temp7 = new global::Fuse.Gestures.WhilePressed();
        var temp8 = new global::Fuse.Animations.Change<float4>(wbRec_Color_inst);
        var temp9 = new global::Fuse.Gestures.Clicked();
        var temp10 = new global::Fuse.PlaySound();
        this.textcolor = Fuse.Drawing.Colors.Black;
        this.Margin = float4(1f, 1f, 1f, 1f);
        this.SourceLineNumber = 7;
        this.SourceFileName = "BudgetPage.ux";
        wbRec.CornerRadius = float4(5f, 5f, 5f, 5f);
        wbRec.Color = Fuse.Drawing.Colors.White;
        wbRec.Name = __selector2;
        wbRec.SourceLineNumber = 9;
        wbRec.SourceFileName = "BudgetPage.ux";
        wbRec.Children.Add(temp);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 10;
        temp.SourceFileName = "BudgetPage.ux";
        temp.Bindings.Add(temp5);
        temp.Bindings.Add(temp6);
        temp2.SourceLineNumber = 10;
        temp2.SourceFileName = "BudgetPage.ux";
        temp1.SourceLineNumber = 10;
        temp1.SourceFileName = "BudgetPage.ux";
        temp4.SourceLineNumber = 10;
        temp4.SourceFileName = "BudgetPage.ux";
        temp3.SourceLineNumber = 10;
        temp3.SourceFileName = "BudgetPage.ux";
        temp7.SourceLineNumber = 12;
        temp7.SourceFileName = "BudgetPage.ux";
        temp7.Animators.Add(temp8);
        temp8.Value = float4(0.6f, 0.6f, 0.6f, 1f);
        temp8.Duration = 0.05;
        temp8.DurationBack = 0.2;
        temp9.SourceLineNumber = 15;
        temp9.SourceFileName = "BudgetPage.ux";
        temp9.Actions.Add(temp10);
        temp10.SourceLineNumber = 16;
        temp10.SourceFileName = "BudgetPage.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import("../../../../../Click.wav"));
        this.Children.Add(wbRec);
        this.Children.Add(temp7);
        this.Children.Add(temp9);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "wbRec";
}
