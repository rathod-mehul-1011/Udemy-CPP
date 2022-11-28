#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float fValue = 123.456789;

    cout << "Size of float : " << sizeof(float) << endl;
    cout << setprecision(20) << fixed << fValue << endl;

    double dValue = 123.456789;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << setprecision(20) << fixed << dValue << endl;

    long double lValue = 123.45678976543210;
    cout << "Size of long double : " << sizeof(long double) << endl;
    cout << setprecision(20) << fixed << lValue << endl;
    return 0;
}