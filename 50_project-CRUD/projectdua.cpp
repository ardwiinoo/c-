#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa
{
	int pk;
	string nim;
	string nama;
	string prodi;
};

int getOption();
void checkDatabase(fstream &data);
void writeData(fstream &data, int posisi, Mahasiswa &inputMhs)
{
	data.seekp((posisi - 1) * sizeof(Mahasiswa), ios::beg); //mencari data
	data.write(reinterpret_cast<char *>(&inputMhs), sizeof(Mahasiswa));
}

int getDataSize(fstream &data)
{
	int start, end;
	data.seekg(0, ios::beg);
	start = data.tellg(); //mengambil posisi
	data.seekg(0, ios::end);
	end = data.tellg();
	return (end - start) / sizeof(Mahasiswa);
}

Mahasiswa readData(fstream &data, int posisi){
	Mahasiswa readMhs;
	data.seekg((posisi -1)*sizeof(Mahasiswa), ios::beg);
	data.read(reinterpret_cast<char*>(&readMhs), sizeof(Mahasiswa));
	return readMhs;
}

void addDataMhs(fstream &data)
{
	Mahasiswa inputMhs, lastMhs;

	int size = getDataSize(data);
	
	cout << "Ukuran data : " << size << endl;
	
	if(size == 0){
		inputMhs.pk = 1;
	}else{
		lastMhs = readData(data,size);
		cout << "pk = " << lastMhs.pk << endl;
		inputMhs.pk = lastMhs.pk + 1;
	}

	//read(data, size);
	cout << "Nama: ";
	getline(cin, inputMhs.nama);
	cout << "Prodi: ";
	getline(cin, inputMhs.prodi);
	cout << "NIM: ";
	getline(cin, inputMhs.nim);

	writeData(data, size+1, inputMhs);
}

void displayDataMhs(fstream &data){
	int size = getDataSize(data);
	Mahasiswa showMhs;
	cout <<"no.\tpk.\tnim.\tnama.\tprodi." << endl;

	for(int i = 1; i <= size; i++){
		showMhs = readData(data, i);
		cout << i << "\t";
		cout << showMhs.pk << "\t";
		cout << showMhs.nim << "\t";
		cout << showMhs.nama << "\t";
		cout << showMhs.prodi << endl;
	}
}

int main()
{
	fstream data;

	checkDatabase(data);

	//Menu
	int pilihan = getOption();
	char is_continue;

	enum option
	{
		CREATE = 1,
		READ,
		UPDATE,
		DELETE,
		FINISH
	};

	while (pilihan != FINISH)
	{
		pilihan = getOption();

		switch (pilihan)
		{
		case CREATE:
			cout << "Menambah Data Mahasiswa" << endl;
			addDataMhs(data);
			break;
		case READ:
			cout << "Tampilkan Data Mahasiswa" << endl;
			displayDataMhs(data);
			break;
		case UPDATE:
			cout << "Ubah Data Mahasiswa" << endl;
			break;
		case DELETE:
			cout << "Hapus Data Mahasiswa" << endl;
			break;
		default:
			cout << "Pilihan Tidak Ditemukan!" << endl;
			break;
		}

	label_continue:
		cout << "Lanjutkan(y/n) : ";
		cin >> is_continue;
		if ((is_continue == 'y') | (is_continue == 'Y'))
		{
			pilihan = getOption();
		}
		else if ((is_continue == 'n') | (is_continue == 'N'))
		{
			break;
		}
		else
		{
			goto label_continue;
		}
	}

	return 0;
}

int getOption()
{
	int input;
	system("cls");
	//system("clear");
	cout << "\nProgram CRUD Data Mahasiswa" << endl;
	cout << "+===========================+" << endl;
	cout << "1. Tambah data" << endl;
	cout << "2. Tampilkan data" << endl;
	cout << "3. Ubah data" << endl;
	cout << "4. Hapus data" << endl;
	cout << "5. Selesai" << endl;
	cout << "+===========================+" << endl;
	cout << "pilih [1-5]? : ";
	cin >> input;
	cin.ignore(); //reset enter
	return input;
}

void checkDatabase(fstream &data)
{
	//check file ada atau tidak
	data.open("data.bin", ios::out | ios::in | ios::binary);
	if (data.is_open())
	{
		cout << "database ditemukan" << endl;
	}
	else
	{
		cout << "database tidak ditemukan, buat database baru" << endl;
		data.close();
		data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
	}
}