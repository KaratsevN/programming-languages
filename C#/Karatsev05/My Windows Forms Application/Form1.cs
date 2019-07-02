using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace My_Windows_Forms_Application
{
    public partial class Form1 : Form
    {
        private int A;
        private int B;
        private int C;
        private int D;
        private int E;
        private double X;
        private double X2;
        private double X3;
        private double X4;
        private double result;
        public Form1()
        {
            InitializeComponent();
        }

        private void FlowLayoutPanel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void TextBox9_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void TextBox12_TextChanged(object sender, EventArgs e)
        {

        }

        private void TextBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void TextBoxEvent(object sender, EventArgs e)
        {
            try
            {
                A = Convert.ToInt32(textBoxVariableA.Text);
                B = Convert.ToInt32(textBoxVariableB.Text);
                C = Convert.ToInt32(textBoxVariableC.Text);
                D = Convert.ToInt32(textBoxVariableD.Text);
                E = Convert.ToInt32(textBoxVariableE.Text);
                X = Convert.ToDouble(textBoxVariableX.Text);
                X2 = Convert.ToDouble(textBoxVariableX2.Text);
                X3 = Convert.ToDouble(textBoxVariableX3.Text);
                X4 = Convert.ToDouble(textBoxVariableX4.Text);
                result = (A * X4 + B * X3 + C * X2 + D * X) % E;
                resultBox.Text = Convert.ToString(result);
            }
            catch {
                resultBox.Text = "Error";
            }

        }
    }
}
