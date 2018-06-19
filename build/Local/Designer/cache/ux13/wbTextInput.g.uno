[Uno.Compiler.UxGenerated]
public partial class wbTextInput: Fuse.Controls.TextInput
{
    static wbTextInput()
    {
    }
    [global::Uno.UX.UXConstructor]
    public wbTextInput()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Rectangle();
        this.TextAlignment = Fuse.Controls.TextAlignment.Center;
        this.Margin = float4(1f, 1f, 1f, 1f);
        temp.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp.Color = float4(1f, 1f, 1f, 1f);
        this.Children.Add(temp);
    }
}
