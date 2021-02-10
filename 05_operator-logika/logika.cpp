#include <iostream>

using namespace std;

int main()
{
	int a = 2;
	int b = 4;

	bool hasil;
	/*
		true = 1
		false = 0
	*/

	//operator logika : NOT, AND, OR

	//NOT !(...)
	hasil = !(a == 2);
	cout << hasil << endl;

	//AND : kedua nilai harus true untuk menghasilkan true (and / &&)
	cout << "untuk and\n";
	hasil = (a == 2) and (b == 4); //true and true
	cout << hasil << endl;
	hasil = (a == 4) and (b == 4); //false and true
	cout << hasil << endl;
	hasil = (a == 2) && (b == 2); //true and false
	cout << hasil << endl;
	hasil = (a == 4) && (b == 2); //false and false
	cout << hasil << endl;

	//OR : salah satu nilai true maka hasilnya true (or / ||)
	cout << "untuk or\n";
	hasil = (a == 2) or (b == 4); //true and true
	cout << hasil << endl;
	hasil = (a == 4) or (b == 4); //false and true
	cout << hasil << endl;
	hasil = (a == 2) || (b == 2); //true and false
	cout << hasil << endl;
	hasil = (a == 4) || (b == 2); //false and false
	cout << hasil << endl;

	cin.get();
	return 0;
}