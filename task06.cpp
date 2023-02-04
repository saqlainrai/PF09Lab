#include <iostream>
using namespace std;
main()
{
    int size=0;
    cout << "Enter the size of Array: ";
    cin >> size;
    float marks[size];

    for (int x = 0; x < size; x++)
    {
        cout << "Enter the Number " << x + 1 << ": ";
        cin >> marks[x];
        cout << endl;
    }
    
    int sum=0, average=0;
    for (int x = 0; x < size; x++)
    {
        sum = sum + marks[x];
    }
    cout << sum <<endl;
    average = sum / size ;
    cout << average << endl;
}