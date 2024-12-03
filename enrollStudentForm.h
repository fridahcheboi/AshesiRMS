#pragma once
#include <string>

namespace AshesiRMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	public ref class enrollStudentForm : public System::Windows::Forms::Form
	{
	public:
		enrollStudentForm(void);

	protected:
		~enrollStudentForm();

	private: 
		System::Windows::Forms::Label^ StudentIDLabel;
		System::Windows::Forms::Label^ CourseIDLabel;
		System::Windows::Forms::Label^ SemesterLabel;
		System::Windows::Forms::TextBox^ NametextBox;
		System::Windows::Forms::TextBox^ CoursetextBox1;
		System::Windows::Forms::ComboBox^ comboBox1;
		System::Windows::Forms::Button^ ClearBtn;
		System::Windows::Forms::Button^ enrollBtn;

		System::ComponentModel::Container ^components;

		void InitializeComponent(void);
		System::Void enrollBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void ClearBtn_Click(System::Object^ sender, System::EventArgs^ e);
		bool EnrollStudent(String^ studentID, String^ courseID, String^ semester);
	};
}
