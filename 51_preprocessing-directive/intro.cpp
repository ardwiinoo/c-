#include <iostream>

//macro
#define PI 3.14159265359      //tidak memakai memory

using namespace std;

int main(){

    double pi = 3.14159265359; //memakai memory

    cout << "nilai dari PI = " << PI << endl;
    cout << "nilai dari pi = " << pi << endl;

    //address
    cout << "alamat pi = " << &pi << endl;

    return 0;
}