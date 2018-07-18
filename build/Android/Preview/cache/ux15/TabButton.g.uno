[Uno.Compiler.UxGenerated]
public partial class TabButton: Fuse.Controls.Button
{
    global::Uno.UX.Property<float4> this_Color_inst;
    static TabButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TabButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Color_inst = new AccountBook_FuseControlsPanel_Color_Property(this, __selector0);
        var temp = new global::Fuse.Reactive.Resource("Col_type3");
        var temp1 = new global::Fuse.Gestures.Clicked();
        var temp2 = new global::Fuse.PlaySound();
        var temp3 = new global::Fuse.Reactive.DataBinding(this_Color_inst, temp, Fuse.Reactive.BindingMode.Default);
        this.Margin = float4(0f, 0f, 0f, 4f);
        this.ClipToBounds = false;
        this.SourceLineNumber = 61;
        this.SourceFileName = "MainView.ux";
        temp1.SourceLineNumber = 62;
        temp1.SourceFileName = "MainView.ux";
        temp1.Actions.Add(temp2);
        temp2.SourceLineNumber = 63;
        temp2.SourceFileName = "MainView.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import("../../../../../Click.wav"));
        temp.SourceLineNumber = 61;
        temp.SourceFileName = "MainView.ux";
        this.Children.Add(temp1);
        this.Bindings.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
}
