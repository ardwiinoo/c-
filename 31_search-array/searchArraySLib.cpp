#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArray(std::array<int, arraySize> &angka)
{
    std::cout << "Array: ";
    for (int &a : angka)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main()
{

    std::array<int, arraySize> angka = {9, 6, 8, 5, 7, 4, 1, 3, 2, 0};
    printArray(angka);
    std::cout << std::endl;

    //cara mencari array
    // 1.Sort dulu
    // 2.Cari dengan binary_search

    int cari;
    bool ketemu;

    std::cout << "Masukkan angka yang ingin dicari : ";
    std::cin >> cari;

    //sort array
    std::sort(angka.begin(), angka.end());

    //search array
    ketemu = std::binary_search(angka.begin(), angka.end(), cari);

    //pengkondisian
    if (ketemu)
    {
        std::cout << "Ketemu Nih !!" << std::endl;
    }
    else
    {
        std::cout << "Tidak Ketemu" << std::endl;
    }

    return 0;
}