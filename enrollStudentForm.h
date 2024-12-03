#pragma once

namespace AshesiRMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for enrollStudentForm
	/// </summary>
	public ref class enrollStudentForm : public System::Windows::Forms::Form
	{
	public:
		enrollStudentForm(void)
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
		~enrollStudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ StudentIDLabel;
	private: System::Windows::Forms::Label^ CourseIDLabel;
	private: System::Windows::Forms::TextBox^ NametextBox;
	private: System::Windows::Forms::TextBox^ CoursetextBox1;
	private: System::Windows::Forms::Button^ ClearBtn;
	private: System::Windows::Forms::Button^ enrollBtn;

	private: System::Windows::Forms::Label^ SemesterLabel;
	private: System::Windows::Forms::ComboBox^ comboBox1;


	protected:

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
			this->StudentIDLabel = (gcnew System::Windows::Forms::Label());
			this->CourseIDLabel = (gcnew System::Windows::Forms::Label());
			this->NametextBox = (gcnew System::Windows::Forms::TextBox());
			this->CoursetextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ClearBtn = (gcnew System::Windows::Forms::Button());
			this->enrollBtn = (gcnew System::Windows::Forms::Button());
			this->SemesterLabel = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// StudentIDLabel
			// 
			this->StudentIDLabel->AutoSize = true;
			this->StudentIDLabel->Location = System::Drawing::Point(37, 43);
			this->StudentIDLabel->Name = L"StudentIDLabel";
			this->StudentIDLabel->Size = System::Drawing::Size(55, 13);
			this->StudentIDLabel->TabIndex = 0;
			this->StudentIDLabel->Text = L"StudentID";
			// 
			// CourseIDLabel
			// 
			this->CourseIDLabel->AutoSize = true;
			this->CourseIDLabel->Location = System::Drawing::Point(37, 70);
			this->CourseIDLabel->Name = L"CourseIDLabel";
			this->CourseIDLabel->Size = System::Drawing::Size(57, 13);
			this->CourseIDLabel->TabIndex = 1;
			this->CourseIDLabel->Text = L"CourseID :";
			// 
			// NametextBox
			// 
			this->NametextBox->Location = System::Drawing::Point(110, 40);
			this->NametextBox->Name = L"NametextBox";
			this->NametextBox->Size = System::Drawing::Size(121, 20);
			this->NametextBox->TabIndex = 2;
			// 
			// CoursetextBox1
			// 
			this->CoursetextBox1->Location = System::Drawing::Point(110, 70);
			this->CoursetextBox1->Name = L"CoursetextBox1";
			this->CoursetextBox1->Size = System::Drawing::Size(121, 20);
			this->CoursetextBox1->TabIndex = 3;
			this->CoursetextBox1->TextChanged += gcnew System::EventHandler(this, &enrollStudentForm::textBox1_TextChanged);
			// 
			// ClearBtn
			// 
			this->ClearBtn->Location = System::Drawing::Point(19, 167);
			this->ClearBtn->Name = L"ClearBtn";
			this->ClearBtn->Size = System::Drawing::Size(75, 23);
			this->ClearBtn->TabIndex = 4;
			this->ClearBtn->Text = L"Clear";
			this->ClearBtn->UseVisualStyleBackColor = true;
			// 
			// enrollBtn
			// 
			this->enrollBtn->Location = System::Drawing::Point(164, 167);
			this->enrollBtn->Name = L"enrollBtn";
			this->enrollBtn->Size = System::Drawing::Size(75, 23);
			this->enrollBtn->TabIndex = 5;
			this->enrollBtn->Text = L"Enroll";
			this->enrollBtn->UseVisualStyleBackColor = true;
			// 
			// SemesterLabel
			// 
			this->SemesterLabel->AutoSize = true;
			this->SemesterLabel->Location = System::Drawing::Point(37, 106);
			this->SemesterLabel->Name = L"SemesterLabel";
			this->SemesterLabel->Size = System::Drawing::Size(57, 13);
			this->SemesterLabel->TabIndex = 6;
			this->SemesterLabel->Text = L"Semester :";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(110, 103);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// enrollStudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->SemesterLabel);
			this->Controls->Add(this->enrollBtn);
			this->Controls->Add(this->ClearBtn);
			this->Controls->Add(this->CoursetextBox1);
			this->Controls->Add(this->NametextBox);
			this->Controls->Add(this->CourseIDLabel);
			this->Controls->Add(this->StudentIDLabel);
			this->Name = L"enrollStudentForm";
			this->Text = L"enrollStudentForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
