#pragma once
#include "mainGUI.h" 
#include <vcclr.h>
#include "data.h"

namespace PandaProperty 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainGUI
	/// </summary>
	public ref class loginGUI : public System::Windows::Forms::Form
	{
	public:
		loginGUI(void)
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
		~loginGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_username;
	private: System::Windows::Forms::Label^ label_username;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::Label^ label_password;


	private: System::Windows::Forms::Button^ button_login;


	public:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->label_username = (gcnew System::Windows::Forms::Label());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->label_password = (gcnew System::Windows::Forms::Label());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_username
			// 
			this->textBox_username->Location = System::Drawing::Point(111, 124);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(441, 26);
			this->textBox_username->TabIndex = 0;
			// 
			// label_username
			// 
			this->label_username->AutoSize = true;
			this->label_username->Location = System::Drawing::Point(21, 130);
			this->label_username->Name = L"label_username";
			this->label_username->Size = System::Drawing::Size(83, 20);
			this->label_username->TabIndex = 1;
			this->label_username->Text = L"Username";
			this->label_username->Click += gcnew System::EventHandler(this, &loginGUI::label1_Click);
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(111, 156);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(441, 26);
			this->textBox_password->TabIndex = 2;
			this->textBox_password->UseSystemPasswordChar = true;
			// 
			// label_password
			// 
			this->label_password->AutoSize = true;
			this->label_password->Location = System::Drawing::Point(21, 162);
			this->label_password->Name = L"label_password";
			this->label_password->Size = System::Drawing::Size(78, 20);
			this->label_password->TabIndex = 3;
			this->label_password->Text = L"Password";
			// 
			// button_login
			// 
			this->button_login->BackColor = System::Drawing::SystemColors::Control;
			this->button_login->Location = System::Drawing::Point(111, 189);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(123, 40);
			this->button_login->TabIndex = 4;
			this->button_login->Text = L"Login";
			this->button_login->UseVisualStyleBackColor = false;
			this->button_login->Click += gcnew System::EventHandler(this, &loginGUI::button1_Click);
			// 
			// loginGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(587, 303);
			this->Controls->Add(this->button_login);
			this->Controls->Add(this->label_password);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->label_username);
			this->Controls->Add(this->textBox_username);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"loginGUI";
			this->Text = L"Panda-Property";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//this->Hide(); 
		String^ sUsername = textBox_username->Text;
		String^ sUsernameRight = "admin";
		String^ sPassword = textBox_password->Text;
		String^ sPasswordRight = "111111";
		if (sUsername == sUsernameRight && sPassword == sPasswordRight)
		{
			this->Hide();
			mainGUI::mainGUI object;
			object.ShowDialog();
			//this->Show(); 
			System::Int32^ iNum = 3;
		}
		
		
		
	}
};
}
