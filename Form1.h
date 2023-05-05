#pragma once

#include "CBusLin.h"

namespace CLR_SimulateurVoiture {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace LBSoft::IndustrialCtrls::Base;
	using namespace LBSoft::IndustrialCtrls::Buttons;
	using namespace LBSoft::IndustrialCtrls::Leds;
	using namespace LBSoft::IndustrialCtrls::Knobs;
	using namespace LBSoft::IndustrialCtrls::Meters;
	using namespace LBSoft::IndustrialCtrls::Utils;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: LBSoft::IndustrialCtrls::Meters::LBAnalogMeter^ CompteurVitesse;
	protected:

	private: LBSoft::IndustrialCtrls::Meters::LBDigitalMeter^ digit_Fenetre;
	protected:

	private: LBSoft::IndustrialCtrls::Meters::LBDigitalMeter^ digit_Temperature;
	private: LBSoft::IndustrialCtrls::Leds::LBLed^ ledFeuxPositions;
	private: LBSoft::IndustrialCtrls::Leds::LBLed^ ledFeuxRoutes;





	private: LBSoft::IndustrialCtrls::Leds::LBLed^ ledFeuxCroisements;

	private: LBSoft::IndustrialCtrls::Leds::LBLed^ ledVitreDescendre;



	private: LBSoft::IndustrialCtrls::Leds::LBLed^ ledVitreMonter;


	private: LBSoft::IndustrialCtrls::Leds::LBLed^ ledChauffage;

	private: LBSoft::IndustrialCtrls::Leds::LBLed^ ledClim;
	private: LBSoft::IndustrialCtrls::Leds::LBLed^ ledActionsFreins;


	private: LBSoft::IndustrialCtrls::Leds::LBLed^ ledActionsAccelerateur;
	private: System::Windows::Forms::TrackBar^ barVitesse;


	private: System::Windows::Forms::TrackBar^ barTemperature;

	private: System::Windows::Forms::TrackBar^ barFenetre;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ txtNbVitesse;
	private: System::Windows::Forms::Label^ txtNbConsigneTemperature;



	private: System::Windows::Forms::Label^ txtNbFenetre;
	private: System::Windows::Forms::RadioButton^ btnPhareRoutes;



	private: System::Windows::Forms::RadioButton^ btnPhareCroisements;


	private: System::Windows::Forms::RadioButton^ btnPharePositions;

	private: System::Windows::Forms::RadioButton^ btnPhareEteindre;
	private: System::Windows::Forms::RadioButton^ btnVitresDescendre;



	private: System::Windows::Forms::RadioButton^ btnVitresEteindre;
	private: System::Windows::Forms::RadioButton^ btnVitresMonter;
	private: System::Windows::Forms::Label^ txtValeurBus;



	private: System::Windows::Forms::RadioButton^ btnAccRelacher;
	private: System::Windows::Forms::RadioButton^ btnAccAppuyer;


	private: System::Windows::Forms::RadioButton^ btnFreinRelacher;
	private: System::Windows::Forms::RadioButton^ btnFreinAppuyer;


	private: System::Windows::Forms::RadioButton^ btnChauffageEteindre;
	private: System::Windows::Forms::RadioButton^ btnChauffageAllumer;


