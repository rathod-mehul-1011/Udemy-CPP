#include <iostream>
using namespace std;

int main()
{
    string password = "hello";
    cout << "Enter Password : " << flush;

    string input;
    cin >> input;

    if (input == password)
    {
        cout << "Password Accepted !!!";
    }

    if (input != password)
    {
        cout << "Access Denied !!!";
    }

    return 0;
}