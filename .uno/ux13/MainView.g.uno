[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> aBtn_Text_inst;
        global::Uno.UX.Property<string> bTBox_Value_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> bTBox_Visibility_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> bEdit_Visibility_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> aBtn_Visibility_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> OK_Visibility_inst;
        internal global::wbButton aBtn;
        internal global::Fuse.Reactive.EventBinding temp_eb40;
        internal global::Fuse.Controls.TextBox bTBox;
        internal global::wbButton bEdit;
        internal global::wbButton OK;
        internal global::Fuse.Reactive.EventBinding temp_eb41;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Grid();
            var temp = new global::Fuse.Reactive.Data("SelectAccount");
            aBtn = new global::wbButton();
            aBtn_Text_inst = new AccountBook_FuseControlsButtonBase_Text_Property(aBtn, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("title");
            bTBox = new global::Fuse.Controls.TextBox();
            bTBox_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(bTBox, __selector1);
            var temp2 = new global::Fuse.Reactive.Data("title");
            bTBox_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(bTBox, __selector2);
            bEdit = new global::wbButton();
            bEdit_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(bEdit, __selector2);
            aBtn_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(aBtn, __selector2);
            OK = new global::wbButton();
            OK_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(OK, __selector2);
            var temp3 = new global::Fuse.Reactive.Data("editTitle");
            var temp4 = new global::Fuse.Controls.DockPanel();
            var temp5 = new global::Fuse.Effects.DropShadow();
            temp_eb40 = new global::Fuse.Reactive.EventBinding(temp);
            var temp6 = new global::Fuse.Reactive.DataBinding(aBtn_Text_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp7 = new global::Fuse.Reactive.DataBinding(bTBox_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp8 = new global::Fuse.Controls.DockPanel();
            var temp9 = new global::Fuse.Gestures.Clicked();
            var temp10 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bTBox_Visibility_inst);
            var temp11 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bEdit_Visibility_inst);
            var temp12 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(aBtn_Visibility_inst);
            var temp13 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(OK_Visibility_inst);
            var temp14 = new global::Fuse.Controls.Grid();
            var temp15 = new global::Fuse.Controls.Panel();
            var temp16 = new global::Fuse.Gestures.Clicked();
            var temp17 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(OK_Visibility_inst);
            var temp18 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bTBox_Visibility_inst);
            var temp19 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bEdit_Visibility_inst);
            var temp20 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(aBtn_Visibility_inst);
            temp_eb41 = new global::Fuse.Reactive.EventBinding(temp3);
            __self.ColumnCount = 10;
            __self.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            global::Fuse.Controls.Grid.SetRowSpan(__self, 8);
            global::Fuse.Controls.Grid.SetColumnSpan(temp4, 8);
            temp4.Children.Add(aBtn);
            temp4.Children.Add(bTBox);
            aBtn.Name = __selector3;
            global::Fuse.Gestures.Clicked.AddHandler(aBtn, temp_eb40.OnEvent);
            aBtn.Children.Add(temp5);
            aBtn.Bindings.Add(temp_eb40);
            aBtn.Bindings.Add(temp6);
            temp5.Size = 2f;
            temp5.Angle = 0f;
            temp5.Distance = 1f;
            temp5.Spread = 0.2f;
            temp5.Color = float4(0f, 0f, 0f, 0.3764706f);
            bTBox.Visibility = Fuse.Elements.Visibility.Hidden;
            bTBox.Name = __selector4;
            bTBox.Bindings.Add(temp7);
            global::Fuse.Controls.Grid.SetColumnSpan(temp8, 2);
            temp8.Children.Add(bEdit);
            temp8.Children.Add(temp14);
            bEdit.Text = "EDIT";
            bEdit.Name = __selector5;
            bEdit.Children.Add(temp9);
            temp9.Actions.Add(temp10);
            temp9.Actions.Add(temp11);
            temp9.Actions.Add(temp12);
            temp9.Actions.Add(temp13);
            temp10.Value = Fuse.Elements.Visibility.Visible;
            temp11.Value = Fuse.Elements.Visibility.Hidden;
            temp12.Value = Fuse.Elements.Visibility.Hidden;
            temp13.Value = Fuse.Elements.Visibility.Visible;
            temp14.RowCount = 2;
            temp14.Children.Add(temp15);
            temp14.Children.Add(OK);
            OK.Text = "OK";
            OK.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            OK.Name = __selector6;
            OK.TextCol = float4(0f, 0f, 0f, 1f);
            global::Fuse.Gestures.Clicked.AddHandler(OK, temp_eb41.OnEvent);
            OK.Children.Add(temp16);
            OK.Bindings.Add(temp_eb41);
            temp16.Actions.Add(temp17);
            temp16.Actions.Add(temp18);
            temp16.Actions.Add(temp19);
            temp16.Actions.Add(temp20);
            temp17.Value = Fuse.Elements.Visibility.Visible;
            temp18.Value = Fuse.Elements.Visibility.Hidden;
            temp19.Value = Fuse.Elements.Visibility.Visible;
            temp20.Value = Fuse.Elements.Visibility.Visible;
            __self.Children.Add(temp4);
            __self.Children.Add(temp8);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
        static global::Uno.UX.Selector __selector1 = "Value";
        static global::Uno.UX.Selector __selector2 = "Visibility";
        static global::Uno.UX.Selector __selector3 = "aBtn";
        static global::Uno.UX.Selector __selector4 = "bTBox";
        static global::Uno.UX.Selector __selector5 = "bEdit";
        static global::Uno.UX.Selector __selector6 = "OK";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template1(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> aBtn_Text_inst;
        global::Uno.UX.Property<string> bTBox_Value_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> aEdit_Visibility_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> aBtn_Visibility_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> bGrid_Visibility_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> bTBox_Visibility_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> bDel_Visibility_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> bComp_Visibility_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> cGrid_Visibility_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> cCancel_Visibility_inst;
        internal global::wbButton aBtn;
        internal global::Fuse.Reactive.EventBinding temp_eb42;
        internal global::Fuse.Controls.TextBox bTBox;
        internal global::wbButton aEdit;
        internal global::Fuse.Controls.Grid bGrid;
        internal global::wbButton bDel;
        internal global::wbButton bComp;
        internal global::Fuse.Reactive.EventBinding temp_eb43;
        internal global::Fuse.Controls.Grid cGrid;
        internal global::wbButton cCancel;
        internal global::wbButton cDel;
        internal global::Fuse.Reactive.EventBinding temp_eb44;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Grid();
            var temp = new global::Fuse.Reactive.Data("SelectAccount");
            aBtn = new global::wbButton();
            aBtn_Text_inst = new AccountBook_FuseControlsButtonBase_Text_Property(aBtn, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("title");
            bTBox = new global::Fuse.Controls.TextBox();
            bTBox_Value_inst = new AccountBook_FuseControlsTextInputControl_Value_Property(bTBox, __selector1);
            var temp2 = new global::Fuse.Reactive.Data("title");
            aEdit = new global::wbButton();
            aEdit_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(aEdit, __selector2);
            aBtn_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(aBtn, __selector2);
            bGrid = new global::Fuse.Controls.Grid();
            bGrid_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(bGrid, __selector2);
            bTBox_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(bTBox, __selector2);
            bDel = new global::wbButton();
            bDel_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(bDel, __selector2);
            bComp = new global::wbButton();
            bComp_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(bComp, __selector2);
            cGrid = new global::Fuse.Controls.Grid();
            cGrid_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(cGrid, __selector2);
            cCancel = new global::wbButton();
            cCancel_Visibility_inst = new AccountBook_FuseElementsElement_Visibility_Property(cCancel, __selector2);
            var temp3 = new global::Fuse.Reactive.Data("editTitle");
            var temp4 = new global::Fuse.Reactive.Data("DeleteAccount");
            var temp5 = new global::Fuse.Controls.DockPanel();
            var temp6 = new global::Fuse.Effects.DropShadow();
            temp_eb42 = new global::Fuse.Reactive.EventBinding(temp);
            var temp7 = new global::Fuse.Reactive.DataBinding(aBtn_Text_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp8 = new global::Fuse.Reactive.DataBinding(bTBox_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp9 = new global::Fuse.Controls.DockPanel();
            var temp10 = new global::Fuse.Effects.DropShadow();
            var temp11 = new global::Fuse.Gestures.Clicked();
            var temp12 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(aEdit_Visibility_inst);
            var temp13 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(aBtn_Visibility_inst);
            var temp14 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bGrid_Visibility_inst);
            var temp15 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bTBox_Visibility_inst);
            var temp16 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bDel_Visibility_inst);
            var temp17 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bComp_Visibility_inst);
            var temp18 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cGrid_Visibility_inst);
            var temp19 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cCancel_Visibility_inst);
            var temp20 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cCancel_Visibility_inst);
            var temp21 = new global::Fuse.Gestures.Clicked();
            var temp22 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(aEdit_Visibility_inst);
            var temp23 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(aBtn_Visibility_inst);
            var temp24 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bGrid_Visibility_inst);
            var temp25 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bTBox_Visibility_inst);
            var temp26 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bDel_Visibility_inst);
            var temp27 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bComp_Visibility_inst);
            var temp28 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cGrid_Visibility_inst);
            var temp29 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cCancel_Visibility_inst);
            var temp30 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cCancel_Visibility_inst);
            var temp31 = new global::Fuse.Gestures.Clicked();
            var temp32 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(aEdit_Visibility_inst);
            var temp33 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(aBtn_Visibility_inst);
            var temp34 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bGrid_Visibility_inst);
            var temp35 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bTBox_Visibility_inst);
            var temp36 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bDel_Visibility_inst);
            var temp37 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bComp_Visibility_inst);
            var temp38 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cGrid_Visibility_inst);
            var temp39 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cCancel_Visibility_inst);
            var temp40 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cCancel_Visibility_inst);
            temp_eb43 = new global::Fuse.Reactive.EventBinding(temp3);
            var temp41 = new global::Fuse.Gestures.Clicked();
            var temp42 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(aEdit_Visibility_inst);
            var temp43 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(aBtn_Visibility_inst);
            var temp44 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bGrid_Visibility_inst);
            var temp45 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bTBox_Visibility_inst);
            var temp46 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bDel_Visibility_inst);
            var temp47 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bComp_Visibility_inst);
            var temp48 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cGrid_Visibility_inst);
            var temp49 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cCancel_Visibility_inst);
            var temp50 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cCancel_Visibility_inst);
            cDel = new global::wbButton();
            var temp51 = new global::Fuse.Gestures.Clicked();
            var temp52 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(aEdit_Visibility_inst);
            var temp53 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(aBtn_Visibility_inst);
            var temp54 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bGrid_Visibility_inst);
            var temp55 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bTBox_Visibility_inst);
            var temp56 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bDel_Visibility_inst);
            var temp57 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(bComp_Visibility_inst);
            var temp58 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cGrid_Visibility_inst);
            var temp59 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cCancel_Visibility_inst);
            var temp60 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(cCancel_Visibility_inst);
            temp_eb44 = new global::Fuse.Reactive.EventBinding(temp4);
            __self.ColumnCount = 10;
            __self.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            global::Fuse.Controls.Grid.SetColumnSpan(temp5, 8);
            temp5.Children.Add(aBtn);
            temp5.Children.Add(bTBox);
            aBtn.Name = __selector3;
            global::Fuse.Gestures.Clicked.AddHandler(aBtn, temp_eb42.OnEvent);
            aBtn.Children.Add(temp6);
            aBtn.Bindings.Add(temp_eb42);
            aBtn.Bindings.Add(temp7);
            temp6.Size = 2f;
            temp6.Angle = 0f;
            temp6.Distance = 1f;
            temp6.Spread = 0.2f;
            temp6.Color = float4(0f, 0f, 0f, 0.3764706f);
            bTBox.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            bTBox.Visibility = Fuse.Elements.Visibility.Hidden;
            bTBox.Name = __selector4;
            bTBox.Bindings.Add(temp8);
            global::Fuse.Controls.Grid.SetColumnSpan(temp9, 2);
            temp9.Children.Add(aEdit);
            temp9.Children.Add(bGrid);
            temp9.Children.Add(cGrid);
            aEdit.Text = "EDIT";
            aEdit.Name = __selector5;
            aEdit.Children.Add(temp10);
            aEdit.Children.Add(temp11);
            temp10.Size = 2f;
            temp10.Angle = 0f;
            temp10.Distance = 1f;
            temp10.Spread = 0.2f;
            temp10.Color = float4(0f, 0f, 0f, 0.3764706f);
            temp11.Actions.Add(temp12);
            temp11.Actions.Add(temp13);
            temp11.Actions.Add(temp14);
            temp11.Actions.Add(temp15);
            temp11.Actions.Add(temp16);
            temp11.Actions.Add(temp17);
            temp11.Actions.Add(temp18);
            temp11.Actions.Add(temp19);
            temp11.Actions.Add(temp20);
            temp12.Value = Fuse.Elements.Visibility.Hidden;
            temp13.Value = Fuse.Elements.Visibility.Hidden;
            temp14.Value = Fuse.Elements.Visibility.Visible;
            temp15.Value = Fuse.Elements.Visibility.Visible;
            temp16.Value = Fuse.Elements.Visibility.Visible;
            temp17.Value = Fuse.Elements.Visibility.Visible;
            temp18.Value = Fuse.Elements.Visibility.Hidden;
            temp19.Value = Fuse.Elements.Visibility.Hidden;
            temp20.Value = Fuse.Elements.Visibility.Hidden;
            bGrid.RowCount = 2;
            bGrid.Visibility = Fuse.Elements.Visibility.Hidden;
            bGrid.Name = __selector6;
            bGrid.Children.Add(bDel);
            bGrid.Children.Add(bComp);
            bDel.Text = "DELETE";
            bDel.Name = __selector7;
            bDel.TextCol = float4(0.9333333f, 0f, 0f, 1f);
            bDel.Children.Add(temp21);
            temp21.Actions.Add(temp22);
            temp21.Actions.Add(temp23);
            temp21.Actions.Add(temp24);
            temp21.Actions.Add(temp25);
            temp21.Actions.Add(temp26);
            temp21.Actions.Add(temp27);
            temp21.Actions.Add(temp28);
            temp21.Actions.Add(temp29);
            temp21.Actions.Add(temp30);
            temp22.Value = Fuse.Elements.Visibility.Hidden;
            temp23.Value = Fuse.Elements.Visibility.Hidden;
            temp24.Value = Fuse.Elements.Visibility.Hidden;
            temp25.Value = Fuse.Elements.Visibility.Visible;
            temp26.Value = Fuse.Elements.Visibility.Hidden;
            temp27.Value = Fuse.Elements.Visibility.Hidden;
            temp28.Value = Fuse.Elements.Visibility.Visible;
            temp29.Value = Fuse.Elements.Visibility.Visible;
            temp30.Value = Fuse.Elements.Visibility.Visible;
            bComp.Text = "OK";
            bComp.Name = __selector8;
            global::Fuse.Gestures.Clicked.AddHandler(bComp, temp_eb43.OnEvent);
            bComp.Children.Add(temp31);
            bComp.Bindings.Add(temp_eb43);
            temp31.Actions.Add(temp32);
            temp31.Actions.Add(temp33);
            temp31.Actions.Add(temp34);
            temp31.Actions.Add(temp35);
            temp31.Actions.Add(temp36);
            temp31.Actions.Add(temp37);
            temp31.Actions.Add(temp38);
            temp31.Actions.Add(temp39);
            temp31.Actions.Add(temp40);
            temp32.Value = Fuse.Elements.Visibility.Visible;
            temp33.Value = Fuse.Elements.Visibility.Visible;
            temp34.Value = Fuse.Elements.Visibility.Hidden;
            temp35.Value = Fuse.Elements.Visibility.Hidden;
            temp36.Value = Fuse.Elements.Visibility.Hidden;
            temp37.Value = Fuse.Elements.Visibility.Hidden;
            temp38.Value = Fuse.Elements.Visibility.Hidden;
            temp39.Value = Fuse.Elements.Visibility.Hidden;
            temp40.Value = Fuse.Elements.Visibility.Hidden;
            cGrid.RowCount = 2;
            cGrid.Visibility = Fuse.Elements.Visibility.Hidden;
            cGrid.Name = __selector9;
            cGrid.Children.Add(cCancel);
            cGrid.Children.Add(cDel);
            cCancel.Text = "CANCEL";
            cCancel.Name = __selector10;
            cCancel.Children.Add(temp41);
            temp41.Actions.Add(temp42);
            temp41.Actions.Add(temp43);
            temp41.Actions.Add(temp44);
            temp41.Actions.Add(temp45);
            temp41.Actions.Add(temp46);
            temp41.Actions.Add(temp47);
            temp41.Actions.Add(temp48);
            temp41.Actions.Add(temp49);
            temp41.Actions.Add(temp50);
            temp42.Value = Fuse.Elements.Visibility.Visible;
            temp43.Value = Fuse.Elements.Visibility.Visible;
            temp44.Value = Fuse.Elements.Visibility.Hidden;
            temp45.Value = Fuse.Elements.Visibility.Hidden;
            temp46.Value = Fuse.Elements.Visibility.Hidden;
            temp47.Value = Fuse.Elements.Visibility.Hidden;
            temp48.Value = Fuse.Elements.Visibility.Hidden;
            temp49.Value = Fuse.Elements.Visibility.Hidden;
            temp50.Value = Fuse.Elements.Visibility.Hidden;
            cDel.Text = "DELETE";
            cDel.Name = __selector11;
            cDel.TextCol = float4(0.9333333f, 0f, 0f, 1f);
            global::Fuse.Gestures.Clicked.AddHandler(cDel, temp_eb44.OnEvent);
            cDel.Children.Add(temp51);
            cDel.Bindings.Add(temp_eb44);
            temp51.Actions.Add(temp52);
            temp51.Actions.Add(temp53);
            temp51.Actions.Add(temp54);
            temp51.Actions.Add(temp55);
            temp51.Actions.Add(temp56);
            temp51.Actions.Add(temp57);
            temp51.Actions.Add(temp58);
            temp51.Actions.Add(temp59);
            temp51.Actions.Add(temp60);
            temp52.Value = Fuse.Elements.Visibility.Visible;
            temp53.Value = Fuse.Elements.Visibility.Visible;
            temp54.Value = Fuse.Elements.Visibility.Hidden;
            temp55.Value = Fuse.Elements.Visibility.Hidden;
            temp56.Value = Fuse.Elements.Visibility.Hidden;
            temp57.Value = Fuse.Elements.Visibility.Hidden;
            temp58.Value = Fuse.Elements.Visibility.Hidden;
            temp59.Value = Fuse.Elements.Visibility.Hidden;
            temp60.Value = Fuse.Elements.Visibility.Hidden;
            __self.Children.Add(temp5);
            __self.Children.Add(temp9);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
        static global::Uno.UX.Selector __selector1 = "Value";
        static global::Uno.UX.Selector __selector2 = "Visibility";
        static global::Uno.UX.Selector __selector3 = "aBtn";
        static global::Uno.UX.Selector __selector4 = "bTBox";
        static global::Uno.UX.Selector __selector5 = "aEdit";
        static global::Uno.UX.Selector __selector6 = "bGrid";
        static global::Uno.UX.Selector __selector7 = "bDel";
        static global::Uno.UX.Selector __selector8 = "bComp";
        static global::Uno.UX.Selector __selector9 = "cGrid";
        static global::Uno.UX.Selector __selector10 = "cCancel";
        static global::Uno.UX.Selector __selector11 = "cDel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template2(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Triggers.LayoutAnimation();
            var temp = new global::Fuse.Animations.Move();
            temp.Y = 1f;
            temp.Duration = 0.4;
            temp.RelativeTo = Fuse.Triggers.LayoutTransition.PositionLayoutChange;
            temp.Easing = Fuse.Animations.Easing.ElasticIn;
            __self.Animators.Add(temp);
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template3(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Triggers.AddingAnimation();
            var temp = new global::Fuse.Animations.Move();
            temp.X = 1f;
            temp.Duration = 0.3;
            temp.RelativeTo = Fuse.TranslationModes.Size;
            temp.Easing = Fuse.Animations.Easing.CircularIn;
            __self.Animators.Add(temp);
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template4(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template4()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Triggers.RemovingAnimation();
            var temp = new global::Fuse.Animations.Move();
            temp.X = -1f;
            temp.Duration = 0.4;
            temp.RelativeTo = Fuse.TranslationModes.Size;
            temp.Easing = Fuse.Animations.Easing.CircularOut;
            __self.Animators.Add(temp);
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template5: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template5(MainView parent, MainView parentInstance): base("inputPanel", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Fuse.Elements.Element> indicator_Element_LayoutMaster_inst;
        global::Uno.UX.Property<float4> InputTab_Margin_inst;
        global::Uno.UX.Property<float4> ListTab_Margin_inst;
        global::Uno.UX.Property<float4> StatisticTab_Margin_inst;
        global::Uno.UX.Property<float4> BudgetTab_Margin_inst;
        static Template5()
        {
        }
        public override object New()
        {
            var __self = new global::InputPage(__parent.router);
            indicator_Element_LayoutMaster_inst = new AccountBook_FuseElementsElement_ElementLayoutMaster_Property(__parent.indicator, __selector0);
            InputTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.InputTab, __selector1);
            ListTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.ListTab, __selector1);
            StatisticTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.StatisticTab, __selector1);
            BudgetTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.BudgetTab, __selector1);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            var temp2 = new global::Fuse.Triggers.Transition();
            var temp3 = new global::Fuse.Animations.Move();
            var temp4 = new global::Fuse.Controls.NavigatorSwipe();
            var temp5 = new global::Fuse.Controls.NavigatorSwipe();
            var temp6 = new global::Fuse.Navigation.WhileActive();
            var temp7 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(indicator_Element_LayoutMaster_inst);
            var temp8 = new global::Fuse.Triggers.Actions.Set<float4>(InputTab_Margin_inst);
            var temp9 = new global::Fuse.Triggers.Actions.Set<float4>(ListTab_Margin_inst);
            var temp10 = new global::Fuse.Triggers.Actions.Set<float4>(StatisticTab_Margin_inst);
            var temp11 = new global::Fuse.Triggers.Actions.Set<float4>(BudgetTab_Margin_inst);
            __self.Name = __selector2;
            temp.To = "budgetPanel";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.Duration = 1;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            temp2.From = "listPanel";
            temp2.Animators.Add(temp3);
            temp3.X = -1f;
            temp3.Duration = 1;
            temp3.RelativeTo = Fuse.TranslationModes.ParentSize;
            temp4.Direction = Fuse.Controls.NavigatorSwipeDirection.Left;
            temp4.How = Fuse.Controls.NavigatorSwipeHow.GotoBookmark;
            temp4.Bookmark = "list";
            temp5.Direction = Fuse.Controls.NavigatorSwipeDirection.Right;
            temp5.How = Fuse.Controls.NavigatorSwipeHow.GotoBookmark;
            temp5.Bookmark = "budget";
            temp6.Actions.Add(temp7);
            temp6.Actions.Add(temp8);
            temp6.Actions.Add(temp9);
            temp6.Actions.Add(temp10);
            temp6.Actions.Add(temp11);
            temp7.Value = __parent.InputTab;
            temp8.Value = float4(0f, 5f, 0f, 0f);
            temp9.Value = float4(0f, 0f, 0f, 0f);
            temp10.Value = float4(0f, 0f, 0f, 0f);
            temp11.Value = float4(0f, 0f, 0f, 0f);
            __self.Children.Add(temp);
            __self.Children.Add(temp2);
            __self.Children.Add(temp4);
            __self.Children.Add(temp5);
            __self.Children.Add(temp6);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Element.LayoutMaster";
        static global::Uno.UX.Selector __selector1 = "Margin";
        static global::Uno.UX.Selector __selector2 = "inputPanel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template6: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template6(MainView parent, MainView parentInstance): base("listPanel", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Fuse.Elements.Element> indicator_Element_LayoutMaster_inst;
        global::Uno.UX.Property<float4> InputTab_Margin_inst;
        global::Uno.UX.Property<float4> ListTab_Margin_inst;
        global::Uno.UX.Property<float4> StatisticTab_Margin_inst;
        global::Uno.UX.Property<float4> BudgetTab_Margin_inst;
        static Template6()
        {
        }
        public override object New()
        {
            var __self = new global::ListPage(__parent.router);
            indicator_Element_LayoutMaster_inst = new AccountBook_FuseElementsElement_ElementLayoutMaster_Property(__parent.indicator, __selector0);
            InputTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.InputTab, __selector1);
            ListTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.ListTab, __selector1);
            StatisticTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.StatisticTab, __selector1);
            BudgetTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.BudgetTab, __selector1);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            var temp2 = new global::Fuse.Triggers.Transition();
            var temp3 = new global::Fuse.Animations.Move();
            var temp4 = new global::Fuse.Controls.NavigatorSwipe();
            var temp5 = new global::Fuse.Controls.NavigatorSwipe();
            var temp6 = new global::Fuse.Navigation.WhileActive();
            var temp7 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(indicator_Element_LayoutMaster_inst);
            var temp8 = new global::Fuse.Triggers.Actions.Set<float4>(InputTab_Margin_inst);
            var temp9 = new global::Fuse.Triggers.Actions.Set<float4>(ListTab_Margin_inst);
            var temp10 = new global::Fuse.Triggers.Actions.Set<float4>(StatisticTab_Margin_inst);
            var temp11 = new global::Fuse.Triggers.Actions.Set<float4>(BudgetTab_Margin_inst);
            __self.Name = __selector2;
            temp.To = "inputPanel";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.Duration = 1;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            temp2.From = "statisticPanel";
            temp2.Animators.Add(temp3);
            temp3.X = -1f;
            temp3.Duration = 1;
            temp3.RelativeTo = Fuse.TranslationModes.ParentSize;
            temp4.Direction = Fuse.Controls.NavigatorSwipeDirection.Left;
            temp4.How = Fuse.Controls.NavigatorSwipeHow.GotoBookmark;
            temp4.Bookmark = "statistic";
            temp5.Direction = Fuse.Controls.NavigatorSwipeDirection.Right;
            temp5.How = Fuse.Controls.NavigatorSwipeHow.GotoBookmark;
            temp5.Bookmark = "input";
            temp6.Actions.Add(temp7);
            temp6.Actions.Add(temp8);
            temp6.Actions.Add(temp9);
            temp6.Actions.Add(temp10);
            temp6.Actions.Add(temp11);
            temp7.Value = __parent.ListTab;
            temp8.Value = float4(0f, 0f, 0f, 0f);
            temp9.Value = float4(0f, 5f, 0f, 0f);
            temp10.Value = float4(0f, 0f, 0f, 0f);
            temp11.Value = float4(0f, 0f, 0f, 0f);
            __self.Children.Add(temp);
            __self.Children.Add(temp2);
            __self.Children.Add(temp4);
            __self.Children.Add(temp5);
            __self.Children.Add(temp6);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Element.LayoutMaster";
        static global::Uno.UX.Selector __selector1 = "Margin";
        static global::Uno.UX.Selector __selector2 = "listPanel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template7: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template7(MainView parent, MainView parentInstance): base("statisticPanel", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Fuse.Elements.Element> indicator_Element_LayoutMaster_inst;
        global::Uno.UX.Property<float4> InputTab_Margin_inst;
        global::Uno.UX.Property<float4> ListTab_Margin_inst;
        global::Uno.UX.Property<float4> StatisticTab_Margin_inst;
        global::Uno.UX.Property<float4> BudgetTab_Margin_inst;
        static Template7()
        {
        }
        public override object New()
        {
            var __self = new global::StatisticPage(__parent.router);
            indicator_Element_LayoutMaster_inst = new AccountBook_FuseElementsElement_ElementLayoutMaster_Property(__parent.indicator, __selector0);
            InputTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.InputTab, __selector1);
            ListTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.ListTab, __selector1);
            StatisticTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.StatisticTab, __selector1);
            BudgetTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.BudgetTab, __selector1);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            var temp2 = new global::Fuse.Triggers.Transition();
            var temp3 = new global::Fuse.Animations.Move();
            var temp4 = new global::Fuse.Controls.NavigatorSwipe();
            var temp5 = new global::Fuse.Controls.NavigatorSwipe();
            var temp6 = new global::Fuse.Navigation.WhileActive();
            var temp7 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(indicator_Element_LayoutMaster_inst);
            var temp8 = new global::Fuse.Triggers.Actions.Set<float4>(InputTab_Margin_inst);
            var temp9 = new global::Fuse.Triggers.Actions.Set<float4>(ListTab_Margin_inst);
            var temp10 = new global::Fuse.Triggers.Actions.Set<float4>(StatisticTab_Margin_inst);
            var temp11 = new global::Fuse.Triggers.Actions.Set<float4>(BudgetTab_Margin_inst);
            __self.Name = __selector2;
            temp.To = "listPanel";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.Duration = 1;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            temp2.From = "budgetPanel";
            temp2.Animators.Add(temp3);
            temp3.X = -1f;
            temp3.Duration = 1;
            temp3.RelativeTo = Fuse.TranslationModes.ParentSize;
            temp4.Direction = Fuse.Controls.NavigatorSwipeDirection.Left;
            temp4.How = Fuse.Controls.NavigatorSwipeHow.GotoBookmark;
            temp4.Bookmark = "budget";
            temp5.Direction = Fuse.Controls.NavigatorSwipeDirection.Right;
            temp5.How = Fuse.Controls.NavigatorSwipeHow.GotoBookmark;
            temp5.Bookmark = "list";
            temp6.Actions.Add(temp7);
            temp6.Actions.Add(temp8);
            temp6.Actions.Add(temp9);
            temp6.Actions.Add(temp10);
            temp6.Actions.Add(temp11);
            temp7.Value = __parent.StatisticTab;
            temp8.Value = float4(0f, 0f, 0f, 0f);
            temp9.Value = float4(0f, 0f, 0f, 0f);
            temp10.Value = float4(0f, 5f, 0f, 0f);
            temp11.Value = float4(0f, 0f, 0f, 0f);
            __self.Children.Add(temp);
            __self.Children.Add(temp2);
            __self.Children.Add(temp4);
            __self.Children.Add(temp5);
            __self.Children.Add(temp6);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Element.LayoutMaster";
        static global::Uno.UX.Selector __selector1 = "Margin";
        static global::Uno.UX.Selector __selector2 = "statisticPanel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template8: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template8(MainView parent, MainView parentInstance): base("budgetPanel", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Fuse.Elements.Element> indicator_Element_LayoutMaster_inst;
        global::Uno.UX.Property<float4> InputTab_Margin_inst;
        global::Uno.UX.Property<float4> ListTab_Margin_inst;
        global::Uno.UX.Property<float4> StatisticTab_Margin_inst;
        global::Uno.UX.Property<float4> BudgetTab_Margin_inst;
        static Template8()
        {
        }
        public override object New()
        {
            var __self = new global::BudgetPage(__parent.router);
            indicator_Element_LayoutMaster_inst = new AccountBook_FuseElementsElement_ElementLayoutMaster_Property(__parent.indicator, __selector0);
            InputTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.InputTab, __selector1);
            ListTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.ListTab, __selector1);
            StatisticTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.StatisticTab, __selector1);
            BudgetTab_Margin_inst = new AccountBook_FuseElementsElement_Margin_Property(__parent.BudgetTab, __selector1);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            var temp2 = new global::Fuse.Triggers.Transition();
            var temp3 = new global::Fuse.Animations.Move();
            var temp4 = new global::Fuse.Controls.NavigatorSwipe();
            var temp5 = new global::Fuse.Controls.NavigatorSwipe();
            var temp6 = new global::Fuse.Navigation.WhileActive();
            var temp7 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(indicator_Element_LayoutMaster_inst);
            var temp8 = new global::Fuse.Triggers.Actions.Set<float4>(InputTab_Margin_inst);
            var temp9 = new global::Fuse.Triggers.Actions.Set<float4>(ListTab_Margin_inst);
            var temp10 = new global::Fuse.Triggers.Actions.Set<float4>(StatisticTab_Margin_inst);
            var temp11 = new global::Fuse.Triggers.Actions.Set<float4>(BudgetTab_Margin_inst);
            __self.Name = __selector2;
            temp.To = "statisticPanel";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.Duration = 1;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            temp2.From = "inputPanel";
            temp2.Animators.Add(temp3);
            temp3.X = -1f;
            temp3.Duration = 1;
            temp3.RelativeTo = Fuse.TranslationModes.ParentSize;
            temp4.Direction = Fuse.Controls.NavigatorSwipeDirection.Left;
            temp4.How = Fuse.Controls.NavigatorSwipeHow.GotoBookmark;
            temp4.Bookmark = "input";
            temp5.Direction = Fuse.Controls.NavigatorSwipeDirection.Right;
            temp5.How = Fuse.Controls.NavigatorSwipeHow.GotoBookmark;
            temp5.Bookmark = "statistic";
            temp6.Actions.Add(temp7);
            temp6.Actions.Add(temp8);
            temp6.Actions.Add(temp9);
            temp6.Actions.Add(temp10);
            temp6.Actions.Add(temp11);
            temp7.Value = __parent.BudgetTab;
            temp8.Value = float4(0f, 0f, 0f, 0f);
            temp9.Value = float4(0f, 0f, 0f, 0f);
            temp10.Value = float4(0f, 0f, 0f, 0f);
            temp11.Value = float4(0f, 5f, 0f, 0f);
            __self.Children.Add(temp);
            __self.Children.Add(temp2);
            __self.Children.Add(temp4);
            __self.Children.Add(temp5);
            __self.Children.Add(temp6);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Element.LayoutMaster";
        static global::Uno.UX.Selector __selector1 = "Margin";
        static global::Uno.UX.Selector __selector2 = "budgetPanel";
    }
    global::Uno.UX.Property<float4> shadow_Color_inst;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    global::Uno.UX.Property<float4> indicator_Color_inst;
    global::Uno.UX.Property<float4> Hamburger_Color_inst;
    [global::Uno.UX.UXGlobalResource("SQLite")] public static readonly SQLite SQLite;
    internal global::Fuse.Controls.Grid sidebar;
    internal global::Fuse.Controls.Shadow shadow;
    internal global::Fuse.Reactive.EventBinding temp_eb45;
    internal global::Fuse.Navigation.Router router;
    internal global::Fuse.Controls.Rectangle indicator;
    internal global::Fuse.Controls.Grid Hamburger;
    internal global::Fuse.Controls.Panel InputTab;
    internal global::TabButton Tab1;
    internal global::Fuse.Reactive.EventBinding temp_eb46;
    internal global::Fuse.Controls.Panel ListTab;
    internal global::TabButton Tab2;
    internal global::Fuse.Reactive.EventBinding temp_eb47;
    internal global::Fuse.Controls.Panel StatisticTab;
    internal global::TabButton Tab3;
    internal global::Fuse.Reactive.EventBinding temp_eb48;
    internal global::Fuse.Controls.Panel BudgetTab;
    internal global::TabButton Tab4;
    internal global::Fuse.Reactive.EventBinding temp_eb49;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "sidebar",
        "shadow",
        "temp_eb45",
        "router",
        "indicator",
        "Hamburger",
        "InputTab",
        "Tab1",
        "temp_eb46",
        "ListTab",
        "Tab2",
        "temp_eb47",
        "StatisticTab",
        "Tab3",
        "temp_eb48",
        "BudgetTab",
        "Tab4",
        "temp_eb49"
    };
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.QuickUnload, "QuickUnload");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadInBackgroundPolicy, "UnloadInBackground");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Thin, "Thin");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Light, "Light");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Regular, "Regular");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Medium, "Medium");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Bold, "Bold");
        global::Uno.UX.Resource.SetGlobalKey(global::ListPage.Bold, "Bold");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.ThinItalic, "ThinItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.LightItalic, "LightItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Italic, "Italic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.MediumItalic, "MediumItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.BoldItalic, "BoldItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Height, "Height");
        global::Uno.UX.Resource.SetGlobalKey(global::ListPage.lArrow, "lArrow");
        global::Uno.UX.Resource.SetGlobalKey(global::ListPage.rArrow, "rArrow");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.SQLite, "SQLite");
        SQLite = new global::SQLite();
        global::Uno.UX.Resource.SetGlobalKey(SQLite, "SQLite");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp3 = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        var temp4 = new global::Fuse.Reactive.FuseJS.Http();
        var temp5 = new global::Fuse.Reactive.FuseJS.TimerModule();
        var temp6 = new global::Fuse.Drawing.BrushConverter();
        var temp7 = new global::Fuse.Triggers.BusyTaskModule();
        var temp8 = new global::Fuse.Testing.UnoTestingHelper();
        var temp9 = new global::Fuse.FileSystem.FileSystemModule();
        var temp10 = new global::Fuse.Storage.StorageModule();
        var temp11 = new global::Fuse.WebSocket.WebSocketClientModule();
        var temp12 = new global::Polyfills.Window.WindowModule();
        var temp13 = new global::FuseJS.Globals();
        var temp14 = new global::FuseJS.Lifecycle();
        var temp15 = new global::FuseJS.Environment();
        var temp16 = new global::FuseJS.Base64();
        var temp17 = new global::FuseJS.Bundle();
        var temp18 = new global::FuseJS.FileReaderImpl();
        var temp19 = new global::FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp20 = float4(0.9568627f, 0.827451f, 0f, 1f);
        var temp21 = float4(1f, 0.9529412f, 0.6509804f, 1f);
        var temp22 = float4(1f, 0.7411765f, 0f, 1f);
        var temp23 = float4(1f, 1f, 0.9333333f, 1f);
        shadow = new global::Fuse.Controls.Shadow();
        shadow_Color_inst = new AccountBook_FuseControlsShadow_Color_Property(shadow, __selector0);
        var temp24 = "Selected : ";
        var temp25 = new global::Fuse.Reactive.Constant(temp24);
        var temp26 = new global::Fuse.Reactive.Data("currentTitle");
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new AccountBook_FuseControlsTextControl_Value_Property(temp, __selector1);
        var temp27 = new global::Fuse.Reactive.Add(temp25, temp26);
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new AccountBook_FuseReactiveEach_Items_Property(temp1, __selector2);
        var temp28 = new global::Fuse.Reactive.Data("tempList");
        var temp2 = new global::Fuse.Reactive.Each();
        temp2_Items_inst = new AccountBook_FuseReactiveEach_Items_Property(temp2, __selector2);
        var temp29 = new global::Fuse.Reactive.Data("tempList");
        var temp30 = new global::Fuse.Reactive.Data("tempListAdd");
        indicator = new global::Fuse.Controls.Rectangle();
        indicator_Color_inst = new AccountBook_FuseControlsShape_Color_Property(indicator, __selector0);
        var temp31 = new global::Fuse.Reactive.Resource("Col_type3");
        Hamburger = new global::Fuse.Controls.Grid();
        Hamburger_Color_inst = new AccountBook_FuseControlsPanel_Color_Property(Hamburger, __selector0);
        var temp32 = new global::Fuse.Reactive.Data("goToInput");
        var temp33 = new global::Fuse.Reactive.Data("goToList");
        var temp34 = new global::Fuse.Reactive.Data("goToStatistic");
        var temp35 = new global::Fuse.Reactive.Data("goToBudget");
        var temp36 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp37 = new global::Uno.UX.Resource("Col_type1", temp20);
        var temp38 = new global::Uno.UX.Resource("Col_type2", temp21);
        var temp39 = new global::Uno.UX.Resource("Col_type3", temp22);
        var temp40 = new global::Uno.UX.Resource("Col_type4", temp23);
        var temp41 = new global::Fuse.Controls.EdgeNavigator();
        sidebar = new global::Fuse.Controls.Grid();
        var temp42 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp43 = new global::Fuse.Animations.Change<float4>(shadow_Color_inst);
        var temp44 = new global::Fuse.Controls.Text();
        var temp45 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp27, Fuse.Reactive.BindingMode.Default);
        var temp46 = new global::Fuse.Controls.Rectangle();
        var temp47 = new Template(this, this);
        var temp48 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp28, Fuse.Reactive.BindingMode.Default);
        var temp49 = new global::Fuse.Controls.ScrollView();
        var temp50 = new global::Fuse.Controls.Grid();
        var temp51 = new Template1(this, this);
        var temp52 = new Template2(this, this);
        var temp53 = new Template3(this, this);
        var temp54 = new Template4(this, this);
        var temp55 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp29, Fuse.Reactive.BindingMode.Default);
        var temp56 = new global::wbButton();
        temp_eb45 = new global::Fuse.Reactive.EventBinding(temp30);
        var temp57 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        router = new global::Fuse.Navigation.Router();
        var temp58 = new global::Fuse.Controls.DockPanel();
        var temp59 = new global::Fuse.Controls.StatusBarBackground();
        var temp60 = new global::Fuse.Drawing.StaticSolidColor(float4(0.5333334f, 0.5333334f, 0.5333334f, 1f));
        var temp61 = new global::Fuse.Triggers.LayoutAnimation();
        var temp62 = new global::Fuse.Animations.Move();
        var temp63 = new global::Fuse.Reactive.DataBinding(indicator_Color_inst, temp31, Fuse.Reactive.BindingMode.Default);
        var temp64 = new global::Fuse.Controls.Grid();
        var temp65 = new global::Banner();
        var temp66 = new global::Fuse.Controls.Button();
        var temp67 = new global::Fuse.Gestures.Clicked();
        var temp68 = new global::Fuse.Navigation.NavigateToggle();
        var temp69 = new global::Fuse.Controls.Rectangle();
        var temp70 = new global::Fuse.Controls.Rectangle();
        var temp71 = new global::Fuse.Controls.Rectangle();
        var temp72 = new global::Fuse.Controls.Rectangle();
        var temp73 = new global::Fuse.Controls.Rectangle();
        var temp74 = new global::Fuse.Controls.Rectangle();
        var temp75 = new global::Fuse.Controls.Rectangle();
        var temp76 = new global::Fuse.Gestures.WhilePressed();
        var temp77 = new global::Fuse.Animations.Change<float4>(Hamburger_Color_inst);
        var temp78 = new global::Fuse.Controls.Grid();
        InputTab = new global::Fuse.Controls.Panel();
        Tab1 = new global::TabButton();
        var temp79 = new global::Fuse.Controls.Text();
        temp_eb46 = new global::Fuse.Reactive.EventBinding(temp32);
        ListTab = new global::Fuse.Controls.Panel();
        Tab2 = new global::TabButton();
        var temp80 = new global::Fuse.Controls.Text();
        temp_eb47 = new global::Fuse.Reactive.EventBinding(temp33);
        StatisticTab = new global::Fuse.Controls.Panel();
        Tab3 = new global::TabButton();
        var temp81 = new global::Fuse.Controls.Text();
        temp_eb48 = new global::Fuse.Reactive.EventBinding(temp34);
        BudgetTab = new global::Fuse.Controls.Panel();
        Tab4 = new global::TabButton();
        var temp82 = new global::Fuse.Controls.Text();
        temp_eb49 = new global::Fuse.Reactive.EventBinding(temp35);
        var temp83 = new global::Fuse.Controls.Navigator();
        var inputPanel = new Template5(this, this);
        var listPanel = new Template6(this, this);
        var statisticPanel = new Template7(this, this);
        var budgetPanel = new Template8(this, this);
        temp36.Code = "\n\tvar moment=require(\"Modules/moment\");\n\tvar Observable=require(\"FuseJS/Observable\");\n\tvar Show=require(\"Modules/Show\");\n\tvar TempDB=require(\"Modules/tempDB\");\n\tvar sqlite = require('SQLite');\n\tvar db = sqlite.open(\"file.sqlite\");\n\t//get currentDateTime\n\n\t// for swipe navigation Start;\n\trouter.bookmark({\n\t\tname: \"input\",\n\t\tpath: [\"inputPanel\",{}]\n\t})\n\trouter.bookmark({\n\t\tname: \"list\",\n\t\tpath: [\"listPanel\",{}]\n\t})\n\trouter.bookmark({\n\t\tname: \"statistic\",\n\t\tpath: [\"statisticPanel\",{}]\n\t})\n\trouter.bookmark({\n\t\tname: \"budget\",\n\t\tpath: [\"budgetPanel\",{}]\n\t})\n\n\n\t//for swipe navigation End \n\n\t//for AccountList Start \n\tvar AccountList=require(\"Modules/AccountList\");\n\tvar tempList=AccountList.tempAccountList;\n\n\tvar clicked_Account = Observable();\n\tvar clicked_Account_id=clicked_Account.map(function(x){return x.db_id.value;});\n\tvar clicked_Account_title=clicked_Account.map(function(x){return x.title.value;}); // list click시여기에 id를 담음\n\tvar index = clicked_Account.map(function(x){return tempList.indexOf(x)});\n\tvar tempListLastIndex=AccountList.idCount;\n\t\n\tvar currentTitle=Observable(tempList.getAt(0).title.value);\n\t \n\t// currentTitleId는 AccountList.js에 저장되어있음 Edge에서 list 선택시 current title과 current id 둘 다 수정해주어야함.\n\tfunction editTitle(arg){\n\t\tconsole.log(\"arg.data.title.value:\"+arg.data.title.value);\n\t\tTempDB.EditAccountListDB_byID(arg.data.db_id.value,arg.data.title.value);\n\t}\n\n\tfunction goToInput(){\n\t\trouter.goto(\"inputPanel\");\n\t}\n \n\tfunction goToList(){\n\t\trouter.goto(\"listPanel\");\n\t}\n\n\tfunction goToStatistic(){ \n\t\trouter.goto(\"statisticPanel\");\n\t}\n\tfunction goToBudget(){ \n\t\trouter.goto(\"budgetPanel\");\n\t}\n\tfunction tempListAdd(){\n\t\tdb.execute(\"insert into ACCOUNTLIST (title) values('\"+\"default\"+\"')\");\n\t\tTempDB.getAccountListDB();\n\t}\n\n\tfunction DeleteAccount(arg){\n\t\tTempDB.DeleteAccountListDB_byID(arg.data.db_id.value);\n\t\tAccountList.currentAccountId.value=1;\n\t\tcurrentTitle.value=TempDB.tempAccountList.getAt(0).title.value;\n\t\tShow.RenewInputCurrentBalance();\n\t\tShow.ReloadHistories();\n\t\tShow.CalculateSpcfTotal();\n\t\tShow.CalculateIntervalTotal();\n\t\tShow.CalculateIntervalItemTotal();\n\t\tShow.RenewOutputTable();\n\t}\n\n\tfunction SelectAccount(arg){\n\t\tAccountList.currentAccountId.value=arg.data.db_id.value;\n\t\tcurrentTitle.value=arg.data.title.value;\n\t\tShow.RenewInputCurrentBalance();\n\t\tShow.ReloadHistories();\n\t\tShow.CalculateSpcfTotal();\n\t\tShow.CalculateIntervalTotal();\n\t\tShow.CalculateIntervalItemTotal();\n\t\tShow.RenewOutputTable();\n\t}\n\n\t//for AccountList End\n\tmodule.exports={  \n\t\tgoToInput: goToInput,\n\t\tgoToList: goToList,\n\t\tgoToStatistic: goToStatistic,\n\t\tgoToBudget,\n\n\t\ttempListAdd: tempListAdd,\n\t\ttempList: tempList,\n\t\ttempListLastIndex: tempListLastIndex,\n\n\t\tcurrentTitle: currentTitle,\n\t\tDeleteAccount: DeleteAccount,\n\n\t\tclicked_Account_id: clicked_Account_id,\n\t\tclicked_Account_title: clicked_Account_title,\n\t\tindex: index,\n\t\tSelectAccount: SelectAccount,\n\t\teditTitle,\n\t}\n\n\t";
        temp36.LineNumber = 3;
        temp36.FileName = "MainView.ux";
        temp41.Children.Add(sidebar);
        temp41.Children.Add(router);
        temp41.Children.Add(temp58);
        sidebar.RowCount = 100;
        sidebar.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Percent);
        sidebar.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        sidebar.Name = __selector3;
        global::Fuse.Navigation.EdgeNavigation.SetEdge(sidebar, Fuse.Navigation.NavigationEdge.Left);
        sidebar.Background = temp57;
        sidebar.Children.Add(shadow);
        sidebar.Children.Add(temp42);
        sidebar.Children.Add(temp44);
        sidebar.Children.Add(temp);
        sidebar.Children.Add(temp46);
        sidebar.Children.Add(temp1);
        sidebar.Children.Add(temp49);
        sidebar.Children.Add(temp56);
        shadow.Angle = 180f;
        shadow.Distance = 8f;
        shadow.Size = 16f;
        shadow.Color = float4(0f, 0f, 0f, 0f);
        shadow.Name = __selector4;
        temp42.Animators.Add(temp43);
        temp43.Value = float4(0f, 0f, 0f, 0.2666667f);
        temp44.Value = "Book List";
        temp44.FontSize = 45f;
        temp44.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.Grid.SetRowSpan(temp44, 18);
        temp.Bindings.Add(temp45);
        global::Fuse.Controls.Grid.SetRowSpan(temp46, 5);
        temp1.Limit = 1;
        temp1.Templates.Add(temp47);
        temp1.Bindings.Add(temp48);
        global::Fuse.Controls.Grid.SetRowSpan(temp49, 41);
        temp49.Children.Add(temp50);
        temp50.ColumnCount = 1;
        temp50.Children.Add(temp2);
        temp2.Offset = 1;
        temp2.Limit = 10000;
        temp2.Templates.Add(temp51);
        temp2.Templates.Add(temp52);
        temp2.Templates.Add(temp53);
        temp2.Templates.Add(temp54);
        temp2.Bindings.Add(temp55);
        temp56.Text = "ADD";
        temp56.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.Grid.SetRow(temp56, 74);
        global::Fuse.Controls.Grid.SetRowSpan(temp56, 8);
        global::Fuse.Gestures.Clicked.AddHandler(temp56, temp_eb45.OnEvent);
        temp56.Bindings.Add(temp_eb45);
        router.Name = __selector5;
        temp58.Children.Add(temp59);
        temp58.Children.Add(indicator);
        temp58.Children.Add(temp64);
        temp58.Children.Add(temp83);
        global::Fuse.Controls.DockPanel.SetDock(temp59, Fuse.Layouts.Dock.Top);
        temp59.Background = temp60;
        indicator.Height = new Uno.UX.Size(4f, Uno.UX.Unit.Unspecified);
        indicator.Alignment = Fuse.Elements.Alignment.Bottom;
        indicator.Name = __selector6;
        global::Fuse.Controls.LayoutControl.SetLayoutMaster(indicator, InputTab);
        indicator.Children.Add(temp61);
        indicator.Bindings.Add(temp63);
        temp61.Animators.Add(temp62);
        temp62.X = 1f;
        temp62.Duration = 0;
        temp62.RelativeTo = Fuse.Triggers.LayoutTransition.WorldPositionChange;
        temp62.Easing = Fuse.Animations.Easing.CircularIn;
        temp62.EasingBack = Fuse.Animations.Easing.CircularIn;
        temp64.RowCount = 100;
        temp64.Children.Add(temp65);
        temp64.Children.Add(temp78);
        global::Fuse.Controls.Grid.SetRowSpan(temp65, 5);
        temp65.Children.Add(temp66);
        temp66.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp66.Alignment = Fuse.Elements.Alignment.Left;
        temp66.Layer = Fuse.Layer.Overlay;
        temp66.Children.Add(temp67);
        temp66.Children.Add(Hamburger);
        temp66.Children.Add(temp76);
        temp67.Actions.Add(temp68);
        temp68.Target = sidebar;
        Hamburger.RowCount = 7;
        Hamburger.Padding = float4(4f, 4f, 4f, 4f);
        Hamburger.Name = __selector7;
        Hamburger.Children.Add(temp69);
        Hamburger.Children.Add(temp70);
        Hamburger.Children.Add(temp71);
        Hamburger.Children.Add(temp72);
        Hamburger.Children.Add(temp73);
        Hamburger.Children.Add(temp74);
        Hamburger.Children.Add(temp75);
        temp69.Color = float4(1f, 0.7411765f, 0f, 1f);
        temp70.CornerRadius = float4(4f, 4f, 4f, 4f);
        temp70.Color = float4(1f, 1f, 1f, 1f);
        temp71.Color = float4(1f, 0.7411765f, 0f, 1f);
        temp72.CornerRadius = float4(4f, 4f, 4f, 4f);
        temp72.Color = float4(1f, 1f, 1f, 1f);
        temp73.Color = float4(1f, 0.7411765f, 0f, 1f);
        temp74.CornerRadius = float4(4f, 4f, 4f, 4f);
        temp74.Color = float4(1f, 1f, 1f, 1f);
        temp75.Color = float4(1f, 0.7411765f, 0f, 1f);
        temp76.Animators.Add(temp77);
        temp77.Value = float4(0.5333334f, 0.5333334f, 0.5333334f, 1f);
        temp77.Duration = 0.05;
        temp77.DurationBack = 0.2;
        temp78.ColumnCount = 4;
        temp78.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        global::Fuse.Controls.DockPanel.SetDock(temp78, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.Grid.SetRowSpan(temp78, 8);
        temp78.Children.Add(InputTab);
        temp78.Children.Add(ListTab);
        temp78.Children.Add(StatisticTab);
        temp78.Children.Add(BudgetTab);
        InputTab.Name = __selector8;
        InputTab.Children.Add(Tab1);
        Tab1.Name = __selector9;
        global::Fuse.Gestures.Clicked.AddHandler(Tab1, temp_eb46.OnEvent);
        Tab1.Children.Add(temp79);
        Tab1.Bindings.Add(temp_eb46);
        temp79.Value = "INPUT";
        temp79.FontSize = 15f;
        temp79.Color = float4(0f, 0f, 0f, 1f);
        temp79.Alignment = Fuse.Elements.Alignment.Center;
        ListTab.Name = __selector10;
        ListTab.Children.Add(Tab2);
        Tab2.Name = __selector11;
        global::Fuse.Gestures.Clicked.AddHandler(Tab2, temp_eb47.OnEvent);
        Tab2.Children.Add(temp80);
        Tab2.Bindings.Add(temp_eb47);
        temp80.Value = "LIST";
        temp80.FontSize = 15f;
        temp80.Color = float4(0f, 0f, 0f, 1f);
        temp80.Alignment = Fuse.Elements.Alignment.Center;
        StatisticTab.Name = __selector12;
        StatisticTab.Children.Add(Tab3);
        Tab3.Name = __selector13;
        global::Fuse.Gestures.Clicked.AddHandler(Tab3, temp_eb48.OnEvent);
        Tab3.Children.Add(temp81);
        Tab3.Bindings.Add(temp_eb48);
        temp81.Value = "STATISTIC";
        temp81.FontSize = 15f;
        temp81.Color = float4(0f, 0f, 0f, 1f);
        temp81.Alignment = Fuse.Elements.Alignment.Center;
        BudgetTab.Name = __selector14;
        BudgetTab.Children.Add(Tab4);
        Tab4.Name = __selector15;
        global::Fuse.Gestures.Clicked.AddHandler(Tab4, temp_eb49.OnEvent);
        Tab4.Children.Add(temp82);
        Tab4.Bindings.Add(temp_eb49);
        temp82.Value = "BUDGET";
        temp82.FontSize = 15f;
        temp82.Color = float4(0f, 0f, 0f, 1f);
        temp82.Alignment = Fuse.Elements.Alignment.Center;
        temp83.DefaultPath = "inputPanel";
        temp83.Templates.Add(inputPanel);
        temp83.Templates.Add(listPanel);
        temp83.Templates.Add(statisticPanel);
        temp83.Templates.Add(budgetPanel);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(sidebar);
        __g_nametable.Objects.Add(shadow);
        __g_nametable.Objects.Add(temp_eb45);
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(indicator);
        __g_nametable.Objects.Add(Hamburger);
        __g_nametable.Objects.Add(InputTab);
        __g_nametable.Objects.Add(Tab1);
        __g_nametable.Objects.Add(temp_eb46);
        __g_nametable.Objects.Add(ListTab);
        __g_nametable.Objects.Add(Tab2);
        __g_nametable.Objects.Add(temp_eb47);
        __g_nametable.Objects.Add(StatisticTab);
        __g_nametable.Objects.Add(Tab3);
        __g_nametable.Objects.Add(temp_eb48);
        __g_nametable.Objects.Add(BudgetTab);
        __g_nametable.Objects.Add(Tab4);
        __g_nametable.Objects.Add(temp_eb49);
        this.Children.Add(temp36);
        this.Children.Add(temp41);
        this.Resources.Add(temp37);
        this.Resources.Add(temp38);
        this.Resources.Add(temp39);
        this.Resources.Add(temp40);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "Items";
    static global::Uno.UX.Selector __selector3 = "sidebar";
    static global::Uno.UX.Selector __selector4 = "shadow";
    static global::Uno.UX.Selector __selector5 = "router";
    static global::Uno.UX.Selector __selector6 = "indicator";
    static global::Uno.UX.Selector __selector7 = "Hamburger";
    static global::Uno.UX.Selector __selector8 = "InputTab";
    static global::Uno.UX.Selector __selector9 = "Tab1";
    static global::Uno.UX.Selector __selector10 = "ListTab";
    static global::Uno.UX.Selector __selector11 = "Tab2";
    static global::Uno.UX.Selector __selector12 = "StatisticTab";
    static global::Uno.UX.Selector __selector13 = "Tab3";
    static global::Uno.UX.Selector __selector14 = "BudgetTab";
    static global::Uno.UX.Selector __selector15 = "Tab4";
}
