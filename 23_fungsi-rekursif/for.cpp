#include <iostream>

using namespace std;

int main()
{

    int n, hasil = 1;
    cout << "Masukkan Angka n = ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        if (i <= 1)
        {
            cout << i;
            cout << endl;

            cout << "Hasil Faktorial = " << hasil << endl;
        }
        else
        {
            cout << i << "*";
        }
        hasil *= i;
    }

    return 0;
}