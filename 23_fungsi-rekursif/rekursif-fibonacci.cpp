#include <iostream>

using namespace std;

int fibonacciDong(int angka)
{
    if ((angka == 0) || (angka == 1))
    {
        return angka;
    }
    else
    {
        return fibonacciDong(angka - 1) + fibonacciDong(angka - 2);
    }
}

int main()
{
    int angka, hasil;

    cout << "Masukkan Angka = ";
    cin >> angka;

    hasil = fibonacciDong(angka);
    cout << hasil;

    return 0;
}