#include <iostream>
#include <string>
using namespace std;

int main()
{

    //perbandingan string
    string input;
    string kata_rahasia("indonesia");

    while (true)
    {
        cout << "Tebak negara = ";
        cin >> input;
        cout << input << " ";
        if (input == kata_rahasia)
        {
            cout << "Tebakan anda benar !!!" << endl;
            break;
        }
        cout << "Tebakan anda salah !!!" << endl;
    }

    cout << "--Program selesai" << endl;

    return 0;
}