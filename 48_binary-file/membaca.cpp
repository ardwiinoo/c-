#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	fstream myFile;
	int hasil;

	myFile.open("data.bin", ios::in | ios::binary);

	// use method read
	myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));

	cout << "Besar Integer = " << sizeof(hasil) << endl;
	cout << hasil << endl;



	return 0;
}