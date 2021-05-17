#include <iostream>
#include <string>

using namespace	std;

int getOption();

int main(){
	int pilihan = getOption();
	char is_continue;

	enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

	while(pilihan != FINISH){
		pilihan = getOption();

		switch(pilihan){
			case CREATE:
				cout << "Menambah Data Masyarakat" << endl;
				break;
			case READ:
				cout << "Tampilkan Data Masyarakat" << endl;
				break;
			case UPDATE:
				cout << "Ubah Data Masyarakat" << endl;
				break;
			case DELETE:
				cout << "Hapus Data Masyarakat" << endl;
				break;
			default :
				cout << "Pilihan Tidak Ditemukan!" << endl;
				break;
		}

		label_continue:
		cout << "Lanjutkan(y/n) : ";
		cin >> is_continue;
		if((is_continue == 'y') | (is_continue == 'Y')){
			pilihan = getOption();
		}
		else if((is_continue == 'n') | (is_continue == 'N')){
			break;
		}else{
			goto label_continue;
		}
	}

	return 0;
}

int getOption(){
	int input;
	system("cls");
	//system("clear");
	cout << "\nProgram CRUD Data Masyarakat" << endl;
	cout << "+============================+" << endl;
	cout << "1. Tambah data" << endl;
	cout << "2. Tampilkan data" << endl;
	cout << "3. Ubah data" << endl;
	cout << "4. Hapus data" << endl;
	cout << "5. Selesai" << endl;
	cout << "+============================+" << endl;
	cout << "pilih [1-5]? : ";
	cin >> input;
	return input;
}