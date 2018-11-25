#pragma once
#include <gvc.h>
namespace TURING {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
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

	protected:

	private: System::Windows::Forms::TextBox^  textBox1;








	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label8;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;







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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(32, 37);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 21);
			this->textBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(176, 212);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 60);
			this->button2->TabIndex = 10;
			this->button2->Text = L"RESET";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(29, 103);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Stan koñcowy";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(173, 21);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Tabela";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(176, 38);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 126);
			this->textBox3->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Stan pocz¹tkowy";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(32, 80);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Iloœæ Stanów";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(32, 121);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 311);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Taœma";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(29, 327);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(244, 20);
			this->textBox2->TabIndex = 21;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(623, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(9723, 10009);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(29, 170);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(41, 17);
			this->checkBox1->TabIndex = 23;
			this->checkBox1->Text = L"dot";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(29, 194);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(53, 17);
			this->checkBox2->TabIndex = 24;
			this->checkBox2->Text = L"neato";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(29, 218);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(46, 17);
			this->checkBox3->TabIndex = 25;
			this->checkBox3->Text = L"sfdp";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(29, 241);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(51, 17);
			this->checkBox5->TabIndex = 27;
			this->checkBox5->Text = L"twopi";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(29, 264);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(49, 17);
			this->checkBox6->TabIndex = 28;
			this->checkBox6->Text = L"circo";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox6_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Uk³ad";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(362, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Œcie¿ka";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(362, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Przejœcia";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(247, 60);
			this->button1->TabIndex = 32;
			this->button1->Text = L"SYMULUJ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1383, 635);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Turing";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ImageWriteToBinaryFile()
		{
			// First open the binary file we want to write to binary data.
			System::IO::FileStream^ binaryStream = System::IO::File::Open("../TURING/rysunek.bin",
				System::IO::FileMode::Create);
			System::IO::BinaryWriter^ writer = gcnew  System::IO::BinaryWriter(binaryStream);


			// write some data other than images.
			writer->Write("String data"); // string data
			writer->Write((int)(100)); // integer data

									   // Read the image file you want to save to as binary data
			System::IO::FileStream^ imageStream = System::IO::File::OpenRead("../TURING/rysunek.png");
			//System::IO::FileStream^ imageStream = System::IO::File::OpenRead("c:/Users/lenovo_T510/Desktop/PODSTAWYINFORMATYKI/DAS/CppWinForm2/CppWinForm2/rysunek.png");
			// IMPORTANT: write the length of the image data to binary stream so that we can detect the size
			// of the image when we will read later.
			writer->Write(imageStream->Length);

			// Read the data from the image-stream as byte array
			array<unsigned char>^ imageData = gcnew array<unsigned char>(imageStream->Length);
			imageStream->Read(imageData, 0, imageData->Length);

			// write the image data to binary stream
			writer->Write(imageData);

			imageStream->Close();
			binaryStream->Close();
		}
		void ImageReadFromBinaryFile()
		{
			// First open the binary file we want to read binary data.
			System::IO::FileStream^ stream = System::IO::File::Open("../TURING/rysunek.bin",
				System::IO::FileMode::Open);
			System::IO::BinaryReader^ reader = gcnew  System::IO::BinaryReader(stream);
			// read some data other than images which we wrote in ImageWrite method.
			System::String^ sData = reader->ReadString(); // reading string
			int iData = reader->ReadInt32();
			// Read the image image. Note that we wrote 8 bytes lenght integer which is 
			// the size of the image data we wrote in as binary.
			unsigned __int64 imageDataLength = reader->ReadUInt64();
			array<unsigned char>^ imageData = reader->ReadBytes(imageDataLength);
			// Create a memory stream of the bytes we just read from stream
			System::IO::MemoryStream^ imageStream = gcnew System::IO::MemoryStream(imageData);

			// Use FromStream static method to get the image from the memory stream.
			Image^ img = Image::FromStream(imageStream);

			// Save the images just as a proof
			stream->Close();

			// we are setting the image as background of the form -- as a proof to see alive.
			pictureBox1->Image = img;
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		this->textBox1->Text = "";
		this->textBox4->Text = "";
		this->textBox5->Text = "";
		this->textBox3->Text = "";
		this->textBox2->Text = "";
		pictureBox1->Image = nullptr;
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		label5->Text = "Œcie¿ka";
		label6->Text = "Status";
	}
			 void createedges(Agraph_t *g, Agnode_t *q0, Agnode_t *q1, char* wart) {
				 Agedge_t *x = agedge(g, q0, q1, 0, 1);
				 agsafeset(x, "label", wart, "");
			 }
			 Agraph_t *g;
			 GVC_t *gvc = gvContext();
			 array<int, 2> ^ tablica = gcnew array<int, 2>(100, 100);
			 array<char, 2> ^ znak = gcnew array<char, 2>(100, 100);
			 array<char, 2> ^ dir = gcnew array<char, 2>(100, 100);
			 void generuj() {
				 int pocz = Convert::ToInt32(textBox4->Text);
				 int F = Convert::ToInt32(textBox5->Text);
				 //int tablica[100][100];
				 g = agopen("g", Agdirected, 0);
				 int n = Convert::ToInt32(textBox1->Text);
				 Agnode_t *q[100];
				 for (int i = 0; i < n; i++) {
					 char stan[256] = "";
					 strcpy(stan, "q");
					 char tmp[15];
					 sprintf(tmp, "%d", i);
					 strcat(stan, tmp);
					 q[i] = agnode(g, stan, 1);
					 if (i == pocz) {
						 agsafeset(q[i], "style", "rounded,filled", "");
						 agsafeset(q[i], "fillcolor", "yellow", "");
						 agsafeset(q[i], "shape", "doubleoctagon", "");
					 }
					 else if (i == F) {
						 agsafeset(q[i], "style", "rounded,filled", "");
						 agsafeset(q[i], "fillcolor", "green", "");
						 agsafeset(q[i], "shape", "doubleoctagon", "");
					 }
					 else {
						 agsafeset(q[i], "style", "rounded,filled", "");
						 agsafeset(q[i], "fillcolor", "white", "");
						 agsafeset(q[i], "shape", "diamond", "");
					 }
				 }
				 String ^ tekst = textBox3->Text;
				 char buf[500];
				 sprintf(buf, "%s", tekst);
				 int total_line = 0;
				 char *str;
				 for (str = buf; *str; ++str) {
					 if (*str == '\n')
						 ++total_line;
				 }
				 String^ delimStr = " ,.:\()=\t\n";
				 array<Char>^ delimiter = delimStr->ToCharArray();

				 array<String^>^ words;
				 words = tekst->Split(delimiter);
				 int x, y;
				 for (int i = 0; i < total_line; i++) {
					 char alfa[100];
					 sprintf(alfa, "%s", words[2 + i * 9]+ "="+words[6 + i * 9]+ words[7 + i * 9]);
					 x = Convert::ToInt32(words[1 + i * 9]);
					 y = Convert::ToInt32(words[5 + i * 9]);
					 int tmp = alfa[0] - '0';
					 tablica[x, tmp] = y;
					 znak[x, tmp] = alfa[2];
					 dir[x, tmp] = alfa[3];
					createedges(g, q[x], q[y], alfa);
				 }
			 }

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox1->Checked) {
			checkBox2->Checked = false;
			checkBox3->Checked = false;
			checkBox5->Checked = false;
			checkBox6->Checked = false;
			generuj();
			gvLayout(gvc, g, "dot");
			gvRenderFilename(gvc, g, "png", "rysunek.png");
			gvFreeLayout(gvc, g);
			agclose(g);
			ImageWriteToBinaryFile();
			ImageReadFromBinaryFile();
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox2->Checked) {
			checkBox1->Checked = false;
			checkBox3->Checked = false;
			checkBox5->Checked = false;
			checkBox6->Checked = false;
			generuj();
			gvLayout(gvc, g, "neato");
			gvRenderFilename(gvc, g, "png", "rysunek.png");
			gvFreeLayout(gvc, g);
			agclose(g);
			ImageWriteToBinaryFile();
			ImageReadFromBinaryFile();
		}
	}

	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox3->Checked) {
			checkBox1->Checked = false;
			checkBox2->Checked = false;
			checkBox5->Checked = false;
			checkBox6->Checked = false;
			generuj();
			gvLayout(gvc, g, "sfdp");
			gvRenderFilename(gvc, g, "png", "rysunek.png");
			gvFreeLayout(gvc, g);
			agclose(g);
			ImageWriteToBinaryFile();
			ImageReadFromBinaryFile();
		}
	}
	private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox5->Checked) {
			checkBox1->Checked = false;
			checkBox3->Checked = false;
			checkBox2->Checked = false;
			checkBox6->Checked = false;
			generuj();
			gvLayout(gvc, g, "twopi");
			gvRenderFilename(gvc, g, "png", "rysunek.png");
			gvFreeLayout(gvc, g);
			agclose(g);
			ImageWriteToBinaryFile();
			ImageReadFromBinaryFile();
		}
	}
	private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox6->Checked) {
			checkBox1->Checked = false;
			checkBox3->Checked = false;
			checkBox5->Checked = false;
			checkBox2->Checked = false;
			generuj();
			gvLayout(gvc, g, "circo");
			gvRenderFilename(gvc, g, "png", "rysunek.png");
			gvFreeLayout(gvc, g);
			agclose(g);
			ImageWriteToBinaryFile();
			ImageReadFromBinaryFile();
		}
	}

	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		/*if ((textBox4->Text == "") | (textBox1->Text == "") | (textBox5->Text == "") | (textBox3->Text == "")) {
		}
		else
		{
			int ptr=0;
			String ^sledz;
			int pocz = Convert::ToInt32(textBox4->Text);
			int F = Convert::ToInt32(textBox5->Text);
			String ^ tasmatmp = textBox2->Text;
			char wej[500];
			int dlug = tasmatmp->Length;
			int next, stan = pocz;
			sprintf(wej, "%s", tasmatmp);
			while(stan!=F)
			{
				int tmp = wej[ptr] - '0';
				//sledz += Convert::ToString(wej);
				next = tablica[stan, tmp];
				wej[ptr]=znak[stan, tmp];
				if (dir[stan, tmp] == 'L')
					ptr--;
				else
					ptr++;
				stan = next;
			}
			//sledz += Convert::ToString("q" + stan);
			/*if (stan == F) {
				//MessageBox::Show("ZAAKCEPTOWANO " + sledz);
				label6->Text = "ZAAKCEPTOWANO";
			}
			else {
				//MessageBox::Show("NIEZAAKCEPTOWANO " + sledz);
				label6->Text = "NIEZAAKCEPTOWANO";
			}
			label5->Text = Convert::ToString(wej);
		}*/
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		int ptr = 0, licznik = 1;
		String ^sledz;
		int pocz = Convert::ToInt32(textBox4->Text);
		int F = Convert::ToInt32(textBox5->Text);
		String ^ tasmatmp = textBox2->Text;
		String ^ msg;
		char wej[500];
		int dlug = tasmatmp->Length;
		int next, stan = pocz;
		sprintf(wej, "%s", tasmatmp);
		wej[dlug] = 'B';
		String^ sCertificate;
		String^ tmpa;
		String^ tmp1;
		while (next != F)
		{
			int tmp = wej[ptr] - '0';
			next = tablica[stan, tmp];
			msg += Convert::ToString(licznik) + ": ";
			sCertificate = gcnew String(wej);
			tmpa = Convert::ToString((wchar_t)znak[stan, tmp]);
			tmp1 = Convert::ToString((wchar_t)dir[stan, tmp]);
			for (int i = 0; i<ptr; i++)
				msg += sCertificate[i];
			msg += "[q" + Convert::ToString(stan) + "]";
			for (int j = ptr; j<dlug + 1; j++)
				msg += sCertificate[j];
			msg += " (q" + Convert::ToString(next) + " " + tmpa + " " + tmp1 + ") \n";
			wej[ptr] = znak[stan, tmp];
			if (dir[stan, tmp] == 'L')
				ptr--;
			else if(dir[stan, tmp] == 'P')
				ptr++;
			stan = next;
			licznik++;
		}
		if (next == F)
		{
			int tmp = wej[ptr] - '0';
			next = tablica[stan, tmp];
			sCertificate = gcnew String(wej);
			//gdzie = tab[pocz].transfer(wej[ptr]);
			msg += Convert::ToString(licznik) + ": ";
			for (int i = 0; i<dlug + 1; i++)
				msg += sCertificate[i];
			msg += "\nKONIEC PRACY MASZYNY\n";
		}
		ptr = 0;
		label5->Text = msg;
	}
};
}
