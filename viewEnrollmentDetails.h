#pragma once

namespace AshesiRMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for viewEnrollmentDetails
	/// </summary>
	public ref class viewEnrollmentDetails : public System::Windows::Forms::Form
	{
	public:
		viewEnrollmentDetails(void)
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
		~viewEnrollmentDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ nameLabel;
	protected:

	private: System::Windows::Forms::Label^ majorLabel;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::TextBox^ majorTextbox;
	private: System::Windows::Forms::Button^ exitBtn;



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
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->majorLabel = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->majorTextbox = (gcnew System::Windows::Forms::TextBox());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Location = System::Drawing::Point(23, 33);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(81, 13);
			this->nameLabel->TabIndex = 0;
			this->nameLabel->Text = L"Student Name: ";
			this->nameLabel->Click += gcnew System::EventHandler(this, &viewEnrollmentDetails::label1_Click);
			// 
			// majorLabel
			// 
			this->majorLabel->AutoSize = true;
			this->majorLabel->Location = System::Drawing::Point(23, 59);
			this->majorLabel->Name = L"majorLabel";
			this->majorLabel->Size = System::Drawing::Size(39, 13);
			this->majorLabel->TabIndex = 1;
			this->majorLabel->Text = L"Major :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 99);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 2;
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(102, 30);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(164, 20);
			this->nameTextBox->TabIndex = 3;
			// 
			// majorTextbox
			// 
			this->majorTextbox->Location = System::Drawing::Point(102, 59);
			this->majorTextbox->Name = L"majorTextbox";
			this->majorTextbox->Size = System::Drawing::Size(164, 20);
			this->majorTextbox->TabIndex = 4;
			// 
			// exitBtn
			// 
			this->exitBtn->Location = System::Drawing::Point(102, 271);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(75, 23);
			this->exitBtn->TabIndex = 5;
			this->exitBtn->Text = L"Exit";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &viewEnrollmentDetails::exit_Click);
			// 
			// viewEnrollmentDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(290, 306);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->majorTextbox);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->majorLabel);
			this->Controls->Add(this->nameLabel);
			this->Name = L"viewEnrollmentDetails";
			this->Text = L"viewEnrollmentDetails";
			this->Load += gcnew System::EventHandler(this, &viewEnrollmentDetails::viewEnrollmentDetails_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void viewEnrollmentDetails_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
