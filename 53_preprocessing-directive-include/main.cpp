#include <iostream>

#include "library.h"

using namespace std;

int main(){
    cout << "menggunakan include library dot h" << endl;
    cout << "PI: " << PI << endl;
    cout << "KUADRAT: " << KUADRAT(7) << endl;
    cout << "MAX: " << MAX(9,6) << endl;
    cout << "data string: " << data << endl;
    
    cin.get();
    return 0;
}