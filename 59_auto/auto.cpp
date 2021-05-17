#include <iostream>
#include <string>
#include <typeinfo> //untuk melihat tipe data

using namespace std;

template<typename T, typename U>
auto max(T a, U b){
    return (a > b) ? T(a) : U(b);
}

int main(){

    /*
        auto nama_var = nilai;
        auto digunakan untuk mengganti tipe data 
    */

    int a = 19;
    string b = "anjay mabar";
    double c = 16.432;
    float d = 16.5f;

    auto e = max(c,a);

    cout << a << " \ttipe: " << typeid(a).name() << endl;
    cout << b << " \ttipe: " << typeid(b).name() << endl;
    cout << c << " \ttipe: " << typeid(c).name() << endl;
    cout << d << " \ttipe: " << typeid(d).name() << endl;
    cout << e << " \ttipe: " << typeid(e).name() << endl;

    return 0;
}