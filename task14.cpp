#include <iostream>
using namespace std;
main()
{
    system("cls");

    string name;
    cout << "Enter the Word: ";
    getline(cin, name);
    cout << endl;

    int x=0;
    int count1=0;
    while (name[x]!='\0')
    {
        if ((name[x]=='a')||(name[x]=='e')||(name[x]=='i')||(name[x]=='o')||(name[x]=='u'))
        {
            count1= count1 + 1;
        }
        x++;
    }
    cout << count1;
}