#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    float fValue = 1.1;

    if (fValue == 1.1)
    {
        cout << "equals" << endl;
    }
    else 
    {
        cout << "not equals" << endl;
    }
    cout << setprecision(10) << fValue << endl;

    return 0;
}