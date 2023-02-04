#include <iostream>
using namespace std;
main()
{
    system("cls");

    while (true)
    {
        int arrSize;

        cout << "Enter the Number of Resistors: ";
        cin >> arrSize;
        cout << endl;

        float resistanceArray[arrSize];

        for (int x = 0; x < arrSize; x++)
        {
            cout << "Define the Resistance: ";
            cin >> resistanceArray[x];
            cout << endl;
        }

        float sum = 0;
        for (int x=0; x<arrSize;x++)
        {
            sum = sum + resistanceArray[x];
        }
        cout << sum <<endl;
    }
}