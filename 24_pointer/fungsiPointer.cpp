#include <iostream>

using namespace std;

void fungsiPointer(int *y)
{
    cout << "Address dari Y = " << y << endl;
    cout << "Nilai dari Y   = " << *y << endl;
}

//prototipe
void kuadrat(int *);

int main()
{

    //variabel
    int x = 7;

    cout << "Address dari X = " << &x << endl;
    cout << "Nilai dari X   = " << x << endl;

    fungsiPointer(&x);

    kuadrat(&x);
    cout << "Nilai X kuadrat = " << x << endl;

    return 0;
}

void kuadrat(int *valuePtr)
{
    *valuePtr = (*valuePtr) * (*valuePtr);
}