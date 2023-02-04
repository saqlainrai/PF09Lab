#include <iostream>
using namespace std;
main()
{
    system("cls");

    int size = 0;
    int num;
    cout << "Enter the size of Array: ";
    cin >> size;
    float numbers[size];

    for (int x = 0; x < size; x++)
    {
        cout << "Define the Array of Numbers: ";
        cin >> numbers[x];
        cout << endl;
    }

    cout << "Enter the Number with you want to multiply: ";
    cin >> num;
    cout << endl;

    for (int x=size-1; x>=0; x--)
    {
        cout << numbers[x]*num << " ";
    }
    cout << endl;
}