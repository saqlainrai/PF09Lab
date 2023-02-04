#include <iostream>
using namespace std;
main()
{
    system("cls");

    string arrayName[5];

    for (int x = 0; x < 5; x++)
    {
        cout << "Enter the Element: ";
        getline(cin, arrayName[x]);
        cout << endl;
    }

    cout << arrayName[2] << endl;
    cout << arrayName[4] << endl;
}