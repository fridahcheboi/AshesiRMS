#include "StudentDashboard.h"

namespace AshesiRMS {

	StudentDashboard::StudentDashboard(void)
	{
		InitializeComponent();
	}

	StudentDashboard::~StudentDashboard()
	{
		if (components)
		{
			delete components;
		}
	}

	void StudentDashboard::InitializeComponent(void)
	{
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentDashboard::typeid));
		this->EnrollBtn = (gcnew System::Windows::Forms::Button());
		this->viewGradesBtn = (gcnew System::Windows::Forms::Button());
		this->viewProfileBtn = (gcnew System::Windows::Forms::Button());
		this->FeesBtn = (gcnew System::Windows::Forms::Button());
		this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
		this->undoBtn = (gcnew System::Windows::Forms::ToolStripButton());
		this->redoBtn = (gcnew System::Windows::Forms::ToolStripButton());
		this->downloadBtn = (gcnew System::Windows::Forms::ToolStripButton());
		this->toolStrip1->SuspendLayout();
		this->SuspendLayout();

		// EnrollBtn
		this->EnrollBtn->Location = System::Drawing::Point(12, 157);
		this->EnrollBtn->Name = L"EnrollBtn";
		this->EnrollBtn->Size = System::Drawing::Size(96, 23);
		this->EnrollBtn->TabIndex = 0;
		this->EnrollBtn->Text = L"Enroll in courses";
		this->EnrollBtn->UseVisualStyleBackColor = true;
		this->EnrollBtn->Click += gcnew System::EventHandler(this, &StudentDashboard::EnrollBtn_Click);

		// viewGradesBtn
		this->viewGradesBtn->Location = System::Drawing::Point(13, 196);
		this->viewGradesBtn->Name = L"viewGradesBtn";
		this->viewGradesBtn->Size = System::Drawing::Size(96, 23);
		this->viewGradesBtn->TabIndex = 1;
		this->viewGradesBtn->Text = L"View grades";
		this->viewGradesBtn->UseVisualStyleBackColor = true;
		this->viewGradesBtn->Click += gcnew System::EventHandler(this, &StudentDashboard::viewGrades_Click);

		// viewProfileBtn
		this->viewProfileBtn->Location = System::Drawing::Point(12, 115);
		this->viewProfileBtn->Name = L"viewProfileBtn";
		this->viewProfileBtn->Size = System::Drawing::Size(97, 23);
		this->viewProfileBtn->TabIndex = 2;
		this->viewProfileBtn->Text = L"View profile";
		this->viewProfileBtn->UseVisualStyleBackColor = true;
		//this->viewProfileBtn->Click += gcnew System::EventHandler(this, &StudentDashboard::viewProfile_Click);

		// FeesBtn
		this->FeesBtn->Location = System::Drawing::Point(12, 238);
		this->FeesBtn->Name = L"FeesBtn";
		this->FeesBtn->Size = System::Drawing::Size(96, 23);
		this->FeesBtn->TabIndex = 3;
		this->FeesBtn->Text = L"Pay fees";
		this->FeesBtn->UseVisualStyleBackColor = true;
		this->FeesBtn->Click += gcnew System::EventHandler(this, &StudentDashboard::FeesBtn_Click);

		// Toolstrip
		this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) { this->undoBtn, this->redoBtn, this->downloadBtn });
		this->toolStrip1->Location = System::Drawing::Point(0, 0);
		this->toolStrip1->Name = L"toolStrip1";
		this->toolStrip1->Size = System::Drawing::Size(529, 25);
		this->toolStrip1->TabIndex = 6;
		this->toolStrip1->Text = L"toolStrip1";

		// Undo Button
		this->undoBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		this->undoBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"undoBtn.Image")));
		this->undoBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
		this->undoBtn->Name = L"undoBtn";
		this->undoBtn->Size = System::Drawing::Size(23, 22);
		this->undoBtn->Text = L"Undo";
		this->undoBtn->Click += gcnew System::EventHandler(this, &StudentDashboard::undoBtn_Click);

		// Redo Button
		this->redoBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		this->redoBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redoBtn.Image")));
		this->redoBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
		this->redoBtn->Name = L"redoBtn";
		this->redoBtn->Size = System::Drawing::Size(23, 22);
		this->redoBtn->Text = L"Redo";
		this->redoBtn->Click += gcnew System::EventHandler(this, &StudentDashboard::redoBtn_Click);

		// Download Button
		this->downloadBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		this->downloadBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"downloadBtn.Image")));
		this->downloadBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
		this->downloadBtn->Name = L"downloadBtn";
		this->downloadBtn->Size = System::Drawing::Size(23, 22);
		this->downloadBtn->Text = L"Download";
		this->downloadBtn->Click += gcnew System::EventHandler(this, &StudentDashboard::downloadBtn_Click);

		// Form Properties
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::Tan;
		this->ClientSize = System::Drawing::Size(529, 429);
		this->Controls->Add(this->toolStrip1);
		this->Controls->Add(this->FeesBtn);
		this->Controls->Add(this->viewProfileBtn);
		this->Controls->Add(this->viewGradesBtn);
		this->Controls->Add(this->EnrollBtn);
		this->IsMdiContainer = true;
		this->Name = L"StudentDashboard";
		this->Text = L"Student Dashboard";
		this->Load += gcnew System::EventHandler(this, &StudentDashboard::StudentDashboard_Load);
		this->toolStrip1->ResumeLayout(false);
		this->toolStrip1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();
	}

	void StudentDashboard::StudentDashboard_Load(System::Object^ sender, System::EventArgs^ e)
	{
		// Initial Load logic here
	}

	//void StudentDashboard::viewProfile_Click(System::Object^ sender, System::EventArgs^ e)
	//{
	//	// View Profile button clicked
	//	viewProfileForm^ profileForm = gcnew viewProfileForm();
	//	profileForm->MdiParent = this;
	//	profileForm->Show();
	//}

	void StudentDashboard::EnrollBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Enroll button clicked
		enrollStudentForm^ enrollForm = gcnew enrollStudentForm();
		enrollForm->MdiParent = this;
		enrollForm->Show();
	}

	void StudentDashboard::viewGrades_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// View Grades button clicked
		viewStudentGradesForm^ gradesForm = gcnew viewStudentGradesForm();
		gradesForm->MdiParent = this;
		gradesForm->Show();
	}

	void StudentDashboard::FeesBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Implement logic for fees functionality
	}

	void StudentDashboard::undoBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Implement undo functionality
	}

	void StudentDashboard::redoBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Implement redo functionality
	}

	void StudentDashboard::downloadBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Implement download functionality
	}
}

