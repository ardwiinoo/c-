#include <iostream>

using namespace std;

//variabel global
int a = 50;

//mengambil variabel global
int ambilGlobal()
{
    return a;
}

int a_local()
{
    a = 10;
    return a;
}

int main()
{
    cout << "1. Variabel global = " << a << endl;
    //variabel local main
    int a = 5;
    cout << "2. Variabel local main = " << a << endl;
    cout << "3. Variabel ambil global = " << ambilGlobal() << endl;
    cout << "4. Variabel local main = " << a << endl;
    cout << "5. Variabel a_local = " << a_local() << endl;
    cout << "6. Variabel local main = " << a << endl;

    { //block
        cout << "7. Variabel local main = " << a << endl;

        int a = 7; //variabel block
        cout << "8. Variabel block = " << a << endl;
        cout << "9. Variabel global = " << ::a << endl; //cara memanggil global
    }
    cout << "10. Variabel local main = " << a << endl;
    return 0;
}