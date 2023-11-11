#pragma once

namespace TicTacToeGame {

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

	protected:








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;









	private: System::Windows::Forms::Button^ buttonR;

















	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ x_score;
	private: System::Windows::Forms::Label^ o_score;
	private: System::Windows::Forms::Label^ label5;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonR = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->x_score = (gcnew System::Windows::Forms::Label());
			this->o_score = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ink Free", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(103, 230);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 26);
			this->label1->TabIndex = 9;
			this->label1->Text = L"x";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Ink Free", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(130, 230);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 26);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Turn";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// buttonR
			// 
			this->buttonR->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonR->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonR->ForeColor = System::Drawing::Color::Black;
			this->buttonR->Location = System::Drawing::Point(12, 230);
			this->buttonR->Name = L"buttonR";
			this->buttonR->Size = System::Drawing::Size(62, 26);
			this->buttonR->TabIndex = 11;
			this->buttonR->Text = L"Restart";
			this->buttonR->UseVisualStyleBackColor = false;
			this->buttonR->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::DarkGray;
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->Location = System::Drawing::Point(232, 144);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 8;
			this->button9->TabStop = false;
			this->button9->UseMnemonic = false;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::DarkGray;
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button8->Location = System::Drawing::Point(136, 143);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 7;
			this->button8->TabStop = false;
			this->button8->UseMnemonic = false;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::DarkGray;
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->Location = System::Drawing::Point(47, 144);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 6;
			this->button7->TabStop = false;
			this->button7->UseMnemonic = false;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DarkGray;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(47, 77);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 3;
			this->button4->TabStop = false;
			this->button4->UseMnemonic = false;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkGray;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(47, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 0;
			this->button1->TabStop = false;
			this->button1->UseMnemonic = false;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::DarkGray;
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->Location = System::Drawing::Point(232, 77);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 5;
			this->button6->TabStop = false;
			this->button6->UseMnemonic = false;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkGray;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(232, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 2;
			this->button3->TabStop = false;
			this->button3->UseMnemonic = false;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkGray;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(136, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 1;
			this->button2->TabStop = false;
			this->button2->UseMnemonic = false;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DarkGray;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->Location = System::Drawing::Point(136, 77);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 4;
			this->button5->TabStop = false;
			this->button5->UseMnemonic = false;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Ink Free", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(212, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 26);
			this->label3->TabIndex = 12;
			this->label3->Text = L"X:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Ink Free", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(253, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 26);
			this->label4->TabIndex = 13;
			this->label4->Text = L"O:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// x_score
			// 
			this->x_score->AutoSize = true;
			this->x_score->BackColor = System::Drawing::Color::White;
			this->x_score->Font = (gcnew System::Drawing::Font(L"Ink Free", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x_score->ForeColor = System::Drawing::Color::Black;
			this->x_score->Location = System::Drawing::Point(232, 237);
			this->x_score->Name = L"x_score";
			this->x_score->Size = System::Drawing::Size(15, 16);
			this->x_score->TabIndex = 14;
			this->x_score->Text = L"0";
			this->x_score->Click += gcnew System::EventHandler(this, &MyForm::x_score_Click);
			// 
			// o_score
			// 
			this->o_score->AutoSize = true;
			this->o_score->BackColor = System::Drawing::Color::White;
			this->o_score->Font = (gcnew System::Drawing::Font(L"Ink Free", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->o_score->ForeColor = System::Drawing::Color::Black;
			this->o_score->Location = System::Drawing::Point(281, 237);
			this->o_score->Name = L"o_score";
			this->o_score->Size = System::Drawing::Size(15, 16);
			this->o_score->TabIndex = 15;
			this->o_score->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(-62, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(433, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"_______________________________________________________________________";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(317, 261);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->o_score);
			this->Controls->Add(this->x_score);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->buttonR);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(333, 300);
			this->MinimumSize = System::Drawing::Size(333, 300);
			this->Name = L"MyForm";
			this->Text = L"Tic Tac Toe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		char b_1 = 'n';
		char b_2 = 'n';
		char b_3 = 'n';
		char b_4 = 'n';
		char b_5 = 'n';
		char b_6 = 'n';
		char b_7 = 'n';
		char b_8 = 'n';
		char b_9 = 'n';
		char play_turn = 'x';
		bool game = true;
		bool Restart = false;
		int x_wins, o_wins;
		
	void check_win() {
		if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				this->label1->Text = "X win";
				this->label2->Text = "";
				play_turn = 'w';
				x_wins++;
			}
		if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O") {
				this->label1->Text = "O win";
				this->label2->Text = "";
				play_turn = 'w';
				o_wins++;
		}
		
		////////////////////////////////////

		if (button4->Text == "X" && button5->Text == "X"&& button6->Text == "X") {
			this->label1->Text = "X win";
			this->label2->Text = "";
			play_turn = 'w';
			x_wins++;
		}
		if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O") {
			this->label1->Text = "O win";
			this->label2->Text = "";
			play_turn = 'w';
			o_wins++;
		}


		////////////////////////////////////

		if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X") {
			this->label1->Text = "X win";
			this->label2->Text = "";
			play_turn = 'w';
			x_wins++;
		}
		if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O") {
			this->label1->Text = "O win";
			this->label2->Text = "";
			play_turn = 'w';
			o_wins++;
		}
		
		////////////////////////////////////

		if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X") {
			this->label1->Text = "X win";
			this->label2->Text = "";
			play_turn = 'w';
			x_wins++;
		}
		if (button3->Text == "O" && button6->Text == "O" && button9->Text == "O") {
			this->label1->Text = "O win";
			this->label2->Text = "";
			play_turn = 'w';
			o_wins++;
		}

		////////////////////////////////////
		

		if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X") {
			this->label1->Text = "X win";
			this->label2->Text = "";
			play_turn = 'w';
			x_wins++;
		}
		if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O") {
			this->label1->Text = "O win";
			this->label2->Text = "";
			play_turn = 'w';
			o_wins++;
		}

