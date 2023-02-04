#include <iostream>
using namespace std;
main()
{
    system("cls");

    while (true)
    {
        float amountArray[4];
        float sum = 0;
        float amount, finamount;
        float required;

        for (int x = 0; x < 4; x++)
        {
            cout << "Define the Amount Array: ";
            cin >> amountArray[x];
            cout << endl;

            if (x == 0)
            {
                amount = amountArray[x] * 25;
            }
            else if (x == 1)
            {
                amount = amountArray[x] * 10;
            }
            else if (x == 2)
            {
                amount = amountArray[x] * 5;
            }
            else if (x == 3)
            {
                amount = amountArray[x] * 1;
            }

            finamount = amount / 100;
            sum = sum + finamount;
        }

        cout << "Enter the Required Amount: ";
        cin >> required;
        cout << endl;

        if (required>sum)
        {
            cout << "False"<<endl;
        }
        else
        {
            cout << "True"<<endl;
        }
        cout << endl ;
    }
}