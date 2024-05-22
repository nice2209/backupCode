﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _20240430_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        enum enumDay
        {
            Monday,
            Tuesday,
            Wednesday,
            Thursday,
            Friday,
            Saturday,
            Surday,
        }

        enum enumTime
        {
            Morning,
            Afternoon,
            Evening,
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            lboxDay.Items.Add(enumDay.Monday.ToString());
            lboxDay.Items.Add(enumDay.Tuesday);
            lboxDay.Items.Add(enumDay.Wednesday);
            lboxDay.Items.Add(enumDay.Thursday);
            lboxDay.Items.Add(enumDay.Friday);
            lboxDay.Items.Add(enumDay.Saturday);
            lboxDay.Items.Add(enumDay.Surday);

            lboxTime.Items.Add(enumTime.Morning);
            lboxTime.Items.Add(enumTime.Afternoon);
            lboxTime.Items.Add(enumTime.Evening);
        }

        private void btnResult1_Click(object sender, EventArgs e)
        {
            string strResult = tboxName.Text + "와 " + lboxDay.SelectedItem.ToString() + "(요일) " + lboxTime.SelectedItem.ToString() + "에 보기로 했습니다.";

            tboxResult.Text = strResult.ToString();
        }

        private void btnResult2_Click(object sender, EventArgs e)
        {
            string strResult = String.Format("{0}와 {1}(요일) {2}에 보기로 했습니다.", tboxName.Text, lboxDay.SelectedItem.ToString(), lboxTime.SelectedItem.ToString());

            tboxResult.Text = strResult.ToString();
        }
    }
}
