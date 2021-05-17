#include <iostream>
// #include <array>
#include <exception>

using namespace std;

// 1. syntax error
// 2. linking error
// 3. non-error
// 4. runtime-error

int pembagian(int &num, int &denum){
    if(denum == 0){
        throw overflow_error("Error : Pembagi nol");
    }
    return num / denum;
}

int main(){

    // exception default
    // array<int,5> array = {0,1,2,3,4};

    // try{
    //     cout << array.at(5) << endl;
    // }catch(exception &e){
    //     cout << e.what() << endl;
    // }

    // membuat exception sendiri
    int a, b, c;
    while(true){
        cout << "num = ";
        cin >> a;
        cout << "denum = ";
        cin >> b;

        try{
            c = pembagian(a,b);
            cout << c << endl;
        }catch(exception &e){
            cout << e.what() << endl;
        }
    }

    cout << "akhir dari program" << endl;



    return 0;
}