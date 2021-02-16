#include <iostream>

using namespace std;

int main()
{

    //membuat array
    /*

    type_data nama_array[banyak_array];

    */

    cout << "Array 1\n";

    int value[3];
    value[0] = 1;
    value[1] = 2;
    value[2] = 3;

    cout << &value[0] << " Nilainya adalah " << value[0] << endl;
    cout << &value[1] << " Nilainya adalah " << value[1] << endl;
    cout << &value[2] << " Nilainya adalah " << value[2] << endl;

    cout << endl;
    cout << "Array 2\n";

    char nama[3] = {'A', 'B', 'C'};

    cout << " Nilainya adalah " << nama[0] << endl;
    cout << " Nilainya adalah " << nama[1] << endl;
    cout << " Nilainya adalah " << nama[2] << endl;

    cout << "===========================================================\n";
    cout << "\t\tMengganti Nilai Array\t\t\n";
    cout << endl;

    //mengganti nilai pada array
    //#1
    int *ptr = value;
    *(ptr + 2) = 6;

    char *apt = nama;
    *(apt + 1) = 'X';

    //#2
    value[1] = 10;
    nama[2] = 'Z';

    cout << "Array 1\n";
    cout << &value[0] << " Nilainya adalah " << value[0] << endl;
    cout << &value[1] << " Nilainya adalah " << value[1] << endl;
    cout << &value[2] << " Nilainya adalah " << value[2] << endl;

    cout << endl;

    cout << "Array 2\n";
    cout << " Nilainya adalah " << nama[0] << endl;
    cout << " Nilainya adalah " << nama[1] << endl;
    cout << " Nilainya adalah " << nama[2] << endl;

    cout << endl;

    //Mengecek ukuran dan jumlah member
    cout << "Ukuran Array 1 = " << sizeof(value) << " byte" << endl;
    cout << "Jumlah member Array 1 = " << sizeof(value) / sizeof(int) << endl;
    cout << endl;
    cout << "Ukuran Array 2 = " << sizeof(nama) << " byte" << endl;
    cout << "Jumlah member Array 2 = " << sizeof(nama) / sizeof(char) << endl;

    return 0;
}
