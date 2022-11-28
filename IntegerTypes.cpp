#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int value = 54656;
    cout << value << endl;

    long int lValue = 234567891;
    cout << lValue << endl;

    short int sValue = -23456;
    cout << sValue << endl;

    unsigned int uValue = 23456;
    cout << uValue << endl;

    cout << "Max int Value : " << INT32_MAX << endl;
    cout << "Min int Value : " << INT32_MIN << endl;

    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    return 0;
}