#include <iostream>
using namespace std;
main()
{
    system("cls");

    string name;
    cout << "Enter the Word: ";
    getline(cin, name);
    cout << endl;

    int count = name.length();

    if (count%2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}