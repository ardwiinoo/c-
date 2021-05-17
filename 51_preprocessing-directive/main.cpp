// preprocessing directive (#)
#include <iostream>

// macro = merubah nilai dengan nama
#define PI 3.14159265359
#define BAHASA "indonesia"

// macro untuk fungsi
#define KUADRAT(x) (x*x)
#define MAX(A,B) ((A > B) ? A:B) //ternary


// akhir dari preprocessing directive
using namespace std;

int main(){

    cout << "nilai dari PI = " << PI << endl;
    cout << "bahasa = " << BAHASA << endl;
    cout << "kuadrat = " << KUADRAT(5) << endl;
    cout << "Max = " << MAX(5,7) << endl;

    //undef
    #undef BAHASA
    #define BAHASA "inggris"
    cout << "bahasa = " << BAHASA << endl;


    return 0;
}