#pragma once

namespace AshesiRMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	public ref class viewEnrollmentDetails : public System::Windows::Forms::Form
	{
	public:
		viewEnrollmentDetails(void)
		{
			InitializeComponent();
		}

	protected:
		~viewEnrollmentDetails()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ nameLabel;
		System::Windows::Forms::Label^ majorLabel;
		System::Windows::Forms::DataGridView^ dataGridView1;
		System::Windows::Forms::TextBox^ nameTextBox;
		System::Windows::Forms::TextBox^ majorTextbox;
		System::Windows::Forms::Button^ exitBtn;
		System::ComponentModel::Container^ components;

		void InitializeComponent(void);
		System::Void exit_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void viewEnrollmentDetails_Load(System::Object^ sender, System::EventArgs^ e);
		void LoadEnrollmentDetails();
	};
}
