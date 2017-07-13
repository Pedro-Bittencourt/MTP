#pragma once

namespace Exploratorio {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  ch;
	private: System::Windows::Forms::GroupBox^  ch2;
	private: System::Windows::Forms::RadioButton^  mortoch;
	private: System::Windows::Forms::RadioButton^  vivoch;








	private: System::Windows::Forms::ComboBox^  combo;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Label^  Obs;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ch = (gcnew System::Windows::Forms::CheckBox());
			this->ch2 = (gcnew System::Windows::Forms::GroupBox());
			this->mortoch = (gcnew System::Windows::Forms::RadioButton());
			this->vivoch = (gcnew System::Windows::Forms::RadioButton());
			this->combo = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->Obs = (gcnew System::Windows::Forms::Label());
			this->ch2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(295, 395);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Dive";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// ch
			// 
			this->ch->AutoSize = true;
			this->ch->Location = System::Drawing::Point(90, 78);
			this->ch->Name = L"ch";
			this->ch->Size = System::Drawing::Size(49, 17);
			this->ch->TabIndex = 3;
			this->ch->Text = L"teste";
			this->ch->UseVisualStyleBackColor = true;
			this->ch->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// ch2
			// 
			this->ch2->Controls->Add(this->mortoch);
			this->ch2->Controls->Add(this->vivoch);
			this->ch2->Location = System::Drawing::Point(589, 288);
			this->ch2->Name = L"ch2";
			this->ch2->Size = System::Drawing::Size(200, 100);
			this->ch2->TabIndex = 4;
			this->ch2->TabStop = false;
			this->ch2->Text = L"checked";
			// 
			// mortoch
			// 
			this->mortoch->AutoSize = true;
			this->mortoch->Location = System::Drawing::Point(41, 64);
			this->mortoch->Name = L"mortoch";
			this->mortoch->Size = System::Drawing::Size(51, 17);
			this->mortoch->TabIndex = 1;
			this->mortoch->TabStop = true;
			this->mortoch->Text = L"morto";
			this->mortoch->UseVisualStyleBackColor = true;
			// 
			// vivoch
			// 
			this->vivoch->AutoSize = true;
			this->vivoch->Location = System::Drawing::Point(41, 27);
			this->vivoch->Name = L"vivoch";
			this->vivoch->Size = System::Drawing::Size(45, 17);
			this->vivoch->TabIndex = 0;
			this->vivoch->TabStop = true;
			this->vivoch->Text = L"vivo";
			this->vivoch->UseVisualStyleBackColor = true;
			// 
			// combo
			// 
			this->combo->FormattingEnabled = true;
			this->combo->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Pendúnculo cerebral", L"Forame interventricular", 
				L"Cauda Equina", L"Emancébulo Meridional", L"Verme do Cerebelo", L"Coacina Lipidial", L"Nervo Isquiático"});
			this->combo->Location = System::Drawing::Point(336, 229);
			this->combo->Name = L"combo";
			this->combo->Size = System::Drawing::Size(121, 21);
			this->combo->TabIndex = 6;
			this->combo->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(533, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(356, 200);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(75, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 29);
			this->label2->TabIndex = 8;
			this->label2->Text = L"fuck the system";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(100, 319);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"kbhgyjhb";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(112, 456);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(524, 23);
			this->progressBar1->TabIndex = 10;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(327, 152);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(155, 45);
			this->trackBar1->TabIndex = 11;
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(336, 62);
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(146, 45);
			this->trackBar2->TabIndex = 12;
			// 
			// Obs
			// 
			this->Obs->AutoSize = true;
			this->Obs->Location = System::Drawing::Point(47, 167);
			this->Obs->Name = L"Obs";
			this->Obs->Size = System::Drawing::Size(53, 13);
			this->Obs->TabIndex = 13;
			this->Obs->Text = L"Texto fixo";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(947, 491);
			this->Controls->Add(this->Obs);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->combo);
			this->Controls->Add(this->ch2);
			this->Controls->Add(this->ch);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ch2->ResumeLayout(false);
			this->ch2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ msg = "Palavras aleatorias ,\n ";
				 if(ch->Checked)
					 msg+=" Outra coisa aleatoria , \n ";
				  if(mortoch->Checked)
					   msg+="  Com : Morto selecionado\n";
				if(vivoch->Checked)
					 msg+=" Com : vivo selecionado\n";
				msg+= combo->SelectedItem + ", ";
				msg+= Obs->Text;
				msg+=" Ultimo texto \n";
				 label1->Text=msg;

			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void webBrowser1_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

