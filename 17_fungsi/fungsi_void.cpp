#include <iostream>

using namespace std;

//reporter
int kuadrat(int x)
{
    int y;
    y = x * x;
    return y;
}

//worker
void tampilkan(int input)
{
    cout << "---PAKE VOID---\n";
    cout << input << endl;
}

int main()
{
    int input, hasil;
    cout << "Masukkan angka yang ingin di kuadratkan : ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(input);

    return 0;
}