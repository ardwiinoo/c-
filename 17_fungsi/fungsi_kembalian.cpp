#include <iostream>

using namespace std;

//rumus (fungsi)        //reporter
int kuadrat(int x)
{
    int y;
    y = x * x;
    return y;
}

int jumlah(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int input, hasil, a, b, hasil2;
    cout << "Masukkan angka yang ingin di kuadratkan : ";
    cin >> input;

    hasil = kuadrat(input);
    cout << "Hasil = " << hasil << endl;

    cout << "Masukkan angka A : ";
    cin >> a;
    cout << "Masukkan angka B : ";
    cin >> b;

    hasil2 = jumlah(a, b);
    cout << "Hasil = " << hasil2 << endl;

    return 0;
}