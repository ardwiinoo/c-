#include <iostream>

using namespace std;

struct buah
{
    int harga;
    string nama;
    float berat;
    string rasa;
};

int main()
{
    buah apel;
    buah jeruk;

    apel.nama = "Apel";
    apel.berat = 200;
    apel.harga = 15000;
    apel.rasa = "Manis kesat";

    jeruk.nama = "Jeruk";
    jeruk.berat = 25.0;
    jeruk.harga = 20000;
    jeruk.rasa = "Maniss";

    cout << apel.nama << endl;
    cout << "-" << apel.berat << endl;
    cout << "-" << apel.harga << endl;
    cout << "-" << apel.rasa << endl;

    cout << jeruk.nama << endl;
    cout << "-" << jeruk.berat << endl;
    cout << "-" << jeruk.harga << endl;
    cout << "-" << jeruk.rasa << endl;

    return 0;
}