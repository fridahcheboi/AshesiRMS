#pragma once

namespace AshesiRMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for viewStudentGradesForm
	/// </summary>
	public ref class viewStudentGradesForm : public System::Windows::Forms::Form
	{
	public:
		viewStudentGradesForm(void)
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
		~viewStudentGradesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ studentNameLabel;
	private: System::Windows::Forms::Label^ majorLabel;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridView^ StudentGradesView;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Label^ periodLabel;



	private: System::Windows::Forms::TextBox^ textBox3;
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
			this->studentNameLabel = (gcnew System::Windows::Forms::Label());
			this->majorLabel = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->StudentGradesView = (gcnew System::Windows::Forms::DataGridView());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->periodLabel = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentGradesView))->BeginInit();
			this->SuspendLayout();
			// 
			// studentNameLabel
			// 
			this->studentNameLabel->AutoSize = true;
			this->studentNameLabel->Location = System::Drawing::Point(29, 29);
			this->studentNameLabel->Name = L"studentNameLabel";
			this->studentNameLabel->Size = System::Drawing::Size(81, 13);
			this->studentNameLabel->TabIndex = 0;
			this->studentNameLabel->Text = L"Student Name: ";
			this->studentNameLabel->Click += gcnew System::EventHandler(this, &viewStudentGradesForm::label1_Click);
			// 
			// majorLabel
			// 
			this->majorLabel->AutoSize = true;
			this->majorLabel->Location = System::Drawing::Point(29, 63);
			this->majorLabel->Name = L"majorLabel";
			this->majorLabel->Size = System::Drawing::Size(36, 13);
			this->majorLabel->TabIndex = 1;
			this->majorLabel->Text = L"Major:";
			this->majorLabel->Click += gcnew System::EventHandler(this, &viewStudentGradesForm::label1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(116, 56);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// StudentGradesView
			// 
			this->StudentGradesView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->StudentGradesView->Location = System::Drawing::Point(32, 124);
			this->StudentGradesView->Name = L"StudentGradesView";
			this->StudentGradesView->Size = System::Drawing::Size(321, 150);
			this->StudentGradesView->TabIndex = 4;
			// 
			// ExitBtn
			// 
			this->ExitBtn->Location = System::Drawing::Point(125, 290);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(75, 23);
			this->ExitBtn->TabIndex = 5;
			this->ExitBtn->Text = L"Exit";
			this->ExitBtn->UseVisualStyleBackColor = true;
			// 
			// periodLabel
			// 
			this->periodLabel->AutoSize = true;
			this->periodLabel->Location = System::Drawing::Point(29, 91);
			this->periodLabel->Name = L"periodLabel";
			this->periodLabel->Size = System::Drawing::Size(90, 13);
			this->periodLabel->TabIndex = 6;
			this->periodLabel->Text = L"Academic Period:";
			this->periodLabel->Click += gcnew System::EventHandler(this, &viewStudentGradesForm::label2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(116, 88);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &viewStudentGradesForm::textBox3_TextChanged);
			// 
			// viewStudentGradesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(386, 321);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->periodLabel);
			this->Controls->Add(this->ExitBtn);
			this->Controls->Add(this->StudentGradesView);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->majorLabel);
			this->Controls->Add(this->studentNameLabel);
			this->Name = L"viewStudentGradesForm";
			this->Text = L"viewStudentGradesForm";
			this->Load += gcnew System::EventHandler(this, &viewStudentGradesForm::viewStudentGradesForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentGradesView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void viewStudentGradesForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