	private: System::Windows::Forms::RadioButton^ btnClimEteindre;
	private: System::Windows::Forms::RadioButton^ btnClimAllumer;
private: System::Windows::Forms::Timer^ busTimer;
private: System::Windows::Forms::Timer^ actionsTimer;


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
			System::Windows::Forms::GroupBox^ groupBox1;
			System::Windows::Forms::GroupBox^ groupBox2;
			System::Windows::Forms::GroupBox^ groupBox3;
			System::Windows::Forms::GroupBox^ groupBox4;
			System::Windows::Forms::GroupBox^ groupBox5;
			System::Windows::Forms::GroupBox^ groupBox11;
			System::Windows::Forms::GroupBox^ groupBox10;
			System::Windows::Forms::GroupBox^ groupBox9;
			System::Windows::Forms::GroupBox^ groupBox8;
			System::Windows::Forms::GroupBox^ groupBox7;
			System::Windows::Forms::GroupBox^ groupBox6;
			System::Windows::Forms::PictureBox^ pictureBox1;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			System::Windows::Forms::PictureBox^ pictureBox2;
			this->ledFeuxRoutes = (gcnew LBSoft::IndustrialCtrls::Leds::LBLed());
			this->ledFeuxCroisements = (gcnew LBSoft::IndustrialCtrls::Leds::LBLed());
			this->ledFeuxPositions = (gcnew LBSoft::IndustrialCtrls::Leds::LBLed());
			this->ledVitreDescendre = (gcnew LBSoft::IndustrialCtrls::Leds::LBLed());
			this->ledVitreMonter = (gcnew LBSoft::IndustrialCtrls::Leds::LBLed());
			this->ledChauffage = (gcnew LBSoft::IndustrialCtrls::Leds::LBLed());
			this->ledClim = (gcnew LBSoft::IndustrialCtrls::Leds::LBLed());
			this->ledActionsFreins = (gcnew LBSoft::IndustrialCtrls::Leds::LBLed());
			this->ledActionsAccelerateur = (gcnew LBSoft::IndustrialCtrls::Leds::LBLed());
			this->txtValeurBus = (gcnew System::Windows::Forms::Label());
			this->btnAccRelacher = (gcnew System::Windows::Forms::RadioButton());
			this->btnAccAppuyer = (gcnew System::Windows::Forms::RadioButton());
			this->btnFreinRelacher = (gcnew System::Windows::Forms::RadioButton());
			this->btnFreinAppuyer = (gcnew System::Windows::Forms::RadioButton());
			this->btnChauffageEteindre = (gcnew System::Windows::Forms::RadioButton());
			this->btnChauffageAllumer = (gcnew System::Windows::Forms::RadioButton());
			this->btnClimEteindre = (gcnew System::Windows::Forms::RadioButton());
			this->btnClimAllumer = (gcnew System::Windows::Forms::RadioButton());
			this->btnVitresDescendre = (gcnew System::Windows::Forms::RadioButton());
			this->btnVitresEteindre = (gcnew System::Windows::Forms::RadioButton());
			this->btnVitresMonter = (gcnew System::Windows::Forms::RadioButton());
			this->btnPhareRoutes = (gcnew System::Windows::Forms::RadioButton());
			this->btnPhareCroisements = (gcnew System::Windows::Forms::RadioButton());
			this->btnPharePositions = (gcnew System::Windows::Forms::RadioButton());
			this->btnPhareEteindre = (gcnew System::Windows::Forms::RadioButton());
			this->txtNbVitesse = (gcnew System::Windows::Forms::Label());
			this->txtNbConsigneTemperature = (gcnew System::Windows::Forms::Label());
			this->txtNbFenetre = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->barVitesse = (gcnew System::Windows::Forms::TrackBar());
			this->barTemperature = (gcnew System::Windows::Forms::TrackBar());
			this->barFenetre = (gcnew System::Windows::Forms::TrackBar());
			this->CompteurVitesse = (gcnew LBSoft::IndustrialCtrls::Meters::LBAnalogMeter());
			this->digit_Fenetre = (gcnew LBSoft::IndustrialCtrls::Meters::LBDigitalMeter());
			this->digit_Temperature = (gcnew LBSoft::IndustrialCtrls::Meters::LBDigitalMeter());
			this->busTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->actionsTimer = (gcnew System::Windows::Forms::Timer(this->components));
			groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			groupBox1->SuspendLayout();
			groupBox2->SuspendLayout();
			groupBox3->SuspendLayout();
			groupBox4->SuspendLayout();
			groupBox5->SuspendLayout();
			groupBox11->SuspendLayout();
			groupBox10->SuspendLayout();
			groupBox9->SuspendLayout();
			groupBox8->SuspendLayout();
			groupBox7->SuspendLayout();
			groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barVitesse))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barTemperature))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barFenetre))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			groupBox1->BackColor = System::Drawing::Color::Transparent;
			groupBox1->Controls->Add(this->ledFeuxRoutes);
			groupBox1->Controls->Add(this->ledFeuxCroisements);
			groupBox1->Controls->Add(this->ledFeuxPositions);
			groupBox1->Cursor = System::Windows::Forms::Cursors::Default;
			groupBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			groupBox1->Location = System::Drawing::Point(442, 176);
			groupBox1->Name = L"groupBox1";
			groupBox1->Size = System::Drawing::Size(278, 111);
			groupBox1->TabIndex = 3;
			groupBox1->TabStop = false;
			groupBox1->Text = L"Feux";
			// 
			// ledFeuxRoutes
			// 
			this->ledFeuxRoutes->BackColor = System::Drawing::Color::Transparent;
			this->ledFeuxRoutes->BlinkInterval = 500;
			this->ledFeuxRoutes->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ledFeuxRoutes->Label = L"Routes";
			this->ledFeuxRoutes->LabelPosition = LBSoft::IndustrialCtrls::Leds::LBLed::LedLabelPosition::Top;
			this->ledFeuxRoutes->LedColor = System::Drawing::Color::Red;
			this->ledFeuxRoutes->LedSize = System::Drawing::SizeF(35, 35);
			this->ledFeuxRoutes->Location = System::Drawing::Point(199, 23);
			this->ledFeuxRoutes->Name = L"ledFeuxRoutes";
			this->ledFeuxRoutes->Renderer = nullptr;
			this->ledFeuxRoutes->Size = System::Drawing::Size(73, 72);
			this->ledFeuxRoutes->State = LBSoft::IndustrialCtrls::Leds::LBLed::LedState::Off;
			this->ledFeuxRoutes->Style = LBSoft::IndustrialCtrls::Leds::LBLed::LedStyle::Circular;
			this->ledFeuxRoutes->TabIndex = 2;
			// 
			// ledFeuxCroisements
			// 
			this->ledFeuxCroisements->BackColor = System::Drawing::Color::Transparent;
			this->ledFeuxCroisements->BlinkInterval = 500;
			this->ledFeuxCroisements->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ledFeuxCroisements->Label = L"Croisements";
			this->ledFeuxCroisements->LabelPosition = LBSoft::IndustrialCtrls::Leds::LBLed::LedLabelPosition::Top;
			this->ledFeuxCroisements->LedColor = System::Drawing::Color::Red;
			this->ledFeuxCroisements->LedSize = System::Drawing::SizeF(35, 35);
			this->ledFeuxCroisements->Location = System::Drawing::Point(94, 23);
			this->ledFeuxCroisements->Name = L"ledFeuxCroisements";
			this->ledFeuxCroisements->Renderer = nullptr;
			this->ledFeuxCroisements->Size = System::Drawing::Size(99, 72);
			this->ledFeuxCroisements->State = LBSoft::IndustrialCtrls::Leds::LBLed::LedState::Off;
			this->ledFeuxCroisements->Style = LBSoft::IndustrialCtrls::Leds::LBLed::LedStyle::Circular;
			this->ledFeuxCroisements->TabIndex = 1;
			// 
			// ledFeuxPositions
			// 
			this->ledFeuxPositions->BackColor = System::Drawing::Color::Transparent;
			this->ledFeuxPositions->BlinkInterval = 500;
			this->ledFeuxPositions->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ledFeuxPositions->Label = L"Positions";
			this->ledFeuxPositions->LabelPosition = LBSoft::IndustrialCtrls::Leds::LBLed::LedLabelPosition::Top;
			this->ledFeuxPositions->LedColor = System::Drawing::Color::Red;
			this->ledFeuxPositions->LedSize = System::Drawing::SizeF(35, 35);
			this->ledFeuxPositions->Location = System::Drawing::Point(15, 23);
			this->ledFeuxPositions->Name = L"ledFeuxPositions";
			this->ledFeuxPositions->Renderer = nullptr;
			this->ledFeuxPositions->Size = System::Drawing::Size(73, 72);
			this->ledFeuxPositions->State = LBSoft::IndustrialCtrls::Leds::LBLed::LedState::Off;
			this->ledFeuxPositions->Style = LBSoft::IndustrialCtrls::Leds::LBLed::LedStyle::Circular;
			this->ledFeuxPositions->TabIndex = 0;
			// 
			// groupBox2
			// 
			groupBox2->BackColor = System::Drawing::Color::Transparent;
			groupBox2->Controls->Add(this->ledVitreDescendre);
			groupBox2->Controls->Add(this->ledVitreMonter);
			groupBox2->Cursor = System::Windows::Forms::Cursors::Default;
			groupBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			groupBox2->Location = System::Drawing::Point(359, 305);
			groupBox2->Name = L"groupBox2";
			groupBox2->Size = System::Drawing::Size(197, 111);
			groupBox2->TabIndex = 4;
			groupBox2->TabStop = false;
			groupBox2->Text = L"Vitres";
			// 
			// ledVitreDescendre
			// 
			this->ledVitreDescendre->BackColor = System::Drawing::Color::Transparent;
			this->ledVitreDescendre->BlinkInterval = 500;
			this->ledVitreDescendre->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ledVitreDescendre->Label = L"Descendent";
			this->ledVitreDescendre->LabelPosition = LBSoft::IndustrialCtrls::Leds::LBLed::LedLabelPosition::Top;
			this->ledVitreDescendre->LedColor = System::Drawing::Color::Red;
			this->ledVitreDescendre->LedSize = System::Drawing::SizeF(35, 35);
			this->ledVitreDescendre->Location = System::Drawing::Point(94, 23);
			this->ledVitreDescendre->Name = L"ledVitreDescendre";
			this->ledVitreDescendre->Renderer = nullptr;
			this->ledVitreDescendre->Size = System::Drawing::Size(99, 72);
			this->ledVitreDescendre->State = LBSoft::IndustrialCtrls::Leds::LBLed::LedState::Off;
			this->ledVitreDescendre->Style = LBSoft::IndustrialCtrls::Leds::LBLed::LedStyle::Circular;
			this->ledVitreDescendre->TabIndex = 1;
			// 
			// ledVitreMonter
			// 
			this->ledVitreMonter->BackColor = System::Drawing::Color::Transparent;
			this->ledVitreMonter->BlinkInterval = 500;
			this->ledVitreMonter->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ledVitreMonter->Label = L"Montent";
			this->ledVitreMonter->LabelPosition = LBSoft::IndustrialCtrls::Leds::LBLed::LedLabelPosition::Top;
			this->ledVitreMonter->LedColor = System::Drawing::Color::Red;
			this->ledVitreMonter->LedSize = System::Drawing::SizeF(35, 35);
			this->ledVitreMonter->Location = System::Drawing::Point(15, 23);
			this->ledVitreMonter->Name = L"ledVitreMonter";
			this->ledVitreMonter->Renderer = nullptr;
			this->ledVitreMonter->Size = System::Drawing::Size(73, 72);
			this->ledVitreMonter->State = LBSoft::IndustrialCtrls::Leds::LBLed::LedState::Off;
			this->ledVitreMonter->Style = LBSoft::IndustrialCtrls::Leds::LBLed::LedStyle::Circular;
			this->ledVitreMonter->TabIndex = 0;
			// 
			// groupBox3
			// 
			groupBox3->BackColor = System::Drawing::Color::Transparent;
			groupBox3->Controls->Add(this->ledChauffage);
			groupBox3->Controls->Add(this->ledClim);
			groupBox3->Cursor = System::Windows::Forms::Cursors::Default;
			groupBox3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			groupBox3->Location = System::Drawing::Point(239, 176);
			groupBox3->Name = L"groupBox3";
			groupBox3->Size = System::Drawing::Size(197, 111);
			groupBox3->TabIndex = 5;
			groupBox3->TabStop = false;
			groupBox3->Text = L"Gestion Température";
			// 
			// ledChauffage
			// 
			this->ledChauffage->BackColor = System::Drawing::Color::Transparent;
			this->ledChauffage->BlinkInterval = 500;
			this->ledChauffage->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ledChauffage->Label = L"Chauffage";
			this->ledChauffage->LabelPosition = LBSoft::IndustrialCtrls::Leds::LBLed::LedLabelPosition::Top;
			this->ledChauffage->LedColor = System::Drawing::Color::Red;
			this->ledChauffage->LedSize = System::Drawing::SizeF(35, 35);
			this->ledChauffage->Location = System::Drawing::Point(94, 23);
			this->ledChauffage->Name = L"ledChauffage";
			this->ledChauffage->Renderer = nullptr;
			this->ledChauffage->Size = System::Drawing::Size(99, 72);
			this->ledChauffage->State = LBSoft::IndustrialCtrls::Leds::LBLed::LedState::Off;
			this->ledChauffage->Style = LBSoft::IndustrialCtrls::Leds::LBLed::LedStyle::Circular;
			this->ledChauffage->TabIndex = 1;
			// 
			// ledClim
			// 
			this->ledClim->BackColor = System::Drawing::Color::Transparent;
			this->ledClim->BlinkInterval = 500;
			this->ledClim->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ledClim->Label = L"Clim";
			this->ledClim->LabelPosition = LBSoft::IndustrialCtrls::Leds::LBLed::LedLabelPosition::Top;
			this->ledClim->LedColor = System::Drawing::Color::Red;
			this->ledClim->LedSize = System::Drawing::SizeF(35, 35);
			this->ledClim->Location = System::Drawing::Point(15, 23);
			this->ledClim->Name = L"ledClim";
			this->ledClim->Renderer = nullptr;
			this->ledClim->Size = System::Drawing::Size(73, 72);
			this->ledClim->State = LBSoft::IndustrialCtrls::Leds::LBLed::LedState::Off;
			this->ledClim->Style = LBSoft::IndustrialCtrls::Leds::LBLed::LedStyle::Circular;
			this->ledClim->TabIndex = 0;
			// 
			// groupBox4
			// 
			groupBox4->BackColor = System::Drawing::Color::Transparent;
			groupBox4->Controls->Add(this->ledActionsFreins);
			groupBox4->Controls->Add(this->ledActionsAccelerateur);
			groupBox4->Cursor = System::Windows::Forms::Cursors::Default;
			groupBox4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			groupBox4->Location = System::Drawing::Point(726, 176);
			groupBox4->Name = L"groupBox4";
			groupBox4->Size = System::Drawing::Size(221, 111);
			groupBox4->TabIndex = 6;
			groupBox4->TabStop = false;
			groupBox4->Text = L"Actions";
			// 
			// ledActionsFreins
			// 
			this->ledActionsFreins->BackColor = System::Drawing::Color::Transparent;
			this->ledActionsFreins->BlinkInterval = 500;
			this->ledActionsFreins->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ledActionsFreins->Label = L"Freins";
			this->ledActionsFreins->LabelPosition = LBSoft::IndustrialCtrls::Leds::LBLed::LedLabelPosition::Top;
			this->ledActionsFreins->LedColor = System::Drawing::Color::Red;
			this->ledActionsFreins->LedSize = System::Drawing::SizeF(35, 35);
			this->ledActionsFreins->Location = System::Drawing::Point(113, 23);
			this->ledActionsFreins->Name = L"ledActionsFreins";
			this->ledActionsFreins->Renderer = nullptr;
			this->ledActionsFreins->Size = System::Drawing::Size(99, 72);
			this->ledActionsFreins->State = LBSoft::IndustrialCtrls::Leds::LBLed::LedState::Off;
			this->ledActionsFreins->Style = LBSoft::IndustrialCtrls::Leds::LBLed::LedStyle::Circular;
			this->ledActionsFreins->TabIndex = 1;
			// 
			// ledActionsAccelerateur
			// 
			this->ledActionsAccelerateur->BackColor = System::Drawing::Color::Transparent;
			this->ledActionsAccelerateur->BlinkInterval = 500;
			this->ledActionsAccelerateur->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ledActionsAccelerateur->Label = L"Accélérateur";
			this->ledActionsAccelerateur->LabelPosition = LBSoft::IndustrialCtrls::Leds::LBLed::LedLabelPosition::Top;
			this->ledActionsAccelerateur->LedColor = System::Drawing::Color::Red;
			this->ledActionsAccelerateur->LedSize = System::Drawing::SizeF(35, 35);
			this->ledActionsAccelerateur->Location = System::Drawing::Point(15, 23);
			this->ledActionsAccelerateur->Name = L"ledActionsAccelerateur";
			this->ledActionsAccelerateur->Renderer = nullptr;
			this->ledActionsAccelerateur->Size = System::Drawing::Size(92, 72);
			this->ledActionsAccelerateur->State = LBSoft::IndustrialCtrls::Leds::LBLed::LedState::Off;
			this->ledActionsAccelerateur->Style = LBSoft::IndustrialCtrls::Leds::LBLed::LedStyle::Circular;
			this->ledActionsAccelerateur->TabIndex = 0;
			// 
			// groupBox5
			// 
			groupBox5->BackColor = System::Drawing::Color::Transparent;
			groupBox5->Controls->Add(this->txtValeurBus);
			groupBox5->Controls->Add(groupBox11);
			groupBox5->Controls->Add(groupBox10);
			groupBox5->Controls->Add(groupBox9);
			groupBox5->Controls->Add(groupBox8);
			groupBox5->Controls->Add(groupBox7);
			groupBox5->Controls->Add(groupBox6);
			groupBox5->Controls->Add(this->txtNbVitesse);
			groupBox5->Controls->Add(this->txtNbConsigneTemperature);
			groupBox5->Controls->Add(this->txtNbFenetre);
			groupBox5->Controls->Add(this->label4);
			groupBox5->Controls->Add(this->label2);
			groupBox5->Controls->Add(this->label1);
			groupBox5->Controls->Add(this->barVitesse);
			groupBox5->Controls->Add(this->barTemperature);
			groupBox5->Controls->Add(this->barFenetre);
			groupBox5->Cursor = System::Windows::Forms::Cursors::Default;
			groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			groupBox5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			groupBox5->Location = System::Drawing::Point(3, 564);
			groupBox5->Name = L"groupBox5";
			groupBox5->Size = System::Drawing::Size(1058, 113);
			groupBox5->TabIndex = 5;
			groupBox5->TabStop = false;
			groupBox5->Text = L"TABLEAU COMMANDES";
			// 
			// txtValeurBus
			// 
			this->txtValeurBus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtValeurBus->Location = System::Drawing::Point(704, 91);
			this->txtValeurBus->Name = L"txtValeurBus";
			this->txtValeurBus->Size = System::Drawing::Size(348, 20);
			this->txtValeurBus->TabIndex = 14;
			this->txtValeurBus->Text = L"Valeur Bus : 00000000000000000000000000000000";
			this->txtValeurBus->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// groupBox11
			// 
			groupBox11->Controls->Add(this->btnAccRelacher);
			groupBox11->Controls->Add(this->btnAccAppuyer);
			groupBox11->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			groupBox11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			groupBox11->Location = System::Drawing::Point(965, 17);
			groupBox11->Name = L"groupBox11";
			groupBox11->Size = System::Drawing::Size(81, 71);
			groupBox11->TabIndex = 13;
			groupBox11->TabStop = false;
			groupBox11->Text = L"Acc.";
			// 
			// btnAccRelacher
			// 
			this->btnAccRelacher->AutoSize = true;
			this->btnAccRelacher->Checked = true;
			this->btnAccRelacher->Location = System::Drawing::Point(6, 22);
			this->btnAccRelacher->Name = L"btnAccRelacher";
			this->btnAccRelacher->Size = System::Drawing::Size(69, 20);
			this->btnAccRelacher->TabIndex = 11;
			this->btnAccRelacher->TabStop = true;
			this->btnAccRelacher->Text = L"Relacher";
			this->btnAccRelacher->UseVisualStyleBackColor = true;
			this->btnAccRelacher->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnAccRelacher_CheckedChanged);
			// 
			// btnAccAppuyer
			// 
			this->btnAccAppuyer->AutoSize = true;
			this->btnAccAppuyer->Location = System::Drawing::Point(6, 39);
			this->btnAccAppuyer->Name = L"btnAccAppuyer";
			this->btnAccAppuyer->Size = System::Drawing::Size(70, 20);
			this->btnAccAppuyer->TabIndex = 12;
			this->btnAccAppuyer->Text = L"Appuyer";
			this->btnAccAppuyer->UseVisualStyleBackColor = true;
			this->btnAccAppuyer->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnAccAppuyer_CheckedChanged);
			// 
			// groupBox10
			// 
			groupBox10->Controls->Add(this->btnFreinRelacher);
			groupBox10->Controls->Add(this->btnFreinAppuyer);
			groupBox10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			groupBox10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			groupBox10->Location = System::Drawing::Point(878, 17);
			groupBox10->Name = L"groupBox10";
			groupBox10->Size = System::Drawing::Size(81, 71);
			groupBox10->TabIndex = 12;
			groupBox10->TabStop = false;
			groupBox10->Text = L"Frein";
			// 
			// btnFreinRelacher
			// 
			this->btnFreinRelacher->AutoSize = true;
			this->btnFreinRelacher->Checked = true;
			this->btnFreinRelacher->Location = System::Drawing::Point(6, 22);
			this->btnFreinRelacher->Name = L"btnFreinRelacher";
			this->btnFreinRelacher->Size = System::Drawing::Size(69, 20);
			this->btnFreinRelacher->TabIndex = 9;
			this->btnFreinRelacher->TabStop = true;
			this->btnFreinRelacher->Text = L"Relacher";
			this->btnFreinRelacher->UseVisualStyleBackColor = true;
			this->btnFreinRelacher->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnFreinRelacher_CheckedChanged);
			// 
			// btnFreinAppuyer
			// 
			this->btnFreinAppuyer->AutoSize = true;
			this->btnFreinAppuyer->Location = System::Drawing::Point(6, 39);
			this->btnFreinAppuyer->Name = L"btnFreinAppuyer";
			this->btnFreinAppuyer->Size = System::Drawing::Size(70, 20);
			this->btnFreinAppuyer->TabIndex = 10;
			this->btnFreinAppuyer->Text = L"Appuyer";
			this->btnFreinAppuyer->UseVisualStyleBackColor = true;
			this->btnFreinAppuyer->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnFreinAppuyer_CheckedChanged);
			// 
			// groupBox9
			// 
			groupBox9->Controls->Add(this->btnChauffageEteindre);
			groupBox9->Controls->Add(this->btnChauffageAllumer);
			groupBox9->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			groupBox9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			groupBox9->Location = System::Drawing::Point(791, 17);
			groupBox9->Name = L"groupBox9";
			groupBox9->Size = System::Drawing::Size(81, 71);
			groupBox9->TabIndex = 12;
			groupBox9->TabStop = false;
			groupBox9->Text = L"Chauffage";
			// 
			// btnChauffageEteindre
			// 
			this->btnChauffageEteindre->AutoSize = true;
			this->btnChauffageEteindre->Checked = true;
			this->btnChauffageEteindre->Location = System::Drawing::Point(6, 21);
			this->btnChauffageEteindre->Name = L"btnChauffageEteindre";
			this->btnChauffageEteindre->Size = System::Drawing::Size(67, 20);
			this->btnChauffageEteindre->TabIndex = 9;
			this->btnChauffageEteindre->TabStop = true;
			this->btnChauffageEteindre->Text = L"Eteindre";
			this->btnChauffageEteindre->UseVisualStyleBackColor = true;
			this->btnChauffageEteindre->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnChauffageEteindre_CheckedChanged);
			// 
			// btnChauffageAllumer
			// 
			this->btnChauffageAllumer->AutoSize = true;
			this->btnChauffageAllumer->Location = System::Drawing::Point(6, 38);
			this->btnChauffageAllumer->Name = L"btnChauffageAllumer";
			this->btnChauffageAllumer->Size = System::Drawing::Size(66, 20);
			this->btnChauffageAllumer->TabIndex = 10;
			this->btnChauffageAllumer->Text = L"Allumer";
			this->btnChauffageAllumer->UseVisualStyleBackColor = true;
			this->btnChauffageAllumer->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnChauffageAllumer_CheckedChanged);
			// 
			// groupBox8
			// 
			groupBox8->Controls->Add(this->btnClimEteindre);
			groupBox8->Controls->Add(this->btnClimAllumer);
			groupBox8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			groupBox8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			groupBox8->Location = System::Drawing::Point(704, 17);
			groupBox8->Name = L"groupBox8";
			groupBox8->Size = System::Drawing::Size(81, 71);
			groupBox8->TabIndex = 11;
			groupBox8->TabStop = false;
			groupBox8->Text = L"Clim.";
			// 
			// btnClimEteindre
			// 
			this->btnClimEteindre->AutoSize = true;
			this->btnClimEteindre->Checked = true;
			this->btnClimEteindre->Location = System::Drawing::Point(6, 21);
			this->btnClimEteindre->Name = L"btnClimEteindre";
			this->btnClimEteindre->Size = System::Drawing::Size(67, 20);
			this->btnClimEteindre->TabIndex = 7;
			this->btnClimEteindre->TabStop = true;
			this->btnClimEteindre->Text = L"Eteindre";
			this->btnClimEteindre->UseVisualStyleBackColor = true;
			this->btnClimEteindre->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnClimEteindre_CheckedChanged);
			// 
			// btnClimAllumer
			// 
			this->btnClimAllumer->AutoSize = true;
			this->btnClimAllumer->Location = System::Drawing::Point(6, 38);
			this->btnClimAllumer->Name = L"btnClimAllumer";
			this->btnClimAllumer->Size = System::Drawing::Size(66, 20);
			this->btnClimAllumer->TabIndex = 8;
			this->btnClimAllumer->Text = L"Allumer";
			this->btnClimAllumer->UseVisualStyleBackColor = true;
			this->btnClimAllumer->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnClimAllumer_CheckedChanged);
			// 
			// groupBox7
			// 
			groupBox7->Controls->Add(this->btnVitresDescendre);
			groupBox7->Controls->Add(this->btnVitresEteindre);
			groupBox7->Controls->Add(this->btnVitresMonter);
			groupBox7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			groupBox7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			groupBox7->Location = System::Drawing::Point(589, 17);
			groupBox7->Name = L"groupBox7";
			groupBox7->Size = System::Drawing::Size(109, 88);
			groupBox7->TabIndex = 10;
			groupBox7->TabStop = false;
			groupBox7->Text = L"Vitres";
			// 
			// btnVitresDescendre
			// 
			this->btnVitresDescendre->AutoSize = true;
			this->btnVitresDescendre->Location = System::Drawing::Point(6, 53);
			this->btnVitresDescendre->Name = L"btnVitresDescendre";
			this->btnVitresDescendre->Size = System::Drawing::Size(80, 20);
			this->btnVitresDescendre->TabIndex = 6;
			this->btnVitresDescendre->Text = L"Descendre";
			this->btnVitresDescendre->UseVisualStyleBackColor = true;
			this->btnVitresDescendre->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnVitresDescendre_CheckedChanged);
			// 
			// btnVitresEteindre
			// 
			this->btnVitresEteindre->AutoSize = true;
			this->btnVitresEteindre->Checked = true;
			this->btnVitresEteindre->Location = System::Drawing::Point(6, 21);
			this->btnVitresEteindre->Name = L"btnVitresEteindre";
			this->btnVitresEteindre->Size = System::Drawing::Size(51, 20);
			this->btnVitresEteindre->TabIndex = 4;
			this->btnVitresEteindre->TabStop = true;
			this->btnVitresEteindre->Text = L"Arrêt";
			this->btnVitresEteindre->UseVisualStyleBackColor = true;
			this->btnVitresEteindre->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnVitresEteindre_CheckedChanged);
			// 
			// btnVitresMonter
			// 
			this->btnVitresMonter->AutoSize = true;
			this->btnVitresMonter->Location = System::Drawing::Point(6, 38);
			this->btnVitresMonter->Name = L"btnVitresMonter";
			this->btnVitresMonter->Size = System::Drawing::Size(63, 20);
			this->btnVitresMonter->TabIndex = 5;
			this->btnVitresMonter->Text = L"Monter";
			this->btnVitresMonter->UseVisualStyleBackColor = true;
			this->btnVitresMonter->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnVitresMonter_CheckedChanged);
			// 
			// groupBox6
			// 
			groupBox6->Controls->Add(this->btnPhareRoutes);
			groupBox6->Controls->Add(this->btnPhareCroisements);
			groupBox6->Controls->Add(this->btnPharePositions);
			groupBox6->Controls->Add(this->btnPhareEteindre);
			groupBox6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			groupBox6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			groupBox6->Location = System::Drawing::Point(461, 17);
			groupBox6->Name = L"groupBox6";
			groupBox6->Size = System::Drawing::Size(122, 88);
			groupBox6->TabIndex = 9;
			groupBox6->TabStop = false;
			groupBox6->Text = L"Phares";
			// 
			// btnPhareRoutes
			// 
			this->btnPhareRoutes->AutoSize = true;
			this->btnPhareRoutes->Location = System::Drawing::Point(6, 62);
			this->btnPhareRoutes->Name = L"btnPhareRoutes";
			this->btnPhareRoutes->Size = System::Drawing::Size(60, 20);
			this->btnPhareRoutes->TabIndex = 3;
			this->btnPhareRoutes->Text = L"Routes";
			this->btnPhareRoutes->UseVisualStyleBackColor = true;
			this->btnPhareRoutes->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnPhareRoutes_CheckedChanged);
			// 
			// btnPhareCroisements
			// 
			this->btnPhareCroisements->AutoSize = true;
			this->btnPhareCroisements->Location = System::Drawing::Point(6, 47);
			this->btnPhareCroisements->Name = L"btnPhareCroisements";
			this->btnPhareCroisements->Size = System::Drawing::Size(88, 20);
			this->btnPhareCroisements->TabIndex = 2;
			this->btnPhareCroisements->Text = L"Croisements";
			this->btnPhareCroisements->UseVisualStyleBackColor = true;
			this->btnPhareCroisements->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnPhareCroisements_CheckedChanged);
			// 
			// btnPharePositions
			// 
			this->btnPharePositions->AutoSize = true;
			this->btnPharePositions->Location = System::Drawing::Point(6, 32);
			this->btnPharePositions->Name = L"btnPharePositions";
			this->btnPharePositions->Size = System::Drawing::Size(72, 20);
			this->btnPharePositions->TabIndex = 1;
			this->btnPharePositions->Text = L"Positions";
			this->btnPharePositions->UseVisualStyleBackColor = true;
			this->btnPharePositions->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnPharePositions_CheckedChanged);
			// 
			// btnPhareEteindre
			// 
			this->btnPhareEteindre->AutoSize = true;
			this->btnPhareEteindre->Checked = true;
			this->btnPhareEteindre->Location = System::Drawing::Point(6, 15);
			this->btnPhareEteindre->Name = L"btnPhareEteindre";
			this->btnPhareEteindre->Size = System::Drawing::Size(67, 20);
			this->btnPhareEteindre->TabIndex = 0;
			this->btnPhareEteindre->TabStop = true;
			this->btnPhareEteindre->Text = L"Eteindre";
			this->btnPhareEteindre->UseVisualStyleBackColor = true;
			this->btnPhareEteindre->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnPhareEteindre_CheckedChanged);
			// 
			// txtNbVitesse
			// 
			this->txtNbVitesse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNbVitesse->Location = System::Drawing::Point(311, 90);
			this->txtNbVitesse->Name = L"txtNbVitesse";
			this->txtNbVitesse->Size = System::Drawing::Size(144, 20);
			this->txtNbVitesse->TabIndex = 8;
			this->txtNbVitesse->Text = L"0";
			this->txtNbVitesse->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtNbConsigneTemperature
			// 
			this->txtNbConsigneTemperature->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtNbConsigneTemperature->Location = System::Drawing::Point(161, 90);
			this->txtNbConsigneTemperature->Name = L"txtNbConsigneTemperature";
			this->txtNbConsigneTemperature->Size = System::Drawing::Size(144, 20);
			this->txtNbConsigneTemperature->TabIndex = 7;
			this->txtNbConsigneTemperature->Text = L"0";
			this->txtNbConsigneTemperature->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtNbFenetre
			// 
			this->txtNbFenetre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNbFenetre->Location = System::Drawing::Point(11, 91);
			this->txtNbFenetre->Name = L"txtNbFenetre";
			this->txtNbFenetre->Size = System::Drawing::Size(144, 20);
			this->txtNbFenetre->TabIndex = 6;
			this->txtNbFenetre->Text = L"0";
			this->txtNbFenetre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(311, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Consigne Vitesse";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(187, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Consigne T°";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Position Fenêtre";
			// 
			// barVitesse
			// 
			this->barVitesse->BackColor = System::Drawing::Color::LimeGreen;
			this->barVitesse->LargeChange = 10;
			this->barVitesse->Location = System::Drawing::Point(311, 43);
			this->barVitesse->Maximum = 255;
			this->barVitesse->Name = L"barVitesse";
			this->barVitesse->Size = System::Drawing::Size(144, 45);
			this->barVitesse->SmallChange = 5;
			this->barVitesse->TabIndex = 2;
			this->barVitesse->TickFrequency = 5;
			this->barVitesse->Scroll += gcnew System::EventHandler(this, &Form1::barVitesse_Scroll);
			// 
			// barTemperature
			// 
			this->barTemperature->BackColor = System::Drawing::Color::DarkRed;
			this->barTemperature->Location = System::Drawing::Point(161, 43);
			this->barTemperature->Maximum = 30;
			this->barTemperature->Name = L"barTemperature";
			this->barTemperature->Size = System::Drawing::Size(144, 45);
			this->barTemperature->TabIndex = 1;
			this->barTemperature->Scroll += gcnew System::EventHandler(this, &Form1::barTemperature_Scroll);
			// 
			// barFenetre
			// 
			this->barFenetre->BackColor = System::Drawing::Color::SteelBlue;
			this->barFenetre->Location = System::Drawing::Point(11, 43);
			this->barFenetre->Maximum = 100;
			this->barFenetre->Name = L"barFenetre";
			this->barFenetre->Size = System::Drawing::Size(144, 45);
			this->barFenetre->TabIndex = 0;
			this->barFenetre->TickFrequency = 10;
			this->barFenetre->Scroll += gcnew System::EventHandler(this, &Form1::barFenetre_Scroll);
			// 
			// pictureBox1
			// 
			pictureBox1->BackColor = System::Drawing::Color::Transparent;
			pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			pictureBox1->Location = System::Drawing::Point(78, 204);
			pictureBox1->Name = L"pictureBox1";
			pictureBox1->Size = System::Drawing::Size(69, 70);
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox1->TabIndex = 6;
			pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			pictureBox2->BackColor = System::Drawing::Color::Transparent;
			pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			pictureBox2->Location = System::Drawing::Point(154, 326);
			pictureBox2->Name = L"pictureBox2";
			pictureBox2->Size = System::Drawing::Size(69, 70);
			pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox2->TabIndex = 7;
			pictureBox2->TabStop = false;
			// 
			// CompteurVitesse
			// 
			this->CompteurVitesse->BackColor = System::Drawing::Color::Transparent;
			this->CompteurVitesse->BodyColor = System::Drawing::Color::DimGray;
			this->CompteurVitesse->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->CompteurVitesse->Location = System::Drawing::Point(699, 335);
			this->CompteurVitesse->MaxValue = 255;
			this->CompteurVitesse->MeterStyle = LBSoft::IndustrialCtrls::Meters::LBAnalogMeter::AnalogMeterStyle::Circular;
			this->CompteurVitesse->MinValue = 0;
			this->CompteurVitesse->Name = L"CompteurVitesse";
			this->CompteurVitesse->NeedleColor = System::Drawing::Color::Red;
			this->CompteurVitesse->Renderer = nullptr;
			this->CompteurVitesse->ScaleColor = System::Drawing::Color::White;
			this->CompteurVitesse->ScaleDivisions = 10;
			this->CompteurVitesse->ScaleSubDivisions = 10;
			this->CompteurVitesse->Size = System::Drawing::Size(231, 213);
			this->CompteurVitesse->TabIndex = 1;
			this->CompteurVitesse->Value = 1;
			this->CompteurVitesse->ViewGlass = false;
			// 
			// digit_Fenetre
			// 
			this->digit_Fenetre->BackColor = System::Drawing::Color::Black;
			this->digit_Fenetre->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->digit_Fenetre->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->digit_Fenetre->Format = L"000";
			this->digit_Fenetre->Location = System::Drawing::Point(229, 326);
			this->digit_Fenetre->Name = L"digit_Fenetre";
			this->digit_Fenetre->Renderer = nullptr;
			this->digit_Fenetre->Signed = false;
			this->digit_Fenetre->Size = System::Drawing::Size(124, 70);
			this->digit_Fenetre->TabIndex = 1;
			this->digit_Fenetre->Value = 0;
			// 
			// digit_Temperature
			// 
			this->digit_Temperature->BackColor = System::Drawing::Color::Black;
			this->digit_Temperature->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->digit_Temperature->Cursor = System::Windows::Forms::Cursors::Default;
			this->digit_Temperature->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->digit_Temperature->Format = L"00";
			this->digit_Temperature->Location = System::Drawing::Point(153, 204);
			this->digit_Temperature->Name = L"digit_Temperature";
			this->digit_Temperature->Renderer = nullptr;
			this->digit_Temperature->Signed = false;
			this->digit_Temperature->Size = System::Drawing::Size(80, 70);
			this->digit_Temperature->TabIndex = 2;
			this->digit_Temperature->Value = 0;
			// 
			// busTimer
			// 
			this->busTimer->Enabled = true;
			this->busTimer->Interval = 2500;
			this->busTimer->Tick += gcnew System::EventHandler(this, &Form1::busTimer_Tick);
			// 
			// actionsTimer
			// 
			this->actionsTimer->Enabled = true;
			this->actionsTimer->Tick += gcnew System::EventHandler(this, &Form1::actionsTimer_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1064, 681);
			this->Controls->Add(groupBox4);
			this->Controls->Add(groupBox3);
			this->Controls->Add(groupBox2);
			this->Controls->Add(pictureBox2);
			this->Controls->Add(pictureBox1);
			this->Controls->Add(groupBox5);
			this->Controls->Add(groupBox1);
			this->Controls->Add(this->digit_Temperature);
			this->Controls->Add(this->digit_Fenetre);
			this->Controls->Add(this->CompteurVitesse);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Simulateur de VroumVroum";
			groupBox1->ResumeLayout(false);
			groupBox2->ResumeLayout(false);
			groupBox3->ResumeLayout(false);
			groupBox4->ResumeLayout(false);
			groupBox5->ResumeLayout(false);
			groupBox5->PerformLayout();
			groupBox11->ResumeLayout(false);
			groupBox11->PerformLayout();
			groupBox10->ResumeLayout(false);
			groupBox10->PerformLayout();
			groupBox9->ResumeLayout(false);
			groupBox9->PerformLayout();
			groupBox8->ResumeLayout(false);
			groupBox8->PerformLayout();
			groupBox7->ResumeLayout(false);
			groupBox7->PerformLayout();
			groupBox6->ResumeLayout(false);
			groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barVitesse))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barTemperature))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barFenetre))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	CBusLin voiture;
	bool estEntrainAccelerer = false;
	bool estEntrainFreiner = false;
	bool estEntrainChauffer = false;
	bool estEntrainClim = false;
	bool estFenetreMontante = false;
	bool estFenetreDescente = false;

	void MajTrameText()
	{
		uint32_t trame = voiture.recupTrame();
		std::bitset<32> bits(trame);
		txtValeurBus->Text = "Valeur Bus : " + gcnew String(bits.to_string().c_str());
	}

	void GestionLeds()
	{
		ledClim->State = voiture.lireEtatClimatisation() ? LBLed::LedState::On : LBLed::LedState::Off;
		ledChauffage->State = voiture.lireEtatChauffage() ? LBLed::LedState::On : LBLed::LedState::Off;
		ledActionsAccelerateur->State = voiture.lireEtatAccelerateur() ? LBLed::LedState::On : LBLed::LedState::Off;
		ledActionsFreins->State = voiture.lireEtatFrein() ? LBLed::LedState::On : LBLed::LedState::Off;

		switch (voiture.lireEtatVitres())
		{
			case 2 :
				ledVitreMonter->State = LBLed::LedState::Off;
				ledVitreDescendre->State = LBLed::LedState::On; break;

			case 1 :
				ledVitreMonter->State = LBLed::LedState::On;
				ledVitreDescendre->State = LBLed::LedState::Off; break;

			default :
				ledVitreMonter->State = LBLed::LedState::Off;
				ledVitreDescendre->State = LBLed::LedState::Off;
		}

		switch (voiture.lireEtatPhares())
		{
			case 3:
				ledFeuxPositions->State = LBLed::LedState::Off;
				ledFeuxCroisements->State = LBLed::LedState::Off;
				ledFeuxRoutes->State = LBLed::LedState::On; break;

			case 2:
				ledFeuxPositions->State = LBLed::LedState::Off;
				ledFeuxCroisements->State = LBLed::LedState::On;
				ledFeuxRoutes->State = LBLed::LedState::Off; break;

			case 1:
				ledFeuxPositions->State = LBLed::LedState::On;
				ledFeuxCroisements->State = LBLed::LedState::Off;
				ledFeuxRoutes->State = LBLed::LedState::Off; break;

			default:
				ledFeuxPositions->State = LBLed::LedState::Off;
				ledFeuxCroisements->State = LBLed::LedState::Off;
				ledFeuxRoutes->State = LBLed::LedState::Off;
		}
	}

	void GestionVitesse()
	{
		int vitesseActuelle = CompteurVitesse->Value;
		estEntrainAccelerer = voiture.lireEtatAccelerateur() && vitesseActuelle < voiture.lireVitesse();
		estEntrainFreiner = voiture.lireEtatFrein() && vitesseActuelle > 0;
	}

	void GestionTemperature()
	{
		int temperatureActuelle = digit_Temperature->Value;
		estEntrainChauffer = voiture.lireEtatChauffage() && temperatureActuelle < voiture.lireTemperature();
		estEntrainClim = voiture.lireEtatClimatisation() && temperatureActuelle > 19;
	}

	void GestionFenetre()
	{
		int fenetrePosition = digit_Fenetre->Value;
		estFenetreMontante = voiture.lireEtatVitres() == 1 && fenetrePosition < voiture.lirePositionFenetre();
		estFenetreDescente = voiture.lireEtatVitres() == 2 && fenetrePosition > voiture.lirePositionFenetre();
	}

	private: System::Void actionsTimer_Tick(System::Object^ sender, System::EventArgs^ e) {

		//Acceleration
		if (estEntrainAccelerer) estEntrainAccelerer = !(++CompteurVitesse->Value >= voiture.lireVitesse());

		//Frein
		if (estEntrainFreiner) estEntrainFreiner = !(--CompteurVitesse->Value == 0);

		//Chauffage
		if (estEntrainChauffer) estEntrainChauffer = !(++digit_Temperature->Value >= voiture.lireTemperature());

		//Clim
		if (estEntrainClim) estEntrainClim = !(--digit_Temperature->Value <= 19);

		//Fenetres
		if (estFenetreMontante) estFenetreMontante = !(++digit_Fenetre->Value >= voiture.lirePositionFenetre());
		if (estFenetreDescente) estFenetreDescente = !(--digit_Fenetre->Value <= voiture.lirePositionFenetre());

		/* //Acceleration
		if (estEntrainAccelerer)
		{
			CompteurVitesse->Value += 1;
			if (CompteurVitesse->Value >= voiture.lireVitesse())
				estEntrainAccelerer = false;
		}

		//Frein
		if (estEntrainFreiner)
		{
			CompteurVitesse->Value -= 1;
			if (CompteurVitesse->Value == 0)
				estEntrainFreiner = false;
		}

		//Chauffage
		if (estEntrainChauffer)
		{
			digit_Temperature->Value += 1;
			if (digit_Temperature->Value >= voiture.lireTemperature())
				estEntrainChauffer = false;
		}

		//Clim
		if (estEntrainClim)
		{
			digit_Temperature->Value -= 1;
			if (digit_Temperature->Value <= 19)
				estEntrainClim = false;
		} */
	}

	private: System::Void busTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		GestionLeds();
		GestionVitesse();
		GestionTemperature();
		GestionFenetre();
	}

	/*-----------------------*/

	private: System::Void barFenetre_Scroll(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNbFenetre->Text = "" + barFenetre->Value;
		voiture.fixerPositionFenetre(barFenetre->Value);
		MajTrameText();
	}


	private: System::Void barTemperature_Scroll(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNbConsigneTemperature->Text = "" + barTemperature->Value;
		voiture.fixerTemperature(barTemperature->Value);
		MajTrameText();
	}

