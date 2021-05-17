#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    fstream myFile;
    int number = 1;
    myFile.open("data.bin", ios::out | ios::binary);

    // use method write
    myFile.write(reinterpret_cast<char *>(&number), sizeof(number));

    myFile.close();

    return 0;
}