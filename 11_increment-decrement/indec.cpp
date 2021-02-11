#include <iostream>

using namespace std;

int main() {
	
	//increment dan decrement
	//   ++            --
	
	//preincrement dan postincrement
	//     ++a             a++	
	
	int a = 3;
	int b = 3;
	
	//postincrement
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl << endl;;
	
	//preincrement
	cout << b << endl;
	cout << ++b << endl;
	cout << b << endl << endl;
	
	//postdecrement
	cout << a << endl;
	cout << a-- << endl;
	cout << a << endl << endl;;
	
	//predecrement
	cout << b << endl;
	cout << --b << endl;
	cout << b << endl;
	
 
	return 0;
}
