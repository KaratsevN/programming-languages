namespace My_Windows_Forms_Application
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        // (A * X4 + B * X3 + C * X2 + D * X) div E
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.flowLayoutPanel1 = new System.Windows.Forms.FlowLayoutPanel();
            this.textBoxVariableA = new System.Windows.Forms.TextBox();
            this.textBoxVariableB = new System.Windows.Forms.TextBox();
            this.textBoxVariableC = new System.Windows.Forms.TextBox();
            this.textBoxVariableD = new System.Windows.Forms.TextBox();
            this.textBoxVariableE = new System.Windows.Forms.TextBox();
            this.textBoxVariableX = new System.Windows.Forms.TextBox();
            this.textBoxVariableX2 = new System.Windows.Forms.TextBox();
            this.textBoxVariableX3 = new System.Windows.Forms.TextBox();
            this.flowLayoutPanel2 = new System.Windows.Forms.FlowLayoutPanel();
            this.textBoxTextA = new System.Windows.Forms.TextBox();
            this.textBoxTextX3 = new System.Windows.Forms.TextBox();
            this.textBoxTextX2 = new System.Windows.Forms.TextBox();
            this.textBoxTextX = new System.Windows.Forms.TextBox();
            this.textBoxTextE = new System.Windows.Forms.TextBox();
            this.textBoxTextD = new System.Windows.Forms.TextBox();
            this.textBoxTextC = new System.Windows.Forms.TextBox();
            this.textBoxTextB = new System.Windows.Forms.TextBox();
            this.textBoxVariableX4 = new System.Windows.Forms.TextBox();
            this.textBoxTextX4 = new System.Windows.Forms.TextBox();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.resultBox = new System.Windows.Forms.TextBox();
            this.flowLayoutPanel3 = new System.Windows.Forms.FlowLayoutPanel();
            this.flowLayoutPanel1.SuspendLayout();
            this.flowLayoutPanel2.SuspendLayout();
            this.flowLayoutPanel3.SuspendLayout();
            this.SuspendLayout();
            // 
            // flowLayoutPanel1
            // 
            this.flowLayoutPanel1.Controls.Add(this.textBoxVariableA);
            this.flowLayoutPanel1.Controls.Add(this.textBoxVariableB);
            this.flowLayoutPanel1.Controls.Add(this.textBoxVariableC);
            this.flowLayoutPanel1.Controls.Add(this.textBoxVariableD);
            this.flowLayoutPanel1.Controls.Add(this.textBoxVariableE);
            this.flowLayoutPanel1.Controls.Add(this.textBoxVariableX);
            this.flowLayoutPanel1.Controls.Add(this.textBoxVariableX2);
            this.flowLayoutPanel1.Controls.Add(this.textBoxVariableX3);
            this.flowLayoutPanel1.Controls.Add(this.textBoxVariableX4);
            this.flowLayoutPanel1.Location = new System.Drawing.Point(41, 12);
            this.flowLayoutPanel1.Name = "flowLayoutPanel1";
            this.flowLayoutPanel1.Size = new System.Drawing.Size(224, 575);
            this.flowLayoutPanel1.TabIndex = 0;
            this.flowLayoutPanel1.Paint += new System.Windows.Forms.PaintEventHandler(this.FlowLayoutPanel1_Paint);
            // 
            // textBoxVariableA
            // 
            this.textBoxVariableA.Location = new System.Drawing.Point(3, 3);
            this.textBoxVariableA.Multiline = true;
            this.textBoxVariableA.Name = "textBoxVariableA";
            this.textBoxVariableA.Size = new System.Drawing.Size(200, 20);
            this.textBoxVariableA.TabIndex = 0;
            this.textBoxVariableA.TextChanged += new System.EventHandler(this.TextBoxEvent);
            // 
            // textBoxVariableB
            // 
            this.textBoxVariableB.Location = new System.Drawing.Point(3, 29);
            this.textBoxVariableB.Multiline = true;
            this.textBoxVariableB.Name = "textBoxVariableB";
            this.textBoxVariableB.Size = new System.Drawing.Size(200, 20);
            this.textBoxVariableB.TabIndex = 1;
            this.textBoxVariableB.TextChanged += new System.EventHandler(this.TextBoxEvent);
            // 
            // textBoxVariableC
            // 
            this.textBoxVariableC.Location = new System.Drawing.Point(3, 55);
            this.textBoxVariableC.Multiline = true;
            this.textBoxVariableC.Name = "textBoxVariableC";
            this.textBoxVariableC.Size = new System.Drawing.Size(200, 20);
            this.textBoxVariableC.TabIndex = 2;
            this.textBoxVariableC.TextChanged += new System.EventHandler(this.TextBoxEvent);
            // 
            // textBoxVariableD
            // 
            this.textBoxVariableD.Location = new System.Drawing.Point(3, 81);
            this.textBoxVariableD.Multiline = true;
            this.textBoxVariableD.Name = "textBoxVariableD";
            this.textBoxVariableD.Size = new System.Drawing.Size(200, 20);
            this.textBoxVariableD.TabIndex = 3;
            this.textBoxVariableD.TextChanged += new System.EventHandler(this.TextBoxEvent);
            // 
            // textBoxVariableE
            // 
            this.textBoxVariableE.Location = new System.Drawing.Point(3, 107);
            this.textBoxVariableE.Multiline = true;
            this.textBoxVariableE.Name = "textBoxVariableE";
            this.textBoxVariableE.Size = new System.Drawing.Size(200, 20);
            this.textBoxVariableE.TabIndex = 4;
            this.textBoxVariableE.TextChanged += new System.EventHandler(this.TextBoxEvent);
            // 
            // textBoxVariableX
            // 
            this.textBoxVariableX.Location = new System.Drawing.Point(3, 133);
            this.textBoxVariableX.Multiline = true;
            this.textBoxVariableX.Name = "textBoxVariableX";
            this.textBoxVariableX.Size = new System.Drawing.Size(200, 20);
            this.textBoxVariableX.TabIndex = 5;
            this.textBoxVariableX.TextChanged += new System.EventHandler(this.TextBoxEvent);
            // 
            // textBoxVariableX2
            // 
            this.textBoxVariableX2.Location = new System.Drawing.Point(3, 159);
            this.textBoxVariableX2.Multiline = true;
            this.textBoxVariableX2.Name = "textBoxVariableX2";
            this.textBoxVariableX2.Size = new System.Drawing.Size(200, 20);
            this.textBoxVariableX2.TabIndex = 6;
            this.textBoxVariableX2.TextChanged += new System.EventHandler(this.TextBoxEvent);
            // 
            // textBoxVariableX3
            // 
            this.textBoxVariableX3.Location = new System.Drawing.Point(3, 185);
            this.textBoxVariableX3.Multiline = true;
            this.textBoxVariableX3.Name = "textBoxVariableX3";
            this.textBoxVariableX3.Size = new System.Drawing.Size(200, 20);
            this.textBoxVariableX3.TabIndex = 7;
            this.textBoxVariableX3.TextChanged += new System.EventHandler(this.TextBoxEvent);
            // 
            // flowLayoutPanel2
            // 
            this.flowLayoutPanel2.Controls.Add(this.textBoxTextA);
            this.flowLayoutPanel2.Controls.Add(this.textBoxTextB);
            this.flowLayoutPanel2.Controls.Add(this.textBoxTextC);
            this.flowLayoutPanel2.Controls.Add(this.textBoxTextD);
            this.flowLayoutPanel2.Controls.Add(this.textBoxTextE);
            this.flowLayoutPanel2.Controls.Add(this.textBoxTextX);
            this.flowLayoutPanel2.Controls.Add(this.textBoxTextX2);
            this.flowLayoutPanel2.Controls.Add(this.textBoxTextX3);
            this.flowLayoutPanel2.Controls.Add(this.textBoxTextX4);
            this.flowLayoutPanel2.Location = new System.Drawing.Point(12, 12);
            this.flowLayoutPanel2.Name = "flowLayoutPanel2";
            this.flowLayoutPanel2.Size = new System.Drawing.Size(24, 575);
            this.flowLayoutPanel2.TabIndex = 1;
            // 
            // textBoxTextA
            // 
            this.textBoxTextA.BackColor = System.Drawing.SystemColors.Control;
            this.textBoxTextA.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.textBoxTextA.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.textBoxTextA.Dock = System.Windows.Forms.DockStyle.Top;
            this.textBoxTextA.Font = new System.Drawing.Font("Segoe UI", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBoxTextA.ForeColor = System.Drawing.SystemColors.WindowText;
            this.textBoxTextA.Location = new System.Drawing.Point(3, 3);
            this.textBoxTextA.Multiline = true;
            this.textBoxTextA.Name = "textBoxTextA";
            this.textBoxTextA.ReadOnly = true;
            this.textBoxTextA.Size = new System.Drawing.Size(20, 20);
            this.textBoxTextA.TabIndex = 8;
            this.textBoxTextA.Text = "A";
            this.textBoxTextA.TextChanged += new System.EventHandler(this.TextBox9_TextChanged);
            // 
            // textBoxTextX3
            // 
            this.textBoxTextX3.BackColor = System.Drawing.SystemColors.Control;
            this.textBoxTextX3.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.textBoxTextX3.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.textBoxTextX3.Dock = System.Windows.Forms.DockStyle.Top;
            this.textBoxTextX3.Font = new System.Drawing.Font("Segoe UI", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBoxTextX3.ForeColor = System.Drawing.SystemColors.WindowText;
            this.textBoxTextX3.Location = new System.Drawing.Point(3, 185);
            this.textBoxTextX3.Multiline = true;
            this.textBoxTextX3.Name = "textBoxTextX3";
            this.textBoxTextX3.ReadOnly = true;
            this.textBoxTextX3.Size = new System.Drawing.Size(20, 20);
            this.textBoxTextX3.TabIndex = 9;
            this.textBoxTextX3.Text = "X3";
            // 
            // textBoxTextX2
            // 
            this.textBoxTextX2.BackColor = System.Drawing.SystemColors.Control;
            this.textBoxTextX2.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.textBoxTextX2.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.textBoxTextX2.Dock = System.Windows.Forms.DockStyle.Top;
            this.textBoxTextX2.Font = new System.Drawing.Font("Segoe UI", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBoxTextX2.ForeColor = System.Drawing.SystemColors.WindowText;
            this.textBoxTextX2.Location = new System.Drawing.Point(3, 159);
            this.textBoxTextX2.Multiline = true;
            this.textBoxTextX2.Name = "textBoxTextX2";
            this.textBoxTextX2.ReadOnly = true;
            this.textBoxTextX2.Size = new System.Drawing.Size(20, 20);
            this.textBoxTextX2.TabIndex = 10;
            this.textBoxTextX2.Text = "X2";
            // 
            // textBoxTextX
            // 
            this.textBoxTextX.BackColor = System.Drawing.SystemColors.Control;
            this.textBoxTextX.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.textBoxTextX.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.textBoxTextX.Dock = System.Windows.Forms.DockStyle.Top;
            this.textBoxTextX.Font = new System.Drawing.Font("Segoe UI", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBoxTextX.ForeColor = System.Drawing.SystemColors.WindowText;
            this.textBoxTextX.Location = new System.Drawing.Point(3, 133);
            this.textBoxTextX.Multiline = true;
            this.textBoxTextX.Name = "textBoxTextX";
            this.textBoxTextX.ReadOnly = true;
            this.textBoxTextX.Size = new System.Drawing.Size(20, 20);
            this.textBoxTextX.TabIndex = 11;
            this.textBoxTextX.Text = "X";
            this.textBoxTextX.TextChanged += new System.EventHandler(this.TextBox12_TextChanged);
            // 
            // textBoxTextE
            // 
            this.textBoxTextE.BackColor = System.Drawing.SystemColors.Control;
            this.textBoxTextE.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.textBoxTextE.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.textBoxTextE.Dock = System.Windows.Forms.DockStyle.Top;
            this.textBoxTextE.Font = new System.Drawing.Font("Segoe UI", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBoxTextE.ForeColor = System.Drawing.SystemColors.WindowText;
            this.textBoxTextE.Location = new System.Drawing.Point(3, 107);
            this.textBoxTextE.Multiline = true;
            this.textBoxTextE.Name = "textBoxTextE";
            this.textBoxTextE.ReadOnly = true;
            this.textBoxTextE.Size = new System.Drawing.Size(20, 20);
            this.textBoxTextE.TabIndex = 12;
            this.textBoxTextE.Text = "E";
            // 
            // textBoxTextD
            // 
            this.textBoxTextD.BackColor = System.Drawing.SystemColors.Control;
            this.textBoxTextD.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.textBoxTextD.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.textBoxTextD.Dock = System.Windows.Forms.DockStyle.Top;
            this.textBoxTextD.Font = new System.Drawing.Font("Segoe UI", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBoxTextD.ForeColor = System.Drawing.SystemColors.WindowText;
            this.textBoxTextD.Location = new System.Drawing.Point(3, 81);
            this.textBoxTextD.Multiline = true;
            this.textBoxTextD.Name = "textBoxTextD";
            this.textBoxTextD.ReadOnly = true;
            this.textBoxTextD.Size = new System.Drawing.Size(20, 20);
            this.textBoxTextD.TabIndex = 13;
            this.textBoxTextD.Text = "D";
            // 
            // textBoxTextC
            // 
            this.textBoxTextC.BackColor = System.Drawing.SystemColors.Control;
            this.textBoxTextC.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.textBoxTextC.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.textBoxTextC.Dock = System.Windows.Forms.DockStyle.Top;
            this.textBoxTextC.Font = new System.Drawing.Font("Segoe UI", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBoxTextC.ForeColor = System.Drawing.SystemColors.WindowText;
            this.textBoxTextC.Location = new System.Drawing.Point(3, 55);
            this.textBoxTextC.Multiline = true;
            this.textBoxTextC.Name = "textBoxTextC";
            this.textBoxTextC.ReadOnly = true;
            this.textBoxTextC.Size = new System.Drawing.Size(20, 20);
            this.textBoxTextC.TabIndex = 14;
            this.textBoxTextC.Text = "C";
            // 
            // textBoxTextB
            // 
            this.textBoxTextB.BackColor = System.Drawing.SystemColors.Control;
            this.textBoxTextB.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.textBoxTextB.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.textBoxTextB.Dock = System.Windows.Forms.DockStyle.Top;
            this.textBoxTextB.Font = new System.Drawing.Font("Segoe UI", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBoxTextB.ForeColor = System.Drawing.SystemColors.WindowText;
            this.textBoxTextB.Location = new System.Drawing.Point(3, 29);
            this.textBoxTextB.Multiline = true;
            this.textBoxTextB.Name = "textBoxTextB";
            this.textBoxTextB.ReadOnly = true;
            this.textBoxTextB.Size = new System.Drawing.Size(20, 20);
            this.textBoxTextB.TabIndex = 15;
            this.textBoxTextB.Text = "B";
            // 
            // textBoxVariableX4
            // 
            this.textBoxVariableX4.Location = new System.Drawing.Point(3, 211);
            this.textBoxVariableX4.Multiline = true;
            this.textBoxVariableX4.Name = "textBoxVariableX4";
            this.textBoxVariableX4.Size = new System.Drawing.Size(200, 20);
            this.textBoxVariableX4.TabIndex = 8;
            this.textBoxVariableX4.TextChanged += new System.EventHandler(this.TextBoxEvent);
            // 
            // textBoxTextX4
            // 
            this.textBoxTextX4.BackColor = System.Drawing.SystemColors.Control;
            this.textBoxTextX4.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.textBoxTextX4.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.textBoxTextX4.Dock = System.Windows.Forms.DockStyle.Top;
            this.textBoxTextX4.Font = new System.Drawing.Font("Segoe UI", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBoxTextX4.ForeColor = System.Drawing.SystemColors.WindowText;
            this.textBoxTextX4.Location = new System.Drawing.Point(3, 211);
            this.textBoxTextX4.Multiline = true;
            this.textBoxTextX4.Name = "textBoxTextX4";
            this.textBoxTextX4.ReadOnly = true;
            this.textBoxTextX4.Size = new System.Drawing.Size(20, 20);
            this.textBoxTextX4.TabIndex = 16;
            this.textBoxTextX4.Text = "X4";
            // 
            // textBox1
            // 
            this.textBox1.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Left | System.Windows.Forms.AnchorStyles.Right)));
            this.textBox1.BackColor = System.Drawing.SystemColors.Control;
            this.textBox1.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.textBox1.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.textBox1.Font = new System.Drawing.Font("Segoe UI", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBox1.ForeColor = System.Drawing.SystemColors.WindowText;
            this.textBox1.Location = new System.Drawing.Point(3, 3);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(122, 43);
            this.textBox1.TabIndex = 17;
            this.textBox1.Text = "Result";
            this.textBox1.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.textBox1.TextChanged += new System.EventHandler(this.TextBox1_TextChanged);
            // 
            // resultBox
            // 
            this.resultBox.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Left | System.Windows.Forms.AnchorStyles.Right)));
            this.resultBox.BackColor = System.Drawing.SystemColors.Control;
            this.resultBox.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.resultBox.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.resultBox.Font = new System.Drawing.Font("Segoe UI", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.resultBox.ForeColor = System.Drawing.SystemColors.WindowText;
            this.resultBox.Location = new System.Drawing.Point(3, 52);
            this.resultBox.Multiline = true;
            this.resultBox.Name = "resultBox";
            this.resultBox.Size = new System.Drawing.Size(181, 20);
            this.resultBox.TabIndex = 18;
            this.resultBox.Text = "Please input variables";
            this.resultBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // flowLayoutPanel3
            // 
            this.flowLayoutPanel3.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
            this.flowLayoutPanel3.Controls.Add(this.textBox1);
            this.flowLayoutPanel3.Controls.Add(this.resultBox);
            this.flowLayoutPanel3.Location = new System.Drawing.Point(268, 13);
            this.flowLayoutPanel3.Name = "flowLayoutPanel3";
            this.flowLayoutPanel3.Size = new System.Drawing.Size(236, 575);
            this.flowLayoutPanel3.TabIndex = 19;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 600);
            this.Controls.Add(this.flowLayoutPanel3);
            this.Controls.Add(this.flowLayoutPanel2);
            this.Controls.Add(this.flowLayoutPanel1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.flowLayoutPanel1.ResumeLayout(false);
            this.flowLayoutPanel1.PerformLayout();
            this.flowLayoutPanel2.ResumeLayout(false);
            this.flowLayoutPanel2.PerformLayout();
            this.flowLayoutPanel3.ResumeLayout(false);
            this.flowLayoutPanel3.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.FlowLayoutPanel flowLayoutPanel1;
        private System.Windows.Forms.TextBox textBoxVariableA;
        private System.Windows.Forms.TextBox textBoxVariableB;
        private System.Windows.Forms.TextBox textBoxVariableC;
        private System.Windows.Forms.TextBox textBoxVariableD;
        private System.Windows.Forms.TextBox textBoxVariableE;
        private System.Windows.Forms.TextBox textBoxVariableX;
        private System.Windows.Forms.TextBox textBoxVariableX2;
        private System.Windows.Forms.TextBox textBoxVariableX3;
        private System.Windows.Forms.FlowLayoutPanel flowLayoutPanel2;
        private System.Windows.Forms.TextBox textBoxTextA;
        private System.Windows.Forms.TextBox textBoxTextB;
        private System.Windows.Forms.TextBox textBoxTextC;
        private System.Windows.Forms.TextBox textBoxTextD;
        private System.Windows.Forms.TextBox textBoxTextE;
        private System.Windows.Forms.TextBox textBoxTextX;
        private System.Windows.Forms.TextBox textBoxTextX2;
        private System.Windows.Forms.TextBox textBoxTextX3;
        private System.Windows.Forms.TextBox textBoxVariableX4;
        private System.Windows.Forms.TextBox textBoxTextX4;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.TextBox resultBox;
        private System.Windows.Forms.FlowLayoutPanel flowLayoutPanel3;
    }
}

