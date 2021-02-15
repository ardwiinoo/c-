#include <iostream>

using namespace std;

int luasKotak(int p, int l)
{
    int luas = p * l;
    return luas;
}

//overloading = menimpa
int luasKotak(int sisi)
{
    int luas = sisi * sisi;
    return luas;
}

double luasKotak(double p, double l)
{
    return p * l;
}

double luasKotak(double sisi)
{
    return sisi * sisi;
}

//end of overloading

int main()
{
    cout << "Luas kotak 2 x 5 = " << luasKotak(2, 5) << endl;
    cout << "Luas kotak 2 x 2 = " << luasKotak(2) << endl;
    cout << "Luas kotak 2.5 x 3.7 = " << luasKotak(2.5, 3.7) << endl;
    cout << "Luas kotak 2.5 x 2.5 = " << luasKotak(2.5) << endl;

    return 0;
}