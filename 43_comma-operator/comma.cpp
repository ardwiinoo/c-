#include <iostream>

using namespace std;

void printData(int value)
{
    cout << "C " << value << endl;
}

int main()
{

    int a, b, c;

    a = (b = 1, cout << "B " << b << endl, c = 5, printData(c), (b + c));

    cout << "A " << a << endl;

    return 0;
}