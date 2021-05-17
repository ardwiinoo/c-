#include <iostream>
#include <string>

using namespace std;

// void print(int data){
//     cout << data << endl;
// }

template<typename T>
void print(T data){
    cout << data << endl;
}

template<typename T>
int toInt(T data){
   return int(data); 
}

template<typename T, typename U>
T max(T a, U b){
    return (a > b) ? a : b;
}

int main(){
    system("cls");
    print(5);
    print('C');
    print(5.90);

    cout << toInt(10.59) << endl;
    cout << max(11,10.9) << endl;

    print<double>(10.15);
    cout << max<double, int>(11.2, 12) << endl;

    return 0;
}