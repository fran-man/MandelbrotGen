//This file is part of Mandelbrot-Gen.
//
//    Mandelbrot-Gen is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    Mandelbrot-Gen is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with Mandelbrot-Gen.  If not, see <http://www.gnu.org/licenses/>.
//    This is a change to test branching
#pragma once
#include "Options.h"
int colourIndicator = 5;
namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		Options^ optionForm;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			optionForm = gcnew Options;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  SaveLabel;
	private: System::Windows::Forms::TextBox^  fileNameBox;
	private: System::Windows::Forms::Button^  optionButton;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SaveLabel = (gcnew System::Windows::Forms::Label());
			this->fileNameBox = (gcnew System::Windows::Forms::TextBox());
			this->optionButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(33, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 480);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(211, 533);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(246, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw Mandelbrot";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// saveButton
			// 
			this->saveButton->Enabled = false;
			this->saveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->saveButton->Location = System::Drawing::Point(211, 603);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(246, 44);
			this->saveButton->TabIndex = 2;
			this->saveButton->Text = L"Save this file";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &Form1::saveButton_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(130, 546);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(58, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 526);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 51);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Enter an even integer here:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SaveLabel
			// 
			this->SaveLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SaveLabel->Location = System::Drawing::Point(30, 619);
			this->SaveLabel->Name = L"SaveLabel";
			this->SaveLabel->Size = System::Drawing::Size(56, 28);
			this->SaveLabel->TabIndex = 5;
			this->SaveLabel->Text = L"Name:";
			this->SaveLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// fileNameBox
			// 
			this->fileNameBox->Location = System::Drawing::Point(92, 624);
			this->fileNameBox->MaxLength = 3276;
			this->fileNameBox->Name = L"fileNameBox";
			this->fileNameBox->Size = System::Drawing::Size(95, 20);
			this->fileNameBox->TabIndex = 6;
			// 
			// optionButton
			// 
			this->optionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->optionButton->Location = System::Drawing::Point(516, 540);
			this->optionButton->Name = L"optionButton";
			this->optionButton->Size = System::Drawing::Size(103, 33);
			this->optionButton->TabIndex = 7;
			this->optionButton->Text = L"Options...";
			this->optionButton->UseVisualStyleBackColor = true;
			this->optionButton->Click += gcnew System::EventHandler(this, &Form1::optionButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 684);
			this->Controls->Add(this->optionButton);
			this->Controls->Add(this->fileNameBox);
			this->Controls->Add(this->SaveLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Mandelbrot Generator: z = z^2 + c";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Bitmap^ mandelbrotBitmap;
		float scaledX, scaledY;
		bool inMandelbrot;
		int iterationCount;
		Color dynamic;//will be assigned to in the loop below
	private: System::Void ScaleCoordinates(float xCoord, float yCoord)//here the point is scaled to within the desired range
			 {
				int bitmapHeight = mandelbrotBitmap->Height, bitmapWidth = mandelbrotBitmap->Width;
				//these lines map the top-left point down to the origin, and all other points at the same rate
				xCoord = xCoord - (2*bitmapWidth)/3;
				yCoord = bitmapHeight/2 - yCoord;
				//scaling is done here
				scaledX = xCoord/(bitmapWidth/3);//scales to the interval [-2,1]
				scaledY = yCoord/(bitmapHeight/2.4);//scales to [-1.2,1.2]
			 }
	private: System::Void CheckPixel(float X, float Y)
			 {
				iterationCount = 0;//sets the iteration tracker to 0
				inMandelbrot = true;//puts the point in the set to start with
				ScaleCoordinates(X, Y);//above
				float im_z = 0, re_z = 0;//sets the initial condition
				for(int iteration = 0; iteration < 400; iteration++)//iterates 400 times
				{
					float oldRe_z = re_z;
					re_z = re_z*re_z - im_z*im_z + scaledX;
					im_z = 2*oldRe_z*im_z + scaledY;
					iterationCount++;
					if(re_z*re_z + im_z*im_z > 4)//breaks and takes the point from the set if z escapes
					{
						inMandelbrot = false;
						break;
					}
				}
			 }
	private: System::Void ColourGreen()
			 {
				Color Black = Color::FromArgb(0, 0, 0);
				Color White = Color::FromArgb(255, 255, 255);
				for (float count = 0; count < mandelbrotBitmap->Width; count++)
				 {
					for (float count2 = 0; count2 < mandelbrotBitmap->Height; count2++)
					{
						CheckPixel(count, count2);
						if(inMandelbrot == true)//colours the point black if it is in the set
						{
							mandelbrotBitmap->SetPixel(count, count2, Black);
						}
						else if (iterationCount > 255)//white to green
						{
							dynamic = Color::FromArgb(iterationCount - 255, 255, iterationCount - 255);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
						else if (iterationCount > 63)//green to dark green
						{
							dynamic = Color::FromArgb(0, iterationCount, 0);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
						else//dark green to black
						{
							dynamic = Color::FromArgb(0, iterationCount*4, 0);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
					}
				 }
			 }
	private: System::Void ColourRed()
			 {
				Color Black = Color::FromArgb(0, 0, 0);
				Color White = Color::FromArgb(255, 255, 255);
				for (float count = 0; count < mandelbrotBitmap->Width; count++)
				 {
					for (float count2 = 0; count2 < mandelbrotBitmap->Height; count2++)
					{
						CheckPixel(count, count2);
						if(inMandelbrot == true)//colours the point black if it is in the set
						{
							mandelbrotBitmap->SetPixel(count, count2, Black);
						}
						else if (iterationCount > 255)//white to green
						{
							dynamic = Color::FromArgb(255, iterationCount -255, iterationCount - 255);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
						else if (iterationCount > 63)//green to dark green
						{
							dynamic = Color::FromArgb(iterationCount, 0, 0);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
						else//dark green to black
						{
							dynamic = Color::FromArgb(iterationCount*4, 0, 0);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
					}
				 }
			 }
	private: System::Void ColourBlue()
			 {
				Color Black = Color::FromArgb(0, 0, 0);
				Color White = Color::FromArgb(255, 255, 255);
				for (float count = 0; count < mandelbrotBitmap->Width; count++)
				 {
					for (float count2 = 0; count2 < mandelbrotBitmap->Height; count2++)
					{
						CheckPixel(count, count2);
						if(inMandelbrot == true)//colours the point black if it is in the set
						{
							mandelbrotBitmap->SetPixel(count, count2, Black);
						}
						else if (iterationCount > 255)//white to blue
						{
							dynamic = Color::FromArgb(iterationCount - 255, iterationCount -255, 255);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
						else if (iterationCount > 63)//green to dark blue
						{
							dynamic = Color::FromArgb(0, 0, iterationCount);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
						else//dark green to black
						{
							dynamic = Color::FromArgb(0, 0, iterationCount*4);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
					}
				 }
			 }
	private: System::Void ColourPurple()
			 {
				Color Black = Color::FromArgb(0, 0, 0);
				Color White = Color::FromArgb(255, 255, 255);
				for (float count = 0; count < mandelbrotBitmap->Width; count++)
				 {
					for (float count2 = 0; count2 < mandelbrotBitmap->Height; count2++)
					{
						CheckPixel(count, count2);
						if(inMandelbrot == true)//colours the point black if it is in the set
						{
							mandelbrotBitmap->SetPixel(count, count2, Black);
						}
						else if (iterationCount > 255)//white to green
						{
							dynamic = Color::FromArgb(255, iterationCount -255, 255);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
						else if (iterationCount > 63)//green to dark green
						{
							dynamic = Color::FromArgb(iterationCount, 0, iterationCount);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
						else//dark green to black
						{
							dynamic = Color::FromArgb(iterationCount*4, 0, iterationCount*4);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
					}
				 }
			 }
	private: System::Void ColourOrange()
			 {
				Color Black = Color::FromArgb(0, 0, 0);
				Color White = Color::FromArgb(255, 255, 255);
				for (float count = 0; count < mandelbrotBitmap->Width; count++)
				 {
					for (float count2 = 0; count2 < mandelbrotBitmap->Height; count2++)
					{
						CheckPixel(count, count2);
						if(inMandelbrot == true)//colours the point black if it is in the set
						{
							mandelbrotBitmap->SetPixel(count, count2, Black);
						}
						else if (iterationCount > 255)//white to green
						{
							dynamic = Color::FromArgb(iterationCount - 255, (iterationCount - 255)/2, 0);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
						else if (iterationCount > 63)//green to dark green
						{
							dynamic = Color::FromArgb(iterationCount, iterationCount/2, 0);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
						else//dark green to black
						{
							dynamic = Color::FromArgb(iterationCount*4, iterationCount*2, 0);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
					}
				 }
			 }
	private: System::Void ColourBW()
			 {
				Color Black = Color::FromArgb(0, 0, 0);
				Color White = Color::FromArgb(255, 255, 255);
				for (float count = 0; count < mandelbrotBitmap->Width; count++)
				 {
					for (float count2 = 0; count2 < mandelbrotBitmap->Height; count2++)
					{
						CheckPixel(count, count2);
						if(inMandelbrot == true)//colours the point black if it is in the set
						{
							mandelbrotBitmap->SetPixel(count, count2, Black);
						}
						else if (iterationCount > 255)//white to green
						{
							dynamic = Color::FromArgb(255, 255, 255);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
						else if (iterationCount > 63)//green to dark green
						{
							dynamic = Color::FromArgb(255 - iterationCount, 255 - iterationCount, 255 - iterationCount);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
						else//dark green to black
						{
							dynamic = Color::FromArgb(iterationCount*4, iterationCount*4, iterationCount*4);
							mandelbrotBitmap->SetPixel(count, count2, dynamic);
						}
					}
				 }
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int height =Convert::ToInt32(textBox1->Text);//height of the bitmap
				 Graphics^ gfx = this->pictureBox1->CreateGraphics();
				 mandelbrotBitmap = gcnew Bitmap(height*1.25, height);
				 switch (colourIndicator)
				 {
				 case 0:
					 ColourRed();
					 break;
				 case 1:
					 ColourGreen();
					 break;
				 case 2:
					 ColourBlue();
					 break;
				 case 3:
					 ColourPurple();
					 break;
				 case 4:
					 ColourOrange();
					 break;
				 case 5:
					 ColourBW();
					 break;
				 default:
					 ColourGreen();
					 break;
				 }
				 gfx->DrawImage(mandelbrotBitmap, 0, 0, pictureBox1->Width, pictureBox1->Height);
				 if(saveButton->Enabled == false)
				 {
					saveButton->Enabled = true;
				 }
			 }
	private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ saveName = fileNameBox->Text; //extracts the user's desired name from the text box
				 mandelbrotBitmap->Save("C:\\Example\\Image\\path"+ saveName +".bmp");//saves the file
			 }
private: System::Void optionButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (optionForm->Visible == false)
			 {
					 optionForm->Visible = true;
			 }
		 }
};
}

