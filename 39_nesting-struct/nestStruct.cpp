#include <iostream>

using namespace std;

struct pengarang
{
    string nama;
    int tanggal_lahir;
};

struct buku
{
    string judul;
    string genre;
    int tahun;

    // struct pengarang
    pengarang penulis1;
    pengarang penulis2;
};

int main()
{
    pengarang pengarang1, pengarang2;
    buku buku1, buku2;

    // buat pengarang 1
    pengarang1.nama = "Bambang pamungkas";
    pengarang1.tanggal_lahir = 1980;

    // buat pengarang 2
    pengarang2.nama = "Taufik hidayat";
    pengarang2.tanggal_lahir = 1966;

    // buat buku 1
    buku1.judul = "Ada gajah dimatamu";
    buku1.genre = "action";
    buku1.tahun = 2003;
    buku1.penulis1 = pengarang1;
    buku1.penulis2 = pengarang2;

    cout << buku1.judul << endl;
    cout << buku1.genre << endl;
    cout << buku1.tahun << endl;
    cout << buku1.penulis1.nama << endl;
    cout << buku1.penulis2.nama << endl;

    cout << endl;

    // buat buku 2
    buku2.judul = "Bapakku superman";
    buku2.genre = "comedy";
    buku2.tahun = 2006;
    buku2.penulis2 = pengarang2;

    cout << buku2.judul << endl;
    cout << buku2.genre << endl;
    cout << buku2.tahun << endl;
    cout << buku2.penulis2.nama << endl;
    cout << buku2.penulis2.tanggal_lahir << endl;

    return 0;
}