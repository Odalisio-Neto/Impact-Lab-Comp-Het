#pragma once

namespace IMPACTLABGUI2023 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for IMPACTLAB_Form
	/// </summary>
	public ref class IMPACTLAB_Form : public System::Windows::Forms::Form
	{
	public:
		IMPACTLAB_Form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			streamout = nullptr;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IMPACTLAB_Form()
		{
			if (components)
			{
				delete components;
				delete streamout;
			}
		}
	public: Stream^ streamout;

	private: System::Windows::Forms::Button^ btopen;
	private: System::Windows::Forms::Button^ btapply;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ filter1;

	private: System::Windows::Forms::CheckBox^ filter3;
	private: System::Windows::Forms::CheckBox^ filter2;






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
			this->btopen = (gcnew System::Windows::Forms::Button());
			this->btapply = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->filter1 = (gcnew System::Windows::Forms::CheckBox());
			this->filter3 = (gcnew System::Windows::Forms::CheckBox());
			this->filter2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btopen
			// 
			this->btopen->Location = System::Drawing::Point(489, 501);
			this->btopen->Name = L"btopen";
			this->btopen->Size = System::Drawing::Size(131, 49);
			this->btopen->TabIndex = 0;
			this->btopen->Text = L"Open Image";
			this->btopen->UseVisualStyleBackColor = true;
			this->btopen->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btopen_Click);
			// 
			// btapply
			// 
			this->btapply->Location = System::Drawing::Point(626, 501);
			this->btapply->Name = L"btapply";
			this->btapply->Size = System::Drawing::Size(131, 49);
			this->btapply->TabIndex = 1;
			this->btapply->Text = L"Apply Filters";
			this->btapply->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(385, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(492, 483);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// filter1
			// 
			this->filter1->AutoSize = true;
			this->filter1->Location = System::Drawing::Point(948, 143);
			this->filter1->Name = L"filter1";
			this->filter1->Size = System::Drawing::Size(108, 20);
			this->filter1->TabIndex = 3;
			this->filter1->Text = L"Aplicar filtro 1";
			this->filter1->UseVisualStyleBackColor = true;
			this->filter1->CheckedChanged += gcnew System::EventHandler(this, &IMPACTLAB_Form::filter1_CheckedChanged);
			// 
			// filter3
			// 
			this->filter3->AutoSize = true;
			this->filter3->Location = System::Drawing::Point(948, 330);
			this->filter3->Name = L"filter3";
			this->filter3->Size = System::Drawing::Size(108, 20);
			this->filter3->TabIndex = 4;
			this->filter3->Text = L"Aplicar filtro 2";
			this->filter3->UseVisualStyleBackColor = true;
			this->filter3->CheckedChanged += gcnew System::EventHandler(this, &IMPACTLAB_Form::filter3_CheckedChanged);
			// 
			// filter2
			// 
			this->filter2->AutoSize = true;
			this->filter2->Location = System::Drawing::Point(948, 242);
			this->filter2->Name = L"filter2";
			this->filter2->Size = System::Drawing::Size(108, 20);
			this->filter2->TabIndex = 5;
			this->filter2->Text = L"Aplicar filtro 2";
			this->filter2->UseVisualStyleBackColor = true;
			this->filter2->CheckedChanged += gcnew System::EventHandler(this, &IMPACTLAB_Form::filter2_CheckedChanged);
			// 
			// IMPACTLAB_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1171, 602);
			this->Controls->Add(this->filter2);
			this->Controls->Add(this->filter3);
			this->Controls->Add(this->filter1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btapply);
			this->Controls->Add(this->btopen);
			this->Name = L"IMPACTLAB_Form";
			this->Text = L"IMPACTLAB PROJECT 2023";
			this->Load += gcnew System::EventHandler(this, &IMPACTLAB_Form::IMPACTLAB_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void btopen_Click(System::Object^ sender, System::EventArgs^ e) {

			// open file dialog   
			OpenFileDialog^ ofd = gcnew OpenFileDialog();

			ofd->InitialDirectory = "c:\\";
			ofd->Filter = "jpeg files (.jpeg) | *.jpeg | png files (.png) | *.png";
			ofd->RestoreDirectory = true;
			
			if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{

				//pictureBox1->BackgroundImage = stream->
				try {

					Image^ image1;
					// Retrieve the image.
					
					// Set the PictureBox to display the image.
					pictureBox1->Image = gcnew Bitmap(ofd->FileName, true);
				}
				catch (ArgumentException^)
				{
					MessageBox::Show("There was an error."
						"Check the path to the image file.");
				}

			}

		}
		
		private: System::Void IMPACTLAB_Form_Load(System::Object^ sender, System::EventArgs^ e) 
		{

		}
		private: System::Void filter1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{

		}
		private: System::Void filter2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{

		}
		private: System::Void filter3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{

		}
};
}
