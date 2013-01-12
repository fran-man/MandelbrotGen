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
#pragma once
extern int colourIndicator;
namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Options
	/// </summary>
	public ref class Options : public System::Windows::Forms::Form
	{
	public:
		Options(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Options()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioRed;
	private: System::Windows::Forms::RadioButton^  radioGreen;
	private: System::Windows::Forms::RadioButton^  radioBlue;
	private: System::Windows::Forms::Button^  acceptButton;
	private: System::Windows::Forms::RadioButton^  radioPurple;
	private: System::Windows::Forms::RadioButton^  radioOrange;
	private: System::Windows::Forms::RadioButton^  radioBW;
	private: System::Windows::Forms::Label^  optionLabel;
	protected: 

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
			this->radioRed = (gcnew System::Windows::Forms::RadioButton());
			this->radioGreen = (gcnew System::Windows::Forms::RadioButton());
			this->radioBlue = (gcnew System::Windows::Forms::RadioButton());
			this->acceptButton = (gcnew System::Windows::Forms::Button());
			this->radioPurple = (gcnew System::Windows::Forms::RadioButton());
			this->radioOrange = (gcnew System::Windows::Forms::RadioButton());
			this->radioBW = (gcnew System::Windows::Forms::RadioButton());
			this->optionLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// radioRed
			// 
			this->radioRed->AutoSize = true;
			this->radioRed->Location = System::Drawing::Point(42, 125);
			this->radioRed->Name = L"radioRed";
			this->radioRed->Size = System::Drawing::Size(45, 17);
			this->radioRed->TabIndex = 1;
			this->radioRed->Text = L"Red";
			this->radioRed->UseVisualStyleBackColor = true;
			this->radioRed->CheckedChanged += gcnew System::EventHandler(this, &Options::radioRed_CheckedChanged);
			// 
			// radioGreen
			// 
			this->radioGreen->AutoSize = true;
			this->radioGreen->Location = System::Drawing::Point(42, 171);
			this->radioGreen->Name = L"radioGreen";
			this->radioGreen->Size = System::Drawing::Size(54, 17);
			this->radioGreen->TabIndex = 2;
			this->radioGreen->Text = L"Green";
			this->radioGreen->UseVisualStyleBackColor = true;
			this->radioGreen->CheckedChanged += gcnew System::EventHandler(this, &Options::radioGreen_CheckedChanged);
			// 
			// radioBlue
			// 
			this->radioBlue->AutoSize = true;
			this->radioBlue->Location = System::Drawing::Point(148, 79);
			this->radioBlue->Name = L"radioBlue";
			this->radioBlue->Size = System::Drawing::Size(46, 17);
			this->radioBlue->TabIndex = 3;
			this->radioBlue->Text = L"Blue";
			this->radioBlue->UseVisualStyleBackColor = true;
			this->radioBlue->CheckedChanged += gcnew System::EventHandler(this, &Options::radioBlue_CheckedChanged);
			// 
			// acceptButton
			// 
			this->acceptButton->Location = System::Drawing::Point(81, 229);
			this->acceptButton->Name = L"acceptButton";
			this->acceptButton->Size = System::Drawing::Size(89, 28);
			this->acceptButton->TabIndex = 3;
			this->acceptButton->Text = L"OK";
			this->acceptButton->UseVisualStyleBackColor = true;
			this->acceptButton->Click += gcnew System::EventHandler(this, &Options::acceptButton_Click);
			// 
			// radioPurple
			// 
			this->radioPurple->AutoSize = true;
			this->radioPurple->Location = System::Drawing::Point(148, 125);
			this->radioPurple->Name = L"radioPurple";
			this->radioPurple->Size = System::Drawing::Size(55, 17);
			this->radioPurple->TabIndex = 4;
			this->radioPurple->Text = L"Purple";
			this->radioPurple->UseVisualStyleBackColor = true;
			this->radioPurple->CheckedChanged += gcnew System::EventHandler(this, &Options::radioPurple_CheckedChanged);
			// 
			// radioOrange
			// 
			this->radioOrange->AutoSize = true;
			this->radioOrange->Location = System::Drawing::Point(148, 171);
			this->radioOrange->Name = L"radioOrange";
			this->radioOrange->Size = System::Drawing::Size(60, 17);
			this->radioOrange->TabIndex = 5;
			this->radioOrange->Text = L"Orange";
			this->radioOrange->UseVisualStyleBackColor = true;
			this->radioOrange->CheckedChanged += gcnew System::EventHandler(this, &Options::radioOrange_CheckedChanged);
			// 
			// radioBW
			// 
			this->radioBW->AutoSize = true;
			this->radioBW->Location = System::Drawing::Point(42, 79);
			this->radioBW->Name = L"radioBW";
			this->radioBW->Size = System::Drawing::Size(87, 17);
			this->radioBW->TabIndex = 0;
			this->radioBW->Text = L"Monochrome";
			this->radioBW->UseVisualStyleBackColor = true;
			this->radioBW->CheckedChanged += gcnew System::EventHandler(this, &Options::radioBW_CheckedChanged);
			// 
			// optionLabel
			// 
			this->optionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->optionLabel->Location = System::Drawing::Point(45, 9);
			this->optionLabel->Name = L"optionLabel";
			this->optionLabel->Size = System::Drawing::Size(149, 49);
			this->optionLabel->TabIndex = 7;
			this->optionLabel->Text = L"Choose Colour Scheme";
			this->optionLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Options
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(248, 304);
			this->Controls->Add(this->optionLabel);
			this->Controls->Add(this->radioBW);
			this->Controls->Add(this->radioOrange);
			this->Controls->Add(this->radioPurple);
			this->Controls->Add(this->acceptButton);
			this->Controls->Add(this->radioBlue);
			this->Controls->Add(this->radioGreen);
			this->Controls->Add(this->radioRed);
			this->Name = L"Options";
			this->Text = L"Options";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioRed_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 colourIndicator = 0;
			 }
	private: System::Void radioGreen_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				colourIndicator = 1;
			 }
	private: System::Void radioBlue_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 colourIndicator = 2;
			 }
private: System::Void acceptButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Visible = false;
		 }
private: System::Void radioPurple_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 colourIndicator = 3;
		 }
private: System::Void radioOrange_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 colourIndicator = 4;
		 }
private: System::Void radioBW_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 colourIndicator = 5;
		 }
};
}
