#pragma once







namespace mainGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainGUI
	/// </summary>
	public ref class mainGUI : public System::Windows::Forms::Form
	{
	public:
		int igajiPokokPerBulan = 0; 
		int idayaBeli = 0;
		//harga Perumahan
		const int iHargaPerumahanATipe75 = 99000000;
		const int iHargaPerumahanATipe150 = 150000000;
		const int iHargaPerumahanATipe250 = 250000000;
		const int iHargaPerumahanATipe300 = 300000000;
		const int iHargaPerumahanATipe500 = 500000000;
	public: System::Windows::Forms::ListBox^ listBox_potensiProduk;
		  
		

		  
		mainGUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
	private: System::Windows::Forms::Label^ label_potensi_produk;
	public:

	public:
	private: System::Windows::Forms::Label^ label_titikDua3;

	private:

		   

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBox_gajiPokokPerBulan;
	protected:

	private: System::Windows::Forms::Label^ label_titikDua;
	private: System::Windows::Forms::Label^ label_gajiPokokPerBulan;
	public: System::Windows::Forms::TextBox^ textBox_showDayaBeli;
	private:
	private: System::Windows::Forms::Label^ label_titikDua2;
	public:
	private: System::Windows::Forms::Label^ label_dayaBeli;
	private: System::Windows::Forms::Button^ button_apply;

	private:
	protected:

	protected:



	protected:

	protected:

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
			this->textBox_gajiPokokPerBulan = (gcnew System::Windows::Forms::TextBox());
			this->label_titikDua = (gcnew System::Windows::Forms::Label());
			this->label_gajiPokokPerBulan = (gcnew System::Windows::Forms::Label());
			this->textBox_showDayaBeli = (gcnew System::Windows::Forms::TextBox());
			this->label_titikDua2 = (gcnew System::Windows::Forms::Label());
			this->label_dayaBeli = (gcnew System::Windows::Forms::Label());
			this->button_apply = (gcnew System::Windows::Forms::Button());
			this->label_potensi_produk = (gcnew System::Windows::Forms::Label());
			this->label_titikDua3 = (gcnew System::Windows::Forms::Label());
			this->listBox_potensiProduk = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// textBox_gajiPokokPerBulan
			// 
			this->textBox_gajiPokokPerBulan->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->textBox_gajiPokokPerBulan->Location = System::Drawing::Point(177, 30);
			this->textBox_gajiPokokPerBulan->Name = L"textBox_gajiPokokPerBulan";
			this->textBox_gajiPokokPerBulan->ShortcutsEnabled = false;
			this->textBox_gajiPokokPerBulan->Size = System::Drawing::Size(334, 26);
			this->textBox_gajiPokokPerBulan->TabIndex = 2;
			this->textBox_gajiPokokPerBulan->TextChanged += gcnew System::EventHandler(this, &mainGUI::textBox_gajiPokokPerBulan_TextChanged);
			// 
			// label_titikDua
			// 
			this->label_titikDua->AutoSize = true;
			this->label_titikDua->Location = System::Drawing::Point(158, 33);
			this->label_titikDua->Name = L"label_titikDua";
			this->label_titikDua->Size = System::Drawing::Size(13, 20);
			this->label_titikDua->TabIndex = 3;
			this->label_titikDua->Text = L":";
			// 
			// label_gajiPokokPerBulan
			// 
			this->label_gajiPokokPerBulan->AutoSize = true;
			this->label_gajiPokokPerBulan->Location = System::Drawing::Point(25, 32);
			this->label_gajiPokokPerBulan->Name = L"label_gajiPokokPerBulan";
			this->label_gajiPokokPerBulan->Size = System::Drawing::Size(127, 20);
			this->label_gajiPokokPerBulan->TabIndex = 4;
			this->label_gajiPokokPerBulan->Text = L"Gaji pokok/bulan";
			// 
			// textBox_showDayaBeli
			// 
			this->textBox_showDayaBeli->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->textBox_showDayaBeli->Location = System::Drawing::Point(177, 145);
			this->textBox_showDayaBeli->Name = L"textBox_showDayaBeli";
			this->textBox_showDayaBeli->ReadOnly = true;
			this->textBox_showDayaBeli->ShortcutsEnabled = false;
			this->textBox_showDayaBeli->Size = System::Drawing::Size(334, 26);
			this->textBox_showDayaBeli->TabIndex = 5;
			// 
			// label_titikDua2
			// 
			this->label_titikDua2->AutoSize = true;
			this->label_titikDua2->Location = System::Drawing::Point(158, 148);
			this->label_titikDua2->Name = L"label_titikDua2";
			this->label_titikDua2->Size = System::Drawing::Size(13, 20);
			this->label_titikDua2->TabIndex = 6;
			this->label_titikDua2->Text = L":";
			// 
			// label_dayaBeli
			// 
			this->label_dayaBeli->AutoSize = true;
			this->label_dayaBeli->Location = System::Drawing::Point(25, 148);
			this->label_dayaBeli->Name = L"label_dayaBeli";
			this->label_dayaBeli->Size = System::Drawing::Size(74, 20);
			this->label_dayaBeli->TabIndex = 7;
			this->label_dayaBeli->Text = L"Daya beli";
			// 
			// button_apply
			// 
			this->button_apply->Location = System::Drawing::Point(177, 62);
			this->button_apply->Name = L"button_apply";
			this->button_apply->Size = System::Drawing::Size(125, 40);
			this->button_apply->TabIndex = 8;
			this->button_apply->Text = L"Apply";
			this->button_apply->UseVisualStyleBackColor = true;
			this->button_apply->Click += gcnew System::EventHandler(this, &mainGUI::button_apply_Click);
			// 
			// label_potensi_produk
			// 
			this->label_potensi_produk->AutoSize = true;
			this->label_potensi_produk->Location = System::Drawing::Point(25, 177);
			this->label_potensi_produk->Name = L"label_potensi_produk";
			this->label_potensi_produk->Size = System::Drawing::Size(115, 20);
			this->label_potensi_produk->TabIndex = 9;
			this->label_potensi_produk->Text = L"Potensi produk";
			// 
			// label_titikDua3
			// 
			this->label_titikDua3->AutoSize = true;
			this->label_titikDua3->Location = System::Drawing::Point(158, 177);
			this->label_titikDua3->Name = L"label_titikDua3";
			this->label_titikDua3->Size = System::Drawing::Size(13, 20);
			this->label_titikDua3->TabIndex = 10;
			this->label_titikDua3->Text = L":";
			// 
			// listBox_potensiProduk
			// 
			this->listBox_potensiProduk->FormattingEnabled = true;
			this->listBox_potensiProduk->ItemHeight = 20;
			this->listBox_potensiProduk->Location = System::Drawing::Point(178, 178);
			this->listBox_potensiProduk->Name = L"listBox_potensiProduk";
			this->listBox_potensiProduk->Size = System::Drawing::Size(333, 104);
			this->listBox_potensiProduk->Sorted = true;
			this->listBox_potensiProduk->TabIndex = 11;
			// 
			// mainGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(582, 298);
			this->Controls->Add(this->listBox_potensiProduk);
			this->Controls->Add(this->label_titikDua3);
			this->Controls->Add(this->label_potensi_produk);
			this->Controls->Add(this->button_apply);
			this->Controls->Add(this->label_dayaBeli);
			this->Controls->Add(this->label_titikDua2);
			this->Controls->Add(this->textBox_showDayaBeli);
			this->Controls->Add(this->label_gajiPokokPerBulan);
			this->Controls->Add(this->label_titikDua);
			this->Controls->Add(this->textBox_gajiPokokPerBulan);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"mainGUI";
			this->Text = L"Panda-Property";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	public: System::Void textBox_gajiPokokPerBulan_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	private: System::Void button_apply_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		mainGUI::igajiPokokPerBulan = int::Parse(textBox_gajiPokokPerBulan->Text); // string to int
		mainGUI::idayaBeli = mainGUI::igajiPokokPerBulan * 57;
		System::String^ sdayaBeli = mainGUI::idayaBeli.ToString(); // int to string
		textBox_showDayaBeli->Text = sdayaBeli;
		int hargaPerumahanATipe150 = 150000000;
		/*Perumahan A tipe 150
		Perumahan A tipe 75
		Perumahan B tipe 150
		Perumahan B tipe 200
		Perumahan C tipe 300
		Perumahan C tipe 500*/
		listBox_potensiProduk->Items->Clear();
		/*L"PerumahanATipe150", L"PerumahanATipe250",
				L"PerumahanATipe300", L"PerumahanATipe500", L"PerumahanATipe75"*/
		if (mainGUI::idayaBeli > mainGUI::iHargaPerumahanATipe75)
		{
			listBox_potensiProduk->Items->Add("perumahanATipe75");
		}
		if (mainGUI::idayaBeli > mainGUI::iHargaPerumahanATipe150)
		{
			listBox_potensiProduk->Items->Add("PerumahanATipe150");
		}
		if (mainGUI::idayaBeli > mainGUI::iHargaPerumahanATipe250)
		{
			listBox_potensiProduk->Items->Add("PerumahanATipe250");
		}
		if (mainGUI::idayaBeli > mainGUI::iHargaPerumahanATipe300)
		{
			listBox_potensiProduk->Items->Add("PerumahanATipe300");
		}
		if (mainGUI::idayaBeli > mainGUI::iHargaPerumahanATipe500)
		{
			listBox_potensiProduk->Items->Add("PerumahanATipe500");
		}
	}
};
}
