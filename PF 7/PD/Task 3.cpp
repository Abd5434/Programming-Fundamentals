#include <iostream>
using namespace std;

void upperBody(int num);
void lowerBody(int num);

main()
{
    int num;
    cout << "Enter no. of rows: ";
    cin >> num;

    upperBody(num);
    lowerBody(num);
}

void upperBody(int num)
{
    for (int j = 1; j <= num; j = j + 1)
    {
        for (int k = num; k > j; k = k - 1)
        {
            cout << " ";
        }
        for (int i = j; i >= 1; i = i - 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void lowerBody(int num)
    {
        for (int j = 1; j <= num; j = j + 1)
        {
            for (int k = 1; k < j; k = k + 1)
            {
                cout << " ";
            }
            for (int i = num; i >= j; i = i - 1)
            {
                cout << "*";
            }

            cout << endl;
        }
    }
