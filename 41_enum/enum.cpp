#include <iostream>

using namespace std;

enum warna
{
    merah,
    putih,
    hitam,
    coklat,
    kuning = 5,
    biru
};

int main()
{

    warna baju;

    baju = hitam;

    if (baju == hitam)
    {
        cout << "warna baju hitam" << endl;
    }

    cout << baju << endl;

    return 0;
}