#include <iostream>
#include <string>

using namespace std;

int main()
{

    string kata("aku");

    //menampilkan kata
    cout << kata << endl;

    //mengambil karakter berdasarkan index
    cout << "Index ke 0" << kata[0] << endl;
    cout << "Index ke 1" << kata[1] << endl;
    cout << "Index ke 2" << kata[2] << endl;

    //merubah karakter pada index
    kata[2] = 'o';
    cout << kata << endl;

    //menyambung kata, concatenation
    string kata2(kata + "in");
    cout << kata2 << endl;

    string kata3("sayang");
    kata.append(" " + kata3);
    cout << kata << endl;

    string kata4("aku");
    kata += " " + kata4;
    cout << kata << endl;

    return 0;
}