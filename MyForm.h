#pragma once
#include "MyForm.h"
#include "Baraja.h"
#include "Game.h"
#include "List.h"
#include "Node.h"
#include "Stack.h"

namespace Lab05JulioRuiz1284719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		List* grup;
		Baraja* baraja;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	public:
	public:
		Game* game;

		MyForm(void)
		{
			InitializeComponent();
			this->btnIniciar->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			grup = new List();
			baraja = new Baraja();
			game = new Game();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtPosicion;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnIniciar;
	private: System::Windows::Forms::Button^ btnTomar;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ rbtnG7D;
	private: System::Windows::Forms::RadioButton^ rbtnG6D;
	private: System::Windows::Forms::RadioButton^ rbtnG5D;
	private: System::Windows::Forms::RadioButton^ rbtnG4D;
	private: System::Windows::Forms::RadioButton^ rbtnG3D;
	private: System::Windows::Forms::RadioButton^ rbtnG2D;
	private: System::Windows::Forms::RadioButton^ rbtnG1D;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnMover;
	private: System::Windows::Forms::ListBox^ lboxG2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::RadioButton^ rbtnMazo;
	private: System::Windows::Forms::RadioButton^ rbtnG7O;
	private: System::Windows::Forms::RadioButton^ rbtnG6O;
	private: System::Windows::Forms::RadioButton^ rbtnG5O;
	private: System::Windows::Forms::RadioButton^ rbtnG4O;
	private: System::Windows::Forms::RadioButton^ rbtnG3O;
	private: System::Windows::Forms::RadioButton^ rbtnG2O;
	private: System::Windows::Forms::RadioButton^ rbtnG1O;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ lboxMazo;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::ListBox^ lboxG1;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::ListBox^ lboxG7;
	private: System::Windows::Forms::ListBox^ lboxG6;
	private: System::Windows::Forms::ListBox^ lboxG5;
	private: System::Windows::Forms::ListBox^ lboxG4;
	private: System::Windows::Forms::ListBox^ lboxG3;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txtPosicion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->btnTomar = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnG7D = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG6D = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG5D = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG4D = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG3D = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG2D = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG1D = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnMover = (gcnew System::Windows::Forms::Button());
			this->lboxG2 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->rbtnMazo = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG7O = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG6O = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG5O = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG4O = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG3O = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG2O = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnG1O = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lboxMazo = (gcnew System::Windows::Forms::ListBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->lboxG1 = (gcnew System::Windows::Forms::ListBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->lboxG7 = (gcnew System::Windows::Forms::ListBox());
			this->lboxG6 = (gcnew System::Windows::Forms::ListBox());
			this->lboxG5 = (gcnew System::Windows::Forms::ListBox());
			this->lboxG4 = (gcnew System::Windows::Forms::ListBox());
			this->lboxG3 = (gcnew System::Windows::Forms::ListBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtPosicion
			// 
			this->txtPosicion->BackColor = System::Drawing::Color::Turquoise;
			this->txtPosicion->Location = System::Drawing::Point(724, 628);
			this->txtPosicion->Name = L"txtPosicion";
			this->txtPosicion->Size = System::Drawing::Size(96, 20);
			this->txtPosicion->TabIndex = 55;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DarkGreen;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(641, 628);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 18);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Posición:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnIniciar
			// 
			this->btnIniciar->BackColor = System::Drawing::Color::Indigo;
			this->btnIniciar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnIniciar->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIniciar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnIniciar->Location = System::Drawing::Point(739, 13);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(121, 219);
			this->btnIniciar->TabIndex = 53;
			this->btnIniciar->Text = L"START";
			this->btnIniciar->UseVisualStyleBackColor = false;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &MyForm::btnIniciar_Click);
			// 
			// btnTomar
			// 
			this->btnTomar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTomar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTomar->ForeColor = System::Drawing::Color::Black;
			this->btnTomar->Location = System::Drawing::Point(172, 155);
			this->btnTomar->Name = L"btnTomar";
			this->btnTomar->Size = System::Drawing::Size(115, 41);
			this->btnTomar->TabIndex = 49;
			this->btnTomar->Text = L"Tomar del mazo";
			this->btnTomar->UseVisualStyleBackColor = true;
			this->btnTomar->Click += gcnew System::EventHandler(this, &MyForm::btnTomar_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::OliveDrab;
			this->groupBox3->Controls->Add(this->rbtnG7D);
			this->groupBox3->Controls->Add(this->rbtnG6D);
			this->groupBox3->Controls->Add(this->rbtnG5D);
			this->groupBox3->Controls->Add(this->rbtnG4D);
			this->groupBox3->Controls->Add(this->rbtnG3D);
			this->groupBox3->Controls->Add(this->rbtnG2D);
			this->groupBox3->Controls->Add(this->rbtnG1D);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(132, 709);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(504, 63);
			this->groupBox3->TabIndex = 52;
			this->groupBox3->TabStop = false;
			// 
			// rbtnG7D
			// 
			this->rbtnG7D->AutoSize = true;
			this->rbtnG7D->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG7D->Location = System::Drawing::Point(429, 33);
			this->rbtnG7D->Name = L"rbtnG7D";
			this->rbtnG7D->Size = System::Drawing::Size(42, 20);
			this->rbtnG7D->TabIndex = 68;
			this->rbtnG7D->TabStop = true;
			this->rbtnG7D->Text = L"G7";
			this->rbtnG7D->UseVisualStyleBackColor = true;
			// 
			// rbtnG6D
			// 
			this->rbtnG6D->AutoSize = true;
			this->rbtnG6D->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG6D->Location = System::Drawing::Point(376, 33);
			this->rbtnG6D->Name = L"rbtnG6D";
			this->rbtnG6D->Size = System::Drawing::Size(42, 20);
			this->rbtnG6D->TabIndex = 67;
			this->rbtnG6D->TabStop = true;
			this->rbtnG6D->Text = L"G6";
			this->rbtnG6D->UseVisualStyleBackColor = true;
			// 
			// rbtnG5D
			// 
			this->rbtnG5D->AutoSize = true;
			this->rbtnG5D->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG5D->Location = System::Drawing::Point(320, 33);
			this->rbtnG5D->Name = L"rbtnG5D";
			this->rbtnG5D->Size = System::Drawing::Size(42, 20);
			this->rbtnG5D->TabIndex = 66;
			this->rbtnG5D->TabStop = true;
			this->rbtnG5D->Text = L"G5";
			this->rbtnG5D->UseVisualStyleBackColor = true;
			// 
			// rbtnG4D
			// 
			this->rbtnG4D->AutoSize = true;
			this->rbtnG4D->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG4D->Location = System::Drawing::Point(266, 33);
			this->rbtnG4D->Name = L"rbtnG4D";
			this->rbtnG4D->Size = System::Drawing::Size(42, 20);
			this->rbtnG4D->TabIndex = 65;
			this->rbtnG4D->TabStop = true;
			this->rbtnG4D->Text = L"G4";
			this->rbtnG4D->UseVisualStyleBackColor = true;
			// 
			// rbtnG3D
			// 
			this->rbtnG3D->AutoSize = true;
			this->rbtnG3D->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG3D->Location = System::Drawing::Point(214, 33);
			this->rbtnG3D->Name = L"rbtnG3D";
			this->rbtnG3D->Size = System::Drawing::Size(42, 20);
			this->rbtnG3D->TabIndex = 64;
			this->rbtnG3D->TabStop = true;
			this->rbtnG3D->Text = L"G3";
			this->rbtnG3D->UseVisualStyleBackColor = true;
			// 
			// rbtnG2D
			// 
			this->rbtnG2D->AutoSize = true;
			this->rbtnG2D->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG2D->Location = System::Drawing::Point(159, 33);
			this->rbtnG2D->Name = L"rbtnG2D";
			this->rbtnG2D->Size = System::Drawing::Size(42, 20);
			this->rbtnG2D->TabIndex = 63;
			this->rbtnG2D->TabStop = true;
			this->rbtnG2D->Text = L"G2";
			this->rbtnG2D->UseVisualStyleBackColor = true;
			// 
			// rbtnG1D
			// 
			this->rbtnG1D->AutoSize = true;
			this->rbtnG1D->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG1D->Location = System::Drawing::Point(104, 33);
			this->rbtnG1D->Name = L"rbtnG1D";
			this->rbtnG1D->Size = System::Drawing::Size(42, 20);
			this->rbtnG1D->TabIndex = 62;
			this->rbtnG1D->TabStop = true;
			this->rbtnG1D->Text = L"G1";
			this->rbtnG1D->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DarkGreen;
			this->label4->Location = System::Drawing::Point(24, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 61;
			this->label4->Text = L"Grupo Destino:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMover
			// 
			this->btnMover->BackColor = System::Drawing::Color::DarkOrange;
			this->btnMover->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMover->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMover->ForeColor = System::Drawing::Color::White;
			this->btnMover->Location = System::Drawing::Point(655, 675);
			this->btnMover->Name = L"btnMover";
			this->btnMover->Size = System::Drawing::Size(111, 46);
			this->btnMover->TabIndex = 48;
			this->btnMover->Text = L"Mover";
			this->btnMover->UseVisualStyleBackColor = false;
			this->btnMover->Click += gcnew System::EventHandler(this, &MyForm::btnMover_Click);
			// 
			// lboxG2
			// 
			this->lboxG2->BackColor = System::Drawing::Color::SteelBlue;
			this->lboxG2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lboxG2->FormattingEnabled = true;
			this->lboxG2->ItemHeight = 20;
			this->lboxG2->Location = System::Drawing::Point(168, 271);
			this->lboxG2->Name = L"lboxG2";
			this->lboxG2->Size = System::Drawing::Size(119, 304);
			this->lboxG2->TabIndex = 44;
			this->lboxG2->Tag = L"";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::OliveDrab;
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->rbtnMazo);
			this->groupBox1->Controls->Add(this->rbtnG7O);
			this->groupBox1->Controls->Add(this->rbtnG6O);
			this->groupBox1->Controls->Add(this->rbtnG5O);
			this->groupBox1->Controls->Add(this->rbtnG4O);
			this->groupBox1->Controls->Add(this->rbtnG3O);
			this->groupBox1->Controls->Add(this->rbtnG2O);
			this->groupBox1->Controls->Add(this->rbtnG1O);
			this->groupBox1->Location = System::Drawing::Point(132, 606);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(504, 62);
			this->groupBox1->TabIndex = 50;
			this->groupBox1->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::DarkGreen;
			this->label13->Location = System::Drawing::Point(24, 19);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 13);
			this->label13->TabIndex = 44;
			this->label13->Text = L"Grupo Origen:";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// rbtnMazo
			// 
			this->rbtnMazo->AutoSize = true;
			this->rbtnMazo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnMazo->Location = System::Drawing::Point(27, 35);
			this->rbtnMazo->Name = L"rbtnMazo";
			this->rbtnMazo->Size = System::Drawing::Size(57, 20);
			this->rbtnMazo->TabIndex = 43;
			this->rbtnMazo->TabStop = true;
			this->rbtnMazo->Text = L"Mazo";
			this->rbtnMazo->UseVisualStyleBackColor = true;
			// 
			// rbtnG7O
			// 
			this->rbtnG7O->AutoSize = true;
			this->rbtnG7O->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG7O->Location = System::Drawing::Point(429, 35);
			this->rbtnG7O->Name = L"rbtnG7O";
			this->rbtnG7O->Size = System::Drawing::Size(42, 20);
			this->rbtnG7O->TabIndex = 42;
			this->rbtnG7O->TabStop = true;
			this->rbtnG7O->Text = L"G7";
			this->rbtnG7O->UseVisualStyleBackColor = true;
			// 
			// rbtnG6O
			// 
			this->rbtnG6O->AutoSize = true;
			this->rbtnG6O->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG6O->Location = System::Drawing::Point(376, 35);
			this->rbtnG6O->Name = L"rbtnG6O";
			this->rbtnG6O->Size = System::Drawing::Size(42, 20);
			this->rbtnG6O->TabIndex = 41;
			this->rbtnG6O->TabStop = true;
			this->rbtnG6O->Text = L"G6";
			this->rbtnG6O->UseVisualStyleBackColor = true;
			// 
			// rbtnG5O
			// 
			this->rbtnG5O->AutoSize = true;
			this->rbtnG5O->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG5O->Location = System::Drawing::Point(320, 35);
			this->rbtnG5O->Name = L"rbtnG5O";
			this->rbtnG5O->Size = System::Drawing::Size(42, 20);
			this->rbtnG5O->TabIndex = 40;
			this->rbtnG5O->TabStop = true;
			this->rbtnG5O->Text = L"G5";
			this->rbtnG5O->UseVisualStyleBackColor = true;
			// 
			// rbtnG4O
			// 
			this->rbtnG4O->AutoSize = true;
			this->rbtnG4O->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG4O->Location = System::Drawing::Point(266, 35);
			this->rbtnG4O->Name = L"rbtnG4O";
			this->rbtnG4O->Size = System::Drawing::Size(42, 20);
			this->rbtnG4O->TabIndex = 39;
			this->rbtnG4O->TabStop = true;
			this->rbtnG4O->Text = L"G4";
			this->rbtnG4O->UseVisualStyleBackColor = true;
			// 
			// rbtnG3O
			// 
			this->rbtnG3O->AutoSize = true;
			this->rbtnG3O->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG3O->Location = System::Drawing::Point(214, 35);
			this->rbtnG3O->Name = L"rbtnG3O";
			this->rbtnG3O->Size = System::Drawing::Size(42, 20);
			this->rbtnG3O->TabIndex = 38;
			this->rbtnG3O->TabStop = true;
			this->rbtnG3O->Text = L"G3";
			this->rbtnG3O->UseVisualStyleBackColor = true;
			// 
			// rbtnG2O
			// 
			this->rbtnG2O->AutoSize = true;
			this->rbtnG2O->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG2O->Location = System::Drawing::Point(159, 35);
			this->rbtnG2O->Name = L"rbtnG2O";
			this->rbtnG2O->Size = System::Drawing::Size(42, 20);
			this->rbtnG2O->TabIndex = 37;
			this->rbtnG2O->TabStop = true;
			this->rbtnG2O->Text = L"G2";
			this->rbtnG2O->UseVisualStyleBackColor = true;
			// 
			// rbtnG1O
			// 
			this->rbtnG1O->AutoSize = true;
			this->rbtnG1O->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnG1O->Location = System::Drawing::Point(104, 35);
			this->rbtnG1O->Name = L"rbtnG1O";
			this->rbtnG1O->Size = System::Drawing::Size(42, 20);
			this->rbtnG1O->TabIndex = 36;
			this->rbtnG1O->TabStop = true;
			this->rbtnG1O->Text = L"G1";
			this->rbtnG1O->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Engravers MT", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(251, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(498, 43);
			this->label1->TabIndex = 47;
			this->label1->Text = L"Solitario Simple";
			// 
			// lboxMazo
			// 
			this->lboxMazo->BackColor = System::Drawing::Color::BurlyWood;
			this->lboxMazo->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lboxMazo->FormattingEnabled = true;
			this->lboxMazo->ItemHeight = 20;
			this->lboxMazo->Location = System::Drawing::Point(25, 28);
			this->lboxMazo->Name = L"lboxMazo";
			this->lboxMazo->Size = System::Drawing::Size(129, 204);
			this->lboxMazo->TabIndex = 56;
			this->lboxMazo->Tag = L"";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(66, 9);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(52, 16);
			this->label20->TabIndex = 57;
			this->label20->Text = L"MAZO:";
			// 
			// lboxG1
			// 
			this->lboxG1->BackColor = System::Drawing::Color::SteelBlue;
			this->lboxG1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lboxG1->FormattingEnabled = true;
			this->lboxG1->ItemHeight = 20;
			this->lboxG1->Location = System::Drawing::Point(25, 271);
			this->lboxG1->Name = L"lboxG1";
			this->lboxG1->Size = System::Drawing::Size(129, 304);
			this->lboxG1->TabIndex = 60;
			this->lboxG1->Tag = L"";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(200, 252);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(58, 16);
			this->label26->TabIndex = 59;
			this->label26->Text = L"|  G2  |";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(60, 252);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(58, 16);
			this->label27->TabIndex = 58;
			this->label27->Text = L"|  G1  |";
			// 
			// lboxG7
			// 
			this->lboxG7->BackColor = System::Drawing::Color::SteelBlue;
			this->lboxG7->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lboxG7->FormattingEnabled = true;
			this->lboxG7->ItemHeight = 20;
			this->lboxG7->Location = System::Drawing::Point(873, 271);
			this->lboxG7->Name = L"lboxG7";
			this->lboxG7->Size = System::Drawing::Size(130, 304);
			this->lboxG7->TabIndex = 68;
			this->lboxG7->Tag = L"";
			// 
			// lboxG6
			// 
			this->lboxG6->BackColor = System::Drawing::Color::SteelBlue;
			this->lboxG6->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lboxG6->FormattingEnabled = true;
			this->lboxG6->ItemHeight = 20;
			this->lboxG6->Location = System::Drawing::Point(724, 271);
			this->lboxG6->Name = L"lboxG6";
			this->lboxG6->Size = System::Drawing::Size(136, 304);
			this->lboxG6->TabIndex = 69;
			this->lboxG6->Tag = L"";
			// 
			// lboxG5
			// 
			this->lboxG5->BackColor = System::Drawing::Color::SteelBlue;
			this->lboxG5->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lboxG5->FormattingEnabled = true;
			this->lboxG5->ItemHeight = 20;
			this->lboxG5->Location = System::Drawing::Point(584, 271);
			this->lboxG5->Name = L"lboxG5";
			this->lboxG5->Size = System::Drawing::Size(129, 304);
			this->lboxG5->TabIndex = 70;
			this->lboxG5->Tag = L"";
			// 
			// lboxG4
			// 
			this->lboxG4->BackColor = System::Drawing::Color::SteelBlue;
			this->lboxG4->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lboxG4->FormattingEnabled = true;
			this->lboxG4->ItemHeight = 20;
			this->lboxG4->Location = System::Drawing::Point(445, 271);
			this->lboxG4->Name = L"lboxG4";
			this->lboxG4->Size = System::Drawing::Size(127, 304);
			this->lboxG4->TabIndex = 66;
			this->lboxG4->Tag = L"";
			// 
			// lboxG3
			// 
			this->lboxG3->BackColor = System::Drawing::Color::SteelBlue;
			this->lboxG3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lboxG3->FormattingEnabled = true;
			this->lboxG3->ItemHeight = 20;
			this->lboxG3->Location = System::Drawing::Point(304, 271);
			this->lboxG3->Name = L"lboxG3";
			this->lboxG3->Size = System::Drawing::Size(124, 304);
			this->lboxG3->TabIndex = 67;
			this->lboxG3->Tag = L"";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(910, 252);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(58, 16);
			this->label21->TabIndex = 65;
			this->label21->Text = L"|  G7  |";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(762, 252);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(58, 16);
			this->label22->TabIndex = 64;
			this->label22->Text = L"|  G6  |";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(624, 252);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(58, 16);
			this->label23->TabIndex = 63;
			this->label23->Text = L"|  G5  |";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(475, 252);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(58, 16);
			this->label24->TabIndex = 62;
			this->label24->Text = L"|  G4  |";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(334, 252);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(58, 16);
			this->label25->TabIndex = 61;
			this->label25->Text = L"|  G3  |";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(279, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(457, 18);
			this->label3->TabIndex = 71;
			this->label3->Text = L"Primero dar click en start luego con la tecla R  se reparten las cartas";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkRed;
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(873, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 219);
			this->button1->TabIndex = 72;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1021, 819);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lboxG7);
			this->Controls->Add(this->lboxG6);
			this->Controls->Add(this->lboxG5);
			this->Controls->Add(this->lboxG4);
			this->Controls->Add(this->lboxG3);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->lboxG1);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->lboxMazo);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->lboxG2);
			this->Controls->Add(this->txtPosicion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnIniciar);
			this->Controls->Add(this->btnTomar);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->btnMover);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SOLITARIO SIMPLE";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

		//MENSAJE el programa como se manejan con numeros aleatorios hay veces que nunca salen cartas en las cuales se puedan insertar(del mazo a los listbox por que salen muy grandes los numeros o muy pequeños) entonces lo recomendable es volver a abrilo ;d cosas de la vida ;v pero en general si funciona
		// 
		// 
		// el programa tiene un bug en cuando pide la posicion entre las lista tira el error pero cuando saca del mazo a una pila si lo mueve ;( lo que se recomienda es parar la compilacion y volver a hacerlo no puede resolver el error ;/ compasion no califique tan yuquitas ;s
		// 
		// 
		// encontre otro bug a ultima hora y es que cuando se saca del mazo se mueve a cualquiera de los otros grupos se muestran todas las cartas no encontre como arreglar eso ;((( 
		//
		//
		// 
		//estos metodos void sirven para llenar los listbox
		void LlenarListBoxtemp(List* list) {
			Node* temp = list->start;
			while (temp != nullptr)
			{
				lboxMazo->Items->Add(temp->fact);
				temp = temp->next;
			}
		}
		void LlenarListBox1(List* list) {
			Node* temp = list->start;
			while (temp != nullptr)
			{
				lboxG1->Items->Add(temp->fact);
				temp = temp->next;
			}
		}
		void LlenarListBox2(List* list) {
			Node* temp = list->start;
			while (temp != nullptr)
			{
				lboxG2->Items->Add(temp->fact);
				temp = temp->next;
			}
		}
		void LlenarListBox3(List* list) {
			Node* temp = list->start;
			while (temp != nullptr)
			{
				lboxG3->Items->Add(temp->fact);
				temp = temp->next;
			}
		}
		void LlenarListBox4(List* list) {
			Node* temp = list->start;
			while (temp != nullptr)
			{
				lboxG4->Items->Add(temp->fact);
				temp = temp->next;
			}
		}
		void LlenarListBox5(List* list) {
			Node* temp = list->start;
			while (temp != nullptr)
			{
				lboxG5->Items->Add(temp->fact);
				temp = temp->next;
			}
		}
		void LlenarListBox6(List* list) {
			Node* temp = list->start;
			while (temp != nullptr)
			{
				lboxG6->Items->Add(temp->fact);
				temp = temp->next;
			}
		}
		void LlenarListBox7(List* list) {
			Node* temp = list->start;
			while (temp != nullptr)
			{
				lboxG7->Items->Add(temp->fact);
				temp = temp->next;
			}
		}

		//estos otros metodos void sirven para imprimir LOS LISTBOX con una linea los que no se pueden ver 
		void Imprimir1(List* list) {
			Node* temp = list->start;
			for (int i = 0; i < list->accountant; i++)
			{
				if (i == list->accountant - 1)
				{
					lboxG1->Items->Add(temp->fact);
				}
				else
				{
					lboxG1->Items->Add("________");//estaba entre * pero se mira mejor con lines XD
					temp = temp->next;
				}
			}
		}

		void Imprimir2(List* list) {
			Node* temp = list->start;
			for (int i = 0; i < list->accountant; i++)
			{
				if (i == list->accountant - 1)
				{
					lboxG2->Items->Add(temp->fact);
				}
				else
				{
					lboxG2->Items->Add("________");
					temp = temp->next;
				}
			}
		}

		void Imprimir3(List* list) {
			Node* temp = list->start;
			for (int i = 0; i < list->accountant; i++)
			{
				if (i == list->accountant - 1)
				{
					lboxG3->Items->Add(temp->fact);
				}
				else
				{
					lboxG3->Items->Add("________");
					temp = temp->next;
				}
			}
		}
		void Imprimir4(List* list) {
			Node* temp = list->start;
			for (int i = 0; i < list->accountant; i++)
			{
				if (i == list->accountant - 1)
				{
					lboxG4->Items->Add(temp->fact);
				}
				else
				{
					lboxG4->Items->Add("________");
					temp = temp->next;
				}
			}
		}
		void Imprimir5(List* list) {
			Node* temp = list->start;
			for (int i = 0; i < list->accountant; i++)
			{
				if (i == list->accountant - 1)
				{
					lboxG5->Items->Add(temp->fact);
				}
				else
				{
					lboxG5->Items->Add("________");
					temp = temp->next;
				}
			}
		}
		void Imprimir6(List* list) {
			Node* temp = list->start;
			for (int i = 0; i < list->accountant; i++)
			{
				if (i == list->accountant - 1)
				{
					lboxG6->Items->Add(temp->fact);
				}
				else
				{
					lboxG6->Items->Add("________");
					temp = temp->next;
				}
			}
		}
		void Imprimir7(List* list) {
			Node* temp = list->start;
			for (int i = 0; i < list->accountant; i++)
			{
				if (i == list->accountant - 1)
				{
					lboxG7->Items->Add(temp->fact);
				}
				else
				{
					lboxG7->Items->Add("________");
					temp = temp->next;
				}
			}
		}
		void Imprimirtemp(List* list) {//para un temporal pero no es el temp originalxd
			Node* temp = list->start;
			for (int i = 0; i < list->accountant; i++)
			{
				if (i == list->accountant - 1)
				{
					lboxMazo->Items->Add(temp->fact);
				}
				else
				{
					lboxMazo->Items->Add("________");
					temp = temp->next;
				}
			}
		}

		//esto del evento keydown lo saque de aquihttps://www.youtube.com/watch?v=dFDi1MDQN2U que se parece a C# ;s
		//esta pagina como me a ayudohttps://www.codeproject.com/Messages/2652900/Re-Event-on-KeyPress.aspx
		
	public: Void MyForm_KeyDown(Object^ sender, KeyEventArgs^ e) {
		//esta propiedad del keydown sirve para cuando se le de click al boton de inicio y el usuario presione la tecla R que haga que se repartan las cartas
		if (e->KeyCode == Keys::R)//vamo a ver si sirve ;/             *si funciono *xd
		{
			baraja->Filldeck();
			baraja->Fillstackdeck();

			baraja->Filldeck1();
			Imprimir1(baraja->deck1);

			baraja->Filldeck2();
			Imprimir2(baraja->deck2);

			baraja->Filldeck3();
			Imprimir3(baraja->deck3);

			baraja->Filldeck4();
			Imprimir4(baraja->deck4);

			baraja->Filldeck5();
			Imprimir5(baraja->deck5);

			baraja->Filldeck6();
			Imprimir6(baraja->deck6);

			baraja->Filldeck7();
			Imprimir7(baraja->deck7);

			Imprimirtemp(baraja->deck);
		}

	}
		  
