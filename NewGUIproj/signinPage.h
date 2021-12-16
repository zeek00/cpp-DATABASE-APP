#pragma once
#include "Registeration.h"
#include "loggedin.h"

namespace NewGUIproj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for signinPage
	/// </summary>
	public ref class signinPage : public System::Windows::Forms::Form
	{
	public:
		signinPage(void)
		{
			InitializeComponent();
			passtextBox->PasswordChar = '*';
			passtextBox->MaxLength = 10;
			userTextBox->MaxLength = 10;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~signinPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ passtextBox;

	private: System::Windows::Forms::TextBox^ userTextBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ link2reg;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(signinPage::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->link2reg = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->passtextBox = (gcnew System::Windows::Forms::TextBox());
			this->userTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(450, 539);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &signinPage::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->link2reg);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(2, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1010, 565);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &signinPage::panel1_Paint);
			// 
			// link2reg
			// 
			this->link2reg->AutoSize = true;
			this->link2reg->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->link2reg->LinkColor = System::Drawing::Color::Orange;
			this->link2reg->Location = System::Drawing::Point(694, 449);
			this->link2reg->Name = L"link2reg";
			this->link2reg->Size = System::Drawing::Size(289, 24);
			this->link2reg->TabIndex = 2;
			this->link2reg->TabStop = true;
			this->link2reg->Text = L"Don\'t have an Account \? click to Register.";
			this->link2reg->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &signinPage::linkLabel1_LinkClicked);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->passtextBox);
			this->groupBox1->Controls->Add(this->userTextBox);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Location = System::Drawing::Point(505, 154);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(478, 292);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"SIGN IN";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &signinPage::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orange;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(352, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 44);
			this->button1->TabIndex = 4;
			this->button1->Text = L"LOGIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &signinPage::button1_Click);
			// 
			// passtextBox
			// 
			this->passtextBox->Location = System::Drawing::Point(169, 147);
			this->passtextBox->Multiline = true;
			this->passtextBox->Name = L"passtextBox";
			this->passtextBox->Size = System::Drawing::Size(292, 39);
			this->passtextBox->TabIndex = 3;
			// 
			// userTextBox
			// 
			this->userTextBox->Location = System::Drawing::Point(169, 74);
			this->userTextBox->Multiline = true;
			this->userTextBox->Name = L"userTextBox";
			this->userTextBox->Size = System::Drawing::Size(292, 39);
			this->userTextBox->TabIndex = 2;
			this->userTextBox->TextChanged += gcnew System::EventHandler(this, &signinPage::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"PASSWORD :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"USERNAME :";
			// 
			// signinPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1010, 565);
			this->Controls->Add(this->panel1);
			this->Name = L"signinPage";
			this->Text = L"APP LOGIN";
			this->Load += gcnew System::EventHandler(this, &signinPage::signinPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Micro#comp12";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from registeration.reg where user_name='" + this->userTextBox->Text + "' and pass='" + this->passtextBox->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		int count = 0;
		while (myReader->Read()) {
			count = count + 1;
		}
		if (count == 1) {
			MessageBox::Show("Access Granted");
			this->Hide();
			loggedin^ nextpage = gcnew loggedin();
			nextpage->ShowDialog();
		}
		else if (count > 1) {
			MessageBox::Show("Access Denied....Duplicate Credentials");
		}
		else
		{
			MessageBox::Show("Username and/or password is incorrect... Try Again!");
		}
	}
	catch (Exception^ ex) {

		MessageBox::Show(ex->Message);

	}
}
private: System::Void signinPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Application::EnableVisualStyles();
	this->Hide();
	loggedin^ nextpage = gcnew loggedin();
	nextpage->ShowDialog();
}
};
}