private: System::Void barVitesse_Scroll(System::Object^ sender, System::EventArgs^ e) 
	{
		txtNbVitesse->Text = "" + barVitesse->Value;
		voiture.fixerVitesse(barVitesse->Value);
		MajTrameText();
	}

	/*------------------Phares------------------*/
	private: System::Void btnPhareEteindre_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.fixerPhares(CVoiture::EtatPhare::Eteints);
		MajTrameText();
	}

	private: System::Void btnPharePositions_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.fixerPhares(CVoiture::EtatPhare::Position);
		MajTrameText();
	}

	private: System::Void btnPhareCroisements_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.fixerPhares(CVoiture::EtatPhare::Croisement);
		MajTrameText();
	   }

	private: System::Void btnPhareRoutes_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.fixerPhares(CVoiture::EtatPhare::Route);
		MajTrameText();
	}

	/*-------------------Vitres-----------------*/
	private: System::Void btnVitresEteindre_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.fixerActionVitre(CVoiture::EtatVitre::Stop);
		MajTrameText();
	}
	private: System::Void btnVitresMonter_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.fixerActionVitre(CVoiture::EtatVitre::Monter);
		MajTrameText();
	}
	private: System::Void btnVitresDescendre_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.fixerActionVitre(CVoiture::EtatVitre::Descendre);
		MajTrameText();
	}

	/*-------------------Clim-----------------*/
	private: System::Void btnClimEteindre_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.eteindreClim();
		btnChauffageAllumer->Enabled = true;
		MajTrameText();
	}
	private: System::Void btnClimAllumer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.allumerClim();
		btnChauffageAllumer->Enabled = false;
		MajTrameText();
	}

	/*-------------------Chauffage-----------------*/
	private: System::Void btnChauffageEteindre_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.eteindreChauffage();
		btnClimAllumer->Enabled = true;
		MajTrameText();
	}
	private: System::Void btnChauffageAllumer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.allumerChauffage();	
		btnClimAllumer->Enabled = false;
		MajTrameText();
	}

	/*-------------------Frein-----------------*/
	private: System::Void btnFreinRelacher_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.freinRelacher();
		btnAccAppuyer->Enabled = true;
		MajTrameText();
	}
	private: System::Void btnFreinAppuyer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.freinAppuyer();
		btnAccAppuyer->Enabled = false;
		MajTrameText();
	}

	/*-------------------Accelerer-----------------*/
	private: System::Void btnAccRelacher_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.accelerateurRelacher();
		btnFreinAppuyer->Enabled = true;
		MajTrameText();
	}
	private: System::Void btnAccAppuyer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		voiture.accelerateurAppuyer();
		btnFreinAppuyer->Enabled = false;
		MajTrameText();
	}
	


};
}
