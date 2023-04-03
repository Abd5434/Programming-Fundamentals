#include <iostream>
using namespace std;

void amplifyBy4(int num);

main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    amplifyBy4(num);
}

void amplifyBy4(int num)
{
    for (int x = 1; x <= num; x = x + 1)
    {
        if(x % 4 == 0)
        {
            int amp = x * 10;
            cout << amp << " ";
        }
        cout << x << " ";
    }
}
