#include <iostream>
using namespace std;
main()
{
    system("cls");

    int size = 0;
    float shortest;

    cout << "Enter the size of Array: ";
    cin >> size;
    float numbers[size];

    for (int x = 0; x < size; x++)
    {
        cout << "Define the Array: ";
        cin >> numbers[x];
        cout << endl;
    }
    shortest=numbers[0];
    for (int x = 0; x < size; x++)
    {
        if (numbers[x]<shortest)
        {
            shortest = numbers[x];
        }
    }

    cout << "The Shortest Number is: " << shortest <<endl ;
}