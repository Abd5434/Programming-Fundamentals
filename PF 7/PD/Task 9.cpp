#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter no of rows you want: ";
    cin >> num;
    for (int i = 1; i <= num; i = i + 1)
    {
        for (int j = 1; j <= i; j = j + 1 )
        {
            cout << "*";
        
        }

        for (int l = num; l > i; l = l - 1)
        {
            cout << " ";
        }
        for (int l = num; l > i; l = l - 1)
        {
            cout << " ";
        }
        for (int m = i; m >= 1; m = m - 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}