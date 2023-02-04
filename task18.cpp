#include <iostream>
using namespace std;
main()
{
    system("cls");

    int size = 0;
    float largest;

    cout << "Enter the size of Array: ";
    cin >> size;
    float numbers[size];

    for (int x = 0; x < size; x++)
    {
        cout << "Define the Array: ";
        cin >> numbers[x];
        cout << endl;
    }
    largest=numbers[0];
    for (int x = 0; x < size; x++)
    {
        if (numbers[x]>largest)
        {
            largest = numbers[x];
        }
    }

    cout << "The Largest Number is: " << largest <<endl ;
}