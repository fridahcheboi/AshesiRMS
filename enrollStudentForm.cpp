#include "enrollStudentForm.h"

using namespace AshesiRMS;

// Constructor
enrollStudentForm::enrollStudentForm(void)
{
	InitializeComponent();
}

// Destructor
enrollStudentForm::~enrollStudentForm()
{
	if (components)
	{
		delete components;
	}
}

// GUI Initialization
void enrollStudentForm::InitializeComponent(void)
{
	// Initialize and set up components
	// [Code for initializing and arranging GUI components, excluding location-related fields]
}

// Enrollment Button Click Logic
System::Void enrollStudentForm::enrollBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ studentID = NametextBox->Text;
	String^ courseID = CoursetextBox1->Text;
	String^ semester = comboBox1->Text;

	if (String::IsNullOrWhiteSpace(studentID) || String::IsNullOrWhiteSpace(courseID) || String::IsNullOrWhiteSpace(semester)) {
		MessageBox::Show("All fields must be filled!", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	bool isEnrolled = EnrollStudent(studentID, courseID, semester);

	if (isEnrolled) {
		MessageBox::Show("Enrollment successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	} else {
		MessageBox::Show("Failed to enroll student. Please try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

// Clear Button Click Logic
System::Void enrollStudentForm::ClearBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	NametextBox->Text = "";
	CoursetextBox1->Text = "";
	comboBox1->SelectedIndex = -1;
}

// Enrollment Logic
bool enrollStudentForm::EnrollStudent(String^ studentID, String^ courseID, String^ semester) {
	String^ connectionString = "Data Source=your_server_name;Initial Catalog=your_database_name;Integrated Security=True";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();

		// SQL Query for Enrollment
		String^ query = "INSERT INTO enrollment (studentID, courseID, semester, enrollmentDate) " 
						"VALUES (@StudentID, @CourseID, @Semester, @EnrollmentDate)";

		SqlCommand^ command = gcnew SqlCommand(query, connection);

		command->Parameters->AddWithValue("@StudentID", studentID);
		command->Parameters->AddWithValue("@CourseID", courseID);
		command->Parameters->AddWithValue("@Semester", semester);

		// Use current date and time for `enrollmentDate`
		DateTime now = DateTime::Now;
		command->Parameters->AddWithValue("@EnrollmentDate", now);

		int rowsAffected = command->ExecuteNonQuery();

		return rowsAffected > 0;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Database error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	finally {
		connection->Close();
	}
}

