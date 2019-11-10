#pragma once

namespace Lab6MischaTobias1170919 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtArregloLength;
	private: System::Windows::Forms::Button^ btnCrearArreglo;
	private: System::Windows::Forms::Button^ btnBuscarNum;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNumBuscar;
	private: System::Windows::Forms::ComboBox^ cbBusqueda;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtArregloLength = (gcnew System::Windows::Forms::TextBox());
			this->btnCrearArreglo = (gcnew System::Windows::Forms::Button());
			this->btnBuscarNum = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNumBuscar = (gcnew System::Windows::Forms::TextBox());
			this->cbBusqueda = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese el tamaño del arreglo: ";
			// 
			// txtArregloLength
			// 
			this->txtArregloLength->Location = System::Drawing::Point(23, 43);
			this->txtArregloLength->Name = L"txtArregloLength";
			this->txtArregloLength->Size = System::Drawing::Size(165, 20);
			this->txtArregloLength->TabIndex = 1;
			// 
			// btnCrearArreglo
			// 
			this->btnCrearArreglo->Location = System::Drawing::Point(233, 32);
			this->btnCrearArreglo->Name = L"btnCrearArreglo";
			this->btnCrearArreglo->Size = System::Drawing::Size(123, 40);
			this->btnCrearArreglo->TabIndex = 2;
			this->btnCrearArreglo->Text = L"Crear Arreglo";
			this->btnCrearArreglo->UseVisualStyleBackColor = true;
			this->btnCrearArreglo->Click += gcnew System::EventHandler(this, &MyForm::btnCrearArreglo_Click);
			// 
			// btnBuscarNum
			// 
			this->btnBuscarNum->Enabled = false;
			this->btnBuscarNum->Location = System::Drawing::Point(233, 112);
			this->btnBuscarNum->Name = L"btnBuscarNum";
			this->btnBuscarNum->Size = System::Drawing::Size(123, 40);
			this->btnBuscarNum->TabIndex = 3;
			this->btnBuscarNum->Text = L"Buscar Número";
			this->btnBuscarNum->UseVisualStyleBackColor = true;
			this->btnBuscarNum->Click += gcnew System::EventHandler(this, &MyForm::btnBuscarNum_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ingrese el número a buscar:";
			// 
			// txtNumBuscar
			// 
			this->txtNumBuscar->Enabled = false;
			this->txtNumBuscar->Location = System::Drawing::Point(23, 123);
			this->txtNumBuscar->Name = L"txtNumBuscar";
			this->txtNumBuscar->Size = System::Drawing::Size(165, 20);
			this->txtNumBuscar->TabIndex = 5;
			// 
			// cbBusqueda
			// 
			this->cbBusqueda->Enabled = false;
			this->cbBusqueda->FormattingEnabled = true;
			this->cbBusqueda->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Método Secuencial", L"Método Binario", L"Método Función Hash" });
			this->cbBusqueda->Location = System::Drawing::Point(23, 164);
			this->cbBusqueda->Name = L"cbBusqueda";
			this->cbBusqueda->Size = System::Drawing::Size(165, 21);
			this->cbBusqueda->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(385, 226);
			this->Controls->Add(this->cbBusqueda);
			this->Controls->Add(this->txtNumBuscar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnBuscarNum);
			this->Controls->Add(this->btnCrearArreglo);
			this->Controls->Add(this->txtArregloLength);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Lab6 Progra Avanzada";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		ArrayList^ arregloNums;//Arreglo
		Hashtable^ tablaHash;
		int arregloLength;
	private: System::Void btnCrearArreglo_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			arregloLength = Convert::ToInt32(txtArregloLength->Text);
			GenerarNums();
			MostrarArreglo();
			LLenarTablaHash();
			label2->Enabled = true;
			txtNumBuscar->Enabled = true;
			btnBuscarNum->Enabled = true;
			cbBusqueda->Enabled = true;
		}
		catch (...)
		{
			System::Windows::Forms::MessageBox::Show("Ingrese un dato válido");
		}
	}
	private: System::Void GenerarNums() {
		arregloNums = gcnew ArrayList();
		Random^ rand = gcnew Random();
		for (int i = 0; i < arregloLength; i++)
		{
			arregloNums->Add(rand->Next(0, 100));
		}
	}
	private: System::Void MostrarArreglo() {
		String^ arreglo = "";
		for each (int num in arregloNums)
		{
			arreglo += num + " ";
		}
		System::Windows::Forms::MessageBox::Show(arreglo);
	}
	private: System::Void LLenarTablaHash() {
		tablaHash = gcnew Hashtable(arregloLength * 2);
		int llave = 0;
		for each (int num in arregloNums)
		{
			llave = num % arregloLength * 2;
			while (tablaHash[llave] != nullptr)
			{
				llave++;
			}
			tablaHash->Add(llave, num);
		}
	}
	private: System::Void btnBuscarNum_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int val = System::Convert::ToInt32(txtNumBuscar->Text);
			Stopwatch^ timer = gcnew Stopwatch();
			timer->Start();
			int pos;
			switch (cbBusqueda->SelectedIndex)
			{
			case 0:
				pos = Secuencial(val);
				break;
			case 1:
				pos = Binario(val);
				break;
			case 2:
				pos = Hash(val);
				break;
			}
			timer->Stop();
			if (pos == -1)
			{
				System::Windows::Forms::MessageBox::Show("El valor buscado no se encuentra en el arreglo");
			}
			else {
				System::Windows::Forms::MessageBox::Show("La posición en la que se encuentra el valor es: " + pos.ToString());
			}
			System::Windows::Forms::MessageBox::Show("El tiempo en el que se ejecutó la búsqueda fue de: " + System::Convert::ToString(timer->Elapsed));
		}
		catch (...)
		{
			System::Windows::Forms::MessageBox::Show("Ingrese un dato válido");
		}
	}
	private: System::Int16 Secuencial(int valor) {
		for (int i = 0; i < arregloLength; i++)
		{
			if (valor == System::Convert::ToInt16(arregloNums[i]))
			{
				return i + 1;
			}
		}
		return -1;
	}
	private: System::Int16 Binario(int valor) {
		int first = 0;
		int middle;
		int last = arregloLength - 1;
		while (first <= last)
		{
			middle = (first + last) / 2;
			if (valor == System::Convert::ToInt16(arregloNums[middle]))
			{
				return middle + 1;
			}
			else {
				if (valor < System::Convert::ToInt16(arregloNums[middle]))
				{
					last = middle - 1;
				}
				else {
					first = middle + 1;
				}
			}
		}
		return -1;
	}
	private: System::Int16 Hash(int val) {
		arregloNums->Sort();
		int pos = val % arregloLength * 2;
		if (System::Convert::ToInt16(tablaHash[pos]) == val)
		{
			return pos;
		}
		else {
			while (System::Convert::ToInt16(tablaHash[pos]) != val)
			{
				pos++;
			}
			return pos;
		}
		return -1;
	}
};
}
