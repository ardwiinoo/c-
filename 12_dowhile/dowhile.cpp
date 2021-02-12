#include <iostream>

using namespace std;

int main(){
	
	//do while looping
	/*
		do{ 
			aksi 
		} while( syarat );
	*/
	
	int a = 1;
	
	do{
		cout << "halo kalian !";
		cout << a << endl;
		a ++;
	}while(a <= 15);
	
	return 0;
}
