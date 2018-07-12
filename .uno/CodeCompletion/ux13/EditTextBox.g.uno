[Uno.Compiler.UxGenerated]
public partial class EditTextBox: Fuse.Controls.TextInput
{
    static EditTextBox()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EditTextBox()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Rectangle();
        var temp1 = new global::Fuse.Effects.DropShadow();
        this.TextAlignment = Fuse.Controls.TextAlignment.Center;
        this.TextColor = Fuse.Drawing.Colors.Black;
        temp.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp.Color = Fuse.Drawing.Colors.White;
        temp.Children.Add(temp1);
        temp1.Size = 0.5f;
        temp1.Angle = 90f;
        temp1.Distance = 1f;
        temp1.Spread = 0.2f;
        temp1.Color = float4(0f, 0f, 0f, 0.3764706f);
        this.Children.Add(temp);
    }
}
