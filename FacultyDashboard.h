#pragma once

namespace AshesiRMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacultyDashboard
	/// </summary>
	public ref class FacultyDashboard : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::TextBox^ txtStudentID;
	private: System::Windows::Forms::TextBox^ txtCourseID;
	private: System::Windows::Forms::TextBox^ txtGrade;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	public:
		MySqlDataReader^ sqlRd;
		FacultyDashboard(void)
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
		~FacultyDashboard()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;




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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtStudentID = (gcnew System::Windows::Forms::TextBox());
			this->txtCourseID = (gcnew System::Windows::Forms::TextBox());
			this->txtGrade = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(67, 258);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 52);
			this->button2->TabIndex = 1;
			this->button2->Text = L" Enter Grades";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FacultyDashboard::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::IndianRed;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(431, 49);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 52);
			this->button3->TabIndex = 2;
			this->button3->Text = L"View Roster";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FacultyDashboard::button3_Click);
			// 
			// txtStudentID
			// 
			this->txtStudentID->Location = System::Drawing::Point(112, 108);
			this->txtStudentID->Name = L"txtStudentID";
			this->txtStudentID->Size = System::Drawing::Size(128, 20);
			this->txtStudentID->TabIndex = 3;
			// 
			// txtCourseID
			// 
			this->txtCourseID->Location = System::Drawing::Point(112, 149);
			this->txtCourseID->Name = L"txtCourseID";
			this->txtCourseID->Size = System::Drawing::Size(128, 20);
			this->txtCourseID->TabIndex = 4;
			// 
			// txtGrade
			// 
			this->txtGrade->Location = System::Drawing::Point(112, 195);
			this->txtGrade->Name = L"txtGrade";
			this->txtGrade->Size = System::Drawing::Size(128, 20);
			this->txtGrade->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"StudentID:";
			this->label1->Click += gcnew System::EventHandler(this, &FacultyDashboard::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"CourseID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 195);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Grade:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::PaleTurquoise;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(236, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Update grades for a new student here: ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(330, 123);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(348, 237);
			this->dataGridView1->TabIndex = 10;
			// 
			// FacultyDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(703, 418);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtGrade);
			this->Controls->Add(this->txtCourseID);
			this->Controls->Add(this->txtStudentID);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Name = L"FacultyDashboard";
			this->Text = L"FacultyDashboard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//ENTER GRADES
	// Prompt the user to enter student ID, subject, and grade
	String^ studentID = txtStudentID->Text; // Assuming you have a text box for student ID
	String^ courseID = txtCourseID->Text;    // Assuming you have a text box for course
	String^ grade = txtGrade->Text;        // Assuming you have a text box for grade

	if (studentID == "" || courseID == "" || grade == "") {
		MessageBox::Show("Please fill in all fields!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try {
		sqlConn->ConnectionString = "datasource=localhost;port=3306;username=root;password=;database=SchoolDB;";
		sqlConn->Open();

		// Check if the student exists
		String^ queryCheck = "SELECT studentID FROM student WHERE studentID = @studentID";
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = queryCheck;
		sqlCmd->Parameters->AddWithValue("@studentID", studentID);

		sqlRd = sqlCmd->ExecuteReader();
		if (!sqlRd->Read()) {
			MessageBox::Show("Student ID not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			sqlRd->Close();
			sqlConn->Close();
			return;
		}

		String^ studentID = sqlRd["studentID"]->ToString();
		sqlRd->Close();

		// Insert the grade into the database
		String^ insertQuery = "INSERT INTO enterGrades (studentID, courseID grade) VALUES (@studentID, @courseID, @grade)";
		sqlCmd->CommandText = insertQuery;
		sqlCmd->Parameters->Clear();
		sqlCmd->Parameters->AddWithValue("@studentID", studentID);
		sqlCmd->Parameters->AddWithValue("@courseID", courseID);
		sqlCmd->Parameters->AddWithValue("@Grade", grade);

		sqlCmd->ExecuteNonQuery();

		MessageBox::Show("Grade entered successfully for student with StudentID: " + studentID, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		sqlConn->Close();
		sqlCmd->Parameters->Clear();
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//VIEW ROSTER
	String^ courseID = txtCourseID->Text; // Assuming you have a text box for class name

	if (courseID == "") {
		MessageBox::Show("Please enter the course ID!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try {
		sqlConn->ConnectionString = "datasource=localhost;port=3306;username=root;password=;database=SchoolDB;";
		sqlConn->Open();

		// Query to get the roster for the given class
		String^ query = "SELECT r.duration AS 'Duration', "
			"r.startTime AS 'Start Time', "
			"r.endTime AS 'End Time', "
			"r.location AS 'Location', "
			"r.teachingDay AS 'Teaching Day' "
			"FROM roster r "
			"WHERE r.courseID = @CourseID "
			"ORDER BY r.teachingDay, r.startTime";


		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = query;
		sqlCmd->Parameters->AddWithValue("@courseID", courseID);

		// Populate the data grid view
		MySqlDataAdapter^ sqlDa = gcnew MySqlDataAdapter(sqlCmd);
		DataTable^ dt = gcnew DataTable();
		sqlDa->Fill(dt);
		dataGridView1->DataSource = dt; // Assuming you have a DataGridView named 'dataGridView1'
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		sqlConn->Close();
		sqlCmd->Parameters->Clear();
	}

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