private: Void btnIniciar_Click(Object^ sender, EventArgs^ e) {
	

}
private: Void MyForm_KeyPress(Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

}
private: Void btnTomar_Click(Object^ sender, EventArgs^ e) {
	game->takedeck(baraja->deck);
	lboxMazo->Items->Clear();
	Imprimirtemp(baraja->deck);
}
private: Void btnMover_Click(Object^ sender, EventArgs^ e) {

		
	if (String::IsNullOrEmpty(txtPosicion->Text))//para validar 
	{
		MessageBox::Show("Ingrese bien la posición >;v", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//Form::Close();
	}
	int position = Convert::ToInt32(txtPosicion->Text); //la pos que ingrese el usuario se convierta en un int para su mejor uso
	if (rbtnMazo->Checked)//ya lo habia usado en el lab de los poligonos reciclando codigos lol
	{	game->MovedeckToAux(baraja->deck);
		lboxMazo->Items->Clear();
		Imprimirtemp(baraja->deck);
	   
	}
	else if (rbtnG1O->Checked) {//basicamente lo que hace es que se verifica si se puede mover la carta 
		game->Movestart(baraja->deck1, position);
		lboxG1->Items->Clear();
		Imprimir1(baraja->deck1);
	}
	else if (rbtnG2O->Checked) {
		game->Movestart(baraja->deck2, position);
		lboxG2->Items->Clear();
		Imprimir2(baraja->deck2);
		
	}
	else if (rbtnG3O->Checked) {
		game->Movestart(baraja->deck3, position);
		lboxG3->Items->Clear();
		Imprimir3(baraja->deck3);
		
	}
	else if (rbtnG4O->Checked) {
		game->Movestart(baraja->deck4, position);
		lboxG4->Items->Clear();
		Imprimir4(baraja->deck4);
		
	}
	else if (rbtnG5O->Checked) {
		game->Movestart(baraja->deck5, position);
		lboxG5->Items->Clear();
		Imprimir5(baraja->deck5);
	
	}
	else if (rbtnG6O->Checked) {
		game->Movestart(baraja->deck6, position);
		lboxG6->Items->Clear();
		Imprimir6(baraja->deck6);

	}
	else if (rbtnG7O->Checked) {
		game->Movestart(baraja->deck7, position);
		lboxG7->Items->Clear();
		Imprimir7(baraja->deck7);

	}


	if (rbtnG1D->Checked) {//mandamos a llamar al metodo validmove y moveend para verificar si si se puede y llenar el listbox
		game->Validmove(baraja->deck1);
		game->Moveend(baraja->deck1);
		lboxG1->Items->Clear();
		LlenarListBox1(baraja->deck1);
	}
	else if (rbtnG2D->Checked) {
		game->Validmove(baraja->deck2);
		game->Moveend(baraja->deck2);
		lboxG2->Items->Clear();
		LlenarListBox2(baraja->deck2);
	}
	else if (rbtnG3D->Checked) {
		game->Validmove(baraja->deck3);
		game->Moveend(baraja->deck3);
		lboxG3->Items->Clear();
		LlenarListBox3(baraja->deck3);
	}
	else if (rbtnG4D->Checked) {
		game->Validmove(baraja->deck4);
		game->Moveend(baraja->deck4);
		lboxG4->Items->Clear();
		LlenarListBox4(baraja->deck4);
	}
	else if (rbtnG5D->Checked) {
		game->Validmove(baraja->deck5);
		game->Moveend(baraja->deck5);
		lboxG5->Items->Clear();
		LlenarListBox5(baraja->deck5);
	}
	else if (rbtnG6D->Checked) {
		game->Validmove(baraja->deck6);
		game->Moveend(baraja->deck6);
		lboxG6->Items->Clear();
		LlenarListBox6(baraja->deck6);
	}
	else if (rbtnG7D->Checked) {
		game->Validmove(baraja->deck7);
		game->Moveend(baraja->deck7);
		lboxG7->Items->Clear();
		LlenarListBox7(baraja->deck7);
	}
	    //TIPScon alt mas click izquierdo se editan cuando hay mas de un mismo elemento 
		game->Winner(baraja->deck1);
		game->Winner(baraja->deck2);
		game->Winner(baraja->deck3);
		game->Winner(baraja->deck4);
		game->Winner(baraja->deck5);
		game->Winner(baraja->deck6);
		game->Winner(baraja->deck7);
}		
private: Void button1_Click(Object^ sender, EventArgs^ e) {
	this->Close();
}
};
}
