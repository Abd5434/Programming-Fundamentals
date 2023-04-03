#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "No. of rows: ";
    cin >> num;
    for (int j = 1; j <= num; j = j + 1)
    {
        for (int i = 1; i <= j; i = i + 1)
        {
            cout << "*" ;
        }
        cout << endl;
    }

}