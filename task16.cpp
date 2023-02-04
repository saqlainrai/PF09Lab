#include <iostream>
using namespace std;
main()
{
    system("cls");
    int size = 0;
    int num;
    bool result = false;

    cout << "Enter the size of Array: ";
    cin >> size;
    float marks[size];

    for (int x = 0; x < size; x++)
    {
        cout << "Define the Array: ";
        cin >> marks[x];
        cout << endl;
    }

    cout << "Enter the Number you want to find: ";
    cin >> num;
    cout << endl;

    for (int x = 0; x < size; x++)
    {
        if (num == marks[x])
        {
            result = true;
            break;
        }
    }

    if (result == true)
    {
        cout << "The Number is Already Entered" << endl;
    }
    else
    {
        cout << "The Number does not Exist" << endl;
    }
}