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
            global::Fuse.Controls.Grid.SetRowSpan(__self, 3);
            temp.Children.Add(temp2);
            temp.Bindings.Add(temp3);
            temp2.Size = 0.4f;
            temp2.Angle = 90f;
            temp2.Distance = 1f;
            temp2.Spread = 0.2f;
            temp2.Color = float4(0f, 0f, 0f, 0.3764706f);
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
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb11.OnEvent);
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
            temp4.AllowedScrollDirections = Fuse.Controls.ScrollDirections.Horizontal;
            global::Fuse.Controls.Grid.SetColumnSpan(temp4, 7);
            temp4.Children.Add(temp);
            global::Fuse.Gestures.Clicked.AddHandler(temp, temp_eb15.OnEvent);
            temp.Children.Add(temp5);
            temp.Bindings.Add(temp_eb15);
            temp.Bindings.Add(temp8);
            temp5.Actions.Add(temp6);
            temp5.Actions.Add(temp7);
            temp6.Value = false;
            temp7.File = new global::Uno.UX.BundleFileSource(import("../../Click.wav"));
            temp9.Text = "Delete";
            temp9.Margin = float4(7f, 7f, 7f, 7f);
            global::Fuse.Controls.Grid.SetColumnSpan(temp9, 3);
            global::Fuse.Gestures.Clicked.AddHandler(temp9, temp_eb16.OnEvent);
            temp9.Bindings.Add(temp_eb16);
            temp10.Animators.Add(temp11);
            temp11.Y = 1f;
            temp11.Duration = 0.4;
            temp11.RelativeTo = Fuse.Triggers.LayoutTransition.PositionLayoutChange;
            temp11.Easing = Fuse.Animations.Easing.ElasticIn;
            temp12.Animators.Add(temp13);
            temp13.X = 1f;
            temp13.Duration = 0.3;
            temp13.RelativeTo = Fuse.TranslationModes.Size;
            temp13.Easing = Fuse.Animations.Easing.CircularIn;
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
    global::Uno.UX.Property<float4> temp3_Color_inst;
    global::Uno.UX.Property<string> temp4_Text_inst;
    global::Uno.UX.Property<bool> ModalConfirm_IsEnabled_inst;
    global::Uno.UX.Property<string> usage_button_Text_inst;
    global::Uno.UX.Property<object> temp5_Items_inst;
    global::Uno.UX.Property<string> temp6_Text_inst;
    global::Uno.UX.Property<float4> temp7_Color_inst;
    global::Uno.UX.Property<float4> temp8_Color_inst;
    global::Uno.UX.Property<string> popup_input_Value_inst;
    global::Uno.UX.Property<float4> temp9_Color_inst;
    global::Uno.UX.Property<object> temp10_Items_inst;
    global::Uno.UX.Property<int> temp10_Offset_inst;
    global::Uno.UX.Property<int> temp10_Limit_inst;
    global::Uno.UX.Property<float4> temp11_Color_inst;
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
        var temp12 = new global::Fuse.Reactive.Data("cashOrCardText");
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp13 = new global::Fuse.Reactive.Data("currentBalance");
        var temp2 = new global::Fuse.Controls.Text();
        temp2_TextColor_inst = new AccountBook_FuseControlsTextControl_TextColor_Property(temp2, __selector1);
        var temp14 = new global::Fuse.Reactive.Data("addingValueColor");
        var temp15 = new global::Fuse.Reactive.Data("inputVars");
        var temp16 = new global::Fuse.Reactive.Member(temp15, "pmType");
        var temp17 = " ";
        var temp18 = new global::Fuse.Reactive.Constant(temp17);
        var temp19 = new global::Fuse.Reactive.Data("addingValue");
        var temp20 = new global::Fuse.Reactive.Add(temp18, temp19);
        temp2_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp2, __selector0);
        var temp21 = new global::Fuse.Reactive.Add(temp16, temp20);
        var temp3 = new global::Fuse.Controls.Rectangle();
        temp3_Color_inst = new AccountBook_FuseControlsShape_Color_Property(temp3, __selector2);
        var temp22 = new global::Fuse.Reactive.Resource("Col_type3");
        var temp4 = new global::wbButton();
        temp4_Text_inst = new AccountBook_FuseControlsButtonBase_Text_Property(temp4, __selector3);
        var temp23 = new global::Fuse.Reactive.Data("payTypeText");
        var temp24 = new global::Fuse.Reactive.Data("PayTypeChange");
        ModalConfirm = new global::Fuse.AlternateRoot();
        ModalConfirm_IsEnabled_inst = new AccountBook_FuseAlternateRoot_IsEnabled_Property(ModalConfirm, __selector4);
        usage_button = new global::wbButton();
        usage_button_Text_inst = new AccountBook_FuseControlsButtonBase_Text_Property(usage_button, __selector3);
        var temp25 = new global::Fuse.Reactive.Data("selected");
        var temp5 = new global::Fuse.Reactive.Each();
        temp5_Items_inst = new AccountBook_FuseReactiveEach_Items_Property(temp5, __selector5);
        var temp26 = new global::Fuse.Reactive.Data("numSet");
        var temp27 = new global::Fuse.Reactive.Data("Backspace");
        var temp6 = new global::pmButton();
        temp6_Text_inst = new AccountBook_FuseControlsButtonBase_Text_Property(temp6, __selector3);
        var temp28 = new global::Fuse.Reactive.Data("pmTypeText");
        var temp29 = new global::Fuse.Reactive.Data("Submit");
        var temp7 = new global::Fuse.Controls.Grid();
        temp7_Color_inst = new AccountBook_FuseControlsPanel_Color_Property(temp7, __selector2);
        var temp30 = new global::Fuse.Reactive.Resource("Col_type3");
        var temp8 = new global::Fuse.Drawing.Stroke();
        temp8_Color_inst = new AccountBook_FuseDrawingStroke_Color_Property(temp8, __selector2);
        var temp31 = new global::Fuse.Reactive.Resource("Col_type3");
        popup_input = new global::Fuse.Controls.TextInput();
        popup_input_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(popup_input, __selector0);
        var temp32 = new global::Fuse.Reactive.Data("usageListAddInput");
        var temp33 = new global::Fuse.Reactive.Data("AddToTempUsageList");
        var temp9 = new global::Fuse.Controls.Rectangle();
        temp9_Color_inst = new AccountBook_FuseControlsShape_Color_Property(temp9, __selector2);
        var temp34 = new global::Fuse.Reactive.Resource("Col_type3");
        var temp10 = new global::Fuse.Reactive.Each();
        temp10_Items_inst = new AccountBook_FuseReactiveEach_Items_Property(temp10, __selector5);
        var temp35 = new global::Fuse.Reactive.Data("tempUsageList");
        temp10_Offset_inst = new AccountBook_FuseReactiveEach_Offset_Property(temp10, __selector6);
        var temp36 = new global::Fuse.Reactive.Data("offset");
        temp10_Limit_inst = new AccountBook_FuseReactiveEach_Limit_Property(temp10, __selector7);
        var temp37 = new global::Fuse.Reactive.Data("limit");
        var temp11 = new global::Fuse.Drawing.Stroke();
        temp11_Color_inst = new AccountBook_FuseDrawingStroke_Color_Property(temp11, __selector2);
        var temp38 = new global::Fuse.Reactive.Resource("Col_type3");
        ModalConfirm_ParentNode_inst = new AccountBook_FuseAlternateRoot_ParentNode_Property(ModalConfirm, __selector8);
        var temp39 = new global::Fuse.Reactive.Resource("FullWindow");
        var temp40 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        FullWindo = new global::Fuse.Controls.Panel();
        var temp41 = new global::Fuse.Controls.Grid();
        var temp42 = new global::Fuse.Controls.Panel();
        var temp43 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp12, Fuse.Reactive.BindingMode.Default);
        var temp44 = new global::Fuse.Controls.Text();
        var temp45 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp13, Fuse.Reactive.BindingMode.Default);
        var temp46 = new global::Fuse.Reactive.DataBinding(temp2_TextColor_inst, temp14, Fuse.Reactive.BindingMode.Default);
        var temp47 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp21, Fuse.Reactive.BindingMode.Default);
        var temp48 = new global::Fuse.Controls.Panel();
        var temp49 = new global::Fuse.Reactive.Each();
        var temp50 = new Template(this, this);
        var temp51 = new Template1(this, this);
        var temp52 = new global::Fuse.Controls.Panel();
        var temp53 = new global::Fuse.Reactive.DataBinding(temp3_Color_inst, temp22, Fuse.Reactive.BindingMode.Default);
        var temp54 = new global::Fuse.Effects.DropShadow();
        var temp55 = new global::Fuse.Reactive.DataBinding(temp4_Text_inst, temp23, Fuse.Reactive.BindingMode.Default);
        temp_eb10 = new global::Fuse.Reactive.EventBinding(temp24);
        var temp56 = new global::Fuse.Controls.Grid();
        var temp57 = new global::Fuse.Gestures.Clicked();
        var temp58 = new global::Fuse.Triggers.Actions.Set<bool>(ModalConfirm_IsEnabled_inst);
        var temp59 = new global::Fuse.Reactive.DataBinding(usage_button_Text_inst, temp25, Fuse.Reactive.BindingMode.Default);
        var temp60 = new Template2(this, this);
        var temp61 = new global::Fuse.Reactive.DataBinding(temp5_Items_inst, temp26, Fuse.Reactive.BindingMode.Default);
        var temp62 = new global::wbButton();
        temp_eb12 = new global::Fuse.Reactive.EventBinding(temp27);
        var temp63 = new global::Fuse.Reactive.DataBinding(temp6_Text_inst, temp28, Fuse.Reactive.BindingMode.Default);
        var temp64 = new global::wbButton();
        temp_eb13 = new global::Fuse.Reactive.EventBinding(temp29);
        var temp65 = new global::Fuse.Reactive.DataBinding(temp7_Color_inst, temp30, Fuse.Reactive.BindingMode.Default);
        var temp66 = new global::Fuse.Resources.ResourceObject();
        var temp67 = new global::Fuse.Controls.Panel();
        var temp68 = new global::Fuse.Controls.StackPanel();
        var temp69 = new global::Fuse.Controls.Rectangle();
        var temp70 = new global::Fuse.Reactive.DataBinding(temp8_Color_inst, temp31, Fuse.Reactive.BindingMode.Default);
        var temp71 = new global::Fuse.Controls.ScrollView();
        var temp72 = new global::Fuse.Controls.Grid();
        var temp73 = new global::Fuse.Reactive.DataBinding(popup_input_Value_inst, temp32, Fuse.Reactive.BindingMode.Default);
        var temp74 = new global::wbButton();
        temp_eb14 = new global::Fuse.Reactive.EventBinding(temp33);
        var temp75 = new global::Fuse.Reactive.DataBinding(temp9_Color_inst, temp34, Fuse.Reactive.BindingMode.Default);
        var temp76 = new global::Fuse.Controls.DockPanel();
        var temp77 = new global::Fuse.Controls.ScrollView();
        var temp78 = new global::Fuse.Controls.StackPanel();
        var temp79 = new Template3(this, this);
        var temp80 = new global::Fuse.Reactive.DataBinding(temp10_Items_inst, temp35, Fuse.Reactive.BindingMode.Default);
        var temp81 = new global::Fuse.Reactive.DataBinding(temp10_Offset_inst, temp36, Fuse.Reactive.BindingMode.Default);
        var temp82 = new global::Fuse.Reactive.DataBinding(temp10_Limit_inst, temp37, Fuse.Reactive.BindingMode.Default);
        var temp83 = new global::Fuse.Controls.Button();
        var temp84 = new global::Fuse.Controls.Text();
        var temp85 = new global::Fuse.Controls.Rectangle();
        var temp86 = new global::Fuse.Reactive.DataBinding(temp11_Color_inst, temp38, Fuse.Reactive.BindingMode.Default);
        var temp87 = new global::Fuse.Gestures.Clicked();
        var temp88 = new global::Fuse.Triggers.Actions.Set<bool>(ModalConfirm_IsEnabled_inst);
        var temp89 = new global::Fuse.PlaySound();
        var temp90 = new global::Fuse.Reactive.DataBinding(ModalConfirm_ParentNode_inst, temp39, Fuse.Reactive.BindingMode.Default);
        temp40.LineNumber = 3;
        temp40.FileName = "InputPage.ux";
        temp40.File = new global::Uno.UX.BundleFileSource(import("../../Modules/InputPage.js"));
        FullWindo.Layer = Fuse.Layer.Overlay;
        FullWindo.Name = __selector9;
        temp41.RowCount = 100;
        temp41.Children.Add(temp42);
        temp41.Children.Add(temp);
        temp41.Children.Add(temp44);
        temp41.Children.Add(temp1);
        temp41.Children.Add(temp2);
        temp41.Children.Add(temp48);
        temp41.Children.Add(temp49);
        temp41.Children.Add(temp52);
        temp41.Children.Add(temp7);
        global::Fuse.Controls.Grid.SetRowSpan(temp42, 21);
        temp.Color = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.Grid.SetRowSpan(temp, 3);
        temp.Bindings.Add(temp43);
        temp44.Value = "Current Balance";
        temp44.Color = float4(0f, 0f, 0f, 1f);
        temp44.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.Grid.SetRowSpan(temp44, 3);
        temp1.FontSize = 45f;
        temp1.Color = float4(0f, 0f, 0f, 1f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.Grid.SetRowSpan(temp1, 7);
        temp1.Bindings.Add(temp45);
        temp2.FontSize = 30f;
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.Grid.SetRowSpan(temp2, 2);
        temp2.Bindings.Add(temp46);
        temp2.Bindings.Add(temp47);
        global::Fuse.Controls.Grid.SetRowSpan(temp48, 15);
        temp49.Count = 2;
        temp49.Templates.Add(temp50);
        temp49.Templates.Add(temp51);
        global::Fuse.Controls.Grid.SetRowSpan(temp52, 3);
        temp52.Children.Add(temp3);
        temp3.Bindings.Add(temp53);
        temp7.RowCount = 4;
        temp7.ColumnCount = 5;
        temp7.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp7.Alignment = Fuse.Elements.Alignment.Bottom;
        temp7.Padding = float4(5f, 10f, 5f, 10f);
        global::Fuse.Controls.Grid.SetRow(temp7, 66);
        global::Fuse.Controls.Grid.SetRowSpan(temp7, 35);
        temp7.Children.Add(temp4);
        temp7.Children.Add(temp56);
        temp7.Children.Add(temp5);
        temp7.Children.Add(temp62);
        temp7.Children.Add(temp6);
        temp7.Children.Add(temp64);
        temp7.Bindings.Add(temp65);
        global::Fuse.Controls.Grid.SetColumnSpan(temp4, 3);
        global::Fuse.Gestures.Clicked.AddHandler(temp4, temp_eb10.OnEvent);
        temp4.Children.Add(temp54);
        temp4.Bindings.Add(temp55);
        temp4.Bindings.Add(temp_eb10);
        temp54.Size = 4f;
        temp54.Angle = 90f;
        temp54.Distance = 1f;
        temp54.Spread = 0.2f;
        temp54.Color = float4(0f, 0f, 0f, 0.3764706f);
        temp56.RowCount = 1;
        temp56.ColumnCount = 8;
        global::Fuse.Controls.Grid.SetColumnSpan(temp56, 2);
        temp56.Children.Add(usage_button);
        usage_button.Name = __selector10;
        global::Fuse.Controls.Grid.SetColumnSpan(usage_button, 8);
        usage_button.Children.Add(temp57);
        usage_button.Bindings.Add(temp59);
        temp57.Actions.Add(temp58);
        temp58.Value = true;
        temp5.Templates.Add(temp60);
        temp5.Bindings.Add(temp61);
        temp62.Text = "◀";
        global::Fuse.Gestures.Clicked.AddHandler(temp62, temp_eb12.OnEvent);
        temp62.Bindings.Add(temp_eb12);
        global::Fuse.Controls.Grid.SetColumnSpan(temp6, 2);
        temp6.Bindings.Add(temp63);
        temp64.Text = "PUT";
        global::Fuse.Controls.Grid.SetColumnSpan(temp64, 2);
        global::Fuse.Gestures.Clicked.AddHandler(temp64, temp_eb13.OnEvent);
        temp64.Bindings.Add(temp_eb13);
        temp66.Key = "FullWindow";
        temp66.Value = FullWindo;
        ModalConfirm.IsEnabled = false;
        ModalConfirm.Name = __selector11;
        ModalConfirm.Node = temp67;
        ModalConfirm.Bindings.Add(temp90);
        temp67.Color = float4(1f, 1f, 1f, 0f);
        temp67.Layer = Fuse.Layer.Overlay;
        temp67.Children.Add(temp68);
        temp68.Alignment = Fuse.Elements.Alignment.Center;
        temp68.Padding = float4(10f, 10f, 10f, 10f);
        temp68.Children.Add(temp69);
        temp68.Children.Add(temp71);
        temp68.Children.Add(temp76);
        temp68.Children.Add(temp83);
        temp69.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp69.Color = float4(1f, 1f, 1f, 1f);
        temp69.Layer = Fuse.Layer.Background;
        temp69.Strokes.Add(temp8);
        temp69.Bindings.Add(temp70);
        temp8.Width = 2f;
        temp71.Children.Add(temp9);
        temp9.CornerRadius = float4(8f, 8f, 8f, 8f);
        temp9.Children.Add(temp72);
        temp9.Bindings.Add(temp75);
        temp72.ColumnCount = 8;
        temp72.Children.Add(popup_input);
        temp72.Children.Add(temp74);
        popup_input.PlaceholderText = "add your usage";
        popup_input.TextAlignment = Fuse.Controls.TextAlignment.Center;
        popup_input.TextColor = float4(0f, 0f, 0f, 1f);
        popup_input.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        popup_input.Name = __selector12;
        global::Fuse.Controls.Grid.SetColumnSpan(popup_input, 6);
        popup_input.Bindings.Add(temp73);
        temp74.Text = "ADD";
        global::Fuse.Controls.Grid.SetColumnSpan(temp74, 2);
        global::Fuse.Gestures.Clicked.AddHandler(temp74, temp_eb14.OnEvent);
        temp74.Bindings.Add(temp_eb14);
        temp76.Children.Add(temp77);
        temp77.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp77.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp77.Children.Add(temp78);
        temp78.Children.Add(temp10);
        temp10.Templates.Add(temp79);
        temp10.Bindings.Add(temp80);
        temp10.Bindings.Add(temp81);
        temp10.Bindings.Add(temp82);
        temp83.Children.Add(temp84);
        temp83.Children.Add(temp85);
        temp83.Children.Add(temp87);
        temp84.Value = "OK";
        temp84.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp84.Color = float4(0f, 0f, 0f, 1f);
        temp84.Alignment = Fuse.Elements.Alignment.Center;
        temp85.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp85.Strokes.Add(temp11);
        temp85.Bindings.Add(temp86);
        temp11.Width = 2f;
        temp87.Actions.Add(temp88);
        temp87.Actions.Add(temp89);
        temp88.Value = false;
        temp89.File = new global::Uno.UX.BundleFileSource(import("../../Click.wav"));
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
        this.Children.Add(temp40);
        this.Children.Add(FullWindo);
        this.Children.Add(temp41);
        this.Children.Add(temp66);
        this.Children.Add(ModalConfirm);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "TextColor";
    static global::Uno.UX.Selector __selector2 = "Color";
    static global::Uno.UX.Selector __selector3 = "Text";
    static global::Uno.UX.Selector __selector4 = "IsEnabled";
    static global::Uno.UX.Selector __selector5 = "Items";
    static global::Uno.UX.Selector __selector6 = "Offset";
    static global::Uno.UX.Selector __selector7 = "Limit";
    static global::Uno.UX.Selector __selector8 = "ParentNode";
    static global::Uno.UX.Selector __selector9 = "FullWindo";
    static global::Uno.UX.Selector __selector10 = "usage_button";
    static global::Uno.UX.Selector __selector11 = "ModalConfirm";
    static global::Uno.UX.Selector __selector12 = "popup_input";
}
