#include <iostream>
#include <string>

using namespace std;

int main()
{

    string kalimat_1("aku sayang aku");
    string kalimat_2("kamu sayang kamu");

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;

    // menukar string => swap(...);
    cout << "\nmenukar string menggunakan swap" << endl;
    kalimat_1.swap(kalimat_2);

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;

    // mengganti string => replace(index, panjang, "kata_baru");
    cout << "\nmengganti string menggunakan replace" << endl;
    kalimat_1.replace(12, 4, "dia");

    kalimat_2.replace(kalimat_2.rfind("aku"), 3, "kamu");

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;

    // menambah string dengan insert => insert(index, "kata_baru");
    cout << "\nmenambah string menggunakan insert" << endl;
    kalimat_1.insert(0, "tapi ");

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;

    return 0;
}