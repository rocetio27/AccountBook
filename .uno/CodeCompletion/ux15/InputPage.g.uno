[Uno.Compiler.UxGenerated]
public partial class InputPage: Fuse.Controls.Panel
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly InputPage __parent;
        [Uno.WeakReference] internal readonly InputPage __parentInstance;
        public Template(InputPage parent, InputPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<float4> temp_Color_inst;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Panel();
            var temp = new global::Fuse.Controls.Rectangle();
            temp_Color_inst = new AccountBook_FuseControlsShape_Color_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Resource("Col_type3");
            var temp2 = new global::Fuse.Effects.DropShadow();
            var temp3 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 13;
            __self.SourceFileName = "InputPage.ux";
            global::Fuse.Controls.Grid.SetRowSpan(__self, 3);
            temp.SourceLineNumber = 14;
            temp.SourceFileName = "InputPage.ux";
            temp.Children.Add(temp2);
            temp.Bindings.Add(temp3);
            temp2.Size = 0.4f;
            temp2.Angle = 90f;
            temp2.Distance = 1f;
            temp2.Spread = 0.2f;
            temp2.Color = float4(0f, 0f, 0f, 0.3764706f);
            temp2.SourceLineNumber = 15;
            temp2.SourceFileName = "InputPage.ux";
            temp1.SourceLineNumber = 14;
            temp1.SourceFileName = "InputPage.ux";
            __self.Children.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Color";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly InputPage __parent;
        [Uno.WeakReference] internal readonly InputPage __parentInstance;
        public Template1(InputPage parent, InputPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Panel();
            __self.SourceLineNumber = 18;
            __self.SourceFileName = "InputPage.ux";
            global::Fuse.Controls.Grid.SetRowSpan(__self, 3);
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly InputPage __parent;
        [Uno.WeakReference] internal readonly InputPage __parentInstance;
        public Template2(InputPage parent, InputPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Text_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb11;
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::wbButton();
            __self_Text_inst = new AccountBook_FuseControlsButtonBase_Text_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("");
            var temp1 = new global::Fuse.Reactive.Data("BalanceAdd");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp, Fuse.Reactive.BindingMode.Default);
            temp_eb11 = new global::Fuse.Reactive.EventBinding(temp1);
            __self.SourceLineNumber = 41;
            __self.SourceFileName = "InputPage.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb11.OnEvent);
            temp.SourceLineNumber = 41;
            temp.SourceFileName = "InputPage.ux";
            temp1.SourceLineNumber = 41;
            temp1.SourceFileName = "InputPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp_eb11);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly InputPage __parent;
        [Uno.WeakReference] internal readonly InputPage __parentInstance;
        public Template3(InputPage parent, InputPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<bool> ModalConfirm_IsEnabled_inst;
        global::Uno.UX.Property<string> temp_Text_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb15;
        internal global::Fuse.Reactive.EventBinding temp_eb16;
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Grid();
            ModalConfirm_IsEnabled_inst = new AccountBook_FuseAlternateRoot_IsEnabled_Property(__parent.ModalConfirm, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("SelectUsage");
            var temp = new global::wbButton_Left();
            temp_Text_inst = new AccountBook_FuseControlsButtonBase_Text_Property(temp, __selector1);
            var temp2 = new global::Fuse.Reactive.Data("name");
            var temp3 = new global::Fuse.Reactive.Data("removeItem");
            var temp4 = new global::Fuse.Controls.ScrollView();
            var temp5 = new global::Fuse.Gestures.Clicked();
            var temp6 = new global::Fuse.Triggers.Actions.Set<bool>(ModalConfirm_IsEnabled_inst);
            var temp7 = new global::Fuse.PlaySound();
            temp_eb15 = new global::Fuse.Reactive.EventBinding(temp1);
            var temp8 = new global::Fuse.Reactive.DataBinding(temp_Text_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp9 = new global::wbButton();
            temp_eb16 = new global::Fuse.Reactive.EventBinding(temp3);
            var temp10 = new global::Fuse.Triggers.LayoutAnimation();
            var temp11 = new global::Fuse.Animations.Move();
            var temp12 = new global::Fuse.Triggers.AddingAnimation();
            var temp13 = new global::Fuse.Animations.Move();
            var temp14 = new global::Fuse.Triggers.RemovingAnimation();
            var temp15 = new global::Fuse.Animations.Move();
            __self.ColumnCount = 10;
            __self.SourceLineNumber = 70;
            __self.SourceFileName = "InputPage.ux";
            temp4.AllowedScrollDirections = Fuse.Controls.ScrollDirections.Horizontal;
            temp4.SourceLineNumber = 71;
            temp4.SourceFileName = "InputPage.ux";
            global::Fuse.Controls.Grid.SetColumnSpan(temp4, 7);
            temp4.Children.Add(temp);
            temp.SourceLineNumber = 72;
            temp.SourceFileName = "InputPage.ux";
            global::Fuse.Gestures.Clicked.AddHandler(temp, temp_eb15.OnEvent);
            temp.Children.Add(temp5);
            temp.Bindings.Add(temp_eb15);
            temp.Bindings.Add(temp8);
            temp5.SourceLineNumber = 73;
            temp5.SourceFileName = "InputPage.ux";
            temp5.Actions.Add(temp6);
            temp5.Actions.Add(temp7);
            temp6.Value = false;
            temp6.SourceLineNumber = 74;
            temp6.SourceFileName = "InputPage.ux";
            temp7.SourceLineNumber = 75;
            temp7.SourceFileName = "InputPage.ux";
            temp7.File = new global::Uno.UX.BundleFileSource(import("../../../Click.wav"));
            temp1.SourceLineNumber = 72;
            temp1.SourceFileName = "InputPage.ux";
            temp2.SourceLineNumber = 72;
            temp2.SourceFileName = "InputPage.ux";
            temp9.Text = "Delete";
            temp9.Margin = float4(7f, 7f, 7f, 7f);
            temp9.SourceLineNumber = 79;
            temp9.SourceFileName = "InputPage.ux";
            global::Fuse.Controls.Grid.SetColumnSpan(temp9, 3);
            global::Fuse.Gestures.Clicked.AddHandler(temp9, temp_eb16.OnEvent);
            temp9.Bindings.Add(temp_eb16);
            temp3.SourceLineNumber = 79;
            temp3.SourceFileName = "InputPage.ux";
            temp10.SourceLineNumber = 80;
            temp10.SourceFileName = "InputPage.ux";
            temp10.Animators.Add(temp11);
            temp11.Y = 1f;
            temp11.Duration = 0.4;
            temp11.RelativeTo = Fuse.Triggers.LayoutTransition.PositionLayoutChange;
            temp11.Easing = Fuse.Animations.Easing.ElasticIn;
            temp12.SourceLineNumber = 84;
            temp12.SourceFileName = "InputPage.ux";
            temp12.Animators.Add(temp13);
            temp13.X = 1f;
            temp13.Duration = 0.3;
            temp13.RelativeTo = Fuse.TranslationModes.Size;
            temp13.Easing = Fuse.Animations.Easing.CircularIn;
            temp14.SourceLineNumber = 88;
            temp14.SourceFileName = "InputPage.ux";
            temp14.Animators.Add(temp15);
            temp15.X = -1f;
            temp15.Duration = 0.4;
            temp15.RelativeTo = Fuse.TranslationModes.Size;
            temp15.Easing = Fuse.Animations.Easing.CircularOut;
            __self.Children.Add(temp4);
            __self.Children.Add(temp9);
            __self.Children.Add(temp10);
            __self.Children.Add(temp12);
            __self.Children.Add(temp14);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "IsEnabled";
        static global::Uno.UX.Selector __selector1 = "Text";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<float4> temp2_TextColor_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Text_inst;
    global::Uno.UX.Property<bool> ModalConfirm_IsEnabled_inst;
    global::Uno.UX.Property<string> usage_button_Text_inst;
    global::Uno.UX.Property<object> temp4_Items_inst;
    global::Uno.UX.Property<string> temp5_Text_inst;
    global::Uno.UX.Property<float4> temp6_Color_inst;
    global::Uno.UX.Property<float4> temp7_Color_inst;
    global::Uno.UX.Property<string> popup_input_Value_inst;
    global::Uno.UX.Property<float4> temp8_Color_inst;
    global::Uno.UX.Property<object> temp9_Items_inst;
    global::Uno.UX.Property<int> temp9_Offset_inst;
    global::Uno.UX.Property<int> temp9_Limit_inst;
    global::Uno.UX.Property<float4> temp10_Color_inst;
    global::Uno.UX.Property<Fuse.Visual> ModalConfirm_ParentNode_inst;
    internal global::Fuse.Controls.Panel FullWindo;
    internal global::Fuse.Reactive.EventBinding temp_eb10;
    internal global::wbButton usage_button;
    internal global::Fuse.Reactive.EventBinding temp_eb12;
    internal global::Fuse.Reactive.EventBinding temp_eb13;
    internal global::Fuse.AlternateRoot ModalConfirm;
    internal global::Fuse.Controls.TextInput popup_input;
    internal global::Fuse.Reactive.EventBinding temp_eb14;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "FullWindo",
        "temp_eb10",
        "usage_button",
        "temp_eb12",
        "temp_eb13",
        "ModalConfirm",
        "popup_input",
        "temp_eb14"
    };
    static InputPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public InputPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp11 = new global::Fuse.Reactive.Data("cashOrCardText");
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp12 = new global::Fuse.Reactive.Data("currentBalance");
        var temp2 = new global::Fuse.Controls.Text();
        temp2_TextColor_inst = new AccountBook_FuseControlsTextControl_TextColor_Property(temp2, __selector1);
        var temp13 = new global::Fuse.Reactive.Data("addingValueColor");
        var temp14 = new global::Fuse.Reactive.Data("inputVars");
        var temp15 = new global::Fuse.Reactive.Member(temp14, "pmType");
        var temp16 = " ";
        var temp17 = new global::Fuse.Reactive.Constant(temp16);
        var temp18 = new global::Fuse.Reactive.Data("addingValue");
        var temp19 = new global::Fuse.Reactive.Add(temp17, temp18);
        temp2_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp2, __selector0);
        var temp20 = new global::Fuse.Reactive.Add(temp15, temp19);
        var temp3 = new global::wbButton();
        temp3_Text_inst = new AccountBook_FuseControlsButtonBase_Text_Property(temp3, __selector2);
        var temp21 = new global::Fuse.Reactive.Data("payTypeText");
        var temp22 = new global::Fuse.Reactive.Data("PayTypeChange");
        ModalConfirm = new global::Fuse.AlternateRoot();
        ModalConfirm_IsEnabled_inst = new AccountBook_FuseAlternateRoot_IsEnabled_Property(ModalConfirm, __selector3);
        usage_button = new global::wbButton();
        usage_button_Text_inst = new AccountBook_FuseControlsButtonBase_Text_Property(usage_button, __selector2);
        var temp23 = new global::Fuse.Reactive.Data("selected");
        var temp4 = new global::Fuse.Reactive.Each();
        temp4_Items_inst = new AccountBook_FuseReactiveEach_Items_Property(temp4, __selector4);
        var temp24 = new global::Fuse.Reactive.Data("numSet");
        var temp25 = new global::Fuse.Reactive.Data("Backspace");
        var temp5 = new global::pmButton();
        temp5_Text_inst = new AccountBook_pmButton_Text_Property(temp5, __selector2);
        var temp26 = new global::Fuse.Reactive.Data("pmTypeText");
        var temp27 = new global::Fuse.Reactive.Data("Submit");
        var temp6 = new global::Fuse.Controls.Grid();
        temp6_Color_inst = new AccountBook_FuseControlsPanel_Color_Property(temp6, __selector5);
        var temp28 = new global::Fuse.Reactive.Resource("Col_type3");
        var temp7 = new global::Fuse.Drawing.Stroke();
        temp7_Color_inst = new AccountBook_FuseDrawingStroke_Color_Property(temp7, __selector5);
        var temp29 = new global::Fuse.Reactive.Resource("Col_type3");
        popup_input = new global::Fuse.Controls.TextInput();
        popup_input_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(popup_input, __selector0);
        var temp30 = new global::Fuse.Reactive.Data("usageListAddInput");
        var temp31 = new global::Fuse.Reactive.Data("AddToTempUsageList");
        var temp8 = new global::Fuse.Controls.Rectangle();
        temp8_Color_inst = new AccountBook_FuseControlsShape_Color_Property(temp8, __selector5);
        var temp32 = new global::Fuse.Reactive.Resource("Col_type3");
        var temp9 = new global::Fuse.Reactive.Each();
        temp9_Items_inst = new AccountBook_FuseReactiveEach_Items_Property(temp9, __selector4);
        var temp33 = new global::Fuse.Reactive.Data("tempUsageList");
        temp9_Offset_inst = new AccountBook_FuseReactiveEach_Offset_Property(temp9, __selector6);
        var temp34 = new global::Fuse.Reactive.Data("offset");
        temp9_Limit_inst = new AccountBook_FuseReactiveEach_Limit_Property(temp9, __selector7);
        var temp35 = new global::Fuse.Reactive.Data("limit");
        var temp10 = new global::Fuse.Drawing.Stroke();
        temp10_Color_inst = new AccountBook_FuseDrawingStroke_Color_Property(temp10, __selector5);
        var temp36 = new global::Fuse.Reactive.Resource("Col_type3");
        ModalConfirm_ParentNode_inst = new AccountBook_FuseAlternateRoot_ParentNode_Property(ModalConfirm, __selector8);
        var temp37 = new global::Fuse.Reactive.Resource("FullWindow");
        var temp38 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        FullWindo = new global::Fuse.Controls.Panel();
        var temp39 = new global::Fuse.Controls.Grid();
        var temp40 = new global::Fuse.Controls.Panel();
        var temp41 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp11, Fuse.Reactive.BindingMode.Default);
        var temp42 = new global::Fuse.Controls.Text();
        var temp43 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp12, Fuse.Reactive.BindingMode.Default);
        var temp44 = new global::Fuse.Reactive.DataBinding(temp2_TextColor_inst, temp13, Fuse.Reactive.BindingMode.Default);
        var temp45 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp20, Fuse.Reactive.BindingMode.Default);
        var temp46 = new global::Fuse.Controls.Panel();
        var temp47 = new global::Fuse.Reactive.Each();
        var temp48 = new Template(this, this);
        var temp49 = new Template1(this, this);
        var temp50 = new global::Fuse.Controls.Panel();
        var temp51 = new global::Fuse.Controls.Rectangle();
        var temp52 = new global::Fuse.Effects.DropShadow();
        var temp53 = new global::Fuse.Reactive.DataBinding(temp3_Text_inst, temp21, Fuse.Reactive.BindingMode.Default);
        temp_eb10 = new global::Fuse.Reactive.EventBinding(temp22);
        var temp54 = new global::Fuse.Controls.Grid();
        var temp55 = new global::Fuse.Gestures.Clicked();
        var temp56 = new global::Fuse.Triggers.Actions.Set<bool>(ModalConfirm_IsEnabled_inst);
        var temp57 = new global::Fuse.Reactive.DataBinding(usage_button_Text_inst, temp23, Fuse.Reactive.BindingMode.Default);
        var temp58 = new Template2(this, this);
        var temp59 = new global::Fuse.Reactive.DataBinding(temp4_Items_inst, temp24, Fuse.Reactive.BindingMode.Default);
        var temp60 = new global::wbButton();
        temp_eb12 = new global::Fuse.Reactive.EventBinding(temp25);
        var temp61 = new global::Fuse.Reactive.DataBinding(temp5_Text_inst, temp26, Fuse.Reactive.BindingMode.Default);
        var temp62 = new global::wbButton();
        temp_eb13 = new global::Fuse.Reactive.EventBinding(temp27);
        var temp63 = new global::Fuse.Reactive.DataBinding(temp6_Color_inst, temp28, Fuse.Reactive.BindingMode.Default);
        var temp64 = new global::Fuse.Resources.ResourceObject();
        var temp65 = new global::Fuse.Controls.Panel();
        var temp66 = new global::Fuse.Controls.StackPanel();
        var temp67 = new global::Fuse.Controls.Rectangle();
        var temp68 = new global::Fuse.Reactive.DataBinding(temp7_Color_inst, temp29, Fuse.Reactive.BindingMode.Default);
        var temp69 = new global::Fuse.Controls.ScrollView();
        var temp70 = new global::Fuse.Controls.Grid();
        var temp71 = new global::Fuse.Reactive.DataBinding(popup_input_Value_inst, temp30, Fuse.Reactive.BindingMode.Default);
        var temp72 = new global::wbButton();
        temp_eb14 = new global::Fuse.Reactive.EventBinding(temp31);
        var temp73 = new global::Fuse.Reactive.DataBinding(temp8_Color_inst, temp32, Fuse.Reactive.BindingMode.Default);
        var temp74 = new global::Fuse.Controls.DockPanel();
        var temp75 = new global::Fuse.Controls.ScrollView();
        var temp76 = new global::Fuse.Controls.StackPanel();
        var temp77 = new Template3(this, this);
        var temp78 = new global::Fuse.Reactive.DataBinding(temp9_Items_inst, temp33, Fuse.Reactive.BindingMode.Default);
        var temp79 = new global::Fuse.Reactive.DataBinding(temp9_Offset_inst, temp34, Fuse.Reactive.BindingMode.Default);
        var temp80 = new global::Fuse.Reactive.DataBinding(temp9_Limit_inst, temp35, Fuse.Reactive.BindingMode.Default);
        var temp81 = new global::Fuse.Controls.Button();
        var temp82 = new global::Fuse.Controls.Text();
        var temp83 = new global::Fuse.Controls.Rectangle();
        var temp84 = new global::Fuse.Reactive.DataBinding(temp10_Color_inst, temp36, Fuse.Reactive.BindingMode.Default);
        var temp85 = new global::Fuse.Gestures.Clicked();
        var temp86 = new global::Fuse.Triggers.Actions.Set<bool>(ModalConfirm_IsEnabled_inst);
        var temp87 = new global::Fuse.PlaySound();
        var temp88 = new global::Fuse.Reactive.DataBinding(ModalConfirm_ParentNode_inst, temp37, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "InputPage.ux";
        temp38.LineNumber = 2;
        temp38.FileName = "InputPage.ux";
        temp38.SourceLineNumber = 2;
        temp38.SourceFileName = "InputPage.ux";
        temp38.File = new global::Uno.UX.BundleFileSource(import("../../../Modules/InputPage.js"));
        FullWindo.Layer = Fuse.Layer.Overlay;
        FullWindo.Name = __selector9;
        FullWindo.SourceLineNumber = 4;
        FullWindo.SourceFileName = "InputPage.ux";
        temp39.RowCount = 100;
        temp39.SourceLineNumber = 5;
        temp39.SourceFileName = "InputPage.ux";
        temp39.Children.Add(temp40);
        temp39.Children.Add(temp);
        temp39.Children.Add(temp42);
        temp39.Children.Add(temp1);
        temp39.Children.Add(temp2);
        temp39.Children.Add(temp46);
        temp39.Children.Add(temp47);
        temp39.Children.Add(temp50);
        temp39.Children.Add(temp6);
        temp40.SourceLineNumber = 6;
        temp40.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetRowSpan(temp40, 21);
        temp.Color = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 7;
        temp.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetRowSpan(temp, 3);
        temp.Bindings.Add(temp41);
        temp11.SourceLineNumber = 7;
        temp11.SourceFileName = "InputPage.ux";
        temp42.Value = "Current Balance";
        temp42.Color = float4(0f, 0f, 0f, 1f);
        temp42.Alignment = Fuse.Elements.Alignment.Center;
        temp42.SourceLineNumber = 8;
        temp42.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetRowSpan(temp42, 3);
        temp1.FontSize = 45f;
        temp1.Color = float4(0f, 0f, 0f, 1f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        temp1.SourceLineNumber = 9;
        temp1.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetRowSpan(temp1, 7);
        temp1.Bindings.Add(temp43);
        temp12.SourceLineNumber = 9;
        temp12.SourceFileName = "InputPage.ux";
        temp2.FontSize = 30f;
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.SourceLineNumber = 10;
        temp2.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetRowSpan(temp2, 2);
        temp2.Bindings.Add(temp44);
        temp2.Bindings.Add(temp45);
        temp13.SourceLineNumber = 10;
        temp13.SourceFileName = "InputPage.ux";
        temp20.SourceLineNumber = 10;
        temp20.SourceFileName = "InputPage.ux";
        temp14.SourceLineNumber = 10;
        temp14.SourceFileName = "InputPage.ux";
        temp15.SourceLineNumber = 10;
        temp15.SourceFileName = "InputPage.ux";
        temp19.SourceLineNumber = 10;
        temp19.SourceFileName = "InputPage.ux";
        temp17.SourceLineNumber = 10;
        temp17.SourceFileName = "InputPage.ux";
        temp18.SourceLineNumber = 10;
        temp18.SourceFileName = "InputPage.ux";
        temp46.SourceLineNumber = 11;
        temp46.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetRowSpan(temp46, 15);
        temp47.Count = 2;
        temp47.SourceLineNumber = 12;
        temp47.SourceFileName = "InputPage.ux";
        temp47.Templates.Add(temp48);
        temp47.Templates.Add(temp49);
        temp50.SourceLineNumber = 21;
        temp50.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetRowSpan(temp50, 3);
        temp50.Children.Add(temp51);
        temp51.Color = float4(0.4f, 0.4f, 0.4f, 0.4f);
        temp51.SourceLineNumber = 22;
        temp51.SourceFileName = "InputPage.ux";
        temp6.RowCount = 4;
        temp6.ColumnCount = 5;
        temp6.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp6.Alignment = Fuse.Elements.Alignment.Bottom;
        temp6.Padding = float4(5f, 10f, 5f, 10f);
        temp6.SourceLineNumber = 26;
        temp6.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetRowSpan(temp6, 35);
        temp6.Children.Add(temp3);
        temp6.Children.Add(temp54);
        temp6.Children.Add(temp4);
        temp6.Children.Add(temp60);
        temp6.Children.Add(temp5);
        temp6.Children.Add(temp62);
        temp6.Bindings.Add(temp63);
        temp3.SourceLineNumber = 28;
        temp3.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetColumnSpan(temp3, 3);
        global::Fuse.Gestures.Clicked.AddHandler(temp3, temp_eb10.OnEvent);
        temp3.Children.Add(temp52);
        temp3.Bindings.Add(temp53);
        temp3.Bindings.Add(temp_eb10);
        temp52.Size = 4f;
        temp52.Angle = 90f;
        temp52.Distance = 1f;
        temp52.Spread = 0.2f;
        temp52.Color = float4(0f, 0f, 0f, 0.3764706f);
        temp52.SourceLineNumber = 29;
        temp52.SourceFileName = "InputPage.ux";
        temp21.SourceLineNumber = 28;
        temp21.SourceFileName = "InputPage.ux";
        temp22.SourceLineNumber = 28;
        temp22.SourceFileName = "InputPage.ux";
        temp54.RowCount = 1;
        temp54.ColumnCount = 8;
        temp54.SourceLineNumber = 32;
        temp54.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetColumnSpan(temp54, 2);
        temp54.Children.Add(usage_button);
        usage_button.Name = __selector10;
        usage_button.SourceLineNumber = 33;
        usage_button.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetColumnSpan(usage_button, 8);
        usage_button.Children.Add(temp55);
        usage_button.Bindings.Add(temp57);
        temp55.SourceLineNumber = 34;
        temp55.SourceFileName = "InputPage.ux";
        temp55.Actions.Add(temp56);
        temp56.Value = true;
        temp56.SourceLineNumber = 35;
        temp56.SourceFileName = "InputPage.ux";
        temp23.SourceLineNumber = 33;
        temp23.SourceFileName = "InputPage.ux";
        temp4.SourceLineNumber = 40;
        temp4.SourceFileName = "InputPage.ux";
        temp4.Templates.Add(temp58);
        temp4.Bindings.Add(temp59);
        temp24.SourceLineNumber = 40;
        temp24.SourceFileName = "InputPage.ux";
        temp60.Text = "<";
        temp60.SourceLineNumber = 43;
        temp60.SourceFileName = "InputPage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp60, temp_eb12.OnEvent);
        temp60.Bindings.Add(temp_eb12);
        temp25.SourceLineNumber = 43;
        temp25.SourceFileName = "InputPage.ux";
        temp5.SourceLineNumber = 44;
        temp5.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetColumnSpan(temp5, 2);
        temp5.Bindings.Add(temp61);
        temp26.SourceLineNumber = 44;
        temp26.SourceFileName = "InputPage.ux";
        temp62.Text = "PUT";
        temp62.SourceLineNumber = 45;
        temp62.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetColumnSpan(temp62, 2);
        global::Fuse.Gestures.Clicked.AddHandler(temp62, temp_eb13.OnEvent);
        temp62.Bindings.Add(temp_eb13);
        temp27.SourceLineNumber = 45;
        temp27.SourceFileName = "InputPage.ux";
        temp28.SourceLineNumber = 26;
        temp28.SourceFileName = "InputPage.ux";
        temp64.Key = "FullWindow";
        temp64.SourceLineNumber = 48;
        temp64.SourceFileName = "InputPage.ux";
        temp64.Value = FullWindo;
        ModalConfirm.IsEnabled = false;
        ModalConfirm.Name = __selector11;
        ModalConfirm.SourceLineNumber = 49;
        ModalConfirm.SourceFileName = "InputPage.ux";
        ModalConfirm.Node = temp65;
        ModalConfirm.Bindings.Add(temp88);
        temp65.Color = float4(1f, 1f, 1f, 0f);
        temp65.Layer = Fuse.Layer.Overlay;
        temp65.SourceLineNumber = 50;
        temp65.SourceFileName = "InputPage.ux";
        temp65.Children.Add(temp66);
        temp66.Alignment = Fuse.Elements.Alignment.Center;
        temp66.Padding = float4(10f, 10f, 10f, 10f);
        temp66.SourceLineNumber = 51;
        temp66.SourceFileName = "InputPage.ux";
        temp66.Children.Add(temp67);
        temp66.Children.Add(temp69);
        temp66.Children.Add(temp74);
        temp66.Children.Add(temp81);
        temp67.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp67.Color = float4(1f, 1f, 1f, 1f);
        temp67.Layer = Fuse.Layer.Background;
        temp67.SourceLineNumber = 52;
        temp67.SourceFileName = "InputPage.ux";
        temp67.Strokes.Add(temp7);
        temp67.Bindings.Add(temp68);
        temp7.Width = 2f;
        temp29.SourceLineNumber = 53;
        temp29.SourceFileName = "InputPage.ux";
        temp69.SourceLineNumber = 56;
        temp69.SourceFileName = "InputPage.ux";
        temp69.Children.Add(temp8);
        temp8.CornerRadius = float4(8f, 8f, 8f, 8f);
        temp8.SourceLineNumber = 57;
        temp8.SourceFileName = "InputPage.ux";
        temp8.Children.Add(temp70);
        temp8.Bindings.Add(temp73);
        temp70.ColumnCount = 8;
        temp70.SourceLineNumber = 58;
        temp70.SourceFileName = "InputPage.ux";
        temp70.Children.Add(popup_input);
        temp70.Children.Add(temp72);
        popup_input.PlaceholderText = "add your usage";
        popup_input.TextAlignment = Fuse.Controls.TextAlignment.Center;
        popup_input.TextColor = float4(0f, 0f, 0f, 1f);
        popup_input.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        popup_input.Name = __selector12;
        popup_input.SourceLineNumber = 59;
        popup_input.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetColumnSpan(popup_input, 6);
        popup_input.Bindings.Add(temp71);
        temp30.SourceLineNumber = 59;
        temp30.SourceFileName = "InputPage.ux";
        temp72.Text = "ADD";
        temp72.SourceLineNumber = 60;
        temp72.SourceFileName = "InputPage.ux";
        global::Fuse.Controls.Grid.SetColumnSpan(temp72, 2);
        global::Fuse.Gestures.Clicked.AddHandler(temp72, temp_eb14.OnEvent);
        temp72.Bindings.Add(temp_eb14);
        temp31.SourceLineNumber = 60;
        temp31.SourceFileName = "InputPage.ux";
        temp32.SourceLineNumber = 57;
        temp32.SourceFileName = "InputPage.ux";
        temp74.SourceLineNumber = 66;
        temp74.SourceFileName = "InputPage.ux";
        temp74.Children.Add(temp75);
        temp75.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp75.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp75.SourceLineNumber = 67;
        temp75.SourceFileName = "InputPage.ux";
        temp75.Children.Add(temp76);
        temp76.SourceLineNumber = 68;
        temp76.SourceFileName = "InputPage.ux";
        temp76.Children.Add(temp9);
        temp9.SourceLineNumber = 69;
        temp9.SourceFileName = "InputPage.ux";
        temp9.Templates.Add(temp77);
        temp9.Bindings.Add(temp78);
        temp9.Bindings.Add(temp79);
        temp9.Bindings.Add(temp80);
        temp33.SourceLineNumber = 69;
        temp33.SourceFileName = "InputPage.ux";
        temp34.SourceLineNumber = 69;
        temp34.SourceFileName = "InputPage.ux";
        temp35.SourceLineNumber = 69;
        temp35.SourceFileName = "InputPage.ux";
        temp81.SourceLineNumber = 97;
        temp81.SourceFileName = "InputPage.ux";
        temp81.Children.Add(temp82);
        temp81.Children.Add(temp83);
        temp81.Children.Add(temp85);
        temp82.Value = "OK";
        temp82.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp82.Color = float4(0f, 0f, 0f, 1f);
        temp82.Alignment = Fuse.Elements.Alignment.Center;
        temp82.SourceLineNumber = 98;
        temp82.SourceFileName = "InputPage.ux";
        temp83.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp83.SourceLineNumber = 99;
        temp83.SourceFileName = "InputPage.ux";
        temp83.Strokes.Add(temp10);
        temp83.Bindings.Add(temp84);
        temp10.Width = 2f;
        temp36.SourceLineNumber = 100;
        temp36.SourceFileName = "InputPage.ux";
        temp85.SourceLineNumber = 102;
        temp85.SourceFileName = "InputPage.ux";
        temp85.Actions.Add(temp86);
        temp85.Actions.Add(temp87);
        temp86.Value = false;
        temp86.SourceLineNumber = 103;
        temp86.SourceFileName = "InputPage.ux";
        temp87.SourceLineNumber = 104;
        temp87.SourceFileName = "InputPage.ux";
        temp87.File = new global::Uno.UX.BundleFileSource(import("../../../Click.wav"));
        temp37.SourceLineNumber = 49;
        temp37.SourceFileName = "InputPage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(FullWindo);
        __g_nametable.Objects.Add(temp_eb10);
        __g_nametable.Objects.Add(usage_button);
        __g_nametable.Objects.Add(temp_eb12);
        __g_nametable.Objects.Add(temp_eb13);
        __g_nametable.Objects.Add(ModalConfirm);
        __g_nametable.Objects.Add(popup_input);
        __g_nametable.Objects.Add(temp_eb14);
        this.Children.Add(temp38);
        this.Children.Add(FullWindo);
        this.Children.Add(temp39);
        this.Children.Add(temp64);
        this.Children.Add(ModalConfirm);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "TextColor";
    static global::Uno.UX.Selector __selector2 = "Text";
    static global::Uno.UX.Selector __selector3 = "IsEnabled";
    static global::Uno.UX.Selector __selector4 = "Items";
    static global::Uno.UX.Selector __selector5 = "Color";
    static global::Uno.UX.Selector __selector6 = "Offset";
    static global::Uno.UX.Selector __selector7 = "Limit";
    static global::Uno.UX.Selector __selector8 = "ParentNode";
    static global::Uno.UX.Selector __selector9 = "FullWindo";
    static global::Uno.UX.Selector __selector10 = "usage_button";
    static global::Uno.UX.Selector __selector11 = "ModalConfirm";
    static global::Uno.UX.Selector __selector12 = "popup_input";
}
