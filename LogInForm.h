#pragma once
#include "StudentDashboard.h"
#include "FacultyDashboard.h"
#include "AdministratorDashboard.h"

namespace AshesiRMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Net::Mail;

	/// <summary>
	/// Summary for LogInForm
	/// </summary>
	public ref class LogInForm : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ forgotPassword;
	public:
		MySqlDataReader^ sqlRd;
		LogInForm(void)
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
		~LogInForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ login;
	private: System::Windows::Forms::Button^ clear;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->forgotPassword = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(81, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Email:";
			this->label1->Click += gcnew System::EventHandler(this, &LogInForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(156, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Account Login";
			this->label2->Click += gcnew System::EventHandler(this, &LogInForm::label2_Click);
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(160, 81);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(174, 20);
			this->txtEmail->TabIndex = 2;
			this->txtEmail->TextChanged += gcnew System::EventHandler(this, &LogInForm::txtEmail_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(81, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password:";
			this->label3->Click += gcnew System::EventHandler(this, &LogInForm::label3_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(160, 119);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(174, 20);
			this->txtPassword->TabIndex = 4;
			this->txtPassword->TextChanged += gcnew System::EventHandler(this, &LogInForm::textBox2_TextChanged);
			// 
			// login
			// 
			this->login->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->Location = System::Drawing::Point(211, 214);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(128, 63);
			this->login->TabIndex = 5;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = false;
			this->login->Click += gcnew System::EventHandler(this, &LogInForm::Login_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::Salmon;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->Location = System::Drawing::Point(75, 214);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(130, 63);
			this->clear->TabIndex = 6;
			this->clear->Text = L"Clear";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &LogInForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(160, 159);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(174, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(84, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Role:";
			this->label4->Click += gcnew System::EventHandler(this, &LogInForm::label4_Click);
			// 
			// forgotPassword
			// 
			this->forgotPassword->BackColor = System::Drawing::Color::Turquoise;
			this->forgotPassword->Location = System::Drawing::Point(260, 293);
			this->forgotPassword->Name = L"forgotPassword";
			this->forgotPassword->Size = System::Drawing::Size(74, 47);
			this->forgotPassword->TabIndex = 9;
			this->forgotPassword->Text = L"Forgot Password\?";
			this->forgotPassword->UseVisualStyleBackColor = false;
			this->forgotPassword->Click += gcnew System::EventHandler(this, &LogInForm::forgotPassword_Click);
			// 
			// LogInForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(421, 366);
			this->Controls->Add(this->forgotPassword);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->login);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LogInForm";
			this->Text = L"LogInForm";
			this->Load += gcnew System::EventHandler(this, &LogInForm::LogInForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// this is the clear button
	txtEmail->Text = "";
	txtPassword->Text = "";
	
}
private: System::Void Login_Click(System::Object^ sender, System::EventArgs^ e) {
	// Ensure email and password fields are not empty
	if (txtEmail->Text == "" || txtPassword->Text == "") {
		MessageBox::Show("Email or password is missing", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	try {
		String^ connectionString = "datasource=localhost;port=3306;username=root;password=;database=ICP2026;";
		sqlConn->ConnectionString = connectionString;
		sqlConn->Open();

		// Prepare the SQL query
		String^ query = "SELECT role FROM usertable WHERE email = @Email AND password = @Password";
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = query;
		sqlCmd->Parameters->AddWithValue("@Email", txtEmail->Text);
		sqlCmd->Parameters->AddWithValue("@Password", txtPassword->Text);

		sqlRd = sqlCmd->ExecuteReader();

		if (sqlRd->Read()) {
			String^ role = sqlRd["role"]->ToString();
			if (role == "student") {
				StudentDashboard^ studentForm = gcnew StudentDashboard();
				studentForm->Show();
			}
			else if (role == "faculty") {
				FacultyDashboard^ facultyForm = gcnew FacultyDashboard();
				facultyForm->Show();
			}
			else if (role == "admin") {
				AdministratorDashboard^ adminForm = gcnew AdministratorDashboard();
				adminForm->Show();
			}
			this->Hide();
		}
		else {
			MessageBox::Show("Invalid email or password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Database connection error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		if (sqlRd != nullptr) {
			sqlRd->Close();
		}
		if (sqlConn != nullptr) {
			sqlConn->Close();
		}
		sqlCmd->Parameters->Clear(); // Clear parameters
	}

	
		
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LogInForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {


void SendRecoveryEmail(String^ recipientEmail, String^ token) {
    try {
        SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com", 587);
        client->Credentials = gcnew System::Net::NetworkCredential("your-email@gmail.com", "your-email-password");
        client->EnableSsl = true;

        MailMessage^ mail = gcnew MailMessage();
        mail->From = gcnew MailAddress("your-email@gmail.com");
        mail->To->Add(recipientEmail);
        mail->Subject = "Password Recovery";
        mail->Body = "Click the link below to reset your password:\n" +
                     "https://example.com/reset?token=" + token;

        client->Send(mail);
        MessageBox::Show("Password recovery email sent successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error sending email: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void forgotPassword_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = txtEmail->Text;
	if (email == "") {
		MessageBox::Show("Please enter your email for password recovery.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try {
		sqlConn->ConnectionString = "datasource=localhost;port=3306;username=root;password=;database=ICP2026;";
		sqlConn->Open();

		String^ query = "SELECT email FROM users WHERE email = @Email";
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = query;
		sqlCmd->Parameters->AddWithValue("@Email", email);

		sqlRd = sqlCmd->ExecuteReader();
		if (sqlRd->Read()) {
			// Email exists in the database
			sqlRd->Close();  // Close the reader before sending email

			// Generate a unique token for the password reset
			String^ token = Guid::NewGuid().ToString();

			// (Optional) Save the token to the database with an expiration timestamp
			String^ insertTokenQuery = "UPDATE usertable SET reset_token = @Token, token_expiration = NOW() + INTERVAL 1 HOUR WHERE email = @Email";
			sqlCmd->CommandText = insertTokenQuery;
			sqlCmd->Parameters->Clear();
			sqlCmd->Parameters->AddWithValue("@Token", token);
			sqlCmd->Parameters->AddWithValue("@Email", email);
			sqlCmd->ExecuteNonQuery();

			// Call the function to send the recovery email
			SendRecoveryEmail(email, token);
		}
		else {
			// Email does not exist in the system
			MessageBox::Show("Email not found in the system.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		if (sqlRd != nullptr) {
			sqlRd->Close();
		}
		sqlConn->Close();
		sqlCmd->Parameters->Clear();
	}
}

};
}
