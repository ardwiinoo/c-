#include <iostream>
using namespace std;

int pangkatIterasi(int a, int b)
{
    int hasil = a;
    for (int i = 1; i < b; i++)
    {
        hasil = hasil * a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b)
{
    if (b <= 1)
    {
        cout << "Akhir dari rekursif\n";
        return a;
    }
    else
    {
        cout << "Pake rekursif\n";
        return a * pangkatRekursif(a, (b - 1));
    }
}

int main()
{

    int a, b;

    cout << "Masukkan Angka   = ";
    cin >> a;
    cout << "Masukkan Pangkat = ";
    cin >> b;

    cout << "Hasil = " << pangkatIterasi(a, b) << endl;
    cout << "Hasil = " << pangkatRekursif(a, b) << endl;

    return 0;
}