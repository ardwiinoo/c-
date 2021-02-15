#include <iostream>

using namespace std;

int faktorialDong(int n)
{
    if (n <= 1)
    {
        cout << n;
        return n;
    }
    else
    {
        cout << n << " * ";
        return n * faktorialDong(n - 1);
    }
}

int main()
{
    int n, hasil;

    cout << "Masukkan Nilai = ";
    cin >> n;

    hasil = faktorialDong(n);
    cout << "\nFaktorial = " << hasil << endl;

    return 0;
}