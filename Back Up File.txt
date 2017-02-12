#include <fstream>
#include <iostream>
#include <string.h>
#include <vcclr.h>
#include <math.h>


#define FILE_OPEN		1
#define FILE_CLOSED		0

#pragma once
using namespace std;

namespace Development {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			findPorts();
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





	private: System::IO::Ports::SerialPort^  SerialPort;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;








	private: System::Windows::Forms::Label^  Data4;
	private: System::Windows::Forms::Button^  cmd1;
	private: System::Windows::Forms::RichTextBox^  S_DL_Status;

	private: System::Windows::Forms::Button^  cmd2;





	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::TextBox^  textBox3;


	protected:

	private:
		/// <summary>
		/// Required designer variable.

		int Gate = 1;
		const char *B_FILENAME;
		const char *S_FILENAME;
		static float Base_GPS_Latitude = 0.0;
		static float Base_GPS_Longitude = 0.0;
		int F_GPS_Latitude;
		int F_GPS_Longitude;
		static int GPS_LOCK_Status = 0;
		System::Windows::Forms::TextBox^  TB_FileName;
	private: System::Windows::Forms::TextBox^  S_Time_Data;






	private: System::Windows::Forms::TextBox^  S_GPSLong_Data;

	private: System::Windows::Forms::TextBox^  S_GPSLat_Data;

	private: System::Windows::Forms::TextBox^  S_Alt_Data;

	private: System::Windows::Forms::TextBox^  S_ClimbRate_Data;

	private: System::Windows::Forms::TextBox^  S_Accel_Data;

	private: System::Windows::Forms::Label^  label1;




	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label11;


	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  B_Time_Data;
	private: System::Windows::Forms::TextBox^  B_GPSLong_Data;
	private: System::Windows::Forms::TextBox^  B_GPSLat_Data;
	private: System::Windows::Forms::TextBox^  B_Alt_Data;
	private: System::Windows::Forms::TextBox^  B_ClimbRate_Data;
	private: System::Windows::Forms::TextBox^  B_Accel_Data;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::RichTextBox^  B_DL_Status;
private: System::Windows::Forms::Label^  label10;

private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Button^  Booster_Emergency;
private: System::Windows::Forms::Button^  Sustainer_Emergency;
private: System::Windows::Forms::TextBox^  B_Heading_Data;


private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::TextBox^  S_Heading_Data;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  S_Distance_Data;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::TextBox^  B_Distance_Data;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Button^  B_Emergency_Electronics;
private: System::Windows::Forms::Button^  S_Emergency_Electronics;
private: System::Windows::Forms::TextBox^  B_Temperature_Data;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::TextBox^  S_Temperature_Data;

private: System::Windows::Forms::Label^  label38;





