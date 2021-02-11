#include <iostream>

using namespace std;

int main() {
	
	int a;
	
	cout << "Masukkan Nilai: ";
	cin >> a;
	
	switch(a){
		case 1:
			cout << "a = 1" << endl; //jika true akan menjalankan seluruh program dibawahnya
			break; 	//gunakan break untuk mengakhiri baris jika true
		case 2:
			cout << "a = 2" << endl;
		case 3:
			cout << "a = 3" << endl;
		case 4:
			cout << "a = 4" << endl;
		case 5:
			cout << "a = 5" << endl;
		default:
			cout << "a bukan siapa siapa" << endl;
	}
	
	cout << "akhir dari program" << endl;
	
	return 0;
}
