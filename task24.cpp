#include <iostream>
using namespace std;
main()
{
    system("cls");

    while (true)
    {
        string name;
        cout << "Enter the Phrase: ";
        getline(cin, name);
        cout << endl;

        int count = name.length();

        for (int x = 0; x <= count; x++)
        {
            if ((name[x] == 'a') || (name[x] == 'A'))
            {
                continue;
            }
            else if ((name[x] == 'e') || (name[x] == 'E'))
            {
                continue;
            }
            else if ((name[x] == 'i') || (name[x] == 'I'))
            {
                continue;
            }
            else if ((name[x] == 'o') || (name[x] == 'O'))
            {
                continue;
            }
            else if ((name[x] == 'u') || (name[x] == 'U'))
            {
                continue;
            }
            else
            {
                cout << name[x];
            }
        }
    }
}