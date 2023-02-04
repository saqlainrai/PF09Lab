#include <iostream>
using namespace std;
main()
{
    system("cls");

    while (true)
    {
        int firstarr[2];
        int arrSize;

        for (int x = 0; x < 2; x++)
        {
            cout << "Define the First Array: ";
            cin >> firstarr[x];
            cout << endl;
        }

        cout << "Enter the size of Second Array: ";
        cin >> arrSize;
        cout << endl;
        int secondarr[arrSize];

        for (int x = 0; x < arrSize; x++)
        {
            cout << "Define the Second Array: ";
            cin >> secondarr[x];
            cout << endl;
        }

        cout << "[ " << firstarr[0] << " " ;
        for (int x=0; x<arrSize;x++)
        {
            cout << secondarr[x] << " ";
        }
        cout << firstarr[1] << " ]"<<endl;
    }
}