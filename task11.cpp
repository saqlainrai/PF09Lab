#include <iostream>
using namespace std;
main()
{
    system("cls");

    string name;
    char letter;
    cout << "Enter the Word: ";
    getline(cin, name);
    cout << endl;

    int count = name.length();

    cout << "Enter the letter you want to find: ";
    cin >> letter;
    cout << endl;

    if (name[count-1]==letter)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}