#include <iostream>
#include <string>

using namespace std;

/*
    Ternary operator

    kondisi ? hasil1 : hasil2;

*/

int main()
{

    int a, b;
    string kata1, kata2, hasil;

    kata1 = "Ini adalah Kata1";
    kata2 = "Ini adalah kata2";

    a = 5;
    cout << "Masukkan nilai B = ";
    cin >> b;

    // use ternary
    hasil = (a > b) ? kata1 : kata2; // ekuivalen dengan if else

    cout << hasil << endl;

    return 0;
}