﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _20240429_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnPlus_Click(object sender, EventArgs e)
        {
            int iNumA = int.Parse(tboxNum1.Text);
            int iNumB = int.Parse(tboxNum2.Text);

            int iResult = iNumA + iNumB;

            tboxResult.Text = iResult.ToString();
        }

        private void btnMinus_Click(object sender, EventArgs e)
        {
            int iNumA = int.Parse(tboxNum1.Text);
            int iNumB = int.Parse(tboxNum2.Text);

            int iResult = iNumA - iNumB;

            tboxResult.Text = iResult.ToString();
        }

        private void btnMulti_Click(object sender, EventArgs e)
        {
            int iNumA = int.Parse(tboxNum1.Text);
            int iNumB = int.Parse(tboxNum2.Text);

            int iResult = iNumA * iNumB;

            tboxResult.Text = iResult.ToString();
        }

        private void btnDivision_Click(object sender, EventArgs e)
        {
            double iNumA = int.Parse(tboxNum1.Text);
            double iNumB = int.Parse(tboxNum2.Text);

            double iResult = iNumA / iNumB;

            tboxResult.Text = iResult.ToString();
        }
    }
}