			 int File_Status = FILE_CLOSED;
		
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->SerialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Data4 = (gcnew System::Windows::Forms::Label());
			this->cmd1 = (gcnew System::Windows::Forms::Button());
			this->S_DL_Status = (gcnew System::Windows::Forms::RichTextBox());
			this->cmd2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->TB_FileName = (gcnew System::Windows::Forms::TextBox());
			this->S_Time_Data = (gcnew System::Windows::Forms::TextBox());
			this->S_GPSLong_Data = (gcnew System::Windows::Forms::TextBox());
			this->S_GPSLat_Data = (gcnew System::Windows::Forms::TextBox());
			this->S_Alt_Data = (gcnew System::Windows::Forms::TextBox());
			this->S_ClimbRate_Data = (gcnew System::Windows::Forms::TextBox());
			this->S_Accel_Data = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->B_Time_Data = (gcnew System::Windows::Forms::TextBox());
			this->B_GPSLong_Data = (gcnew System::Windows::Forms::TextBox());
			this->B_GPSLat_Data = (gcnew System::Windows::Forms::TextBox());
			this->B_Alt_Data = (gcnew System::Windows::Forms::TextBox());
			this->B_ClimbRate_Data = (gcnew System::Windows::Forms::TextBox());
			this->B_Accel_Data = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->B_DL_Status = (gcnew System::Windows::Forms::RichTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Booster_Emergency = (gcnew System::Windows::Forms::Button());
			this->Sustainer_Emergency = (gcnew System::Windows::Forms::Button());
			this->B_Heading_Data = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->S_Heading_Data = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->S_Distance_Data = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->B_Distance_Data = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->B_Emergency_Electronics = (gcnew System::Windows::Forms::Button());
			this->S_Emergency_Electronics = (gcnew System::Windows::Forms::Button());
			this->B_Temperature_Data = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->S_Temperature_Data = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// SerialPort
			// 
			this->SerialPort->BaudRate = 57600;
			this->SerialPort->PortName = L"COM3";
			this->SerialPort->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::SerialPort_DataReceived);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(1756, 803);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(117, 32);
			this->comboBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1649, 806);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"COM Ports";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1448, 864);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(117, 39);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Open Port";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1756, 864);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(117, 39);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Close Port";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// Data4
			// 
			this->Data4->AutoSize = true;
			this->Data4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Data4->Location = System::Drawing::Point(1603, 509);
			this->Data4->Name = L"Data4";
			this->Data4->Size = System::Drawing::Size(143, 24);
			this->Data4->TabIndex = 16;
			this->Data4->Text = L"Sustainer Status";
			// 
			// cmd1
			// 
			this->cmd1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmd1->Location = System::Drawing::Point(12, 836);
			this->cmd1->Name = L"cmd1";
			this->cmd1->Size = System::Drawing::Size(190, 40);
			this->cmd1->TabIndex = 17;
			this->cmd1->Text = L"Start Data Gather";
			this->cmd1->UseVisualStyleBackColor = true;
			this->cmd1->Click += gcnew System::EventHandler(this, &MyForm::cmd1_Click);
			// 
			// S_DL_Status
			// 
			this->S_DL_Status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S_DL_Status->Location = System::Drawing::Point(1424, 536);
			this->S_DL_Status->Name = L"S_DL_Status";
			this->S_DL_Status->Size = System::Drawing::Size(468, 239);
			this->S_DL_Status->TabIndex = 18;
			this->S_DL_Status->Text = L"";
			this->S_DL_Status->TextChanged += gcnew System::EventHandler(this, &MyForm::CommentBox1_TextChanged);
			// 
			// cmd2
			// 
			this->cmd2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmd2->Location = System::Drawing::Point(352, 836);
			this->cmd2->Name = L"cmd2";
			this->cmd2->Size = System::Drawing::Size(190, 40);
			this->cmd2->TabIndex = 19;
			this->cmd2->Text = L"End Data Gather";
			this->cmd2->UseVisualStyleBackColor = true;
			this->cmd2->Click += gcnew System::EventHandler(this, &MyForm::cmd2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(97, 882);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(353, 29);
			this->textBox3->TabIndex = 20;
			this->textBox3->Text = L"File Status";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// TB_FileName
			// 
			this->TB_FileName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_FileName->Location = System::Drawing::Point(97, 801);
			this->TB_FileName->Name = L"TB_FileName";
			this->TB_FileName->Size = System::Drawing::Size(353, 29);
			this->TB_FileName->TabIndex = 21;
			this->TB_FileName->Text = L"File Name";
			// 
			// S_Time_Data
			// 
			this->S_Time_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S_Time_Data->Location = System::Drawing::Point(1571, 106);
			this->S_Time_Data->Name = L"S_Time_Data";
			this->S_Time_Data->Size = System::Drawing::Size(175, 29);
			this->S_Time_Data->TabIndex = 22;
			this->S_Time_Data->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// S_GPSLong_Data
			// 
			this->S_GPSLong_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S_GPSLong_Data->Location = System::Drawing::Point(1571, 338);
			this->S_GPSLong_Data->Name = L"S_GPSLong_Data";
			this->S_GPSLong_Data->Size = System::Drawing::Size(175, 29);
			this->S_GPSLong_Data->TabIndex = 29;
			// 
			// S_GPSLat_Data
			// 
			this->S_GPSLat_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S_GPSLat_Data->Location = System::Drawing::Point(1571, 290);
			this->S_GPSLat_Data->Name = L"S_GPSLat_Data";
			this->S_GPSLat_Data->Size = System::Drawing::Size(175, 29);
			this->S_GPSLat_Data->TabIndex = 30;
			// 
			// S_Alt_Data
			// 
			this->S_Alt_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S_Alt_Data->Location = System::Drawing::Point(1571, 246);
			this->S_Alt_Data->Name = L"S_Alt_Data";
			this->S_Alt_Data->Size = System::Drawing::Size(175, 29);
			this->S_Alt_Data->TabIndex = 31;
			// 
			// S_ClimbRate_Data
			// 
			this->S_ClimbRate_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S_ClimbRate_Data->Location = System::Drawing::Point(1571, 201);
			this->S_ClimbRate_Data->Name = L"S_ClimbRate_Data";
			this->S_ClimbRate_Data->Size = System::Drawing::Size(175, 29);
			this->S_ClimbRate_Data->TabIndex = 32;
			// 
			// S_Accel_Data
			// 
			this->S_Accel_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S_Accel_Data->Location = System::Drawing::Point(1571, 154);
			this->S_Accel_Data->Name = L"S_Accel_Data";
			this->S_Accel_Data->Size = System::Drawing::Size(175, 29);
			this->S_Accel_Data->TabIndex = 33;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1512, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 24);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Time";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1428, 341);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 24);
			this->label7->TabIndex = 39;
			this->label7->Text = L"GPS Longitude";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1447, 293);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 24);
			this->label8->TabIndex = 40;
			this->label8->Text = L"GPS Latitude";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1464, 204);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(101, 24);
			this->label9->TabIndex = 41;
			this->label9->Text = L"Climb Rate";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(167, 41);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(179, 29);
			this->label11->TabIndex = 43;
			this->label11->Text = L"Booster Stage";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(1493, 249);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 24);
			this->label14->TabIndex = 46;
			this->label14->Text = L"Altitude";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(1450, 157);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(115, 24);
			this->label15->TabIndex = 47;
			this->label15->Text = L"Acceleration";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(1563, 41);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(198, 29);
			this->label16->TabIndex = 48;
			this->label16->Text = L"Sustainer Stage";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(112, 109);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(53, 24);
			this->label17->TabIndex = 49;
			this->label17->Text = L"Time";
			// 
			// B_Time_Data
			// 
			this->B_Time_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Time_Data->Location = System::Drawing::Point(171, 106);
			this->B_Time_Data->Name = L"B_Time_Data";
			this->B_Time_Data->Size = System::Drawing::Size(175, 29);
			this->B_Time_Data->TabIndex = 50;
			// 
			// B_GPSLong_Data
			// 
			this->B_GPSLong_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_GPSLong_Data->Location = System::Drawing::Point(171, 338);
			this->B_GPSLong_Data->Name = L"B_GPSLong_Data";
			this->B_GPSLong_Data->Size = System::Drawing::Size(175, 29);
			this->B_GPSLong_Data->TabIndex = 51;
			// 
			// B_GPSLat_Data
			// 
			this->B_GPSLat_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_GPSLat_Data->Location = System::Drawing::Point(171, 290);
			this->B_GPSLat_Data->Name = L"B_GPSLat_Data";
			this->B_GPSLat_Data->Size = System::Drawing::Size(175, 29);
			this->B_GPSLat_Data->TabIndex = 52;
			// 
			// B_Alt_Data
			// 
			this->B_Alt_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Alt_Data->Location = System::Drawing::Point(171, 246);
			this->B_Alt_Data->Name = L"B_Alt_Data";
			this->B_Alt_Data->Size = System::Drawing::Size(175, 29);
			this->B_Alt_Data->TabIndex = 53;
			// 
			// B_ClimbRate_Data
			// 
			this->B_ClimbRate_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_ClimbRate_Data->Location = System::Drawing::Point(171, 201);
			this->B_ClimbRate_Data->Name = L"B_ClimbRate_Data";
			this->B_ClimbRate_Data->Size = System::Drawing::Size(175, 29);
			this->B_ClimbRate_Data->TabIndex = 54;
			// 
			// B_Accel_Data
			// 
			this->B_Accel_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Accel_Data->Location = System::Drawing::Point(171, 154);
			this->B_Accel_Data->Name = L"B_Accel_Data";
			this->B_Accel_Data->Size = System::Drawing::Size(175, 29);
			this->B_Accel_Data->TabIndex = 55;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(50, 157);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(115, 24);
			this->label18->TabIndex = 56;
			this->label18->Text = L"Acceleration";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(64, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 24);
			this->label3->TabIndex = 57;
			this->label3->Text = L"Climb Rate";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(93, 249);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 24);
			this->label4->TabIndex = 58;
			this->label4->Text = L"Altitude";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(47, 293);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 24);
			this->label5->TabIndex = 59;
			this->label5->Text = L"GPS Latitude";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 341);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 24);
			this->label6->TabIndex = 60;
			this->label6->Text = L"GPS Longitude";
			// 
			// B_DL_Status
			// 
			this->B_DL_Status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_DL_Status->Location = System::Drawing::Point(12, 536);
			this->B_DL_Status->Name = L"B_DL_Status";
			this->B_DL_Status->Size = System::Drawing::Size(468, 239);
			this->B_DL_Status->TabIndex = 61;
			this->B_DL_Status->Text = L"";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(177, 509);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 24);
			this->label10->TabIndex = 62;
			this->label10->Text = L"Booster Status";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(1571, 868);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 29);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"Port Status";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// Booster_Emergency
			// 
			this->Booster_Emergency->Location = System::Drawing::Point(625, 973);
			this->Booster_Emergency->Name = L"Booster_Emergency";
			this->Booster_Emergency->Size = System::Drawing::Size(140, 23);
			this->Booster_Emergency->TabIndex = 63;
			this->Booster_Emergency->Text = L"Booster Main Deploy";
			this->Booster_Emergency->UseVisualStyleBackColor = true;
			this->Booster_Emergency->Click += gcnew System::EventHandler(this, &MyForm::Booster_Emergency_Click);
			// 
			// Sustainer_Emergency
			// 
			this->Sustainer_Emergency->Location = System::Drawing::Point(1223, 973);
			this->Sustainer_Emergency->Name = L"Sustainer_Emergency";
			this->Sustainer_Emergency->Size = System::Drawing::Size(160, 23);
			this->Sustainer_Emergency->TabIndex = 64;
			this->Sustainer_Emergency->Text = L"Sustainer Main Deploy";
			this->Sustainer_Emergency->UseVisualStyleBackColor = true;
			this->Sustainer_Emergency->Click += gcnew System::EventHandler(this, &MyForm::Sustainer_Emergency_Click);
			// 
			// B_Heading_Data
			// 
			this->B_Heading_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Heading_Data->Location = System::Drawing::Point(171, 429);
			this->B_Heading_Data->Name = L"B_Heading_Data";
			this->B_Heading_Data->Size = System::Drawing::Size(175, 29);
			this->B_Heading_Data->TabIndex = 65;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(83, 429);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 24);
			this->label12->TabIndex = 66;
			this->label12->Text = L"Heading";
			// 
			// S_Heading_Data
			// 
			this->S_Heading_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S_Heading_Data->Location = System::Drawing::Point(1571, 430);
			this->S_Heading_Data->Name = L"S_Heading_Data";
			this->S_Heading_Data->Size = System::Drawing::Size(175, 29);
			this->S_Heading_Data->TabIndex = 67;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(1483, 433);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(82, 24);
			this->label13->TabIndex = 68;
			this->label13->Text = L"Heading";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(352, 157);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(63, 22);
			this->label19->TabIndex = 69;
			this->label19->Text = L"Milli-G";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(352, 206);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(115, 22);
			this->label20->TabIndex = 70;
			this->label20->Text = L"Feet per second";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(352, 249);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 22);
			this->label21->TabIndex = 71;
			this->label21->Text = L"Feet";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(352, 295);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(64, 22);
			this->label22->TabIndex = 72;
			this->label22->Text = L"Degrees";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(352, 341);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(64, 22);
			this->label23->TabIndex = 73;
			this->label23->Text = L"Degrees";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(352, 385);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(41, 22);
			this->label24->TabIndex = 74;
			this->label24->Text = L"Feet";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(1752, 157);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(63, 22);
			this->label25->TabIndex = 75;
			this->label25->Text = L"Milli-G";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(1752, 204);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(115, 22);
			this->label26->TabIndex = 76;
			this->label26->Text = L"Feet per second";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(1752, 249);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 22);
			this->label27->TabIndex = 77;
			this->label27->Text = L"Feet";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(1752, 293);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(64, 22);
			this->label28->TabIndex = 78;
			this->label28->Text = L"Degrees";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(1752, 341);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(64, 22);
			this->label29->TabIndex = 79;
			this->label29->Text = L"Degrees";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(1752, 392);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(41, 22);
			this->label30->TabIndex = 80;
			this->label30->Text = L"Feet";
			// 
			// S_Distance_Data
			// 
			this->S_Distance_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S_Distance_Data->Location = System::Drawing::Point(1571, 385);
			this->S_Distance_Data->Name = L"S_Distance_Data";
			this->S_Distance_Data->Size = System::Drawing::Size(175, 29);
			this->S_Distance_Data->TabIndex = 81;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(1752, 433);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(64, 22);
			this->label31->TabIndex = 82;
			this->label31->Text = L"Degrees";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(1483, 388);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(82, 24);
			this->label32->TabIndex = 83;
			this->label32->Text = L"Distance";
			// 
			// B_Distance_Data
			// 
			this->B_Distance_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Distance_Data->Location = System::Drawing::Point(171, 383);
			this->B_Distance_Data->Name = L"B_Distance_Data";
			this->B_Distance_Data->Size = System::Drawing::Size(175, 29);
			this->B_Distance_Data->TabIndex = 84;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(83, 383);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(82, 24);
			this->label33->TabIndex = 85;
			this->label33->Text = L"Distance";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(352, 431);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(64, 22);
			this->label34->TabIndex = 86;
			this->label34->Text = L"Degrees";
			// 
			// B_Emergency_Electronics
			// 
			this->B_Emergency_Electronics->Location = System::Drawing::Point(12, 973);
			this->B_Emergency_Electronics->Name = L"B_Emergency_Electronics";
			this->B_Emergency_Electronics->Size = System::Drawing::Size(140, 37);
			this->B_Emergency_Electronics->TabIndex = 87;
			this->B_Emergency_Electronics->Text = L"Emergency Booster Electronics Shut Off";
			this->B_Emergency_Electronics->UseVisualStyleBackColor = true;
			this->B_Emergency_Electronics->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// S_Emergency_Electronics
			// 
			this->S_Emergency_Electronics->Location = System::Drawing::Point(1752, 973);
			this->S_Emergency_Electronics->Name = L"S_Emergency_Electronics";
			this->S_Emergency_Electronics->Size = System::Drawing::Size(140, 37);
			this->S_Emergency_Electronics->TabIndex = 88;
			this->S_Emergency_Electronics->Text = L"Emergency Sustainer Electronics Shut Off";
			this->S_Emergency_Electronics->UseVisualStyleBackColor = true;
			this->S_Emergency_Electronics->Click += gcnew System::EventHandler(this, &MyForm::S_Emergency_Electronics_Click);
			// 
			// B_Temperature_Data
			// 
			this->B_Temperature_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Temperature_Data->Location = System::Drawing::Point(171, 474);
			this->B_Temperature_Data->Name = L"B_Temperature_Data";
			this->B_Temperature_Data->Size = System::Drawing::Size(175, 29);
			this->B_Temperature_Data->TabIndex = 89;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(46, 474);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(119, 24);
			this->label35->TabIndex = 90;
			this->label35->Text = L"Temperature";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(352, 476);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(85, 22);
			this->label36->TabIndex = 91;
			this->label36->Text = L"Fahrenheit";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(1446, 477);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(119, 24);
			this->label37->TabIndex = 92;
			this->label37->Text = L"Temperature";
			// 
			// S_Temperature_Data
			// 
			this->S_Temperature_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S_Temperature_Data->Location = System::Drawing::Point(1571, 474);
			this->S_Temperature_Data->Name = L"S_Temperature_Data";
			this->S_Temperature_Data->Size = System::Drawing::Size(175, 29);
			this->S_Temperature_Data->TabIndex = 93;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(1752, 476);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(85, 22);
			this->label38->TabIndex = 94;
			this->label38->Text = L"Fahrenheit";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->S_Temperature_Data);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->B_Temperature_Data);
			this->Controls->Add(this->S_Emergency_Electronics);
			this->Controls->Add(this->B_Emergency_Electronics);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->B_Distance_Data);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->S_Distance_Data);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->S_Heading_Data);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->B_Heading_Data);
			this->Controls->Add(this->Sustainer_Emergency);
			this->Controls->Add(this->Booster_Emergency);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->B_DL_Status);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->B_Accel_Data);
			this->Controls->Add(this->B_ClimbRate_Data);
			this->Controls->Add(this->B_Alt_Data);
			this->Controls->Add(this->B_GPSLat_Data);
			this->Controls->Add(this->B_GPSLong_Data);
			this->Controls->Add(this->B_Time_Data);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->S_Accel_Data);
			this->Controls->Add(this->S_ClimbRate_Data);
			this->Controls->Add(this->S_Alt_Data);
			this->Controls->Add(this->S_GPSLat_Data);
			this->Controls->Add(this->S_GPSLong_Data);
			this->Controls->Add(this->S_Time_Data);
			this->Controls->Add(this->TB_FileName);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->cmd2);
			this->Controls->Add(this->S_DL_Status);
			this->Controls->Add(this->cmd1);
			this->Controls->Add(this->Data4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"Phoenix Ground Station";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

			 

		 private: void findPorts(void)
		 {
					  array<Object^>^ objectArray = SerialPort::GetPortNames();

					  this->comboBox1->Items->AddRange(objectArray);
					  this->SerialPort->PortName = L"COM3";
		 }

private: int Data(char func[], int i, char *var)
{
			int j = 0;

			while (func[i] != ',' && func[i] != '\n' && func[i] != '\r' && func[i] != '*' && j < 200)
			{
				*(var + j) = func[i]; // var[j] = func[i];
				i++;
				j++;
			}

			i++;
			return i;

}


private: int CheckSum(char *nmea_line, char CS_hex[3])
	 {
					//Turns checksum hex into a dec
					int j = 0;
					int check_sum_val[2];
					while (j < 2)
					{
						int check = CS_hex[j];
						if (check > 47 && check < 58) //if 0 - 9
						{
							check_sum_val[j] = check - 48;
						}
						else if (check > 64) //if A - F
						{
							check_sum_val[j] = check - 55;
						}
						j++;
					}


					int CHECKSUM = (16 * check_sum_val[0]) + check_sum_val[1];

					//Calculates GPS String Checksum value
					int chcount = 1, len_nmea;
					int xor = 0;
					len_nmea = strlen(nmea_line);
					while ((chcount < len_nmea) && (nmea_line[chcount] != '*'))
					{
						xor ^= (unsigned short int)(nmea_line[chcount++]);
					}

					//checks to make sure checksum is correct
					if (nmea_line[chcount] != '*') return 0;
					if (CHECKSUM == xor) return 1;
					else return 0;
	 }
private: void MarshalString(String ^ s, string& os) {
			 using namespace Runtime::InteropServices;
			 const char* chars =
				 (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			 os = chars;
			 Marshal::FreeHGlobal(IntPtr((void*)chars));
		 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

				 this->SerialPort->PortName = this->comboBox1->Text;
				 if (this->comboBox1->Text == String::Empty)
					 this->textBox1->Text = "No Port Selected";
				 else
				 {
					 try{
						 if (this->SerialPort->IsOpen)
						 {
							 this->SerialPort->PortName = this->comboBox1->Text;

							 this->SerialPort->Open();
						 }
						 else
							 this->SerialPort->Open();
						 this->textBox1->Text = "Port is Open";
					 }
					 catch (UnauthorizedAccessException^)
					 {
						 this->textBox1->Text = "Denied";
					 }
				 }
	}
			
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->SerialPort->Close();
			 this->textBox1->Text = "Port is Closed";
			 //this->button7->Enabled= true;

			 //this->button8->Enabled = true;


}
private: System::Void SerialPort_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {

			 char RD[100] = {};
			 char RAW[200] = {};
			 int i = 0;
			 do{
				 RD[i] = SerialPort->ReadChar();
				 i++;

			 } while (RD[i - 1] != '\n');
		

			 if (RD[0] == '#')
			 {
				 if (RD[1] == 'R' && RD[2] == 'P' && RD[3] == 'H' && RD[4] == 'B' && RD[5] == 'O' && RD[6] == 'O')
				 {
					 int i = 8;
					 char B_Txt[50] = {};																
					 i = Data(RD, i, B_Txt);
					 this->B_DL_Status->AppendText(gcnew String(B_Txt));
					 char space[] = "\n";
					 this->B_DL_Status->AppendText(gcnew String(space));
				 }
				 else if (RD[1] == 'R' && RD[2] == 'P' && RD[3] == 'H' && RD[4] == 'S' && RD[5] == 'U' && RD[6] == 'S')
				 {
					 int i = 8;
					 char S_Txt[50] = {};																
					 i = Data(RD, i, S_Txt);
					 this->S_DL_Status->AppendText(gcnew String(S_Txt));
					 char space[] = "\n";
					 this->S_DL_Status->AppendText(gcnew String(space));
				 }
			 }
			 
			 else if (RD[0] == '$')
			 {
				 //**********************************************************************************************
				 //		Booster Stage 
				 //**********************************************************************************************
				 if (RD[1] == 'R' && RD[2] == 'P' && RD[3] == 'H' && RD[4] == 'B' && RD[5] == 'O' && RD[6] == 'O')
				 {
					int i = 8;
					
					char B_GPS_Lat[20] = {};
					char B_GPS_Long[20] = {};
					char B_Alt[20] = {};
					char B_Time[20] = {};
					char B_Accel[20] = {};
					char B_ClimbRate[20] = {};
					char B_CkSum[10] = {};
					char B_Head[20] = {};
					char B_Dist[20] = {};
					char B_Temp[20] = {};

					//**********************************************************************************************
					//		Booster Time Component
					//**********************************************************************************************
					i = Data(RD, i, B_Time);
					//**********************************************************************************************
					//		Booster Accel Component
					//**********************************************************************************************
					i = Data(RD, i, B_Accel);
					//**********************************************************************************************
					//		Booster ClimbRate Component
					//**********************************************************************************************
					i = Data(RD, i, B_ClimbRate);
					//********************************************************************************************
					//		Booster Altitude Component
					//********************************************************************************************
					i = Data(RD, i, B_Alt);
					//**********************************************************************************************
					//		Booster GPS Lat Component
					//**********************************************************************************************
					i = Data(RD, i, B_GPS_Lat);
					float Temp_GPS_Lat = (float)atoi(B_GPS_Lat) / 1000000.0;
					sprintf(B_GPS_Lat, "%.6f", Temp_GPS_Lat);
					//*********************************************************************************************
					//		Booster GPS Long Component
					//*********************************************************************************************
					i = Data(RD, i, B_GPS_Long);
					float Temp_GPS_Long = (float)atoi(B_GPS_Long) / 1000000.0;
					sprintf(B_GPS_Long, "%.6f", Temp_GPS_Long);
					//*********************************************************************************************
					//		Booster Temperature Component
					//*********************************************************************************************
					i = Data(RD, i, B_Temp);


					i = Data(RD, i, B_CkSum);


					if (CheckSum(RD, B_CkSum))
					{
						//Outputs data to screen
						B_Time_Data->Text = gcnew String(B_Time);
						B_Accel_Data->Text = gcnew String(B_Accel);
						B_ClimbRate_Data->Text = gcnew String(B_ClimbRate);
						B_Alt_Data->Text = gcnew String(B_Alt);
						B_GPSLat_Data->Text = gcnew String(B_GPS_Lat);
						B_GPSLong_Data->Text = gcnew String(B_GPS_Long);
						B_Temperature_Data->Text = gcnew String(B_Temp);


						if (Base_GPS_Latitude == 0.0 && Base_GPS_Longitude == 0.0 && GPS_LOCK_Status == 0)
						{
							Base_GPS_Latitude = atof(B_GPS_Lat);
							Base_GPS_Longitude = atof(B_GPS_Long);
							GPS_LOCK_Status = 1;
						}

						float pi = 3.14159;
						float Rad_Earth = 20925524.9; //in ft

						float dx_lat = Rad_Earth*((atof(B_GPS_Lat) - Base_GPS_Latitude)*(pi / 180));
						if (dx_lat == 0)
							dx_lat = dx_lat + 0.00001;

						float dx_lon = Rad_Earth*cos(atof(B_GPS_Lat)*pi / 180) * ((atof(B_GPS_Long) - Base_GPS_Longitude)*(pi / 180));
						if (dx_lon == 0)
							dx_lon = dx_lon + 0.00001;

						float B_d = sqrt((dx_lat * dx_lat) + (dx_lon * dx_lon));
						sprintf(B_Dist, "%.2f", B_d);
						B_Distance_Data->Text = gcnew String(B_Dist);


						float B_H_Angle = atan2(dx_lon, dx_lat) * (180 / pi); // heading angle
						if (B_H_Angle < 0)
							B_H_Angle += 360;
						sprintf(B_Head, "%.2f", B_H_Angle);
						B_Heading_Data->Text = gcnew String(B_Head);


						i = 8;
						int j = 0;
						do{
							RAW[j] = RD[i];
							i++;
							j++;
						} while (RD[i] != '*');
						RAW[j] = ',';
						j++;
						int k = 0;
						do{
							RAW[j] = B_Dist[k];
							j++;
							k++;
						} while (B_Dist[k] != '\0');
						k = 0;
						RAW[j] = ',';
						j++;
						do{
							RAW[j] = B_Head[k];
							j++;
							k++;
						} while (B_Head[k] != '\0');
						RAW[j] = '\n';

						//Logs data
						if (File_Status == FILE_OPEN){


							char file[100];
							int pos = 0;
							while (*(B_FILENAME + pos) != 0){
								file[pos] = *(B_FILENAME + pos);
								pos++;
							}

							ofstream Sample; //Creates output file

							Sample.open(B_FILENAME, ofstream::out | ofstream::app); // .csv is the separate comma box in excel

							Sample.write(RAW, strlen(RAW)); // make a separate string instead of creating one in parenthesis

							Sample.close();
						}

					}
				 }

				 //**********************************************************************************************
				 //		Sustainer Stage
				 //**********************************************************************************************
				 else if (RD[1] == 'R' && RD[2] == 'P' && RD[3] == 'H' && RD[4] == 'S' && RD[5] == 'U' && RD[6] == 'S')
				 {
					 int i = 8;

					 char S_GPS_Lat[20] = {};
					 char S_GPS_Long[20] = {};
					 char S_Alt[20] = {};
					 char S_Time[20] = {};
					 char S_Accel[20] = {};
					 char S_ClimbRate[20] = {};
					 char S_CkSum[10] = {};
					 char S_Head[20] = {};
					 char S_Dist[20] = {};
					 char S_Temp[20] = {};

					 //**********************************************************************************************
					 //		Sustainer Time Component
					 //**********************************************************************************************
					 i = Data(RD, i, S_Time);
					 //**********************************************************************************************
					 //		Sustainer Accel Component
					 //**********************************************************************************************
					 i = Data(RD, i, S_Accel);
					 //**********************************************************************************************
					 //		Sustainer ClimbRate Component
					 //**********************************************************************************************
					 i = Data(RD, i, S_ClimbRate);
					 //********************************************************************************************
					 //		Sustainer Altitude Component
					 //********************************************************************************************
					 i = Data(RD, i, S_Alt);
					 //**********************************************************************************************
					 //		Sustainer GPS Lat Component
					 //**********************************************************************************************
					 i = Data(RD, i, S_GPS_Lat);
					 float Temp_GPS_Lat = (float)atoi(S_GPS_Lat)/1000000.0;
					 sprintf(S_GPS_Lat, "%.6f", Temp_GPS_Lat);
					 //*********************************************************************************************
					 //		Sustainer GPS Long Component
					 //*********************************************************************************************
					 i = Data(RD, i, S_GPS_Long);
					 float Temp_GPS_Long = (float)atoi(S_GPS_Long) / 1000000.0;
					 sprintf(S_GPS_Long, "%.6f", Temp_GPS_Long);
					 //*********************************************************************************************
					 //		Sustainer Temperature Component
					 //*********************************************************************************************
					 i = Data(RD, i, S_Temp);


					 i = Data(RD, i, S_CkSum);
					 //Check = CheckSum(RD, S_CkSum);
					 if (CheckSum(RD, S_CkSum))
					 {
						 //Outputs data to screen
						 S_Time_Data->Text = gcnew String(S_Time);
						 S_Accel_Data->Text = gcnew String(S_Accel);
						 S_ClimbRate_Data->Text = gcnew String(S_ClimbRate);
						 S_Alt_Data->Text = gcnew String(S_Alt);
						 S_GPSLat_Data->Text = gcnew String(S_GPS_Lat);
						 S_GPSLong_Data->Text = gcnew String(S_GPS_Long);
						 S_Temperature_Data->Text = gcnew String(S_Temp);

						 if (Base_GPS_Latitude == 0.0 && Base_GPS_Longitude == 0.0)
						 {
							 Base_GPS_Latitude = atof(S_GPS_Lat);
							 Base_GPS_Longitude = atof(S_GPS_Long);
							 //GPS_LOCK_Status = 1; //probably don't need
						 }

						 
						 float pi = 3.14159;
						 float Rad_Earth = 20925524.9; //in ft

						 float dx_lat = Rad_Earth*((atof(S_GPS_Lat) - Base_GPS_Latitude)*(pi / 180));
						 if (dx_lat == 0)
							 dx_lat = dx_lat + 0.00001;

						 float dx_lon = Rad_Earth*cos(atof(S_GPS_Lat)*pi / 180) * ((atof(S_GPS_Long) - Base_GPS_Longitude)*(pi / 180));
						 if (dx_lon == 0)
							 dx_lon = dx_lon + 0.00001;

						 float S_d = sqrt((dx_lat * dx_lat) + (dx_lon * dx_lon));
						 sprintf(S_Dist, "%.2f", S_d); // apparently this method is slow; try to find a different way
						 S_Distance_Data->Text = gcnew String(S_Dist);


						 float S_H_Angle = atan2(dx_lon, dx_lat) * (180 / pi); // heading angle
						 if (S_H_Angle < 0)
							 S_H_Angle += 360;
						 sprintf(S_Head, "%.2f", S_H_Angle); // apparently this method is slow; try to find a different way
						 S_Heading_Data->Text = gcnew String(S_Head);


						 i = 8;
						 int j = 0;
						 do{
							 RAW[j] = RD[i];
							 i++;
							 j++;
						 } while (RD[i] != '*');
						 RAW[j] = ',';
						 j++;
						 int k = 0;
						 do{
							 RAW[j] = S_Dist[k];
							 j++;
							 k++;
						 } while (S_Dist[k] != '\0');
						 k = 0;
						 RAW[j] = ',';
						 j++;
						 do{
							 RAW[j] = S_Head[k];
							 j++;
							 k++;
						 } while (S_Head[k] != '\0');
						 RAW[j] = '\n';


						 //Logs data
						 if (File_Status == FILE_OPEN){ //need to move in booster


							 char file[100];
							 int pos = 0;
							 while (*(S_FILENAME + pos) != 0){
								 file[pos] = *(S_FILENAME + pos);
								 pos++;
							 }

							 ofstream Sample; //Creates output file

							 Sample.open(S_FILENAME, ofstream::out | ofstream::app); // .csv is the separate comma box in excel

							 Sample.write(RAW, strlen(RAW)); // make a separate string instead of creating one in parenthesis

							 Sample.close();
						 }
					 }
				 }
			 }
			 
}

private: System::Void cmd1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 char header1[] = "Time, Acceleration, Climb Rate, Altitude, GPS Latitude, GPS Longitude, Temperature, Distance, Heading \n"; // making the separate string
			 char header2[] = ", mg, feet/second, feet, degrees, degrees, Fahrenheit, feet, degrees \n";
				
			 //retrieve filename and converts to char*
			 string a;
			 String ^ NFile = gcnew String(TB_FileName->Text->ToString());
			 MarshalString(NFile, a);
			 const char *FILEptr = a.c_str();
			 static char Booster[100];
			 static char Sustainer[100];
			 
			 char FileDirectory[] = "C:\\Users\\brian_000\\Desktop\\CPP NSL Ground Station\\Flight Data\\";
			 
			 int i = 0;
			 while (FileDirectory[i] != '\0'){
				 Booster[i] = FileDirectory[i];
				 Sustainer[i] = FileDirectory[i];
				 i++;
			 }
			 int j = 0;
			 while ( i < 100 && *(FILEptr + j) != 0 ){
				 Booster[i] = *(FILEptr + j);
				 Sustainer[i] = *(FILEptr + j);
				 i++;
				 j++;
			 }
			 Booster[i] = '_';
			 Booster[i + 1] = 'B';
			 Booster[i + 2] = '.';
			 Booster[i + 3] = 'c';
			 Booster[i + 4] = 's';
			 Booster[i + 5] = 'v';
			 Booster[i + 6] = '\0';

			 Sustainer[i] = '_';
			 Sustainer[i + 1] = 'S';
			 Sustainer[i + 2] = '.';
			 Sustainer[i + 3] = 'c';
			 Sustainer[i + 4] = 's';
			 Sustainer[i + 5] = 'v';
			 Sustainer[i + 6] = '\0';
			 
			 //Points to file name location
			 B_FILENAME = &Booster[0];
			 S_FILENAME = &Sustainer[0];

				 ofstream Booster_file; //Creates output file

				 Booster_file.open(B_FILENAME, ofstream::out | ofstream::app); // .csv is the separate comma box in excel

				 Booster_file.write(header1, strlen(header1)); // make a separate string instead of creating one in parenthesis
				 Booster_file.write(header2, strlen(header2));

				 Booster_file.close();
				 ofstream Sustainer_file; //Creates output file

				 Sustainer_file.open(S_FILENAME, ofstream::out | ofstream::app); // .csv is the separate comma box in excel

				 Sustainer_file.write(header1, strlen(header1)); // make a separate string instead of creating one in parenthesis
				 Sustainer_file.write(header2, strlen(header2));

				 Sustainer_file.close();
				 
				 textBox3->Text = "Files are open";
				 File_Status = FILE_OPEN;
				
}
private: System::Void CommentBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			
}
private: System::Void cmd2_Click(System::Object^  sender, System::EventArgs^  e) {
			 File_Status = FILE_CLOSED;
			 textBox3->Text = "Files are closed";
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Booster_Emergency_Click(System::Object^  sender, System::EventArgs^  e) {
			 //input call sign to deploy booster main

			 this->SerialPort->Write("@RPHBOO,CMD,deploymain\n");

}
private: System::Void Sustainer_Emergency_Click(System::Object^  sender, System::EventArgs^  e) {
			 //input call sign to deploy sustainer main
			 this->SerialPort->Write("@RPHSUS,CMD,deploymain\n");
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->SerialPort->Write("@RPHBOO,CMD,elecoff\n");
}
private: System::Void S_Emergency_Electronics_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->SerialPort->Write("@RPHSUS,CMD,elecoff\n");
}
};
}
