#pragma once

#include <iostream>
#include <fstream>
#include<iomanip>
#include<string>
//#include<bits/stdc++.h>
#include<sstream>

namespace Login {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for RegForm
	/// </summary>
	public ref class RegForm : public System::Windows::Forms::Form
	{
	public:
		RegForm(void)
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
		~RegForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  ntext;
	private: System::Windows::Forms::TextBox^  atext;
	private: System::Windows::Forms::TextBox^  ptext;



	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RegForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ntext = (gcnew System::Windows::Forms::TextBox());
			this->atext = (gcnew System::Windows::Forms::TextBox());
			this->ptext = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(96, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(96, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Age :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(96, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// ntext
			// 
			this->ntext->Location = System::Drawing::Point(187, 73);
			this->ntext->Name = L"ntext";
			this->ntext->Size = System::Drawing::Size(217, 20);
			this->ntext->TabIndex = 3;
			// 
			// atext
			// 
			this->atext->Location = System::Drawing::Point(187, 111);
			this->atext->Name = L"atext";
			this->atext->Size = System::Drawing::Size(217, 20);
			this->atext->TabIndex = 4;
			// 
			// ptext
			// 
			this->ptext->Location = System::Drawing::Point(187, 154);
			this->ptext->Name = L"ptext";
			this->ptext->Size = System::Drawing::Size(217, 20);
			this->ptext->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(224, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 43);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegForm::button1_Click);
			// 
			// RegForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(696, 370);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ptext);
			this->Controls->Add(this->atext);
			this->Controls->Add(this->ntext);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		std::cout << "sada";
		
			String^ name = ntext->Text;
			String^ age = atext->Text;
			String^ password = ptext->Text;
		
			MessageBox::Show("OK");
			StreamWriter ^outfile = gcnew StreamWriter("users.txt",true);
			outfile->Write(name+" "+password + "\r\n");
			
			outfile->Close();
			this->Close();
		
		
	}
};
}
