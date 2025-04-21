#pragma once

#include <Windows.h>
#include <iostream>


bool clicking = false;
long totclicks = 0;
int curclicks = 0;
double cps = 1.0;
namespace cc00001 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ keyCheckTimer;
	private: System::Windows::Forms::Label^ showstate;

	private: System::Windows::Forms::Label^ showx;
	private: System::Windows::Forms::Label^ showy;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ clcksinput;

	private: System::Windows::Forms::Button^ setNumber;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ secs;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ showtotclicks;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->keyCheckTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->showstate = (gcnew System::Windows::Forms::Label());
			this->showx = (gcnew System::Windows::Forms::Label());
			this->showy = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->clcksinput = (gcnew System::Windows::Forms::TextBox());
			this->setNumber = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->secs = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->showtotclicks = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// keyCheckTimer
			// 
			this->keyCheckTimer->Tick += gcnew System::EventHandler(this, &MyForm::KeyCheckTimer_Tick);
			// 
			// showstate
			// 
			this->showstate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showstate->Location = System::Drawing::Point(277, 191);
			this->showstate->Name = L"showstate";
			this->showstate->Size = System::Drawing::Size(0, 0);
			this->showstate->TabIndex = 0;
			this->showstate->Text = L"Will Click on :";
			// 
			// showx
			// 
			this->showx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showx->Location = System::Drawing::Point(193, 197);
			this->showx->Name = L"showx";
			this->showx->Size = System::Drawing::Size(0, 0);
			this->showx->TabIndex = 1;
			this->showx->Text = L"0";
			// 
			// showy
			// 
			this->showy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showy->Location = System::Drawing::Point(235, 191);
			this->showy->Name = L"showy";
			this->showy->Size = System::Drawing::Size(0, 0);
			this->showy->TabIndex = 2;
			this->showy->Text = L"0";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(4, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 44);
			this->label1->TabIndex = 3;
			this->label1->Text = L"clicks: ";
			// 
			// clcksinput
			// 
			this->clcksinput->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clcksinput->Location = System::Drawing::Point(135, 19);
			this->clcksinput->Name = L"clcksinput";
			this->clcksinput->Size = System::Drawing::Size(231, 26);
			this->clcksinput->TabIndex = 4;
			this->clcksinput->Text = L"put -1 to keep clicking until halt";
			// 
			// setNumber
			// 
			this->setNumber->BackColor = System::Drawing::Color::White;
			this->setNumber->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->setNumber->Location = System::Drawing::Point(260, 47);
			this->setNumber->Name = L"setNumber";
			this->setNumber->Size = System::Drawing::Size(242, 46);
			this->setNumber->TabIndex = 5;
			this->setNumber->Text = L"set # of clicks and # of secs";
			this->setNumber->UseVisualStyleBackColor = false;
			this->setNumber->Click += gcnew System::EventHandler(this, &MyForm::setNumber_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(4, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 44);
			this->label2->TabIndex = 6;
			this->label2->Text = L"seconds:";
			// 
			// secs
			// 
			this->secs->Location = System::Drawing::Point(163, 64);
			this->secs->Name = L"secs";
			this->secs->Size = System::Drawing::Size(72, 22);
			this->secs->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"total clicks so far: ";
			// 
			// showtotclicks
			// 
			this->showtotclicks->AutoSize = true;
			this->showtotclicks->Location = System::Drawing::Point(111, 220);
			this->showtotclicks->Name = L"showtotclicks";
			this->showtotclicks->Size = System::Drawing::Size(0, 16);
			this->showtotclicks->TabIndex = 9;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(11, 239);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(364, 24);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"Click on the location pre-set (F3 to set)";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(409, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"F2 TO START";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(409, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"F3 TO STOP";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(514, 101);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->showtotclicks);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->secs);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->setNumber);
			this->Controls->Add(this->clcksinput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->showy);
			this->Controls->Add(this->showx);
			this->Controls->Add(this->showstate);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"CC 0.00001";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void KeyCheckTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		POINT P;
		/*
		if (GetAsyncKeyState(VK_F3) & 0x8000) { 
			this->showx->Text = (P.x).ToString();
			this->showy->Text = (P.y).ToString();
		}
		*/
		if (GetAsyncKeyState(VK_F2) && 0x8000) {
			clicking = true;
			curclicks = 0;
		}

		if ((GetAsyncKeyState(VK_F3) && 0x8000) || (totclicks-1 < curclicks && totclicks !=-1)) {
			clicking = false;
			this->showstate->Text = "Will click on : ";
		}
		if (clicking) {
			this->showstate->Text = "Clicking on :";
			GetCursorPos(&P);
			click(P.x, P.y);
			Sleep(1000 * cps);
			this->showtotclicks->Text = curclicks.ToString();
			if (curclicks <= 0)
			curclicks++;
		}





	}

		   void click(long acx, long acy) {
			   INPUT input = { 0 };
			   input.type = INPUT_MOUSE;
			   SetCursorPos(acx, acy);
			   input.mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP;
			   input.mi.mouseData = 0;
			   input.mi.dwExtraInfo = NULL;
			   input.mi.time = 0;

			   if (SendInput(1, &input, sizeof(INPUT)) != 1) {
				   std::cerr << "Failed to send input.\n";
				   return;
			   }
		   }
//private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);

#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->keyCheckTimer->Start();
		HWND hwnd = (HWND)this->Handle.ToPointer();  // Get the handle to your window (Form)
		SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
	
	}
	private: System::Void setNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		totclicks = System::Convert::ToInt64(this->clcksinput->Text);
		cps = System::Convert::ToDouble(this->secs->Text);

	}
};
}



