#include <iostream>

using namespace std;

int main() {
	int a;
	
	cout << "Masukkan Angka: ";
	cin >> a;
	
	if (a == 1){
		cout << "ini adalah nilai satu";
	} else if (a == 2){
		cout << "ini adalah nilai dua";
	} else if (a == 3){
		cout << "ini adalah nilai tiga";
	} else {
		cout << "nilai yang anda masukkan bukan angka 1,2, atau 3!";
	}
	
	return 0;
}
