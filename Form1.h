#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbPort;
	private: System::Windows::Forms::ComboBox^ cbBaud;
	private: System::Windows::Forms::Button^ btnConnect;
	private: System::Windows::Forms::TextBox^ tbData;
	private: System::Windows::Forms::TextBox^ tbSend;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::IO::Ports::SerialPort^ serialPort;
	private: System::Windows::Forms::RadioButton^ btnHex;
	private: System::Windows::Forms::RadioButton^ btnAscii;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbPort = (gcnew System::Windows::Forms::ComboBox());
			this->cbBaud = (gcnew System::Windows::Forms::ComboBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->tbData = (gcnew System::Windows::Forms::TextBox());
			this->tbSend = (gcnew System::Windows::Forms::TextBox());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->btnHex = (gcnew System::Windows::Forms::RadioButton());
			this->btnAscii = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"COM Ports";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Baud Rate";
			// 
			// cbPort
			// 
			this->cbPort->FormattingEnabled = true;
			this->cbPort->Location = System::Drawing::Point(95, 12);
			this->cbPort->Name = L"cbPort";
			this->cbPort->Size = System::Drawing::Size(121, 21);
			this->cbPort->TabIndex = 2;
			// 
			// cbBaud
			// 
			this->cbBaud->FormattingEnabled = true;
			this->cbBaud->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"115200", L"57600", L"28800", L"14400", L"9600",
					L"7200"
			});
			this->cbBaud->Location = System::Drawing::Point(95, 41);
			this->cbBaud->Name = L"cbBaud";
			this->cbBaud->Size = System::Drawing::Size(121, 21);
			this->cbBaud->TabIndex = 3;
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(95, 68);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(121, 30);
			this->btnConnect->TabIndex = 4;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &Form1::btnConnect_Click);
			// 
			// tbData
			// 
			this->tbData->Location = System::Drawing::Point(13, 113);
			this->tbData->Multiline = true;
			this->tbData->Name = L"tbData";
			this->tbData->ReadOnly = true;
			this->tbData->Size = System::Drawing::Size(459, 160);
			this->tbData->TabIndex = 5;
			// 
			// tbSend
			// 
			this->tbSend->Location = System::Drawing::Point(13, 279);
			this->tbSend->Name = L"tbSend";
			this->tbSend->Size = System::Drawing::Size(374, 20);
			this->tbSend->TabIndex = 6;
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(393, 279);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(79, 20);
			this->btnSend->TabIndex = 7;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &Form1::btnSend_Click);
			// 
			// serialPort
			// 
			this->serialPort->ReadTimeout = 500;
			this->serialPort->WriteTimeout = 500;
			this->serialPort->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Form1::serialPort_DataReceived);
			// 
			// btnHex
			// 
			this->btnHex->AutoSize = true;
			this->btnHex->Location = System::Drawing::Point(367, 81);
			this->btnHex->Name = L"btnHex";
			this->btnHex->Size = System::Drawing::Size(47, 17);
			this->btnHex->TabIndex = 8;
			this->btnHex->TabStop = true;
			this->btnHex->Text = L"HEX";
			this->btnHex->UseVisualStyleBackColor = true;
			this->btnHex->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnHex_CheckedChanged);
			// 
			// btnAscii
			// 
			this->btnAscii->AutoSize = true;
			this->btnAscii->Location = System::Drawing::Point(420, 81);
			this->btnAscii->Name = L"btnAscii";
			this->btnAscii->Size = System::Drawing::Size(52, 17);
			this->btnAscii->TabIndex = 9;
			this->btnAscii->TabStop = true;
			this->btnAscii->Text = L"ASCII";
			this->btnAscii->UseVisualStyleBackColor = true;
			this->btnAscii->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnAscii_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 311);
			this->Controls->Add(this->btnAscii);
			this->Controls->Add(this->btnHex);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->tbSend);
			this->Controls->Add(this->tbData);
			this->Controls->Add(this->btnConnect);
			this->Controls->Add(this->cbBaud);
			this->Controls->Add(this->cbPort);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(500, 350);
			this->MinimumSize = System::Drawing::Size(500, 350);
			this->Name = L"Form1";
			this->Text = L"Terminal";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		array<Object^>^ comport = SerialPort::GetPortNames();
		cbPort->Items->AddRange(comport);
		cbPort->SelectedIndex = 0;
	}
	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (btnConnect->Text == "Connect") {
				if (serialPort->IsOpen) {
					serialPort->Close();
				}
				serialPort->PortName = cbPort->Text;
				serialPort->BaudRate = Int32::Parse(cbBaud->Text);
				serialPort->Open();
				btnConnect->Text = "Disconnect";
			}
			else if (btnConnect->Text == "Disconnect") {
				serialPort->Close();
				btnConnect->Text = "Connect";
			}
		}
		catch (...)
		{
			MessageBox::Show("Choose COM port and baud rate!");
		}
	}
private: System::Void serialPort_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
	tbData->AppendText(serialPort->ReadLine() + "\n");
}
private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
	serialPort->WriteLine(tbSend->Text);
}
	   //TODO
private: System::Void btnHex_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //TODO
private: System::Void btnAscii_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
