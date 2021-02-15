#include <iostream>

using namespace std;

int perkalian(int a, int b)
{
    if (b <= 1)
    {
        cout << a;
        return a;
    }
    else
    {
        cout << a << " + ";
        return a + perkalian(a, b - 1);
    }
}

int main()
{
    int a, b;
    cout << "Masukkan nilai A   = ";
    cin >> a;
    cout << "Masukkan nilai B   = ";
    cin >> b;

    cout << endl;
    cout << "\nHasil A x B = " << perkalian(a, b) << endl;

    return 0;
}