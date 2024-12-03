#include "viewEnrollmentDetails.h"

using namespace AshesiRMS;

void viewEnrollmentDetails::InitializeComponent(void)
{
	this->nameLabel = (gcnew System::Windows::Forms::Label());
	this->majorLabel = (gcnew System::Windows::Forms::Label());
	this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
	this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
	this->majorTextbox = (gcnew System::Windows::Forms::TextBox());
	this->exitBtn = (gcnew System::Windows::Forms::Button());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
	this->SuspendLayout();
	
	// Components configuration...

	this->Load += gcnew System::EventHandler(this, &viewEnrollmentDetails::viewEnrollmentDetails_Load);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
	this->ResumeLayout(false);
	this->PerformLayout();
}

System::Void viewEnrollmentDetails::exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

System::Void viewEnrollmentDetails::viewEnrollmentDetails_Load(System::Object^ sender, System::EventArgs^ e) {
	LoadEnrollmentDetails();
}

void viewEnrollmentDetails::LoadEnrollmentDetails() {
	String^ connectionString = "Data Source=your_server_name;Initial Catalog=your_database_name;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();

		// SQL query to fetch enrollment details
		String^ query = "SELECT e.enrollmentID, e.studentID, e.courseID, e.semester, e.enrollmentDate, " 
						"s.studentName, c.courseName " 
						"FROM enrollment e "
						"INNER JOIN student s ON e.studentID = s.studentID "
						"INNER JOIN course c ON e.courseID = c.courseID";

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, connection);
		DataTable^ dataTable = gcnew DataTable();
		adapter->Fill(dataTable);

		dataGridView1->DataSource = dataTable;
		dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connection->Close();
	}
}