		////////////////////////////////////

		if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X") {
			this->label1->Text = "X win";
			this->label2->Text = "";
			play_turn = 'w';
			x_wins++;
		}
		if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O") {
			this->label1->Text = "O win";
			this->label2->Text = "";
			play_turn = 'w';
			o_wins++;
		}

		////////////////////////////////////

		if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X") {
			this->label1->Text = "X win";
			this->label2->Text = "";
			play_turn = 'w';
			x_wins++;
		}
		if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O") {
			this->label1->Text = "O win";
			this->label2->Text = "";
			play_turn = 'w';
			o_wins++;
		}

		////////////////////////////////////

		if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X") {
			this->label1->Text = "X win";
			this->label2->Text = "";
			play_turn = 'w';
			x_wins++;
		}
		if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O") {
			this->label1->Text = "O win";
			this->label2->Text = "";
			play_turn = 'w';
			o_wins++;
		}

		////////////////////////////////////

		x_score->Text = System::Convert::ToString(x_wins);
		o_score->Text = System::Convert::ToString(o_wins);


	}

	



	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (play_turn == 'x' && b_5 == 'n') {
			this->button5->Text = "X";
			b_5 = 'x';
			play_turn = 'o';
			this->label1->Text = "O";

		}
		else if (play_turn == 'o' && b_5 == 'n') {
			this->button5->Text = "O";
			b_5 = 'o';
			play_turn = 'x';
			this->label1->Text = "x";
		}
		check_win();
		
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (play_turn == 'x' && b_6 == 'n') {
		this->button6->Text = "X";
		b_6 = 'x';
		play_turn = 'o';
		this->label1->Text = "O";
	}
	else if (play_turn == 'o' && b_6 == 'n') {
		this->button6->Text = "O";
		b_6 = 'o';
		play_turn = 'x';
		this->label1->Text = "x";
	}check_win();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (play_turn == 'x' && b_7 == 'n') {
		this->button7->Text = "X";
		b_7 = 'x';
		play_turn = 'o';
		this->label1->Text = "O";

	}
	else if (play_turn == 'o' && b_7 == 'n') {
		this->button7->Text = "O";
		b_7 = 'o';
		play_turn = 'x';
		this->label1->Text = "x";
	}check_win();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (play_turn == 'x' && b_8 == 'n') {
		this->button8->Text = "X";
		b_8 = 'x';
		play_turn = 'o';
		this->label1->Text = "O";
	}
	else if (play_turn == 'o' && b_8 == 'n') {
		this->button8->Text = "O";
		b_8 = 'o';
		play_turn = 'x';
		this->label1->Text = "x";
	}check_win();
	
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (play_turn == 'x' && b_9 == 'n') {
		this->button9->Text = "X";
		b_9 = 'x';
		play_turn = 'o';
		this->label1->Text = "O";
	}
	else if (play_turn == 'o' && b_9 == 'n') {
		this->button9->Text = "O";
		b_9 = 'o';
		play_turn = 'x';
		this->label1->Text = "x";
	}check_win();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (play_turn == 'x' && b_4 == 'n') {
		this->button4->Text = "X";
		b_4 = 'x';
		play_turn = 'o';
		this->label1->Text = "O";
	}
	else if (play_turn == 'o' && b_4 == 'n') {
		this->button4->Text = "O";
		b_4 = 'o';
		play_turn = 'x';
		this->label1->Text = "x";

	}check_win();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (play_turn == 'x' && b_3 == 'n') {
		this->button3->Text = "X";
		b_3 = 'x';
		play_turn = 'o';
		this->label1->Text = "O";
	}
	else if (play_turn == 'o' && b_3 == 'n') {
		this->button3->Text = "O";
		b_3 = 'o';
		play_turn = 'x';
		this->label1->Text = "x";
	}check_win();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (play_turn == 'x' && b_2 == 'n') {
		this->button2->Text = "X";
		b_2 = 'x';
		play_turn = 'o';
		this->label1->Text = "O";
	}
	else if (play_turn == 'o' && b_2 == 'n') {
		this->button2->Text = "O";
		b_2 = 'o';
		play_turn = 'x';
		this->label1->Text = "x";
	}check_win();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (play_turn == 'x' && b_1 == 'n') {
		this->button1->Text = "X";
		b_1 = 'x';
		play_turn = 'o';
		this->label1->Text = "O";

	}
	else if (play_turn == 'o' && b_1 == 'n') {
		this->button1->Text = "O";
		b_1 = 'o';
		play_turn = 'x';
		this->label1->Text = "x";
	}
	check_win();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	 
	
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = "x";
	
	
	
}





private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (true) {
		b_1 = 'n';
		b_2 = 'n';
		b_3 = 'n';
		b_4 = 'n';
		b_5 = 'n';
		b_6 = 'n';
		b_7 = 'n';
		b_8 = 'n';
		b_9 = 'n';
		button1->Text = "";
		button2->Text = "";
		button3->Text = "";
		button4->Text = "";
		button5->Text = "";
		button6->Text = "";
		button7->Text = "";
		button8->Text = "";
		button9->Text = "";
		play_turn = 'x';
		label2->Text = "Turn";
		label1->Text = "X";

	}

	
	check_win();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void x_score_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
