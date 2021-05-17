#include <iostream>
#include <fstream> // ofstream, ifstream, fstream

using namespace std;

int main()
{

    ofstream myFile;

    /*
        ios::out = operasi output, default;
        ios::app = menuliskan pada akhir baris;
        ios::trunc = membuat file jika tidak ada, dan kalau ada akan di hapus;
    */

    myFile.open("data1.txt", ios::out);
    myFile << "penulisan pada data1";
    myFile.close();

    myFile.open("data2.txt", ios::trunc);
    myFile << "penulisan pada data2";
    myFile.close();

    myFile.open("data3.txt", ios::app); //append
    myFile << "\npenulisan pada data3";
    myFile.close();

    myFile.open("data4.txt", ios::out);
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for (int j = i - 1; j >= 1; j--)
        {
            myFile << " ";
        }
        for (int k = i * 2; k <= n * 2; k++)
        {
            myFile << "*";
        }
        myFile << endl;
    }
    myFile.close();

    return 0;
}