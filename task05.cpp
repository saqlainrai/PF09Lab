#include <iostream>
using namespace std;
main()
{
    int size=0;
    cout << "Enter the size of Array: ";
    cin >> size;
    float numbers[size];

    for (int x = 0; x < size; x++)
    {
        cout << "Enter the Numbers: " << ": ";
        cin >> numbers[x];
        cout << endl;
    }

    for (int x = 0; x < size; x++)
    {
        cout << x+1 <<" Number is "<< numbers[x] << endl;
    }
}