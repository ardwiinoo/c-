#include <iostream>

using namespace std;

int main(){

    // typedef adalah memberikan alias untuk tipe data

    typedef int X;
    typedef int iVector2D[2];
    typedef unsigned long ulong;
    typedef double vector[2];

    using numbers = double;

    X a = 50;
    iVector2D b = {3,4};
    ulong c = 1234512227;
    vector d = {10.777, 9.345};
    numbers e = 8.987;

    cout << "nilai a: " << a << endl;
    cout << "nilai b: " << b[0] << " dan " << b[1] << endl;
    cout << "nilai c: " << c << endl;
    cout << "nilai d: " << d[0] << " dan " << d[1] << endl;
    cout << "nilai e: " << e << endl;

    return 0; 
}