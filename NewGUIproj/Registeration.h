#pragma once
#include "signinPage.h"

namespace NewGUIproj {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for regpage
	/// </summary>
	public ref class regpage : public System::Windows::Forms::Form
	{
	public:
		regpage(void)
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
		~regpage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;


	private: System::Windows::Forms::Button^ submitButton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ termsandcond;
	private: System::Windows::Forms::RadioButton^ female;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ male;

	private: System::Windows::Forms::TextBox^ fname;
	private: System::Windows::Forms::Label^ sex;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ age;

	private: System::Windows::Forms::TextBox^ user;
	private: System::Windows::Forms::TextBox^ phoneno;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ pass;
	private: System::Windows::Forms::TextBox^ email;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ agebox;
	private: System::Windows::Forms::TextBox^ uid;
	private: System::Windows::Forms::Label^ uid_no;
	private: System::Windows::Forms::TextBox^ surname;
	protected:












































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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->uid = (gcnew System::Windows::Forms::TextBox());
			this->uid_no = (gcnew System::Windows::Forms::Label());
			this->agebox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->surname = (gcnew System::Windows::Forms::TextBox());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->termsandcond = (gcnew System::Windows::Forms::CheckBox());
			this->female = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->male = (gcnew System::Windows::Forms::RadioButton());
			this->fname = (gcnew System::Windows::Forms::TextBox());
			this->sex = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->age = (gcnew System::Windows::Forms::Label());
			this->user = (gcnew System::Windows::Forms::TextBox());
			this->phoneno = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->uid);
			this->panel1->Controls->Add(this->uid_no);
			this->panel1->Controls->Add(this->agebox);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->linkLabel2);
			this->panel1->Controls->Add(this->surname);
			this->panel1->Controls->Add(this->submitButton);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->termsandcond);
			this->panel1->Controls->Add(this->female);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->male);
			this->panel1->Controls->Add(this->fname);
			this->panel1->Controls->Add(this->sex);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->age);
			this->panel1->Controls->Add(this->user);
			this->panel1->Controls->Add(this->phoneno);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->pass);
			this->panel1->Controls->Add(this->email);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Little Zombie", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->ForeColor = System::Drawing::Color::Orange;
			this->panel1->Location = System::Drawing::Point(-8, -13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(680, 988);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &regpage::panel1_Paint);
			// 
			// uid
			// 
			this->uid->Location = System::Drawing::Point(73, 99);
			this->uid->Multiline = true;
			this->uid->Name = L"uid";
			this->uid->Size = System::Drawing::Size(53, 23);
			this->uid->TabIndex = 24;
			// 
			// uid_no
			// 
			this->uid_no->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uid_no->ForeColor = System::Drawing::Color::Orange;
			this->uid_no->Location = System::Drawing::Point(36, 91);
			this->uid_no->Name = L"uid_no";
			this->uid_no->Size = System::Drawing::Size(42, 31);
			this->uid_no->TabIndex = 23;
			this->uid_no->Text = L"ID:";
			// 
			// agebox
			// 
			this->agebox->Location = System::Drawing::Point(199, 634);
			this->agebox->Multiline = true;
			this->agebox->Name = L"agebox";
			this->agebox->Size = System::Drawing::Size(291, 38);
			this->agebox->TabIndex = 22;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(218, 23);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(221, 30);
			this->label9->TabIndex = 21;
			this->label9->Text = L"REGISTERATION PAGE";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::Orange;
			this->linkLabel2->Location = System::Drawing::Point(194, 53);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(278, 30);
			this->linkLabel2->TabIndex = 20;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Click to sign-in to your account";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &regpage::linkLabel2_LinkClicked);
			// 
			// surname
			// 
			this->surname->Location = System::Drawing::Point(199, 166);
			this->surname->Multiline = true;
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(291, 38);
			this->surname->TabIndex = 1;
			this->surname->TextChanged += gcnew System::EventHandler(this, &regpage::surnameField_TextChanged);
			// 
			// submitButton
			// 
			this->submitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->submitButton->BackColor = System::Drawing::Color::Orange;
			this->submitButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->submitButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->submitButton->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitButton->ForeColor = System::Drawing::Color::White;
			this->submitButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->submitButton->Location = System::Drawing::Point(285, 803);
			this->submitButton->Margin = System::Windows::Forms::Padding(6);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(101, 40);
			this->submitButton->TabIndex = 18;
			this->submitButton->Text = L"Submit";
			this->submitButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->submitButton->UseVisualStyleBackColor = false;
			this->submitButton->Click += gcnew System::EventHandler(this, &regpage::button1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Orange;
			this->label2->Location = System::Drawing::Point(194, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"SURNAME";
			// 
			// termsandcond
			// 
			this->termsandcond->AutoSize = true;
			this->termsandcond->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->termsandcond->ForeColor = System::Drawing::Color::Orange;
			this->termsandcond->Location = System::Drawing::Point(188, 760);
			this->termsandcond->Name = L"termsandcond";
			this->termsandcond->Size = System::Drawing::Size(319, 34);
			this->termsandcond->TabIndex = 17;
			this->termsandcond->Text = L"Accept our Terms and Conditions";
			this->termsandcond->UseVisualStyleBackColor = true;
			// 
			// female
			// 
			this->female->AutoSize = true;
			this->female->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->female->ForeColor = System::Drawing::Color::Orange;
			this->female->Location = System::Drawing::Point(394, 708);
			this->female->Name = L"female";
			this->female->Size = System::Drawing::Size(112, 34);
			this->female->TabIndex = 16;
			this->female->TabStop = true;
			this->female->Text = L"FEMALE";
			this->female->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Orange;
			this->label1->Location = System::Drawing::Point(194, 207);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"FIRST NAME";
			// 
			// male
			// 
			this->male->AutoSize = true;
			this->male->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->male->ForeColor = System::Drawing::Color::Orange;
			this->male->Location = System::Drawing::Point(199, 708);
			this->male->Name = L"male";
			this->male->Size = System::Drawing::Size(89, 34);
			this->male->TabIndex = 15;
			this->male->TabStop = true;
			this->male->Text = L"MALE";
			this->male->UseVisualStyleBackColor = true;
			// 
			// fname
			// 
			this->fname->Location = System::Drawing::Point(199, 241);
			this->fname->Multiline = true;
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(291, 38);
			this->fname->TabIndex = 4;
			this->fname->TextChanged += gcnew System::EventHandler(this, &regpage::textBox2_TextChanged);
			// 
			// sex
			// 
			this->sex->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sex->ForeColor = System::Drawing::Color::Orange;
			this->sex->Location = System::Drawing::Point(239, 675);
			this->sex->Name = L"sex";
			this->sex->Size = System::Drawing::Size(200, 35);
			this->sex->TabIndex = 14;
			this->sex->Text = L"SEX";
			this->sex->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Orange;
			this->label3->Location = System::Drawing::Point(194, 282);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 31);
			this->label3->TabIndex = 5;
			this->label3->Text = L"USER NAME";
			// 
			// age
			// 
			this->age->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age->ForeColor = System::Drawing::Color::Orange;
			this->age->Location = System::Drawing::Point(194, 600);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(60, 31);
			this->age->TabIndex = 13;
			this->age->Text = L"AGE";
			// 
			// user
			// 
			this->user->Location = System::Drawing::Point(199, 316);
			this->user->Multiline = true;
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(291, 38);
			this->user->TabIndex = 6;
			this->user->TextChanged += gcnew System::EventHandler(this, &regpage::user_TextChanged);
			// 
			// phoneno
			// 
			this->phoneno->Location = System::Drawing::Point(199, 553);
			this->phoneno->Multiline = true;
			this->phoneno->Name = L"phoneno";
			this->phoneno->Size = System::Drawing::Size(291, 38);
			this->phoneno->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Orange;
			this->label4->Location = System::Drawing::Point(194, 361);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 31);
			this->label4->TabIndex = 7;
			this->label4->Text = L"PASSWORD";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Orange;
			this->label6->Location = System::Drawing::Point(194, 519);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 31);
			this->label6->TabIndex = 11;
			this->label6->Text = L"PHONE NO";
			// 
			// pass
			// 
			this->pass->Location = System::Drawing::Point(199, 395);
			this->pass->Multiline = true;
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(291, 38);
			this->pass->TabIndex = 8;
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(199, 478);
			this->email->Multiline = true;
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(291, 38);
			this->email->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Josefin Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Orange;
			this->label5->Location = System::Drawing::Point(194, 444);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 31);
			this->label5->TabIndex = 9;
			this->label5->Text = L"EMAIL";
			// 
			// regpage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(651, 904);
			this->Controls->Add(this->panel1);
			this->Name = L"regpage";
			this->Text = L"registeration";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		Application::EnableVisualStyles();
				this->Hide();
				signinPage^ nextpage = gcnew signinPage();
				nextpage->ShowDialog();
	
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=Micro#comp12";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into registeration.reg (uid,surname,name,user_name,pass,email,phone,age,sex) values('" + this->uid->Text+ "','" + this->surname->Text + "','" + this->fname->Text + "','" + this->user->Text + "','" + this->pass->Text + "','" + this->email->Text + "','" + this->phoneno->Text + "','" + this->agebox->Text + "','" + this->sex->Text + "') ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()) {
			
		}
		
	}
	catch (Exception^ ex) {

		MessageBox::Show(ex->Message);

	}
}
private: System::Void surnameField_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void user_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
