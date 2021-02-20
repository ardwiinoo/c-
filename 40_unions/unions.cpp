#include <iostream>

using namespace std;

union nama{
	int int_value;
	char char_value[4];
};

int main(){
	
	nama paijo;
	
	paijo.int_value = 12345678;
	
	cout << "--int_value  : " << paijo.int_value << endl;
	cout << "--char_value : " << paijo.char_value << endl;
	
	
	paijo.char_value[0] = 'a';
	paijo.char_value[1] = 'b';
	paijo.char_value[2] = 'c';
	paijo.char_value[3] = 'd';
	
	cout << "--int_value  : " << paijo.int_value << endl;
	cout << "--char_value : " << paijo.char_value << endl;
	
	return 0;
}
