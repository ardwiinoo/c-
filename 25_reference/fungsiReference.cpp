#include <iostream>

using namespace std;

void fungsiRef(int &b)
{
    cout << "Nilai dari B    = " << b << endl;
    cout << "Addresss dari B = " << &b << endl;
}

//prototipe
void kuadrat(int &);

int main()
{
    int a = 7;

    cout << "Nilai dari A    = " << a << endl;
    cout << "Addresss dari A = " << &a << endl;

    fungsiRef(a);

    kuadrat(a);
    cout << "Kuadrat dari A = " << a << endl;

    return 0;
}

void kuadrat(int &valueRef)
{
    valueRef = valueRef * valueRef;
}