#include <iostream>

using namespace std;

int main()
{

    int x = 5;

    //pointer
    int *xPtr = &x;

    //int x memiliki nilai dan address (alamat)
    cout << "nilai dari x  = " << x << endl;
    cout << "alamat dari x = " << xPtr << endl;

    //dereferencing, mengambil data dari sebuah pointer
    x = 10;
    cout << "Mengambil nilai dari pointer xPtr = " << *xPtr << endl;

    return 0;
}