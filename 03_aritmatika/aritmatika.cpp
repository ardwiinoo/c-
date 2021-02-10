#include <iostream>

using namespace std;

int main () {

	int a = 10;
	int b = 5;

	int hasil;

	//penjumlahan
	hasil = a + b;
	cout << a << "+" << b << "=" << hasil << endl;

	//pengurangan
	hasil = a - b;
	cout << a << "-" << b << "=" << hasil << endl;

	//perkalian
	hasil = a * b;
	cout << a << "*" << b << "=" << hasil << endl;

	//pembagian 
	hasil = a / b;
	cout << a << "/" << b << "=" << hasil << endl;

	//modulus (sisa bagi)
	hasil = a % b;
	cout << a << "%" << b << "=" << hasil << endl;

	//urutan eksekusi 
	hasil = (a * b) / 2;
	cout << "(" << a << "*" << b << ")" << "/2" << " =" << hasil << endl;

	cin.get();
	return 0;
}
