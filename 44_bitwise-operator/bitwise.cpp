#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBinary(unsigned val, string nama)
{
    cout << nama << " = " << bitset<8>(val) << endl;
}

int main()
{
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    cout << "Bitwise AND (&) \n";
    c = a & b;

    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "C = " << c << endl;

    cout << "\nBitwise OR (|) \n";
    c = a | b;

    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "C = " << c << endl;

    cout << "\nBitwise XOR (^) \n";
    c = a ^ b;

    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "C = " << c << endl;

    cout << "\nBitwise NOT (~) \n";
    c = ~a;

    printBinary(a, "a");
    printBinary(c, "c");
    cout << "C = " << c << endl;

    cout << "\nBitwise SHL (<<) \n";
    c = a << 2;

    printBinary(a, "a");
    printBinary(c, "c");
    cout << "C = " << c << endl;

    cout << "\nBitwise SHR (>>) \n";
    c = a >> 2;

    printBinary(a, "a");
    printBinary(c, "c");
    cout << "C = " << c << endl;

    return 0;
}

/*
        Operator Bitwise
        &   AND     Bitwise AND
        |   OR      Bitwise OR
        ^   XOR     Bitwise Exclusive OR
        ~   NOT
        <<  SHL     Shift bits left
        >>  SHR     Shift bits right
*/