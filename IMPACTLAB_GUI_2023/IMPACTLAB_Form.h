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
			this->btopen->Location = System::Drawing::Point(160, 643);
			this->btopen->Name = L"btopen";
			this->btopen->Size = System::Drawing::Size(131, 49);
			this->btopen->TabIndex = 0;
			this->btopen->Text = L"Open Image";
			this->btopen->UseVisualStyleBackColor = true;
			this->btopen->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btopen_Click);
			// 
			// btapply
			// 
			this->btapply->Location = System::Drawing::Point(433, 643);
			this->btapply->Name = L"btapply";
			this->btapply->Size = System::Drawing::Size(131, 49);
			this->btapply->TabIndex = 1;
			this->btapply->Text = L"Apply Filters";
			this->btapply->UseVisualStyleBackColor = true;
			this->btapply->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btapply_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(44, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(630, 600);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::pictureBox1_Click);
			// 
			// filter1
			// 
			this->filter1->AutoSize = true;
			this->filter1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filter1->Location = System::Drawing::Point(799, 263);
			this->filter1->Name = L"filter1";
			this->filter1->Size = System::Drawing::Size(129, 21);
			this->filter1->TabIndex = 3;
			this->filter1->Text = L"Aplicar filtro 1";
			this->filter1->UseVisualStyleBackColor = true;
			this->filter1->CheckedChanged += gcnew System::EventHandler(this, &IMPACTLAB_Form::filter1_CheckedChanged);
			// 
			// filter3
			// 
			this->filter3->AutoSize = true;
			this->filter3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filter3->Location = System::Drawing::Point(799, 513);
			this->filter3->Name = L"filter3";
			this->filter3->Size = System::Drawing::Size(129, 21);
			this->filter3->TabIndex = 4;
			this->filter3->Text = L"Aplicar filtro 3";
			this->filter3->UseVisualStyleBackColor = true;
			this->filter3->CheckedChanged += gcnew System::EventHandler(this, &IMPACTLAB_Form::filter3_CheckedChanged);
			// 
			// filter2
			// 
			this->filter2->AutoSize = true;
			this->filter2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filter2->Location = System::Drawing::Point(799, 383);
			this->filter2->Name = L"filter2";
			this->filter2->Size = System::Drawing::Size(129, 21);
			this->filter2->TabIndex = 5;
			this->filter2->Text = L"Aplicar filtro 2";
			this->filter2->UseVisualStyleBackColor = true;
			this->filter2->CheckedChanged += gcnew System::EventHandler(this, &IMPACTLAB_Form::filter2_CheckedChanged);
			// 
			// IMPACTLAB_Form
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1003, 741);
			this->Controls->Add(this->filter2);
			this->Controls->Add(this->filter3);
			this->Controls->Add(this->filter1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btapply);
			this->Controls->Add(this->btopen);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
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
			ofd->Filter = "jpeg files (.jpeg) | *.jpeg | png files (.png) | *.png | jpg files (.jpg) | *.jpg";
			ofd->RestoreDirectory = true;
			
			if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{

				//pictureBox1->BackgroundImage = stream->
				try {
					//Setting image to pictureBox1
					pictureBox1->BackgroundImageLayout = ImageLayout::Stretch;
					pictureBox1->BackgroundImage = gcnew Bitmap(ofd->FileName, true);
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

	
		bool negative(Bitmap^ img)
		{
			int width = img->Width;
			int height = img->Height;

			for (int i = 0; i < width; i++)
			{
				for (int j = 0; j < height; j++)
				{
					//Get the pixel value
					Color p = img->GetPixel(i, j);
					int a = p.A;
					int r = p.R;
					int g = p.G;
					int b = p.B;

					//find negative value
					r = 255 - r;
					g = 255 - g;
					b = 255 - b;
					//Set new pixel
					Color gray = Color::FromArgb(a, r, g, b);
					img->SetPixel(i, j, gray);
				}
			}

			return true;
		}

		bool img_2_sepia(Bitmap^ img)
		{
			int width = img->Width;
			int height = img->Height;
			for (int i = 0; i < width; i++)
			{
				for (int j = 0; j < height; j++)
				{
					//Get the pixel value
					Color p = img->GetPixel(i, j);
					int a = p.A;
					int r = p.R;
					int g = p.G;
					int b = p.B;

					//Calculate values:
					int tr = (int)(0.393 * r + 0.769 * g + 0.189 * b);
					int tg = (int)(0.349 * r + 0.686 * g + 0.168 * b);
					int tb = (int)(0.272 * r + 0.534 * g + 0.131 * b);

					//set new RGB value
					if (tr > 255)
					{
						r = 255;
					}
					else
					{
						r = tr;
					}

					if (tg > 255)
					{
						g = 255;
					}
					else
					{
						g = tg;
					}

					if (tb > 255)
					{
						b = 255;
					}
					else
					{
						b = tb;
					}

					//set the new RGB value in image pixel
					img->SetPixel(i, j, Color::FromArgb(a, r, g, b));
				}
			}
			return true;
		}

		bool sepia_2_img(Bitmap^ img)
		{
			int width = img->Width;
			int height = img->Height;
			for (int i = 0; i < width; i++)
			{
				for (int j = 0; j < height; j++)
				{
					//Get the pixel value
					Color p = img->GetPixel(i, j);
					int a = p.A;
					int r = p.R;
					int g = p.G;
					int b = p.B;

					//Calculate values:
					int tr = (int)(1279.727*r - 190.083 * g - 1867.769 * b);
					int tg = (int)(1545.455 * r +  619.834 * g - 5735.537 * b);
					int tb = (int)(10057.851 * b - 3818.182 * r - 520.661* g );

					//set new RGB value
					if (tr > 255)
					{
						r = 255;
					}
					else
					{
						r = tr;
					}

					if (tg > 255)
					{
						g = 255;
					}
					else
					{
						g = tg;
					}

					if (tb < 0)
					{
						b = 255;
					}
					else
					{
						b = tb;
					}

					//set the new RGB value in image pixel
					img->SetPixel(i, j, Color::FromArgb(a, r, g, b));
				}
			}
			return true;
		}

		bool mirrorImage(Bitmap^ img)
		{
			int width = img->Width;
			int height = img->Height;

			for (int i = 0; i < width; i++)
			{
				for (int j = 0; j < height ; j++)
				{
					//Get the pixel value
					Color p = img->GetPixel(i, j);
					Color mirror = img->GetPixel(width - i - 1,j);
					img->SetPixel(i, j, mirror);
				}
			}

			return true;

		}

		bool brilho(Bitmap^ img) 
		{
			int width = img->Width;
			int height = img->Height;
			float factor = 0.15f;

			for (int i = 0; i < width; i++)
			{
				for (int j = 0; j < height; j++)
				{
					//Get the pixel value
					Color p = img->GetPixel(i, j);
					int a = p.A;

					int tmp = p.R + (p.R * factor);
					int r;
					
					if (tmp > 255) {
						r = 255;
					}
					else {
						r = tmp;
					}

					tmp = p.G + (p.G * factor);
					int g;

					if (tmp > 255) {
						g = 255;
					}
					else {
						g = tmp;
					}

					tmp = p.B + (p.B * factor);
					int b;

					if (tmp > 255) {
						b = 255;
					}
					else {
						b = tmp;
					}


					img->SetPixel(i, j, Color::FromArgb(a,r,g,b));

				}
			}
			return true;
		}

		bool grayscale(Bitmap^ img)
		{
			int width = img->Width;
			int height = img->Height;

			for (int i = 0; i < width; i++)
			{
				for (int j = 0; j < height; j++)
				{
					//Get the pixel value
					Color p = img->GetPixel(i, j);
					int a = p.A;
					int r = p.R;
					int g = p.G;
					int b = p.B;

					//Average
					int avg = (r + g + b) / 3;
					//Set new pixel
					Color gray = Color::FromArgb(a, avg, avg, avg);
					img->SetPixel(i, j, gray);					
				}
			}

			return true;
		
		}


		private: System::Void filter1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{

		}
		private: System::Void filter2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			Image^ image = pictureBox1->BackgroundImage;

			if (filter2->Checked)
			{
				//apply filter
				
			}
			else {
				//remove filter

			}
		}
		private: System::Void filter3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			Image^ image = pictureBox1->BackgroundImage;

			if (filter3->Checked)
			{
				//apply filter

			}
			else {
				//remove filter

			}
		}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void btapply_Click(System::Object^ sender, System::EventArgs^ e) {

	if (filter1->Checked)
	{
	   Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
	   img_2_sepia(image);
	   pictureBox1->BackgroundImage = image;

	}
	if (filter2->Checked)
	{
		Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
		negative(image);
		pictureBox1->BackgroundImage = image;

	}
	if (filter3->Checked)
	{

		Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
		brilho(image);
		pictureBox1->BackgroundImage = image;

	}
}
};
}

