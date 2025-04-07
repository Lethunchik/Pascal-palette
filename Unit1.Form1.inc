procedure InitializeComponent;
    begin
        self.RED := new System.Windows.Forms.TrackBar();
        self.GREEN := new System.Windows.Forms.TrackBar();
        self.BLUE := new System.Windows.Forms.TrackBar();
        self.button1 := new System.Windows.Forms.Button();
        (System.ComponentModel.ISupportInitialize(self.RED)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.GREEN)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.BLUE)).BeginInit();
        self.SuspendLayout();
        // 
        // RED
        // 
        self.RED.BackColor := System.Drawing.Color.Red;
        self.RED.Location := new System.Drawing.Point(45, 23);
        self.RED.Maximum := 255;
        self.RED.Name := 'RED';
        self.RED.Size := new System.Drawing.Size(344, 56);
        self.RED.TabIndex := 0;
        self.RED.Scroll += RED_Scroll;
        // 
        // GREEN
        // 
        self.GREEN.BackColor := System.Drawing.Color.Green;
        self.GREEN.Location := new System.Drawing.Point(45, 85);
        self.GREEN.Maximum := 255;
        self.GREEN.Name := 'GREEN';
        self.GREEN.Size := new System.Drawing.Size(344, 56);
        self.GREEN.TabIndex := 1;
        self.GREEN.Scroll += GREEN_Scroll;
        // 
        // BLUE
        // 
        self.BLUE.BackColor := System.Drawing.Color.Blue;
        self.BLUE.Location := new System.Drawing.Point(45, 147);
        self.BLUE.Maximum := 255;
        self.BLUE.Name := 'BLUE';
        self.BLUE.Size := new System.Drawing.Size(344, 56);
        self.BLUE.TabIndex := 2;
        self.BLUE.Scroll += BLUE_Scroll;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(45, 215);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(344, 133);
        self.button1.TabIndex := 3;
        self.button1.Text := 'Выдать цвет:';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(431, 360);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.BLUE);
        self.Controls.Add(self.GREEN);
        self.Controls.Add(self.RED);
        self.Name := 'Form1';
        self.Text := 'Form1';
        (System.ComponentModel.ISupportInitialize(self.RED)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.GREEN)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.BLUE)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
