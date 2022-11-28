#include <iostream>
using namespace std;

int main()
{
    // break ...
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "i is : " << i << endl;
    //     if (i == 3)
    //     {
    //         break;
    //     }
    //     cout << "Looping ..." << endl;
    // }
    // cout << "Program quitting ..." << endl;

    // continue ...
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "i is : " << i << endl;
    //     if (i == 3)
    //     {
    //         continue;
    //     }
    //     cout << "Looping ..." << endl;
    // }
    // cout << "Program quitting ..." << endl;

    const string password = "hello";
    string input;
    do
    {
        cout << "Enter your password : " << flush;
        cin >> input;
        if (input != password)
        {
            cout << "Access denied." << endl;
        }
        else
        {
            break;
        }
    } while (true);
    cout << "Password accepted." << endl;
    return 0;
}