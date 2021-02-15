#include <iostream>

using namespace std;

int main(){
	
	//variabel
	int a = 5;
	
	cout << "A adalah = " << a << endl;
	cout << "Addres dari A = " << &a << endl;
	
	//reference
	int &b = a;
	
	cout << "Addres dari B = " << &b << endl;
	cout << "B adalah = " << b << endl;
	
	b = 20;
	
	cout << "Addres dari B = " << &b << endl;
	cout << "B adalah = " << b << endl;
	
	cout << "A adalah = " << a << endl;
	cout << "Addres dari A = " << &a << endl;
	
	a = 50;
	
	cout << "A adalah = " << a << endl;
	cout << "Addres dari A = " << &a << endl;
	
	cout << "Addres dari B = " << &b << endl;
	cout << "B adalah = " << b << endl;

	
	
	
	return 0;
}
