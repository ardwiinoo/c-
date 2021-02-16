#include <iostream>
#include <array>

using namespace std;

int main()
{

    //membuat array dengan standard library
    //  std::array<tipe_data, jumlah_array> nama_array;

    array<int, 5> nilai; //0 1 2 3 4

    for (int i = 0; i <= 4; i++)
    {
        nilai[i] = i;
        cout << "Nilai [" << i << "] = " << nilai[i];
        cout << " Address = " << &nilai[i] << endl;
    }

    cout << endl;

    //ukuran array
    cout << "Ukuran array  = " << nilai.size() << endl;
    //address awal dari array
    cout << "Address awal  = " << nilai.begin() << endl;
    //address akhir dari aray
    cout << "Address akhir = " << nilai.end() << endl;

    //nilai dengan index
    cout << "Nilai ke 1 = " << nilai.at(1) << endl;

    return 0;
}