#pragma once

#include "viewProfileForm.h"
#include "enrollStudentForm.h"
#include "viewStudentGradesForm.h"

namespace AshesiRMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentDashboard
	/// </summary>
	public ref class StudentDashboard : public System::Windows::Forms::Form
	{
	public:
		StudentDashboard(void);

	protected:
		~StudentDashboard();

	private:
		System::Windows::Forms::Button^ EnrollBtn;
		System::Windows::Forms::Button^ viewGradesBtn;
		System::Windows::Forms::Button^ viewProfileBtn;
		System::Windows::Forms::Button^ FeesBtn;
		System::Windows::Forms::ToolStrip^ toolStrip1;
		System::Windows::Forms::ToolStripButton^ undoBtn;
		System::Windows::Forms::ToolStripButton^ redoBtn;
		System::Windows::Forms::ToolStripButton^ downloadBtn;
		System::ComponentModel::Container^ components;

		// Event Handlers
		void InitializeComponent(void);
		void StudentDashboard_Load(System::Object^ sender, System::EventArgs^ e);
		void viewProfile_Click(System::Object^ sender, System::EventArgs^ e);
		void EnrollBtn_Click(System::Object^ sender, System::EventArgs^ e);
		void viewGrades_Click(System::Object^ sender, System::EventArgs^ e);
		void FeesBtn_Click(System::Object^ sender, System::EventArgs^ e);
		void undoBtn_Click(System::Object^ sender, System::EventArgs^ e);
		void redoBtn_Click(System::Object^ sender, System::EventArgs^ e);
		void downloadBtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
