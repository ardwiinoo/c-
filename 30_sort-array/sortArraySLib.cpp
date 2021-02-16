#include <iostream>
#include <array>
#include <algorithm> //untuk sort

const size_t arraySize = 10; //atur jumlah index array

void printArray(std::array<int, arraySize> &angka)
{
    std::cout << "Array: ";
    for (int &a : angka)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

void printArray(std::array<char, arraySize> &angka)
{
    std::cout << "Array: ";
    for (char &a : angka)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::array<int, arraySize> angka = {9, 6, 8, 5, 7, 4, 1, 3, 2, 0};
    std::array<char, arraySize> huruf = {'q', 'w', 'r', 'y', 'e', 't', 'i', 'u', 'p', 'o'};

    printArray(angka);
    printArray(huruf);

    std::cout << std::endl;

    std::sort(angka.begin(), angka.end());
    printArray(angka);

    std::sort(huruf.begin(), huruf.end());
    printArray(huruf);

    return 0;
}