#include <iostream>
#include <array>

using namespace std;

int main()
{

    //looping untuk array di c++ 11 keatas
    /*
        for(deklarasi_variabel : array){
            statement
        }
    */

    array<int, 10> arrayNilai = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int nilai : arrayNilai)
    {
        cout << "Address = " << &nilai << " Nilai = " << nilai << endl;
        nilai = 2; //tidak merubah array
    }

    cout << endl;

    //memanipulasi array dengan referensi
    for (int &nilaiRef : arrayNilai)
    {
        nilaiRef *= 2;
    }

    for (int &nilaiRef : arrayNilai)
    {
        cout << "Address = " << &nilaiRef << " Nilai = " << nilaiRef << endl;
    }

    return 0;
}