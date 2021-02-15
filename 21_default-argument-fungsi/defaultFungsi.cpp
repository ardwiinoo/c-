#include <iostream>

using namespace std;

//prototipe fungsi
double volumeBalok(double p = 1, double l = 1, double t = 1); //p = 1, l = 1, t = 1, adalah default

int main()
{
    cout << "Volume balok = " << volumeBalok(3, 4, 5) << endl;
    cout << "Volume balok = " << volumeBalok(3, 4) << endl;
    cout << "Volume balok = " << volumeBalok(3) << endl;
    cout << "Volume balok = " << volumeBalok() << endl;
    return 0;
}

double volumeBalok(double p, double l, double t)
{
    return p * l * t;
}