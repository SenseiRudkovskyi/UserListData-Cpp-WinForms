#pragma once
namespace CoolProjectUI {

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
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ users_btn;
	private: System::Windows::Forms::Button^ adduser_btn;
	private: System::Windows::Forms::GroupBox^ users_groupbox;
	protected:




	private: System::Windows::Forms::GroupBox^ adduser_groupbox;

	private: System::Windows::Forms::Label^ phone_label;

	private: System::Windows::Forms::Label^ email_label;

	private: System::Windows::Forms::Label^ name_label;
	private: System::Windows::Forms::TextBox^ phone_textbox;


	private: System::Windows::Forms::TextBox^ email_textbox;

	private: System::Windows::Forms::TextBox^ name_textbox;
	private: System::Windows::Forms::RadioButton^ qa_radiobtn;
	private: System::Windows::Forms::RadioButton^ designer_radiobtn;
	private: System::Windows::Forms::RadioButton^ back_radiobtn;
	private: System::Windows::Forms::RadioButton^ front_radiobtn;
	private: System::Windows::Forms::Label^ position_label;
	private: System::Windows::Forms::Label^ photo_label;
	private: System::Windows::Forms::TextBox^ photo_textbox;

	private: System::Windows::Forms::Button^ upload_btn;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::PictureBox^ adduser_pictureBox;
	private: System::Windows::Forms::Button^ adduser_mainbtn;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::Button^ delete_btn;
	private: System::Windows::Forms::ImageList^ imageList;
	private: int cnt;









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
			this->users_btn = (gcnew System::Windows::Forms::Button());
			this->adduser_btn = (gcnew System::Windows::Forms::Button());
			this->users_groupbox = (gcnew System::Windows::Forms::GroupBox());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->adduser_groupbox = (gcnew System::Windows::Forms::GroupBox());
			this->qa_radiobtn = (gcnew System::Windows::Forms::RadioButton());
			this->designer_radiobtn = (gcnew System::Windows::Forms::RadioButton());
			this->back_radiobtn = (gcnew System::Windows::Forms::RadioButton());
			this->front_radiobtn = (gcnew System::Windows::Forms::RadioButton());
			this->position_label = (gcnew System::Windows::Forms::Label());
			this->phone_label = (gcnew System::Windows::Forms::Label());
			this->email_label = (gcnew System::Windows::Forms::Label());
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->email_textbox = (gcnew System::Windows::Forms::TextBox());
			this->name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->phone_textbox = (gcnew System::Windows::Forms::TextBox());
			this->photo_label = (gcnew System::Windows::Forms::Label());
			this->upload_btn = (gcnew System::Windows::Forms::Button());
			this->adduser_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->photo_textbox = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->adduser_mainbtn = (gcnew System::Windows::Forms::Button());
			this->imageList = (gcnew ImageList());
			this->imageList->ImageSize = System::Drawing::Size(70, 120);
			this->users_groupbox->SuspendLayout();
			this->adduser_groupbox->SuspendLayout();
			this->cnt = -1;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adduser_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// users_btn
			// 
			this->users_btn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->users_btn->FlatAppearance->BorderSize = 0;
			this->users_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->users_btn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->users_btn->Location = System::Drawing::Point(0, 0);
			this->users_btn->Margin = System::Windows::Forms::Padding(5);
			this->users_btn->Name = L"users_btn";
			this->users_btn->Size = System::Drawing::Size(333, 124);
			this->users_btn->TabIndex = 0;
			this->users_btn->Text = L"Users";
			this->users_btn->UseVisualStyleBackColor = false;
			this->users_btn->Click += gcnew System::EventHandler(this, &MyForm::users_btn_Click);
			// 
			// adduser_btn
			// 
			this->adduser_btn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->adduser_btn->FlatAppearance->BorderSize = 0;
			this->adduser_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adduser_btn->Location = System::Drawing::Point(328, 0);
			this->adduser_btn->Margin = System::Windows::Forms::Padding(5);
			this->adduser_btn->Name = L"adduser_btn";
			this->adduser_btn->Size = System::Drawing::Size(330, 124);
			this->adduser_btn->TabIndex = 1;
			this->adduser_btn->Text = L"Add user";
			this->adduser_btn->UseVisualStyleBackColor = false;
			this->adduser_btn->Click += gcnew System::EventHandler(this, &MyForm::adduser_btn_Click);
			// 
			// users_groupbox
			// 
			this->users_groupbox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->users_groupbox->Controls->Add(this->delete_btn);
			this->users_groupbox->Controls->Add(this->listView1);
			this->users_groupbox->Location = System::Drawing::Point(33, 132);
			this->users_groupbox->Name = L"users_groupbox";
			this->users_groupbox->Size = System::Drawing::Size(605, 586);
			this->users_groupbox->TabIndex = 2;
			this->users_groupbox->TabStop = false;
			this->users_groupbox->Text = L"Users";
			// 
			// delete_btn
			// 
			this->delete_btn->BackColor = System::Drawing::Color::IndianRed;
			this->delete_btn->Enabled = false;
			this->delete_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_btn->Location = System::Drawing::Point(51, 545);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(150, 35);
			this->delete_btn->TabIndex = 1;
			this->delete_btn->Text = L"Remove user";
			this->delete_btn->UseVisualStyleBackColor = false;
			this->delete_btn->Click += gcnew System::EventHandler(this, &MyForm::delete_btn_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->FullRowSelect = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(31, 34);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(555, 488);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Photo";
			this->columnHeader1->Width = 75;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Name";
			this->columnHeader2->Width = 98;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Email";
			this->columnHeader3->Width = 90;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Phone";
			this->columnHeader4->Width = 133;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Position";
			this->columnHeader5->Width = 232;
			// 
			// adduser_groupbox
			// 
			this->adduser_groupbox->Controls->Add(this->qa_radiobtn);
			this->adduser_groupbox->Controls->Add(this->designer_radiobtn);
			this->adduser_groupbox->Controls->Add(this->back_radiobtn);
			this->adduser_groupbox->Controls->Add(this->front_radiobtn);
			this->adduser_groupbox->Controls->Add(this->position_label);
			this->adduser_groupbox->Controls->Add(this->phone_label);
			this->adduser_groupbox->Controls->Add(this->email_label);
			this->adduser_groupbox->Controls->Add(this->name_label);
			this->adduser_groupbox->Controls->Add(this->email_textbox);
			this->adduser_groupbox->Controls->Add(this->name_textbox);
			this->adduser_groupbox->Controls->Add(this->phone_textbox);
			this->adduser_groupbox->Location = System::Drawing::Point(12, 132);
			this->adduser_groupbox->Name = L"adduser_groupbox";
			this->adduser_groupbox->Size = System::Drawing::Size(632, 602);
			this->adduser_groupbox->TabIndex = 3;
			this->adduser_groupbox->TabStop = false;
			this->adduser_groupbox->Text = L"Add user";
			this->adduser_groupbox->Visible = false;
			// 
			// qa_radiobtn
			// 
			this->qa_radiobtn->AutoSize = true;
			this->qa_radiobtn->Location = System::Drawing::Point(135, 393);
			this->qa_radiobtn->Name = L"qa_radiobtn";
			this->qa_radiobtn->Size = System::Drawing::Size(66, 30);
			this->qa_radiobtn->TabIndex = 10;
			this->qa_radiobtn->Text = L"QA";
			this->qa_radiobtn->UseVisualStyleBackColor = true;
			// 
			// designer_radiobtn
			// 
			this->designer_radiobtn->AutoSize = true;
			this->designer_radiobtn->Location = System::Drawing::Point(135, 357);
			this->designer_radiobtn->Name = L"designer_radiobtn";
			this->designer_radiobtn->Size = System::Drawing::Size(115, 30);
			this->designer_radiobtn->TabIndex = 9;
			this->designer_radiobtn->Text = L"Designer";
			this->designer_radiobtn->UseVisualStyleBackColor = true;
			// 
			// back_radiobtn
			// 
			this->back_radiobtn->AutoSize = true;
			this->back_radiobtn->Location = System::Drawing::Point(135, 321);
			this->back_radiobtn->Name = L"back_radiobtn";
			this->back_radiobtn->Size = System::Drawing::Size(215, 30);
			this->back_radiobtn->TabIndex = 8;
			this->back_radiobtn->Text = L"Backend Developer";
			this->back_radiobtn->UseVisualStyleBackColor = true;
			// 
			// front_radiobtn
			// 
			this->front_radiobtn->AutoSize = true;
			this->front_radiobtn->Checked = true;
			this->front_radiobtn->Location = System::Drawing::Point(135, 285);
			this->front_radiobtn->Name = L"front_radiobtn";
			this->front_radiobtn->Size = System::Drawing::Size(220, 30);
			this->front_radiobtn->TabIndex = 7;
			this->front_radiobtn->TabStop = true;
			this->front_radiobtn->Text = L"Frontend Developer";
			this->front_radiobtn->UseVisualStyleBackColor = true;
			// 
			// position_label
			// 
			this->position_label->AutoSize = true;
			this->position_label->Location = System::Drawing::Point(134, 255);
			this->position_label->Name = L"position_label";
			this->position_label->Size = System::Drawing::Size(88, 26);
			this->position_label->TabIndex = 6;
			this->position_label->Text = L"Position";
			// 
			// phone_label
			// 
			this->phone_label->AutoSize = true;
			this->phone_label->Location = System::Drawing::Point(130, 189);
			this->phone_label->Name = L"phone_label";
			this->phone_label->Size = System::Drawing::Size(71, 26);
			this->phone_label->TabIndex = 5;
			this->phone_label->Text = L"Phone";
			// 
			// email_label
			// 
			this->email_label->AutoSize = true;
			this->email_label->Location = System::Drawing::Point(130, 124);
			this->email_label->Name = L"email_label";
			this->email_label->Size = System::Drawing::Size(65, 26);
			this->email_label->TabIndex = 4;
			this->email_label->Text = L"Email";
			// 
			// name_label
			// 
			this->name_label->AutoSize = true;
			this->name_label->Location = System::Drawing::Point(130, 58);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(66, 26);
			this->name_label->TabIndex = 3;
			this->name_label->Text = L"Name";
			// 
			// email_textbox
			// 
			this->email_textbox->Location = System::Drawing::Point(135, 152);
			this->email_textbox->Name = L"email_textbox";
			this->email_textbox->Size = System::Drawing::Size(232, 34);
			this->email_textbox->TabIndex = 1;
			// 
			// name_textbox
			// 
			this->name_textbox->Location = System::Drawing::Point(135, 87);
			this->name_textbox->Name = L"name_textbox";
			this->name_textbox->Size = System::Drawing::Size(232, 34);
			this->name_textbox->TabIndex = 0;
			// 
			// phone_textbox
			// 
			this->phone_textbox->Location = System::Drawing::Point(135, 218);
			this->phone_textbox->Name = L"phone_textbox";
			this->phone_textbox->Size = System::Drawing::Size(232, 34);
			this->phone_textbox->TabIndex = 2;
			// 
			// photo_label
			// 
			this->photo_label->AutoSize = true;
			this->photo_label->Location = System::Drawing::Point(216, 558);
			this->photo_label->Name = L"photo_label";
			this->photo_label->Size = System::Drawing::Size(67, 26);
			this->photo_label->TabIndex = 3;
			this->photo_label->Text = L"Photo";
			this->photo_label->Visible = false;
			// 
			// upload_btn
			// 
			this->upload_btn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->upload_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->upload_btn->Location = System::Drawing::Point(459, 587);
			this->upload_btn->Name = L"upload_btn";
			this->upload_btn->Size = System::Drawing::Size(98, 34);
			this->upload_btn->TabIndex = 5;
			this->upload_btn->Text = L"Upload";
			this->upload_btn->UseVisualStyleBackColor = false;
			this->upload_btn->Visible = false;
			this->upload_btn->Click += gcnew System::EventHandler(this, &MyForm::upload_btn_Click);
			// 
			// adduser_pictureBox
			// 
			this->adduser_pictureBox->Location = System::Drawing::Point(117, 558);
			this->adduser_pictureBox->Name = L"adduser_pictureBox";
			this->adduser_pictureBox->Size = System::Drawing::Size(74, 96);
			this->adduser_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->adduser_pictureBox->TabIndex = 11;
			this->adduser_pictureBox->TabStop = false;
			this->adduser_pictureBox->Visible = false;
			// 
			// photo_textbox
			// 
			this->photo_textbox->Enabled = false;
			this->photo_textbox->Location = System::Drawing::Point(221, 587);
			this->photo_textbox->Name = L"photo_textbox";
			this->photo_textbox->Size = System::Drawing::Size(232, 34);
			this->photo_textbox->TabIndex = 4;
			this->photo_textbox->Visible = false;
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog";
			this->openFileDialog->Filter = L"\"Image Files(*.BMP;*.JPG;*.PNG)|*.BMP;*.JPG;*.PNG|All files (*.*)|*.*\"";
			this->openFileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog_FileOk);
			// 
			// adduser_mainbtn
			// 
			this->adduser_mainbtn->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->adduser_mainbtn->Location = System::Drawing::Point(275, 640);
			this->adduser_mainbtn->Name = L"adduser_mainbtn";
			this->adduser_mainbtn->Size = System::Drawing::Size(115, 37);
			this->adduser_mainbtn->TabIndex = 12;
			this->adduser_mainbtn->Text = L"Add user";
			this->adduser_mainbtn->UseVisualStyleBackColor = false;
			this->adduser_mainbtn->Visible = false;
			this->adduser_mainbtn->Click += gcnew System::EventHandler(this, &MyForm::adduser_mainbtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(656, 746);
			this->Controls->Add(this->adduser_mainbtn);
			this->Controls->Add(this->adduser_pictureBox);
			this->Controls->Add(this->upload_btn);
			this->Controls->Add(this->photo_textbox);
			this->Controls->Add(this->photo_label);
			this->Controls->Add(this->adduser_btn);
			this->Controls->Add(this->users_btn);
			this->Controls->Add(this->adduser_groupbox);
			this->Controls->Add(this->users_groupbox);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CoolProjectUI";
			this->users_groupbox->ResumeLayout(false);
			this->adduser_groupbox->ResumeLayout(false);
			this->adduser_groupbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adduser_pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void users_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->users_btn->BackColor=SystemColors::ButtonHighlight;
		this->adduser_btn->BackColor = SystemColors::ActiveCaption;
		this->users_groupbox->Visible = true;
		this->adduser_groupbox->Visible = false;
		this->adduser_mainbtn->Visible = false;
		this->adduser_pictureBox->Visible = false;
		this->photo_label->Visible = false;
		this->photo_textbox->Visible = false;
		this->upload_btn->Visible = false;
	}
	private: System::Void adduser_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->users_btn->BackColor = SystemColors::ActiveCaption;
		this->adduser_btn->BackColor = SystemColors::ButtonHighlight;
		this->users_groupbox->Visible = false;
		this->adduser_groupbox->Visible = true;
		this->adduser_mainbtn->Visible = true;
		this->adduser_pictureBox->Visible = true;
		this->photo_label->Visible = true;
		this->photo_textbox->Visible = true;
		this->upload_btn->Visible = true;
	}

