﻿namespace _20240429_3
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.tboxNumber = new System.Windows.Forms.TextBox();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.tboxResult = new System.Windows.Forms.TextBox();
            this.tboxResultAfter = new System.Windows.Forms.TextBox();
            this.tboxResultBit = new System.Windows.Forms.TextBox();
            this.tboxAndOr = new System.Windows.Forms.TextBox();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.button6 = new System.Windows.Forms.Button();
            this.button7 = new System.Windows.Forms.Button();
            this.button8 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // tboxNumber
            // 
            this.tboxNumber.Location = new System.Drawing.Point(12, 126);
            this.tboxNumber.Name = "tboxNumber";
            this.tboxNumber.Size = new System.Drawing.Size(130, 25);
            this.tboxNumber.TabIndex = 3;
            this.tboxNumber.Text = "0";
            this.tboxNumber.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(12, 157);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(62, 60);
            this.button1.TabIndex = 5;
            this.button1.Text = "<<";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(80, 157);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(62, 60);
            this.button2.TabIndex = 6;
            this.button2.Text = ">>";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // tboxResult
            // 
            this.tboxResult.Location = new System.Drawing.Point(12, 12);
            this.tboxResult.Name = "tboxResult";
            this.tboxResult.Size = new System.Drawing.Size(130, 25);
            this.tboxResult.TabIndex = 7;
            this.tboxResult.Text = "0";
            this.tboxResult.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            this.tboxResult.TextChanged += new System.EventHandler(this.tboxResult_TextChanged);
            // 
            // tboxResultAfter
            // 
            this.tboxResultAfter.Location = new System.Drawing.Point(148, 12);
            this.tboxResultAfter.Name = "tboxResultAfter";
            this.tboxResultAfter.Size = new System.Drawing.Size(130, 25);
            this.tboxResultAfter.TabIndex = 8;
            this.tboxResultAfter.Text = "0";
            this.tboxResultAfter.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // tboxResultBit
            // 
            this.tboxResultBit.Enabled = false;
            this.tboxResultBit.Location = new System.Drawing.Point(12, 43);
            this.tboxResultBit.Name = "tboxResultBit";
            this.tboxResultBit.Size = new System.Drawing.Size(130, 25);
            this.tboxResultBit.TabIndex = 9;
            this.tboxResultBit.Text = "0";
            this.tboxResultBit.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // tboxAndOr
            // 
            this.tboxAndOr.Enabled = false;
            this.tboxAndOr.Location = new System.Drawing.Point(148, 126);
            this.tboxAndOr.Name = "tboxAndOr";
            this.tboxAndOr.Size = new System.Drawing.Size(130, 25);
            this.tboxAndOr.TabIndex = 10;
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(148, 157);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(62, 60);
            this.button3.TabIndex = 11;
            this.button3.Text = "+=";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(216, 157);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(62, 60);
            this.button4.TabIndex = 12;
            this.button4.Text = "-=";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // button5
            // 
            this.button5.Location = new System.Drawing.Point(12, 223);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(62, 60);
            this.button5.TabIndex = 13;
            this.button5.Text = "++a";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // button6
            // 
            this.button6.Location = new System.Drawing.Point(80, 223);
            this.button6.Name = "button6";
            this.button6.Size = new System.Drawing.Size(62, 60);
            this.button6.TabIndex = 14;
            this.button6.Text = "a++";
            this.button6.UseVisualStyleBackColor = true;
            this.button6.Click += new System.EventHandler(this.button6_Click);
            // 
            // button7
            // 
            this.button7.Location = new System.Drawing.Point(148, 223);
            this.button7.Name = "button7";
            this.button7.Size = new System.Drawing.Size(62, 60);
            this.button7.TabIndex = 15;
            this.button7.Text = "&&";
            this.button7.UseVisualStyleBackColor = true;
            this.button7.Click += new System.EventHandler(this.button7_Click);
            // 
            // button8
            // 
            this.button8.Location = new System.Drawing.Point(216, 223);
            this.button8.Name = "button8";
            this.button8.Size = new System.Drawing.Size(62, 60);
            this.button8.TabIndex = 16;
            this.button8.Text = "||";
            this.button8.UseVisualStyleBackColor = true;
            this.button8.Click += new System.EventHandler(this.button8_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(296, 300);
            this.Controls.Add(this.button8);
            this.Controls.Add(this.button7);
            this.Controls.Add(this.button6);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.tboxAndOr);
            this.Controls.Add(this.tboxResultBit);
            this.Controls.Add(this.tboxResultAfter);
            this.Controls.Add(this.tboxResult);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.tboxNumber);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox tboxNumber;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.TextBox tboxResult;
        private System.Windows.Forms.TextBox tboxResultAfter;
        private System.Windows.Forms.TextBox tboxResultBit;
        private System.Windows.Forms.TextBox tboxAndOr;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button5;
        private System.Windows.Forms.Button button6;
        private System.Windows.Forms.Button button7;
        private System.Windows.Forms.Button button8;
    }
}

