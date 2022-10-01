#pragma once
#include <cstdlib>

namespace Lab4CesarMejia1127922 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	char montania[2][70];
	int postortuga=0, posliebre=0, *ptrtortuga, *ptrliebre;
	bool continuar = true;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblnametortuga;
	private: System::Windows::Forms::Label^ lblnameliebre;
	private: System::Windows::Forms::Label^ lblacciontortuga;
	private: System::Windows::Forms::Label^ lblaccionliebre;
	private: System::Windows::Forms::Label^ lblpostortuga;
	private: System::Windows::Forms::Label^ lblposliebre;
	private: System::Windows::Forms::Button^ btniniciocarrera;

	protected:




	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblnametortuga = (gcnew System::Windows::Forms::Label());
			this->lblnameliebre = (gcnew System::Windows::Forms::Label());
			this->lblacciontortuga = (gcnew System::Windows::Forms::Label());
			this->lblaccionliebre = (gcnew System::Windows::Forms::Label());
			this->lblpostortuga = (gcnew System::Windows::Forms::Label());
			this->lblposliebre = (gcnew System::Windows::Forms::Label());
			this->btniniciocarrera = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(206, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LIEBRE VS TORTUGA";
			// 
			// lblnametortuga
			// 
			this->lblnametortuga->AutoSize = true;
			this->lblnametortuga->Location = System::Drawing::Point(78, 96);
			this->lblnametortuga->Name = L"lblnametortuga";
			this->lblnametortuga->Size = System::Drawing::Size(54, 16);
			this->lblnametortuga->TabIndex = 1;
			this->lblnametortuga->Text = L"Tortuga";
			// 
			// lblnameliebre
			// 
			this->lblnameliebre->AutoSize = true;
			this->lblnameliebre->Location = System::Drawing::Point(430, 96);
			this->lblnameliebre->Name = L"lblnameliebre";
			this->lblnameliebre->Size = System::Drawing::Size(45, 16);
			this->lblnameliebre->TabIndex = 2;
			this->lblnameliebre->Text = L"Liebre";
			// 
			// lblacciontortuga
			// 
			this->lblacciontortuga->AutoSize = true;
			this->lblacciontortuga->Location = System::Drawing::Point(88, 138);
			this->lblacciontortuga->Name = L"lblacciontortuga";
			this->lblacciontortuga->Size = System::Drawing::Size(44, 16);
			this->lblacciontortuga->TabIndex = 3;
			this->lblacciontortuga->Text = L"label4";
			this->lblacciontortuga->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblaccionliebre
			// 
			this->lblaccionliebre->AutoSize = true;
			this->lblaccionliebre->Location = System::Drawing::Point(431, 138);
			this->lblaccionliebre->Name = L"lblaccionliebre";
			this->lblaccionliebre->Size = System::Drawing::Size(44, 16);
			this->lblaccionliebre->TabIndex = 4;
			this->lblaccionliebre->Text = L"label2";
			this->lblaccionliebre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblpostortuga
			// 
			this->lblpostortuga->AutoSize = true;
			this->lblpostortuga->Location = System::Drawing::Point(39, 174);
			this->lblpostortuga->Name = L"lblpostortuga";
			this->lblpostortuga->Size = System::Drawing::Size(149, 16);
			this->lblpostortuga->TabIndex = 5;
			this->lblpostortuga->Text = L"Posici�n de la tortuga: 0";
			this->lblpostortuga->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblposliebre
			// 
			this->lblposliebre->AutoSize = true;
			this->lblposliebre->Location = System::Drawing::Point(388, 174);
			this->lblposliebre->Name = L"lblposliebre";
			this->lblposliebre->Size = System::Drawing::Size(142, 16);
			this->lblposliebre->TabIndex = 6;
			this->lblposliebre->Text = L"Posici�n de la liebre: 0";
			this->lblposliebre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btniniciocarrera
			// 
			this->btniniciocarrera->Location = System::Drawing::Point(200, 438);
			this->btniniciocarrera->Name = L"btniniciocarrera";
			this->btniniciocarrera->Size = System::Drawing::Size(151, 86);
			this->btniniciocarrera->TabIndex = 7;
			this->btniniciocarrera->Text = L"Arranca la Carrera";
			this->btniniciocarrera->UseVisualStyleBackColor = true;
			this->btniniciocarrera->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(567, 569);
			this->Controls->Add(this->btniniciocarrera);
			this->Controls->Add(this->lblposliebre);
			this->Controls->Add(this->lblpostortuga);
			this->Controls->Add(this->lblaccionliebre);
			this->Controls->Add(this->lblacciontortuga);
			this->Controls->Add(this->lblnameliebre);
			this->Controls->Add(this->lblnametortuga);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int rndtortuga, rndliebre;
		rndtortuga = rand() % 10;
		rndliebre = rand() % 10;

		if (continuar)
		{
			switch (rndtortuga)
			{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
				lblacciontortuga->Text = "Paso Vel�z";
				if (postortuga>=70)
				{
					continuar = false;
					postortuga = 70;
				}
				else
				{
					postortuga += 3;
				}
				lblpostortuga->Text = "Posici�n de la tortuga: " + Convert::ToString(postortuga);
				break;
			case 5:
			case 6:
				lblacciontortuga->Text = "Resbal�n";
				if (postortuga <= 6)
				{
					postortuga = 0;
				}
				else
				{
					postortuga -= 6;
				}
				lblpostortuga->Text = "Posici�n de la tortuga: " + Convert::ToString(postortuga);
				break;
			case 7:
			case 8:
			case 9:
				lblacciontortuga->Text = "Paso lento";
				if (postortuga >= 70)
				{
					continuar = false;
					postortuga = 70;
				}
				else
				{
					postortuga += 1;
				}
				lblpostortuga->Text = "Posici�n de la tortuga: " + Convert::ToString(postortuga);
				break;
			}
			switch (rndliebre)
			{
			case 0:
			case 1:
				lblaccionliebre->Text = "Duerme";
				posliebre += 0;
				lblposliebre->Text = "Posici�n de la liebre: " + Convert::ToString(posliebre);
				break;
			case 2:
			case 3:
				lblaccionliebre->Text = "Gran Salto";
				if (posliebre>=70)
				{
					continuar = false;
					posliebre = 70;
				}
				else
				{
					posliebre += 9;
				}
				lblposliebre->Text = "Posici�n de la liebre: " + Convert::ToString(posliebre);
				break;
			case 4:
				lblaccionliebre->Text = "Gran Resbal�n";
				if (posliebre <= 12)
				{
					posliebre = 0;
				}
				else
				{
					posliebre -= 12;
				}
				lblposliebre->Text = "Posici�n de la liebre: " + Convert::ToString(posliebre);
				break;
			case 5:
			case 6:
			case 7:
				lblaccionliebre->Text = "Salto Peque�o";
				if (posliebre >= 70)
				{
					continuar = false;
					posliebre = 70;
				}
				else
				{
					posliebre += 1;
				}
				lblposliebre->Text = "Posici�n de la liebre: " + Convert::ToString(posliebre);
				break;
			case 8:
			case 9:
				lblaccionliebre->Text = "Resbal�n Peque�o";
				if (posliebre <= 2)
				{
					posliebre = 0;
				}
				else
				{
					posliebre -= 2;
				}
				lblposliebre->Text = "Posici�n de la liebre: " + Convert::ToString(posliebre);
				break;
			}
		}
		else
		{
		if (posliebre==70)
		{
			MessageBox::Show("La liebre gana. Ni Hablar");
			Form::Close();
		}
		else
		{
			MessageBox::Show("�LA TORTUGA GANA! �BRAVO!");
			Form::Close();
		}
		}
		
	}
};
}
