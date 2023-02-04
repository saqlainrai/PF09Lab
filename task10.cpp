#include <iostream>
using namespace std;
main()
{
    system("cls");

    string name;
    cout << "Enter the Word: ";
    getline(cin, name);
    cout << endl;

    int x = 0;
    while (name[x]!='\0')
    {
        x++;
    }
    while (x>=0)
    {
        cout << name[x] ;
        x--;
    }
}