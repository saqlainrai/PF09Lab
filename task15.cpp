#include <iostream>
using namespace std;
main()
{
    system("cls");

    int size = 0;
    cout << "Enter the size of Array: ";
    cin >> size;
    float numbers[size];

    for (int x = 0; x < size; x++)
    {
        cout << "Define the Array: ";
        cin >> numbers[x];
        cout << endl;
    }
    for (int x = size-1; x>=0; x--)
    {
        cout << numbers[x] << endl ;
    }
}