#pragma once
#include "Main.h"
#include <msclr/marshal_cppstd.h>
Fraction object;

namespace CURcurma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button0;
	protected:












	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::TextBox^ textBox1;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(12, 277);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(192, 46);
			this->button0->TabIndex = 0;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 55);
			this->button1->TabIndex = 14;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(78, 216);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 55);
			this->button2->TabIndex = 15;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(144, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 55);
			this->button3->TabIndex = 16;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 155);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 55);
			this->button4->TabIndex = 19;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(78, 155);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 55);
			this->button5->TabIndex = 18;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(144, 155);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 55);
			this->button6->TabIndex = 17;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(12, 94);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 55);
			this->button7->TabIndex = 22;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(78, 94);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 55);
			this->button8->TabIndex = 21;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(144, 94);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 55);
			this->button9->TabIndex = 20;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(322, 155);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 55);
			this->button10->TabIndex = 24;
			this->button10->Text = L"×";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiple_Click);
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(256, 155);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 55);
			this->button11->TabIndex = 23;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::buttonCros_Click);
			// 
			// button12
			// 
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(322, 216);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 55);
			this->button12->TabIndex = 26;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::buttonDivide_Click);
			// 
			// button13
			// 
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(256, 216);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 55);
			this->button13->TabIndex = 25;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::buttonMinus_Click);
			// 
			// button14
			// 
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(256, 277);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(126, 46);
			this->button14->TabIndex = 27;
			this->button14->Text = L"=";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::buttonEqupation_Click);
			// 
			// button15
			// 
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(256, 94);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(126, 55);
			this->button15->TabIndex = 28;
			this->button15->Text = L"⌫";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::buttonDel_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(370, 76);
			this->textBox1->TabIndex = 29;
			this->textBox1->Text = L"123";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(394, 335);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button0);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
			if (object.get_label().size() > 0 && isdigit(object.get_label()[object.get_label().size() - 1])) {
				object.add_digit(0);
				this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());
			}
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			object.add_digit(1);
			this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			object.add_digit(2);
			this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			object.add_digit(3);
			this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			object.add_digit(4);
			this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());
		}
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			object.add_digit(5);
			this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());
		}
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			object.add_digit(6);
			this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());
		}
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			object.add_digit(7);
			this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());
		}
		private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
			object.add_digit(8);
			this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());

		}
		private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
			object.add_digit(9);
			this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());

		}
		private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
			if (object.get_label().size() != 0 && isdigit(object.get_label()[object.get_label().size() - 1])) {
				object.add_symbol('-');
				this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());
			}
		}

		private: System::Void buttonCros_Click(System::Object^ sender, System::EventArgs^ e) {
			if (object.get_label().size() != 0 && isdigit(object.get_label()[object.get_label().size() - 1])) {
				object.add_symbol('+');
				this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());
			}
		}
		private: System::Void buttonMultiple_Click(System::Object^ sender, System::EventArgs^ e) {
			if (object.get_label().size() != 0 && isdigit(object.get_label()[object.get_label().size() - 1])) {
				object.add_symbol('*');
				this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());
			}
		}
		private: System::Void buttonDivide_Click(System::Object^ sender, System::EventArgs^ e) {
			if (object.get_label().size() != 0 && isdigit(object.get_label()[object.get_label().size() - 1])) {
				object.add_symbol('/');
				this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());
			}
		}
		private: System::Void buttonDel_Click(System::Object^ sender, System::EventArgs^ e) {
			if (object.get_label().size() > 0) {
				object.delete_symbol();
				this->textBox1->Text = msclr::interop::marshal_as<System::String^>(object.get_label());

			}
		}
		private: System::Void buttonEqupation_Click(System::Object^ sender, System::EventArgs^ e) {
			if (object.get_label().size() > 0 ) {
				double result = object.complete_equpation();
				this->textBox1->Text = System::Convert::ToString(result);
				clear_equpation(object);
			}
		}
};
}