private: System::Void upload_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->openFileDialog->ShowDialog();
}
private: System::Void openFileDialog_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	try { 
		this->adduser_pictureBox->Image = Image::FromFile(this->openFileDialog->FileName);
		this->photo_textbox->Text = this->openFileDialog->FileName;
	}
	catch (System::Exception^ ex) { MessageBox::Show("Unable to load a file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); }
}
private: System::Void adduser_mainbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->name_textbox->Text && this->email_textbox->Text && this->phone_textbox->Text && this->photo_textbox->Text)
	{
		//ImageList^ imageList = gcnew ImageList();
		//imageList->ImageSize = System::Drawing::Size(70, 120);
		this->imageList->Images->Add(Image::FromFile(this->photo_textbox->Text));

		// Set the ListView control's SmallImageList property to the ImageList control
		this->listView1->SmallImageList = imageList;

		// Create a new ListViewItem and add it to the ListView control
		ListViewItem^ item = gcnew ListViewItem(" ", 0);
		item->SubItems->Add(this->name_textbox->Text);
		item->SubItems->Add(this->email_textbox->Text);
		item->SubItems->Add(this->phone_textbox->Text);
		if (this->back_radiobtn->Checked) {
			item->SubItems->Add(this->back_radiobtn->Text);
		}
		else if (this->front_radiobtn->Checked) {
			item->SubItems->Add(this->front_radiobtn->Text);
		}
		else if (this->designer_radiobtn->Checked) {
			item->SubItems->Add(this->designer_radiobtn->Text);
		}
		else if (this->qa_radiobtn->Checked) {
			item->SubItems->Add(this->qa_radiobtn->Text);
		}
		else {
			item->SubItems->Add("NO SELECT");
		}
		item->ImageIndex = ++(this->cnt);
		this->listView1->Items->Add(item);
		
		for (int i=1;i<5;i++)
		this->listView1->Columns[i]->AutoResize(ColumnHeaderAutoResizeStyle::ColumnContent);
		this->name_textbox->Clear();
		this->email_textbox->Clear();
		this->phone_textbox->Clear();
		this->photo_textbox->Clear();
		this->adduser_pictureBox->Image = nullptr;
	}
	else
	{
		MessageBox::Show("Please fill in all required fields.");
	}
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->SelectedItems->Count > 0) {
		delete_btn->Enabled = true;
	}
	else {
		delete_btn->Enabled = false;
	}
}
private: System::Void delete_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->listView1->SelectedItems->Count > 0) {
		// Получаем выбранную строку
		ListViewItem^ selectedItem = this->listView1->SelectedItems[0];
		// Удаляем выбранную строку из ListView
		this->listView1->Items->Remove(selectedItem);
		for (int i = 1; i < 5; i++)
		this->listView1->Columns[i]->AutoResize(ColumnHeaderAutoResizeStyle::HeaderSize);
	}
}
};
}
