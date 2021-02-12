#include <iostream>

using namespace std;

int main(){

	//pake for
	for(int i = 1; i <= 15; i++){
		
		if( i == 5){
			//break;
			continue;
		}
		if ( i == 7){
			continue;
		}
		if( i == 10){
			break;
		}
		cout << i << endl;
	}
	cout <<"akhir program" << endl;

}