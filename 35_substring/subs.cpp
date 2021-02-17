#include <iostream>
#include <string>

using namespace std;

int main()
{

    string kalimat_1("Budi belajar pagi hari");
    string kalimat_2("Tono makan roti basi");

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;

    // substring, mengambil string di tengah-tengah
    // substr(index, panjang);

    cout << kalimat_1.substr(5, 7) << endl;
    cout << kalimat_2.substr(11, 4) << endl;

    // mencari posisi dari substring => find("....");
    cout << "Posisi pagi : ";
    cout << kalimat_1.find("pagi") << endl;
    cout << "Posisi makan : ";
    cout << kalimat_2.find("makan") << endl;

    // mencari posisi substring dari belakang => rfind("...");
    cout << "Mencari posisi dari belakang " << endl;
    cout << "Posisi I dari belakang : ";
    cout << kalimat_1.rfind("i") << endl;
    cout << "Posisi roti dari belakang : ";
    cout << kalimat_2.rfind("roti");

    return 0;
}