#pragma once
#include "Graph.h"

namespace firstGUITrial {

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
		Form^ obj;
		Graph* gg;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		MyForm(Form^ obj1, Graph* myg)
		{
			gg = myg;
			obj = obj1;
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
	private:bool j = true;
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::Button^ button62;
	private: System::Windows::Forms::Button^ button63;
	private: System::Windows::Forms::Button^ button64;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button65;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(52, 50);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(419, 48);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(52, 50);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(361, 48);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(52, 50);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(303, 48);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(52, 50);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(245, 48);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(52, 50);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(187, 48);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(52, 50);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(129, 48);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(52, 50);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(71, 48);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(52, 50);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(71, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(52, 50);
			this->button2->TabIndex = 16;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(129, 104);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(52, 50);
			this->button10->TabIndex = 15;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(187, 104);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(52, 50);
			this->button11->TabIndex = 14;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(245, 104);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(52, 50);
			this->button12->TabIndex = 13;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(303, 104);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(52, 50);
			this->button13->TabIndex = 12;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(361, 104);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(52, 50);
			this->button14->TabIndex = 11;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(419, 104);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(52, 50);
			this->button15->TabIndex = 10;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(13, 104);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(52, 50);
			this->button16->TabIndex = 9;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(71, 160);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(52, 50);
			this->button17->TabIndex = 24;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(129, 160);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(52, 50);
			this->button18->TabIndex = 23;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(187, 160);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(52, 50);
			this->button19->TabIndex = 22;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(245, 160);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(52, 50);
			this->button20->TabIndex = 21;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(303, 160);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(52, 50);
			this->button21->TabIndex = 20;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(361, 160);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(52, 50);
			this->button22->TabIndex = 19;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(419, 160);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(52, 50);
			this->button23->TabIndex = 18;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(13, 160);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(52, 50);
			this->button24->TabIndex = 17;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(71, 216);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(52, 50);
			this->button25->TabIndex = 32;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(129, 216);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(52, 50);
			this->button26->TabIndex = 31;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(187, 216);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(52, 50);
			this->button27->TabIndex = 30;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(245, 216);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(52, 50);
			this->button28->TabIndex = 29;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(303, 216);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(52, 50);
			this->button29->TabIndex = 28;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(361, 216);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(52, 50);
			this->button30->TabIndex = 27;
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(419, 216);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(52, 50);
			this->button31->TabIndex = 26;
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(13, 216);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(52, 50);
			this->button32->TabIndex = 25;
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(71, 272);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(52, 50);
			this->button33->TabIndex = 40;
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(129, 272);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(52, 50);
			this->button34->TabIndex = 39;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(187, 272);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(52, 50);
			this->button35->TabIndex = 38;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(245, 272);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(52, 50);
			this->button36->TabIndex = 37;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(303, 272);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(52, 50);
			this->button37->TabIndex = 36;
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(361, 272);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(52, 50);
			this->button38->TabIndex = 35;
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(419, 272);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(52, 50);
			this->button39->TabIndex = 34;
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(13, 272);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(52, 50);
			this->button40->TabIndex = 33;
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(71, 328);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(52, 50);
			this->button41->TabIndex = 48;
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(129, 328);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(52, 50);
			this->button42->TabIndex = 47;
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(187, 328);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(52, 50);
			this->button43->TabIndex = 46;
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(245, 328);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(52, 50);
			this->button44->TabIndex = 45;
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(303, 328);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(52, 50);
			this->button45->TabIndex = 44;
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(361, 328);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(52, 50);
			this->button46->TabIndex = 43;
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(419, 328);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(52, 50);
			this->button47->TabIndex = 42;
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(13, 328);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(52, 50);
			this->button48->TabIndex = 41;
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(71, 384);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(52, 50);
			this->button49->TabIndex = 56;
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(129, 384);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(52, 50);
			this->button50->TabIndex = 55;
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(187, 384);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(52, 50);
			this->button51->TabIndex = 54;
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(245, 384);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(52, 50);
			this->button52->TabIndex = 53;
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(303, 384);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(52, 50);
			this->button53->TabIndex = 52;
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(361, 384);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(52, 50);
			this->button54->TabIndex = 51;
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(419, 384);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(52, 50);
			this->button55->TabIndex = 50;
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(13, 384);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(52, 50);
			this->button56->TabIndex = 49;
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(71, 440);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(52, 50);
			this->button57->TabIndex = 64;
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(129, 440);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(52, 50);
			this->button58->TabIndex = 63;
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(187, 440);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(52, 50);
			this->button59->TabIndex = 62;
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(245, 440);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(52, 50);
			this->button60->TabIndex = 61;
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(303, 440);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(52, 50);
			this->button61->TabIndex = 60;
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(361, 440);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(52, 50);
			this->button62->TabIndex = 59;
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(419, 440);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(52, 50);
			this->button63->TabIndex = 58;
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(13, 440);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(52, 50);
			this->button64->TabIndex = 57;
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.8F));
			this->label1->Location = System::Drawing::Point(106, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 31);
			this->label1->TabIndex = 65;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button65
			// 
			this->button65->Location = System::Drawing::Point(419, 17);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(129, 25);
			this->button65->TabIndex = 66;
			this->button65->Text = L"Return to Start";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Visible = false;
			this->button65->Click += gcnew System::EventHandler(this, &MyForm::button65_Click);
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(560, 521);
			this->Controls->Add(this->button65);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button62);
			this->Controls->Add(this->button63);
			this->Controls->Add(this->button64);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39); 
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		};


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	//	Button^ b = (Button^)sender;
		//int i = b->TabIndex / 5;

		Button^ b = (Button^)sender;
		int i = b->TabIndex / 5;
		int tabi = b->TabIndex;
		int x = gg->getNodeValue(tabi - 1);
		bool mine = gg->checkBomb(tabi - 1);
		//sender->Text = "1";

		if (j) {
			if (mine) {
				b->Text = "X";
				label1->Text = "Game Over ,you are loser";
				button65->Visible = true;
				//Application::Exit();
				j = false;
			}
			else {
				b->Text = gg->getNodeValue(tabi).ToString();
				button65->Visible = true;
			}







			//sender->Text = "1";
			/*
			if (j) {
				if (i % 3 == 0 && i % 2 == 0) {
					b->Text = "X";
					label1->Text = "Game Over ,you are loser";
					button65->Visible = true;
					//Application::Exit();
					j = false;
				}
				else if (i % 2 == 0)b->Text = "1";

				else  b->Text = "2";
			}*/


		}
	}


#pragma endregion
private: System::Void button65_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	obj->Show();

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}