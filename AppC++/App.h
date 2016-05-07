#pragma once

namespace AppC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for App
	/// </summary>
	public ref class App : public System::Windows::Forms::Form
	{
	public:
		App(void)
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
		~App()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(App::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button2->Location = System::Drawing::Point(105, 489);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 77);
			this->button2->TabIndex = 1;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button4->Location = System::Drawing::Point(12, 406);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 77);
			this->button4->TabIndex = 3;
			this->button4->Text = L"1";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button5->Location = System::Drawing::Point(105, 406);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(87, 77);
			this->button5->TabIndex = 4;
			this->button5->Text = L"2";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button6->Location = System::Drawing::Point(198, 406);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 77);
			this->button6->TabIndex = 5;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button7->Location = System::Drawing::Point(12, 323);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(87, 77);
			this->button7->TabIndex = 6;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button8->Location = System::Drawing::Point(105, 323);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(87, 77);
			this->button8->TabIndex = 7;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &App::button8_Click);
			// 
			// button9
			// 
			this->button9->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button9->Location = System::Drawing::Point(198, 323);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(87, 77);
			this->button9->TabIndex = 8;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button10->Location = System::Drawing::Point(291, 323);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(70, 77);
			this->button10->TabIndex = 9;
			this->button10->Text = L"+";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button11->Location = System::Drawing::Point(291, 406);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(70, 77);
			this->button11->TabIndex = 10;
			this->button11->Text = L"-";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button12->Location = System::Drawing::Point(198, 489);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(163, 77);
			this->button12->TabIndex = 11;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->button13->Location = System::Drawing::Point(12, 116);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(87, 56);
			this->button13->TabIndex = 12;
			this->button13->Text = L"(";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(105, 116);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(87, 56);
			this->button14->TabIndex = 13;
			this->button14->Text = L")";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(198, 116);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(87, 56);
			this->button15->TabIndex = 14;
			this->button15->Text = L"√";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(291, 116);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(70, 56);
			this->button16->TabIndex = 15;
			this->button16->Text = L"ᴨ";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(343, 95);
			this->label1->TabIndex = 16;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->button17->Location = System::Drawing::Point(12, 178);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(87, 56);
			this->button17->TabIndex = 17;
			this->button17->Text = L"%";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->button18->Location = System::Drawing::Point(105, 178);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(87, 56);
			this->button18->TabIndex = 18;
			this->button18->Text = L"C";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->button19->Location = System::Drawing::Point(198, 178);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(87, 56);
			this->button19->TabIndex = 19;
			this->button19->Text = L"←";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->button20->Location = System::Drawing::Point(292, 178);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(71, 56);
			this->button20->TabIndex = 20;
			this->button20->Text = L"x";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button25->Location = System::Drawing::Point(12, 240);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(87, 77);
			this->button25->TabIndex = 25;
			this->button25->Text = L"7";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button21->Location = System::Drawing::Point(105, 240);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(87, 77);
			this->button21->TabIndex = 26;
			this->button21->Text = L"8";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button22->Location = System::Drawing::Point(198, 240);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(87, 77);
			this->button22->TabIndex = 27;
			this->button22->Text = L"9";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button23->Location = System::Drawing::Point(291, 240);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(70, 77);
			this->button23->TabIndex = 28;
			this->button23->Text = L"/";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 20));
			this->button3->Location = System::Drawing::Point(12, 489);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 77);
			this->button3->TabIndex = 29;
			this->button3->Text = L",";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// App
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(367, 572);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"App";
			this->Text = L"Kalkulator";
			this->Load += gcnew System::EventHandler(this, &App::App_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void App_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
