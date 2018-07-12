[Uno.Compiler.UxGenerated]
public partial class ListPage: Fuse.Controls.Panel
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ListPage __parent;
        [Uno.WeakReference] internal readonly ListPage __parentInstance;
        public Template(ListPage parent, ListPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Group : uniting lists to unit list";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ListPage __parent;
        [Uno.WeakReference] internal readonly ListPage __parentInstance;
        public Template1(ListPage parent, ListPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        internal global::Fuse.Reactive.EventBinding temp_eb21;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Button();
            var temp = new global::Fuse.Reactive.Data("GroupingConfirm");
            temp_eb21 = new global::Fuse.Reactive.EventBinding(temp);
            __self.Text = "OK";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb21.OnEvent);
            __self.Bindings.Add(temp_eb21);
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ListPage __parent;
        [Uno.WeakReference] internal readonly ListPage __parentInstance;
        public Template2(ListPage parent, ListPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template3: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template2 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.Rectangle __parentInstance;
            public Template3(Template2 parent, Fuse.Controls.Rectangle parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            [Uno.Compiler.UxGenerated]
            public partial class Template4: Uno.UX.Template
            {
                [Uno.WeakReference] internal readonly Template3 __parent;
                [Uno.WeakReference] internal readonly Fuse.Controls.Grid __parentInstance;
                public Template4(Template3 parent, Fuse.Controls.Grid parentInstance): base(null, false)
                {
                    __parent = parent;
                    __parentInstance = parentInstance;
                }
                [Uno.Compiler.UxGenerated]
                public partial class Template5: Uno.UX.Template
                {
                    [Uno.WeakReference] internal readonly Template4 __parent;
                    [Uno.WeakReference] internal readonly Fuse.Reactive.Each __parentInstance;
                    public Template5(Template4 parent, Fuse.Reactive.Each parentInstance): base(null, false)
                    {
                        __parent = parent;
                        __parentInstance = parentInstance;
                    }
                    [Uno.Compiler.UxGenerated]
                    public partial class Template6: Uno.UX.Template
                    {
                        [Uno.WeakReference] internal readonly Template5 __parent;
                        [Uno.WeakReference] internal readonly Fuse.Reactive.Match __parentInstance;
                        public Template6(Template5 parent, Fuse.Reactive.Match parentInstance): base(null, false)
                        {
                            __parent = parent;
                            __parentInstance = parentInstance;
                        }
                        global::Uno.UX.Property<string> __self_Value_inst;
                        static Template6()
                        {
                        }
                        public override object New()
                        {
                            var __self = new global::Fuse.Controls.Text();
                            var temp = "+";
                            var temp1 = new global::Fuse.Reactive.Constant(temp);
                            var temp2 = new global::Fuse.Reactive.Data("amount");
                            __self_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(__self, __selector0);
                            var temp3 = new global::Fuse.Reactive.Add(temp1, temp2);
                            var temp4 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
                            __self.Color = float4(0f, 0.4f, 0f, 1f);
                            __self.Alignment = Fuse.Elements.Alignment.Center;
                            __self.Bindings.Add(temp4);
                            return __self;
                        }
                        static global::Uno.UX.Selector __selector0 = "Value";
                    }
                    [Uno.Compiler.UxGenerated]
                    public partial class Template7: Uno.UX.Template
                    {
                        [Uno.WeakReference] internal readonly Template5 __parent;
                        [Uno.WeakReference] internal readonly Fuse.Reactive.Match __parentInstance;
                        public Template7(Template5 parent, Fuse.Reactive.Match parentInstance): base(null, false)
                        {
                            __parent = parent;
                            __parentInstance = parentInstance;
                        }
                        global::Uno.UX.Property<string> __self_Value_inst;
                        static Template7()
                        {
                        }
                        public override object New()
                        {
                            var __self = new global::Fuse.Controls.Text();
                            __self_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(__self, __selector0);
                            var temp = new global::Fuse.Reactive.Data("amount");
                            var temp1 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, Fuse.Reactive.BindingMode.Default);
                            __self.Color = float4(0.9333333f, 0f, 0f, 1f);
                            __self.Alignment = Fuse.Elements.Alignment.Center;
                            __self.Bindings.Add(temp1);
                            return __self;
                        }
                        static global::Uno.UX.Selector __selector0 = "Value";
                    }
                    global::Uno.UX.Property<object> __self_Value_inst;
                    static Template5()
                    {
                    }
                    public override object New()
                    {
                        var __self = new global::Fuse.Reactive.Match();
                        __self_Value_inst = new AccountBook_FuseReactiveMatch_Value_Property(__self, __selector0);
                        var temp = new global::Fuse.Reactive.Data("pmType");
                        var temp1 = new global::Fuse.Reactive.Case();
                        var temp2 = new Template6(this, __self);
                        var temp3 = new global::Fuse.Reactive.Case();
                        var temp4 = new Template7(this, __self);
                        var temp5 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, Fuse.Reactive.BindingMode.Default);
                        temp1.String = "+";
                        temp1.Factories.Add(temp2);
                        temp3.String = "-";
                        temp3.Factories.Add(temp4);
                        __self.Cases.Add(temp1);
                        __self.Cases.Add(temp3);
                        __self.Bindings.Add(temp5);
                        return __self;
                    }
                    static global::Uno.UX.Selector __selector0 = "Value";
                }
                [Uno.Compiler.UxGenerated]
                public partial class Template6: Uno.UX.Template
                {
                    [Uno.WeakReference] internal readonly Template4 __parent;
                    [Uno.WeakReference] internal readonly Fuse.Reactive.Each __parentInstance;
                    public Template6(Template4 parent, Fuse.Reactive.Each parentInstance): base(null, false)
                    {
                        __parent = parent;
                        __parentInstance = parentInstance;
                    }
                    global::Uno.UX.Property<string> __self_Value_inst;
                    static Template6()
                    {
                    }
                    public override object New()
                    {
                        var __self = new global::Fuse.Controls.Text();
                        __self_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(__self, __selector0);
                        var temp = new global::Fuse.Reactive.Data("usage");
                        var temp1 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, Fuse.Reactive.BindingMode.Default);
                        __self.Color = Fuse.Drawing.Colors.Black;
                        __self.Alignment = Fuse.Elements.Alignment.Center;
                        __self.Bindings.Add(temp1);
                        return __self;
                    }
                    static global::Uno.UX.Selector __selector0 = "Value";
                }
                [Uno.Compiler.UxGenerated]
                public partial class Template7: Uno.UX.Template
                {
                    [Uno.WeakReference] internal readonly Template4 __parent;
                    [Uno.WeakReference] internal readonly Fuse.Reactive.Each __parentInstance;
                    public Template7(Template4 parent, Fuse.Reactive.Each parentInstance): base(null, false)
                    {
                        __parent = parent;
                        __parentInstance = parentInstance;
                    }
                    global::Uno.UX.Property<string> __self_Value_inst;
                    static Template7()
                    {
                    }
                    public override object New()
                    {
                        var __self = new global::Fuse.Controls.Text();
                        __self_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(__self, __selector0);
                        var temp = new global::Fuse.Reactive.Data("data_time");
                        var temp1 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, Fuse.Reactive.BindingMode.Default);
                        __self.Color = Fuse.Drawing.Colors.Black;
                        __self.Alignment = Fuse.Elements.Alignment.Center;
                        __self.Bindings.Add(temp1);
                        return __self;
                    }
                    static global::Uno.UX.Selector __selector0 = "Value";
                }
                [Uno.Compiler.UxGenerated]
                public partial class Template8: Uno.UX.Template
                {
                    [Uno.WeakReference] internal readonly Template4 __parent;
                    [Uno.WeakReference] internal readonly Fuse.Reactive.Each __parentInstance;
                    public Template8(Template4 parent, Fuse.Reactive.Each parentInstance): base(null, false)
                    {
                        __parent = parent;
                        __parentInstance = parentInstance;
                    }
                    global::Uno.UX.Property<string> __self_Value_inst;
                    global::Uno.UX.Property<float4> __self_Color_inst;
                    static Template8()
                    {
                    }
                    public override object New()
                    {
                        var __self = new global::Fuse.Controls.Text();
                        var temp = "group:";
                        var temp1 = new global::Fuse.Reactive.Constant(temp);
                        var temp2 = new global::Fuse.Reactive.Data("group_id");
                        __self_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(__self, __selector0);
                        var temp3 = new global::Fuse.Reactive.Add(temp1, temp2);
                        __self_Color_inst = new AccountBook_FuseControlsTextControl_Color_Property(__self, __selector1);
                        var temp4 = new global::Fuse.Reactive.Data("group_color");
                        var temp5 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
                        var temp6 = new global::Fuse.Reactive.DataBinding(__self_Color_inst, temp4, Fuse.Reactive.BindingMode.Default);
                        __self.Alignment = Fuse.Elements.Alignment.Center;
                        __self.Opacity = 0.2f;
                        global::Fuse.Controls.Grid.SetRow(__self, 1);
                        global::Fuse.Controls.Grid.SetColumnSpan(__self, 3);
                        __self.Bindings.Add(temp5);
                        __self.Bindings.Add(temp6);
                        return __self;
                    }
                    static global::Uno.UX.Selector __selector0 = "Value";
                    static global::Uno.UX.Selector __selector1 = "Color";
                }
                global::Uno.UX.Property<object> __self_Items_inst;
                static Template4()
                {
                }
                public override object New()
                {
                    var __self = new global::Fuse.Reactive.Each();
                    __self_Items_inst = new AccountBook_FuseReactiveEach_Items_Property(__self, __selector0);
                    var temp = new global::Fuse.Reactive.Data("normal");
                    var temp1 = new Template5(this, __self);
                    var temp2 = new Template6(this, __self);
                    var temp3 = new Template7(this, __self);
                    var temp4 = new Template8(this, __self);
                    var temp5 = new global::Fuse.Reactive.DataBinding(__self_Items_inst, temp, Fuse.Reactive.BindingMode.Default);
                    __self.Templates.Add(temp1);
                    __self.Templates.Add(temp2);
                    __self.Templates.Add(temp3);
                    __self.Templates.Add(temp4);
                    __self.Bindings.Add(temp5);
                    return __self;
                }
                static global::Uno.UX.Selector __selector0 = "Items";
            }
            global::Uno.UX.Property<bool> ModalConfirm_IsEnabled_inst;
            global::Uno.UX.Property<object> temp_Items_inst;
            global::Uno.UX.Property<float4> __self_Color_inst;
            global::Uno.UX.Property<Fuse.Elements.Visibility> __self_Visibility_inst;
            internal global::Fuse.Reactive.EventBinding temp_eb23;
            internal global::Fuse.Reactive.EventBinding temp_eb24;
            static Template3()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.Grid();
                var temp1 = new global::Fuse.Reactive.Data("ClickNormal");
                ModalConfirm_IsEnabled_inst = new AccountBook_FuseAlternateRoot_IsEnabled_Property(__parent.__parent.ModalConfirm, __selector0);
                var temp2 = new global::Fuse.Reactive.Data("LongClickNormal");
                var temp = new global::Fuse.Reactive.Each();
                temp_Items_inst = new AccountBook_FuseReactiveEach_Items_Property(temp, __selector1);
                var temp3 = new global::Fuse.Reactive.Data("vars");
                __self_Color_inst = new AccountBook_FuseControlsPanel_Color_Property(__self, __selector2);
                var temp4 = new global::Fuse.Reactive.Data("vars_color");
                __self_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(__self, __selector3);
                var temp5 = new global::Fuse.Reactive.Data("vars_visibility");
                var temp6 = new global::Fuse.Gestures.Tapped();
                var temp7 = new global::Fuse.PlaySound();
                temp_eb23 = new global::Fuse.Reactive.EventBinding(temp1);
                var temp8 = new global::Fuse.Gestures.LongPressed();
                var temp9 = new global::Fuse.Triggers.Actions.Set<bool>(ModalConfirm_IsEnabled_inst);
                var temp10 = new global::Fuse.Animations.Rotate();
                temp_eb24 = new global::Fuse.Reactive.EventBinding(temp2);
                var temp11 = new Template4(this, __self);
                var temp12 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp3, Fuse.Reactive.BindingMode.Default);
                var temp13 = new global::Fuse.Reactive.DataBinding(__self_Color_inst, temp4, Fuse.Reactive.BindingMode.Default);
                var temp14 = new global::Fuse.Reactive.DataBinding(__self_Visibility_inst, temp5, Fuse.Reactive.BindingMode.Default);
                __self.ColumnCount = 3;
                __self.Height = new Uno.UX.Size(24f, Uno.UX.Unit.Unspecified);
                __self.Name = __selector4;
                temp6.Handler += temp_eb23.OnEvent;
                temp6.Actions.Add(temp7);
                temp6.Bindings.Add(temp_eb23);
                temp7.File = new global::Uno.UX.BundleFileSource(import("../../../Click.wav"));
                temp8.Handler += temp_eb24.OnEvent;
                temp8.Animators.Add(temp10);
                temp8.Actions.Add(temp9);
                temp8.Bindings.Add(temp_eb24);
                temp9.Value = true;
                temp10.Degrees = 2f;
                temp10.Duration = 0.4;
                temp10.DurationBack = 0.2;
                temp.Templates.Add(temp11);
                temp.Bindings.Add(temp12);
                __self.Children.Add(temp6);
                __self.Children.Add(temp8);
                __self.Children.Add(temp);
                __self.Bindings.Add(temp13);
                __self.Bindings.Add(temp14);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "IsEnabled";
            static global::Uno.UX.Selector __selector1 = "Items";
            static global::Uno.UX.Selector __selector2 = "Color";
            static global::Uno.UX.Selector __selector3 = "Visibility";
            static global::Uno.UX.Selector __selector4 = "grid";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template4: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template2 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.Rectangle __parentInstance;
            public Template4(Template2 parent, Fuse.Controls.Rectangle parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            [Uno.Compiler.UxGenerated]
            public partial class Template5: Uno.UX.Template
            {
                [Uno.WeakReference] internal readonly Template4 __parent;
                [Uno.WeakReference] internal readonly Fuse.Reactive.Each __parentInstance;
                public Template5(Template4 parent, Fuse.Reactive.Each parentInstance): base(null, false)
                {
                    __parent = parent;
                    __parentInstance = parentInstance;
                }
                global::Uno.UX.Property<Fuse.Elements.Visibility> temp_Visibility_inst;
                global::Uno.UX.Property<string> temp_Value_inst;
                static Template5()
                {
                }
                public override object New()
                {
                    var __self = new global::Fuse.Controls.Grid();
                    var temp = new global::Fuse.Controls.Text();
                    temp_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(temp, __selector0);
                    var temp1 = new global::Fuse.Reactive.Data("attb_visibility");
                    temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector1);
                    var temp2 = new global::Fuse.Reactive.Data("attb");
                    var temp3 = new global::Fuse.Reactive.DataBinding(temp_Visibility_inst, temp1, Fuse.Reactive.BindingMode.Default);
                    var temp4 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
                    __self.ColumnCount = 3;
                    temp.Alignment = Fuse.Elements.Alignment.Center;
                    temp.Bindings.Add(temp3);
                    temp.Bindings.Add(temp4);
                    __self.Children.Add(temp);
                    return __self;
                }
                static global::Uno.UX.Selector __selector0 = "Visibility";
                static global::Uno.UX.Selector __selector1 = "Value";
            }
            global::Uno.UX.Property<object> __self_Items_inst;
            static Template4()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Reactive.Each();
                __self_Items_inst = new AccountBook_FuseReactiveEach_Items_Property(__self, __selector0);
                var temp = new global::Fuse.Reactive.Data("vars");
                var temp1 = new Template5(this, __self);
                var temp2 = new global::Fuse.Reactive.DataBinding(__self_Items_inst, temp, Fuse.Reactive.BindingMode.Default);
                __self.Templates.Add(temp1);
                __self.Bindings.Add(temp2);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "Items";
        }
        global::Uno.UX.Property<Fuse.Elements.Visibility> temp_Visibility_inst;
        global::Uno.UX.Property<string> temp_text_inst;
        global::Uno.UX.Property<object> temp1_Items_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb22;
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Rectangle();
            var temp = new global::dayButton();
            temp_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("day_visibility");
            var temp3 = "DAY ";
            var temp4 = new global::Fuse.Reactive.Constant(temp3);
            var temp5 = new global::Fuse.Reactive.Data("day");
            temp_text_inst = new AccountBook_dayButton_text_Property(temp, __selector1);
            var temp6 = new global::Fuse.Reactive.Add(temp4, temp5);
            var temp7 = new global::Fuse.Reactive.Data("ClickDay");
            var temp1 = new global::Fuse.Reactive.Each();
            temp1_Items_inst = new AccountBook_FuseReactiveEach_Items_Property(temp1, __selector2);
            var temp8 = new global::Fuse.Reactive.Data("histOfTheDay");
            var temp9 = new global::Fuse.Controls.StackPanel();
            var temp10 = new global::Fuse.Reactive.DataBinding(temp_Visibility_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Reactive.DataBinding(temp_text_inst, temp6, Fuse.Reactive.BindingMode.Default);
            temp_eb22 = new global::Fuse.Reactive.EventBinding(temp7);
            var grid = new Template3(this, __self);
            var temp12 = new Template4(this, __self);
            var temp13 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp8, Fuse.Reactive.BindingMode.Default);
            __self.CornerRadius = float4(5f, 5f, 5f, 5f);
            __self.Color = float4(1f, 1f, 1f, 1f);
            temp9.Padding = float4(0f, 5f, 0f, 5f);
            temp9.Children.Add(temp);
            temp9.Children.Add(temp1);
            temp.Alignment = Fuse.Elements.Alignment.Center;
            temp.textcolor = float4(0.2666667f, 0.2666667f, 0.2666667f, 1f);
            temp.fontsize = 12;
            global::Fuse.Gestures.Clicked.AddHandler(temp, temp_eb22.OnEvent);
            temp.Bindings.Add(temp10);
            temp.Bindings.Add(temp11);
            temp.Bindings.Add(temp_eb22);
            temp1.Templates.Add(grid);
            temp1.Templates.Add(temp12);
            temp1.Bindings.Add(temp13);
            __self.Children.Add(temp9);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Visibility";
        static global::Uno.UX.Selector __selector1 = "text";
        static global::Uno.UX.Selector __selector2 = "Items";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ListPage __parent;
        [Uno.WeakReference] internal readonly ListPage __parentInstance;
        public Template3(ListPage parent, ListPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Panel();
            __self.Height = new Uno.UX.Size(5f, Uno.UX.Unit.Unspecified);
            return __self;
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> cash_Color_inst;
    global::Uno.UX.Property<float4> card_Color_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<float4> lbutton_Color_inst;
    global::Uno.UX.Property<bool> ModalConfirm3_IsEnabled_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<object> temp3_Value_inst;
    global::Uno.UX.Property<object> temp4_Items_inst;
    global::Uno.UX.Property<bool> ModalConfirm_IsEnabled_inst;
    global::Uno.UX.Property<float4> temp5_Color_inst;
    global::Uno.UX.Property<bool> ModalConfirm2_IsEnabled_inst;
    global::Uno.UX.Property<Fuse.Visual> ModalConfirm_ParentNode_inst;
    global::Uno.UX.Property<string> temp6_Value_inst;
    global::Uno.UX.Property<string> temp7_Value_inst;
    global::Uno.UX.Property<string> temp8_Value_inst;
    global::Uno.UX.Property<string> temp9_text_inst;
    global::Uno.UX.Property<string> temp10_Value_inst;
    global::Uno.UX.Property<string> temp11_Value_inst;
    global::Uno.UX.Property<string> temp12_text_inst;
    global::Uno.UX.Property<string> temp13_Value_inst;
    global::Uno.UX.Property<string> temp14_Value_inst;
    global::Uno.UX.Property<string> temp15_text_inst;
    global::Uno.UX.Property<Fuse.Visual> ModalConfirm2_ParentNode_inst;
    global::Uno.UX.Property<string> temp16_Value_inst;
    global::Uno.UX.Property<string> temp17_Value_inst;
    global::Uno.UX.Property<Fuse.Visual> ModalConfirm3_ParentNode_inst;
    internal global::Fuse.Controls.Panel EditOrDeletePopup;
    internal global::Fuse.Controls.Panel ListEditPopup;
    internal global::Fuse.Controls.Panel YearMonthEditPopup;
    [global::Uno.UX.UXGlobalResource("Bold")] public static readonly Fuse.Font Bold;
    [global::Uno.UX.UXGlobalResource("lArrow")] public static readonly Fuse.Controls.Image lArrow;
    [global::Uno.UX.UXGlobalResource("rArrow")] public static readonly Fuse.Controls.Image rArrow;
    internal global::ccButton cash;
    internal global::Fuse.Reactive.EventBinding temp_eb17;
    internal global::ccButton card;
    internal global::Fuse.Reactive.EventBinding temp_eb18;
    internal global::Fuse.Controls.Button yearmonth;
    internal global::Fuse.Controls.Image lbutton;
    internal global::Fuse.Reactive.EventBinding temp_eb19;
    internal global::Fuse.Controls.Image rbutton;
    internal global::Fuse.Reactive.EventBinding temp_eb20;
    internal global::Fuse.AlternateRoot ModalConfirm;
    internal global::Fuse.Reactive.EventBinding temp_eb25;
    internal global::Fuse.Reactive.EventBinding temp_eb26;
    internal global::Fuse.Reactive.EventBinding temp_eb27;
    internal global::Fuse.AlternateRoot ModalConfirm2;
    internal global::Fuse.Reactive.EventBinding temp_eb28;
    internal global::Fuse.Reactive.EventBinding temp_eb29;
    internal global::Fuse.Reactive.EventBinding temp_eb30;
    internal global::Fuse.Reactive.EventBinding temp_eb31;
    internal global::Fuse.Reactive.EventBinding temp_eb32;
    internal global::Fuse.Reactive.EventBinding temp_eb33;
    internal global::Fuse.Reactive.EventBinding temp_eb34;
    internal global::Fuse.Reactive.EventBinding temp_eb35;
    internal global::Fuse.AlternateRoot ModalConfirm3;
    internal global::Fuse.Reactive.EventBinding temp_eb36;
    internal global::Fuse.Reactive.EventBinding temp_eb37;
    internal global::Fuse.Reactive.EventBinding temp_eb38;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "EditOrDeletePopup",
        "ListEditPopup",
        "YearMonthEditPopup",
        "router",
        "cash",
        "temp_eb17",
        "card",
        "temp_eb18",
        "yearmonth",
        "lbutton",
        "temp_eb19",
        "rbutton",
        "temp_eb20",
        "ModalConfirm",
        "temp_eb25",
        "temp_eb26",
        "temp_eb27",
        "ModalConfirm2",
        "temp_eb28",
        "temp_eb29",
        "temp_eb30",
        "temp_eb31",
        "temp_eb32",
        "temp_eb33",
        "temp_eb34",
        "temp_eb35",
        "ModalConfirm3",
        "temp_eb36",
        "temp_eb37",
        "temp_eb38"
    };
    static ListPage()
    {
        Bold = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../NotoSans-hinted/NotoSans-Bold.ttf")));
        lArrow = new global::Fuse.Controls.Image();
        rArrow = new global::Fuse.Controls.Image();
        global::Uno.UX.Resource.SetGlobalKey(Bold, "Bold");
        global::Uno.UX.Resource.SetGlobalKey(lArrow, "lArrow");
        lArrow.File = new global::Uno.UX.BundleFileSource(import("../../../images/lArrow.png"));
        global::Uno.UX.Resource.SetGlobalKey(rArrow, "rArrow");
        rArrow.File = new global::Uno.UX.BundleFileSource(import("../../../images/rArrow.png"));
    }
    [global::Uno.UX.UXConstructor]
    public ListPage(
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
        var temp18 = new global::Fuse.Reactive.Data("currentBalance");
        cash = new global::ccButton();
        cash_Color_inst = new AccountBook_FuseControlsPanel_Color_Property(cash, __selector1);
        var temp19 = new global::Fuse.Reactive.Data("ChangeListCashShow");
        var temp20 = new global::Fuse.Reactive.Data("list_cash_show_color");
        card = new global::ccButton();
        card_Color_inst = new AccountBook_FuseControlsPanel_Color_Property(card, __selector1);
        var temp21 = new global::Fuse.Reactive.Data("ChangeListCardShow");
        var temp22 = new global::Fuse.Reactive.Data("list_card_show_color");
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp23 = new global::Fuse.Reactive.Data("screenYear");
        lbutton = new global::Fuse.Controls.Image();
        lbutton_Color_inst = new AccountBook_FuseControlsImage_Color_Property(lbutton, __selector1);
        var temp24 = new global::Fuse.Reactive.Data("Click_lArrow");
        ModalConfirm3 = new global::Fuse.AlternateRoot();
        ModalConfirm3_IsEnabled_inst = new AccountBook_FuseAlternateRoot_IsEnabled_Property(ModalConfirm3, __selector2);
        var temp2 = new global::Fuse.Controls.Text();
        temp2_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp2, __selector0);
        var temp25 = new global::Fuse.Reactive.Data("screenMonth");
        var temp26 = new global::Fuse.Reactive.Data("Click_rArrow");
        var temp3 = new global::Fuse.Reactive.Match();
        temp3_Value_inst = new AccountBook_FuseReactiveMatch_Value_Property(temp3, __selector0);
        var temp27 = new global::Fuse.Reactive.Data("grouping_activation");
        var temp4 = new global::Fuse.Reactive.Each();
        temp4_Items_inst = new AccountBook_FuseReactiveEach_Items_Property(temp4, __selector3);
        var temp28 = new global::Fuse.Reactive.Data("histories");
        ModalConfirm = new global::Fuse.AlternateRoot();
        ModalConfirm_IsEnabled_inst = new AccountBook_FuseAlternateRoot_IsEnabled_Property(ModalConfirm, __selector2);
        var temp5 = new global::Fuse.Drawing.Stroke();
        temp5_Color_inst = new AccountBook_FuseDrawingStroke_Color_Property(temp5, __selector1);
        var temp29 = new global::Fuse.Reactive.Resource("Col_type3");
        ModalConfirm2 = new global::Fuse.AlternateRoot();
        ModalConfirm2_IsEnabled_inst = new AccountBook_FuseAlternateRoot_IsEnabled_Property(ModalConfirm2, __selector2);
        var temp30 = new global::Fuse.Reactive.Data("PushListEditPage");
        var temp31 = new global::Fuse.Reactive.Data("Delete");
        var temp32 = new global::Fuse.Reactive.Data("GetInGroupingMode");
        ModalConfirm_ParentNode_inst = new AccountBook_FuseAlternateRoot_ParentNode_Property(ModalConfirm, __selector4);
        var temp33 = new global::Fuse.Reactive.Resource("FullWindow");
        var temp34 = new global::Fuse.Reactive.Data("editVars");
        var temp6 = new global::EditTextBox();
        temp6_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(temp6, __selector0);
        var temp35 = new global::Fuse.Reactive.Member(temp34, "year");
        var temp36 = new global::Fuse.Reactive.Data("EditMonthHandler");
        var temp37 = new global::Fuse.Reactive.Data("editVars");
        var temp7 = new global::EditTextBox();
        temp7_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(temp7, __selector0);
        var temp38 = new global::Fuse.Reactive.Member(temp37, "month");
        var temp39 = new global::Fuse.Reactive.Data("EditDayHandler");
        var temp40 = new global::Fuse.Reactive.Data("editVars");
        var temp8 = new global::EditTextBox();
        temp8_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(temp8, __selector0);
        var temp41 = new global::Fuse.Reactive.Member(temp40, "day");
        var temp42 = new global::Fuse.Reactive.Data("ClickEditabstractButton");
        var temp43 = new global::Fuse.Reactive.Data("editVars");
        var temp9 = new global::EditButton();
        temp9_text_inst = new AccountBook_EditButton_text_Property(temp9, __selector5);
        var temp44 = new global::Fuse.Reactive.Member(temp43, "abstract");
        var temp45 = new global::Fuse.Reactive.Data("EditHourHandler");
        var temp46 = new global::Fuse.Reactive.Data("editVars");
        var temp10 = new global::EditTextBox();
        temp10_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(temp10, __selector0);
        var temp47 = new global::Fuse.Reactive.Member(temp46, "hour");
        var temp48 = new global::Fuse.Reactive.Data("EditMinuteHandler");
        var temp49 = new global::Fuse.Reactive.Data("editVars");
        var temp11 = new global::EditTextBox();
        temp11_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(temp11, __selector0);
        var temp50 = new global::Fuse.Reactive.Member(temp49, "minute");
        var temp51 = new global::Fuse.Reactive.Data("ClickEditpmtypeButton");
        var temp52 = new global::Fuse.Reactive.Data("editVars");
        var temp12 = new global::EditButton();
        temp12_text_inst = new AccountBook_EditButton_text_Property(temp12, __selector5);
        var temp53 = new global::Fuse.Reactive.Member(temp52, "pmType");
        var temp54 = new global::Fuse.Reactive.Data("editVars");
        var temp13 = new global::EditTextBox();
        temp13_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(temp13, __selector0);
        var temp55 = new global::Fuse.Reactive.Member(temp54, "amount");
        var temp56 = new global::Fuse.Reactive.Data("editVars");
        var temp14 = new global::EditTextBox();
        temp14_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(temp14, __selector0);
        var temp57 = new global::Fuse.Reactive.Member(temp56, "usage");
        var temp58 = new global::Fuse.Reactive.Data("ClickEditpaytypeButton");
        var temp59 = new global::Fuse.Reactive.Data("editVars");
        var temp15 = new global::EditButton();
        temp15_text_inst = new AccountBook_EditButton_text_Property(temp15, __selector5);
        var temp60 = new global::Fuse.Reactive.Member(temp59, "payType");
        var temp61 = new global::Fuse.Reactive.Data("EditConfirm");
        ModalConfirm2_ParentNode_inst = new AccountBook_FuseAlternateRoot_ParentNode_Property(ModalConfirm2, __selector4);
        var temp62 = new global::Fuse.Reactive.Resource("FullWindow2");
        var temp63 = new global::Fuse.Reactive.Data("ScreenEditYearHandler");
        var temp16 = new global::Fuse.Controls.TextInput();
        temp16_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(temp16, __selector0);
        var temp64 = new global::Fuse.Reactive.Data("screenYear");
        var temp17 = new global::Fuse.Controls.TextInput();
        temp17_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(temp17, __selector0);
        var temp65 = new global::Fuse.Reactive.Data("screenMonth");
        var temp66 = new global::Fuse.Reactive.Data("ScreenEditMonthHandler");
        var temp67 = new global::Fuse.Reactive.Data("YearMonthEditConfirm");
        ModalConfirm3_ParentNode_inst = new AccountBook_FuseAlternateRoot_ParentNode_Property(ModalConfirm3, __selector4);
        var temp68 = new global::Fuse.Reactive.Resource("FullWindow2");
        EditOrDeletePopup = new global::Fuse.Controls.Panel();
        ListEditPopup = new global::Fuse.Controls.Panel();
        YearMonthEditPopup = new global::Fuse.Controls.Panel();
        var temp69 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp70 = new global::Fuse.Controls.Grid();
        var temp71 = new global::Fuse.Controls.Panel();
        var temp72 = new global::Fuse.Controls.Text();
        var temp73 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp18, Fuse.Reactive.BindingMode.Default);
        var temp74 = new global::Fuse.Controls.Grid();
        var temp75 = new global::Fuse.Gestures.WhilePressed();
        var temp76 = new global::Fuse.Animations.Change<float4>(cash_Color_inst);
        temp_eb17 = new global::Fuse.Reactive.EventBinding(temp19);
        var temp77 = new global::Fuse.Reactive.DataBinding(cash_Color_inst, temp20, Fuse.Reactive.BindingMode.Default);
        var temp78 = new global::Fuse.Gestures.WhilePressed();
        var temp79 = new global::Fuse.Animations.Change<float4>(card_Color_inst);
        temp_eb18 = new global::Fuse.Reactive.EventBinding(temp21);
        var temp80 = new global::Fuse.Reactive.DataBinding(card_Color_inst, temp22, Fuse.Reactive.BindingMode.Default);
        yearmonth = new global::Fuse.Controls.Button();
        var temp81 = new global::Fuse.Controls.Grid();
        var temp82 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp23, Fuse.Reactive.BindingMode.Default);
        var temp83 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 0.7411765f, 0f, 1f));
        var temp84 = new global::Fuse.Controls.StackPanel();
        var temp85 = new global::ccButton();
        var temp86 = new global::Fuse.Gestures.WhilePressed();
        var temp87 = new global::Fuse.Animations.Change<float4>(lbutton_Color_inst);
        temp_eb19 = new global::Fuse.Reactive.EventBinding(temp24);
        var temp88 = new global::Fuse.Gestures.Clicked();
        var temp89 = new global::Fuse.Triggers.Actions.Set<bool>(ModalConfirm3_IsEnabled_inst);
        var temp90 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp25, Fuse.Reactive.BindingMode.Default);
        var temp91 = new global::ccButton();
        rbutton = new global::Fuse.Controls.Image();
        temp_eb20 = new global::Fuse.Reactive.EventBinding(temp26);
        var temp92 = new global::Fuse.Controls.ScrollView();
        var temp93 = new global::Fuse.Controls.StackPanel();
        var temp94 = new global::Fuse.Reactive.Case();
        var temp95 = new Template(this, this);
        var temp96 = new Template1(this, this);
        var temp97 = new global::Fuse.Reactive.Case();
        var temp98 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp27, Fuse.Reactive.BindingMode.Default);
        var temp99 = new Template2(this, this);
        var temp100 = new Template3(this, this);
        var temp101 = new global::Fuse.Reactive.DataBinding(temp4_Items_inst, temp28, Fuse.Reactive.BindingMode.Default);
        var temp102 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 0.7411765f, 0f, 1f));
        var temp103 = new global::Fuse.Resources.ResourceObject();
        var temp104 = new global::Fuse.Resources.ResourceObject();
        var temp105 = new global::Fuse.Resources.ResourceObject();
        var temp106 = new global::Fuse.Controls.Panel();
        var temp107 = new global::Fuse.Gestures.Clicked();
        var temp108 = new global::Fuse.Triggers.Actions.Set<bool>(ModalConfirm_IsEnabled_inst);
        var temp109 = new global::Fuse.Controls.StackPanel();
        var temp110 = new global::Fuse.Controls.Rectangle();
        var temp111 = new global::Fuse.Reactive.DataBinding(temp5_Color_inst, temp29, Fuse.Reactive.BindingMode.Default);
        var temp112 = new global::ccButton();
        var temp113 = new global::Fuse.Gestures.Clicked();
        var temp114 = new global::Fuse.Triggers.Actions.Set<bool>(ModalConfirm2_IsEnabled_inst);
        temp_eb25 = new global::Fuse.Reactive.EventBinding(temp30);
        var temp115 = new global::ccButton();
        temp_eb26 = new global::Fuse.Reactive.EventBinding(temp31);
        var temp116 = new global::ccButton();
        temp_eb27 = new global::Fuse.Reactive.EventBinding(temp32);
        var temp117 = new global::Fuse.Reactive.DataBinding(ModalConfirm_ParentNode_inst, temp33, Fuse.Reactive.BindingMode.Default);
        var temp118 = new global::Fuse.Controls.Panel();
        var temp119 = new global::Fuse.Controls.ClientPanel();
        var temp120 = new global::Fuse.Controls.Grid();
        var temp121 = new global::Fuse.Controls.Text();
        var temp122 = new global::Fuse.Controls.Rectangle();
        var temp123 = new global::Fuse.Drawing.Stroke();
        var temp124 = new global::Fuse.Controls.Grid();
        var temp125 = new global::EditTitleText();
        var temp126 = new global::EditTitleText();
        var temp127 = new global::EditTitleText();
        var temp128 = new global::Fuse.Controls.Grid();
        var temp129 = new global::Fuse.Reactive.DataBinding(temp6_Value_inst, temp35, Fuse.Reactive.BindingMode.Default);
        temp_eb28 = new global::Fuse.Reactive.EventBinding(temp36);
        var temp130 = new global::Fuse.Reactive.DataBinding(temp7_Value_inst, temp38, Fuse.Reactive.BindingMode.Default);
        temp_eb29 = new global::Fuse.Reactive.EventBinding(temp39);
        var temp131 = new global::Fuse.Reactive.DataBinding(temp8_Value_inst, temp41, Fuse.Reactive.BindingMode.Default);
        var temp132 = new global::Fuse.Controls.Grid();
        var temp133 = new global::Fuse.Controls.Text();
        var temp134 = new global::EditTitleText();
        var temp135 = new global::EditTitleText();
        var temp136 = new global::Fuse.Controls.Grid();
        temp_eb30 = new global::Fuse.Reactive.EventBinding(temp42);
        var temp137 = new global::Fuse.Reactive.DataBinding(temp9_text_inst, temp44, Fuse.Reactive.BindingMode.Default);
        temp_eb31 = new global::Fuse.Reactive.EventBinding(temp45);
        var temp138 = new global::Fuse.Reactive.DataBinding(temp10_Value_inst, temp47, Fuse.Reactive.BindingMode.Default);
        temp_eb32 = new global::Fuse.Reactive.EventBinding(temp48);
        var temp139 = new global::Fuse.Reactive.DataBinding(temp11_Value_inst, temp50, Fuse.Reactive.BindingMode.Default);
        var temp140 = new global::Fuse.Controls.Grid();
        var temp141 = new global::EditTitleText();
        var temp142 = new global::EditTitleText();
        var temp143 = new global::Fuse.Controls.Grid();
        temp_eb33 = new global::Fuse.Reactive.EventBinding(temp51);
        var temp144 = new global::Fuse.Reactive.DataBinding(temp12_text_inst, temp53, Fuse.Reactive.BindingMode.Default);
        var temp145 = new global::Fuse.Reactive.DataBinding(temp13_Value_inst, temp55, Fuse.Reactive.BindingMode.Default);
        var temp146 = new global::Fuse.Reactive.DataBinding(temp14_Value_inst, temp57, Fuse.Reactive.BindingMode.Default);
        var temp147 = new global::EditTitleText();
        temp_eb34 = new global::Fuse.Reactive.EventBinding(temp58);
        var temp148 = new global::Fuse.Reactive.DataBinding(temp15_text_inst, temp60, Fuse.Reactive.BindingMode.Default);
        var temp149 = new global::Fuse.Controls.Text();
        var temp150 = new global::EditButton();
        var temp151 = new global::Fuse.Gestures.Clicked();
        var temp152 = new global::Fuse.Triggers.Actions.Set<bool>(ModalConfirm2_IsEnabled_inst);
        temp_eb35 = new global::Fuse.Reactive.EventBinding(temp61);
        var temp153 = new global::Fuse.Reactive.DataBinding(ModalConfirm2_ParentNode_inst, temp62, Fuse.Reactive.BindingMode.Default);
        var temp154 = new global::Fuse.Controls.Panel();
        var temp155 = new global::Fuse.Controls.Rectangle();
        var temp156 = new global::Fuse.Drawing.Stroke();
        var temp157 = new global::Fuse.Controls.Grid();
        var temp158 = new global::Fuse.Controls.Text();
        var temp159 = new global::Fuse.Controls.Grid();
        var temp160 = new global::Fuse.Controls.Text();
        var temp161 = new global::Fuse.Effects.DropShadow();
        temp_eb36 = new global::Fuse.Reactive.EventBinding(temp63);
        var temp162 = new global::Fuse.Reactive.DataBinding(temp16_Value_inst, temp64, Fuse.Reactive.BindingMode.Default);
        var temp163 = new global::Fuse.Controls.Text();
        var temp164 = new global::Fuse.Effects.DropShadow();
        var temp165 = new global::Fuse.Reactive.DataBinding(temp17_Value_inst, temp65, Fuse.Reactive.BindingMode.Default);
        temp_eb37 = new global::Fuse.Reactive.EventBinding(temp66);
        var temp166 = new global::EditButton();
        var temp167 = new global::Fuse.Gestures.Clicked();
        var temp168 = new global::Fuse.Triggers.Actions.Set<bool>(ModalConfirm3_IsEnabled_inst);
        temp_eb38 = new global::Fuse.Reactive.EventBinding(temp67);
        var temp169 = new global::Fuse.Reactive.DataBinding(ModalConfirm3_ParentNode_inst, temp68, Fuse.Reactive.BindingMode.Default);
        var temp170 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        this.Height = new Uno.UX.Size(86f, Uno.UX.Unit.Percent);
        this.Alignment = Fuse.Elements.Alignment.Bottom;
        EditOrDeletePopup.Layer = Fuse.Layer.Overlay;
        EditOrDeletePopup.Name = __selector6;
        ListEditPopup.Layer = Fuse.Layer.Overlay;
        ListEditPopup.Name = __selector7;
        YearMonthEditPopup.Layer = Fuse.Layer.Overlay;
        YearMonthEditPopup.Name = __selector8;
        temp69.LineNumber = 34;
        temp69.FileName = "ListPage.ux";
        temp69.File = new global::Uno.UX.BundleFileSource(import("../../../Modules/ListPage.js"));
        temp70.RowCount = 100;
        temp70.Children.Add(temp71);
        temp70.Children.Add(temp72);
        temp70.Children.Add(temp);
        temp70.Children.Add(temp74);
        temp70.Children.Add(yearmonth);
        temp70.Children.Add(temp92);
        global::Fuse.Controls.Grid.SetRowSpan(temp71, 1);
        temp72.Value = "CurrentBalance";
        temp72.FontSize = 12f;
        temp72.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.Grid.SetRowSpan(temp72, 2);
        temp.FontSize = 32f;
        temp.Color = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.Grid.SetRowSpan(temp, 12);
        temp.Bindings.Add(temp73);
        temp74.ColumnCount = 2;
        temp74.Color = float4(1f, 1f, 1f, 1f);
        global::Fuse.Controls.Grid.SetRowSpan(temp74, 5);
        temp74.Children.Add(cash);
        temp74.Children.Add(card);
        cash.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        cash.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        cash.Alignment = Fuse.Elements.Alignment.Center;
        cash.Name = __selector9;
        cash.text = "CASH";
        cash.textcolor = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        cash.fontsize = 18;
        global::Fuse.Gestures.Clicked.AddHandler(cash, temp_eb17.OnEvent);
        cash.Children.Add(temp75);
        cash.Bindings.Add(temp_eb17);
        cash.Bindings.Add(temp77);
        temp75.Animators.Add(temp76);
        temp76.Value = float4(0.6f, 0.6f, 0.6f, 1f);
        temp76.Duration = 0.05;
        temp76.DurationBack = 0.2;
        card.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        card.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        card.Alignment = Fuse.Elements.Alignment.Center;
        card.Name = __selector10;
        card.text = "CARD";
        card.textcolor = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        card.fontsize = 18;
        global::Fuse.Gestures.Clicked.AddHandler(card, temp_eb18.OnEvent);
        card.Children.Add(temp78);
        card.Bindings.Add(temp_eb18);
        card.Bindings.Add(temp80);
        temp78.Animators.Add(temp79);
        temp79.Value = float4(0.6f, 0.6f, 0.6f, 1f);
        temp79.Duration = 0.05;
        temp79.DurationBack = 0.2;
        yearmonth.Name = __selector11;
        global::Fuse.Controls.Grid.SetRowSpan(yearmonth, 7);
        yearmonth.Children.Add(temp81);
        temp81.RowCount = 7;
        temp81.Children.Add(temp1);
        temp81.Children.Add(temp84);
        temp1.FontSize = 12f;
        temp1.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp1.Color = Fuse.Drawing.Colors.White;
        temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp1.Font = global::ListPage.Bold;
        temp1.Background = temp83;
        temp1.Bindings.Add(temp82);
        temp84.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp84.Color = float4(1f, 0.7411765f, 0f, 1f);
        temp84.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp84.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp84.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.Grid.SetRowSpan(temp84, 6);
        temp84.Children.Add(temp85);
        temp84.Children.Add(temp2);
        temp84.Children.Add(temp91);
        temp85.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Gestures.Clicked.AddHandler(temp85, temp_eb19.OnEvent);
        temp85.Children.Add(lbutton);
        temp85.Children.Add(temp86);
        temp85.Bindings.Add(temp_eb19);
        lbutton.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Percent);
        lbutton.Name = __selector12;
        lbutton.File = new global::Uno.UX.BundleFileSource(import("../../../images/lArrow.png"));
        temp86.Animators.Add(temp87);
        temp87.Value = float4(0.6f, 0.6f, 0.6f, 1f);
        temp87.Duration = 0.05;
        temp87.DurationBack = 0.2;
        temp2.FontSize = 30f;
        temp2.Color = Fuse.Drawing.Colors.White;
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.Font = global::ListPage.Bold;
        temp2.Children.Add(temp88);
        temp2.Bindings.Add(temp90);
        temp88.Actions.Add(temp89);
        temp89.Value = true;
        temp91.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Gestures.Clicked.AddHandler(temp91, temp_eb20.OnEvent);
        temp91.Children.Add(rbutton);
        temp91.Bindings.Add(temp_eb20);
        rbutton.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Percent);
        rbutton.Name = __selector13;
        rbutton.File = new global::Uno.UX.BundleFileSource(import("../../../images/rArrow.png"));
        temp92.Padding = float4(10f, 10f, 10f, 0f);
        global::Fuse.Controls.Grid.SetRowSpan(temp92, 75);
        temp92.Background = temp102;
        temp92.Children.Add(temp93);
        temp93.Children.Add(temp3);
        temp93.Children.Add(temp4);
        temp3.Cases.Add(temp94);
        temp3.Cases.Add(temp97);
        temp3.Bindings.Add(temp98);
        temp94.Bool = true;
        temp94.Factories.Add(temp95);
        temp94.Factories.Add(temp96);
        temp97.Bool = false;
        temp4.Templates.Add(temp99);
        temp4.Templates.Add(temp100);
        temp4.Bindings.Add(temp101);
        temp103.Key = "FullWindow";
        temp103.Value = EditOrDeletePopup;
        temp104.Key = "FullWindow2";
        temp104.Value = ListEditPopup;
        temp105.Key = "FullWindow3";
        temp105.Value = YearMonthEditPopup;
        ModalConfirm.IsEnabled = false;
        ModalConfirm.Name = __selector14;
        ModalConfirm.Node = temp106;
        ModalConfirm.Bindings.Add(temp117);
        temp106.Color = float4(1f, 1f, 1f, 0f);
        temp106.Layer = Fuse.Layer.Overlay;
        temp106.Children.Add(temp107);
        temp106.Children.Add(temp109);
        temp107.Actions.Add(temp108);
        temp108.Value = false;
        temp109.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp109.Height = new Uno.UX.Size(90f, Uno.UX.Unit.Unspecified);
        temp109.Alignment = Fuse.Elements.Alignment.Center;
        temp109.Padding = float4(10f, 10f, 10f, 10f);
        temp109.Children.Add(temp110);
        temp109.Children.Add(temp112);
        temp109.Children.Add(temp115);
        temp109.Children.Add(temp116);
        temp110.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp110.Color = float4(1f, 1f, 1f, 1f);
        temp110.Layer = Fuse.Layer.Background;
        temp110.Strokes.Add(temp5);
        temp110.Bindings.Add(temp111);
        temp5.Width = 2f;
        temp112.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp112.text = "EDIT";
        temp112.textcolor = Fuse.Drawing.Colors.Black;
        temp112.fontsize = 18;
        global::Fuse.Gestures.Clicked.AddHandler(temp112, temp_eb25.OnEvent);
        temp112.Children.Add(temp113);
        temp112.Bindings.Add(temp_eb25);
        temp113.Actions.Add(temp114);
        temp114.Value = true;
        temp115.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp115.text = "DELETE";
        temp115.textcolor = Fuse.Drawing.Colors.Black;
        temp115.fontsize = 18;
        global::Fuse.Gestures.Clicked.AddHandler(temp115, temp_eb26.OnEvent);
        temp115.Bindings.Add(temp_eb26);
        temp116.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp116.text = "Grouping";
        temp116.textcolor = Fuse.Drawing.Colors.Black;
        temp116.fontsize = 18;
        global::Fuse.Gestures.Clicked.AddHandler(temp116, temp_eb27.OnEvent);
        temp116.Bindings.Add(temp_eb27);
        ModalConfirm2.IsEnabled = false;
        ModalConfirm2.Name = __selector15;
        ModalConfirm2.Node = temp118;
        ModalConfirm2.Bindings.Add(temp153);
        temp118.Color = float4(1f, 0.7411765f, 0f, 1f);
        temp118.Padding = float4(10f, 10f, 10f, 10f);
        temp118.Layer = Fuse.Layer.Overlay;
        temp118.Children.Add(temp119);
        temp119.Children.Add(temp120);
        temp120.RowCount = 11;
        temp120.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp120.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Percent);
        temp120.Padding = float4(10f, 10f, 10f, 10f);
        temp120.Children.Add(temp121);
        temp120.Children.Add(temp122);
        temp120.Children.Add(temp124);
        temp120.Children.Add(temp128);
        temp120.Children.Add(temp132);
        temp120.Children.Add(temp136);
        temp120.Children.Add(temp140);
        temp120.Children.Add(temp143);
        temp120.Children.Add(temp147);
        temp120.Children.Add(temp15);
        temp120.Children.Add(temp149);
        temp120.Children.Add(temp150);
        temp121.Value = "EDIT PAGE";
        temp121.FontSize = 30f;
        temp121.TextColor = Fuse.Drawing.Colors.Black;
        temp121.Alignment = Fuse.Elements.Alignment.TopCenter;
        temp122.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp122.Color = float4(1f, 1f, 1f, 1f);
        temp122.Layer = Fuse.Layer.Background;
        temp122.Strokes.Add(temp123);
        temp123.Color = Fuse.Drawing.Colors.Black;
        temp123.Width = 1f;
        temp124.ColumnCount = 3;
        temp124.Children.Add(temp125);
        temp124.Children.Add(temp126);
        temp124.Children.Add(temp127);
        temp125.Value = "Year";
        temp126.Value = "Month";
        temp127.Value = "Day";
        temp128.ColumnCount = 3;
        temp128.Children.Add(temp6);
        temp128.Children.Add(temp7);
        temp128.Children.Add(temp8);
        temp6.InputHint = Fuse.Controls.TextInputHint.Integer;
        temp6.Bindings.Add(temp129);
        temp7.InputHint = Fuse.Controls.TextInputHint.Integer;
        temp7.ValueChanged += temp_eb28.OnEvent;
        temp7.Bindings.Add(temp_eb28);
        temp7.Bindings.Add(temp130);
        temp8.InputHint = Fuse.Controls.TextInputHint.Integer;
        temp8.ValueChanged += temp_eb29.OnEvent;
        temp8.Bindings.Add(temp_eb29);
        temp8.Bindings.Add(temp131);
        temp132.ColumnCount = 3;
        temp132.Children.Add(temp133);
        temp132.Children.Add(temp134);
        temp132.Children.Add(temp135);
        temp134.Value = "Hour";
        temp135.Value = "Minute";
        temp136.ColumnCount = 3;
        temp136.Children.Add(temp9);
        temp136.Children.Add(temp10);
        temp136.Children.Add(temp11);
        temp9.textcolor = Fuse.Drawing.Colors.Black;
        temp9.fontsize = 14;
        global::Fuse.Gestures.Clicked.AddHandler(temp9, temp_eb30.OnEvent);
        temp9.Bindings.Add(temp_eb30);
        temp9.Bindings.Add(temp137);
        temp10.InputHint = Fuse.Controls.TextInputHint.Integer;
        temp10.ValueChanged += temp_eb31.OnEvent;
        temp10.Bindings.Add(temp_eb31);
        temp10.Bindings.Add(temp138);
        temp11.InputHint = Fuse.Controls.TextInputHint.Integer;
        temp11.ValueChanged += temp_eb32.OnEvent;
        temp11.Bindings.Add(temp_eb32);
        temp11.Bindings.Add(temp139);
        temp140.ColumnCount = 2;
        temp140.Children.Add(temp141);
        temp140.Children.Add(temp142);
        temp141.Value = "Amount";
        temp142.Value = "Usage";
        temp143.ColumnCount = 8;
        temp143.Children.Add(temp12);
        temp143.Children.Add(temp13);
        temp143.Children.Add(temp14);
        temp12.textcolor = Fuse.Drawing.Colors.Black;
        temp12.fontsize = 16;
        global::Fuse.Gestures.Clicked.AddHandler(temp12, temp_eb33.OnEvent);
        temp12.Bindings.Add(temp_eb33);
        temp12.Bindings.Add(temp144);
        temp13.InputHint = Fuse.Controls.TextInputHint.Number;
        global::Fuse.Controls.Grid.SetColumnSpan(temp13, 3);
        temp13.Bindings.Add(temp145);
        global::Fuse.Controls.Grid.SetColumnSpan(temp14, 4);
        temp14.Bindings.Add(temp146);
        temp147.Value = "PayType";
        temp15.textcolor = Fuse.Drawing.Colors.Black;
        temp15.fontsize = 16;
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb34.OnEvent);
        temp15.Bindings.Add(temp_eb34);
        temp15.Bindings.Add(temp148);
        temp150.text = "OK";
        temp150.textcolor = Fuse.Drawing.Colors.Black;
        temp150.fontsize = 16;
        global::Fuse.Gestures.Clicked.AddHandler(temp150, temp_eb35.OnEvent);
        temp150.Children.Add(temp151);
        temp150.Bindings.Add(temp_eb35);
        temp151.Actions.Add(temp152);
        temp152.Value = false;
        ModalConfirm3.IsEnabled = false;
        ModalConfirm3.Name = __selector16;
        ModalConfirm3.Node = temp154;
        ModalConfirm3.Bindings.Add(temp169);
        temp154.Color = float4(1f, 0.7411765f, 0f, 1f);
        temp154.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
        temp154.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Percent);
        temp154.Padding = float4(10f, 10f, 10f, 10f);
        temp154.Layer = Fuse.Layer.Overlay;
        temp154.Children.Add(temp155);
        temp154.Children.Add(temp157);
        temp155.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp155.Color = float4(1f, 1f, 1f, 1f);
        temp155.Layer = Fuse.Layer.Background;
        temp155.Strokes.Add(temp156);
        temp156.Color = float4(1f, 0.7411765f, 0f, 1f);
        temp156.Width = 2f;
        temp157.RowCount = 4;
        temp157.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp157.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp157.Children.Add(temp158);
        temp157.Children.Add(temp159);
        temp158.Value = "EDIT PAGE";
        temp158.FontSize = 20f;
        temp158.TextColor = Fuse.Drawing.Colors.Black;
        temp158.Alignment = Fuse.Elements.Alignment.TopCenter;
        temp159.RowCount = 2;
        temp159.ColumnCount = 4;
        global::Fuse.Controls.Grid.SetRowSpan(temp159, 3);
        temp159.Children.Add(temp160);
        temp159.Children.Add(temp16);
        temp159.Children.Add(temp163);
        temp159.Children.Add(temp17);
        temp159.Children.Add(temp166);
        temp160.Value = "Year";
        temp160.Alignment = Fuse.Elements.Alignment.Center;
        temp16.InputHint = Fuse.Controls.TextInputHint.Integer;
        temp16.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.Grid.SetColumnSpan(temp16, 3);
        temp16.ValueChanged += temp_eb36.OnEvent;
        temp16.Children.Add(temp161);
        temp16.Bindings.Add(temp_eb36);
        temp16.Bindings.Add(temp162);
        temp161.Size = 0.5f;
        temp161.Angle = 90f;
        temp161.Distance = 1f;
        temp161.Spread = 0.2f;
        temp161.Color = float4(0f, 0f, 0f, 0.3764706f);
        temp163.Value = "Month";
        temp163.Alignment = Fuse.Elements.Alignment.Center;
        temp17.InputHint = Fuse.Controls.TextInputHint.Integer;
        temp17.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.Grid.SetColumnSpan(temp17, 3);
        temp17.ValueChanged += temp_eb37.OnEvent;
        temp17.Children.Add(temp164);
        temp17.Bindings.Add(temp165);
        temp17.Bindings.Add(temp_eb37);
        temp164.Size = 0.5f;
        temp164.Angle = 90f;
        temp164.Distance = 1f;
        temp164.Spread = 0.2f;
        temp164.Color = float4(0f, 0f, 0f, 0.3764706f);
        global::Fuse.Controls.Grid.SetColumnSpan(temp166, 4);
        temp166.text = "OK";
        temp166.textcolor = Fuse.Drawing.Colors.Black;
        temp166.fontsize = 16;
        global::Fuse.Gestures.Clicked.AddHandler(temp166, temp_eb38.OnEvent);
        temp166.Children.Add(temp167);
        temp166.Bindings.Add(temp_eb38);
        temp167.Actions.Add(temp168);
        temp168.Value = false;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(EditOrDeletePopup);
        __g_nametable.Objects.Add(ListEditPopup);
        __g_nametable.Objects.Add(YearMonthEditPopup);
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(cash);
        __g_nametable.Objects.Add(temp_eb17);
        __g_nametable.Objects.Add(card);
        __g_nametable.Objects.Add(temp_eb18);
        __g_nametable.Objects.Add(yearmonth);
        __g_nametable.Objects.Add(lbutton);
        __g_nametable.Objects.Add(temp_eb19);
        __g_nametable.Objects.Add(rbutton);
        __g_nametable.Objects.Add(temp_eb20);
        __g_nametable.Objects.Add(ModalConfirm);
        __g_nametable.Objects.Add(temp_eb25);
        __g_nametable.Objects.Add(temp_eb26);
        __g_nametable.Objects.Add(temp_eb27);
        __g_nametable.Objects.Add(ModalConfirm2);
        __g_nametable.Objects.Add(temp_eb28);
        __g_nametable.Objects.Add(temp_eb29);
        __g_nametable.Objects.Add(temp_eb30);
        __g_nametable.Objects.Add(temp_eb31);
        __g_nametable.Objects.Add(temp_eb32);
        __g_nametable.Objects.Add(temp_eb33);
        __g_nametable.Objects.Add(temp_eb34);
        __g_nametable.Objects.Add(temp_eb35);
        __g_nametable.Objects.Add(ModalConfirm3);
        __g_nametable.Objects.Add(temp_eb36);
        __g_nametable.Objects.Add(temp_eb37);
        __g_nametable.Objects.Add(temp_eb38);
        this.Background = temp170;
        this.Children.Add(EditOrDeletePopup);
        this.Children.Add(ListEditPopup);
        this.Children.Add(YearMonthEditPopup);
        this.Children.Add(temp69);
        this.Children.Add(temp70);
        this.Children.Add(temp103);
        this.Children.Add(temp104);
        this.Children.Add(temp105);
        this.Children.Add(ModalConfirm);
        this.Children.Add(ModalConfirm2);
        this.Children.Add(ModalConfirm3);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "IsEnabled";
    static global::Uno.UX.Selector __selector3 = "Items";
    static global::Uno.UX.Selector __selector4 = "ParentNode";
    static global::Uno.UX.Selector __selector5 = "text";
    static global::Uno.UX.Selector __selector6 = "EditOrDeletePopup";
    static global::Uno.UX.Selector __selector7 = "ListEditPopup";
    static global::Uno.UX.Selector __selector8 = "YearMonthEditPopup";
    static global::Uno.UX.Selector __selector9 = "cash";
    static global::Uno.UX.Selector __selector10 = "card";
    static global::Uno.UX.Selector __selector11 = "yearmonth";
    static global::Uno.UX.Selector __selector12 = "lbutton";
    static global::Uno.UX.Selector __selector13 = "rbutton";
    static global::Uno.UX.Selector __selector14 = "ModalConfirm";
    static global::Uno.UX.Selector __selector15 = "ModalConfirm2";
    static global::Uno.UX.Selector __selector16 = "ModalConfirm3";
}
