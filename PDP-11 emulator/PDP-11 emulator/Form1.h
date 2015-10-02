#pragma once

namespace PDP11emulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox;
	private: System::Windows::Forms::ListView^  listView;
	private: System::Windows::Forms::TextBox^  textBox;
	protected: 

	protected: 


	private: System::Windows::Forms::Button^  reset;
	private: System::Windows::Forms::Button^  run;
	private: System::Windows::Forms::Button^  step;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;





	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->listView = (gcnew System::Windows::Forms::ListView());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->run = (gcnew System::Windows::Forms::Button());
			this->step = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox
			// 
			this->pictureBox->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox->Location = System::Drawing::Point(41, 33);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(263, 240);
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			// 
			// listView
			// 
			this->listView->Location = System::Drawing::Point(382, 33);
			this->listView->Name = L"listView";
			this->listView->Size = System::Drawing::Size(284, 238);
			this->listView->TabIndex = 1;
			this->listView->UseCompatibleStateImageBehavior = false;
			this->listView->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listView_SelectedIndexChanged);
			// 
			// textBox
			// 
			this->textBox->Location = System::Drawing::Point(382, 292);
			this->textBox->Multiline = true;
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(284, 115);
			this->textBox->TabIndex = 2;
			this->textBox->Text = L"R1:\r\nR2:\r\nR3:\r\nR4:\r\nR5:\r\nSP:\r\nPC:\r\nMW:\r\n";
			this->textBox->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged_1);
			// 
			// reset
			// 
			this->reset->Location = System::Drawing::Point(41, 279);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(52, 22);
			this->reset->TabIndex = 3;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &Form1::reset_Click);
			// 
			// run
			// 
			this->run->Location = System::Drawing::Point(252, 279);
			this->run->Name = L"run";
			this->run->Size = System::Drawing::Size(52, 22);
			this->run->TabIndex = 4;
			this->run->Text = L"Run";
			this->run->UseVisualStyleBackColor = true;
			this->run->Click += gcnew System::EventHandler(this, &Form1::run_Click);
			// 
			// step
			// 
			this->step->Location = System::Drawing::Point(252, 307);
			this->step->Name = L"step";
			this->step->Size = System::Drawing::Size(52, 22);
			this->step->TabIndex = 5;
			this->step->Text = L"Step";
			this->step->UseVisualStyleBackColor = true;
			this->step->Click += gcnew System::EventHandler(this, &Form1::step_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 487);
			this->Controls->Add(this->step);
			this->Controls->Add(this->run);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->listView);
			this->Controls->Add(this->pictureBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"PDP-11 emulator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void reset_Click(System::Object^  sender, System::EventArgs^  e) {
			emu_reset();
			//this->textBox->Text = "Reset";
		 }
private: System::Void run_Click(System::Object^  sender, System::EventArgs^  e) {
			emu_run();
		 }
private: System::Void step_Click(System::Object^  sender, System::EventArgs^  e) {
			emu_step();
		 }
private: System::Void listView_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		 }
};
}

