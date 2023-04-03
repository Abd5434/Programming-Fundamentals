#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "How many numbers: ";
    cin >> num;
    int arr[num];
    int anotherNum;
    cout << "Enter another number: ";
    cin >> anotherNum;

    for(int x = 0; x < num; x++)
    {
        cout << "Enter array elemnt: ";
        cin >> arr[x];
    }

    for(int x = 0; x < num; x ++)
    {
        cout << arr[x] << " x " << anotherNum << " = " << arr[x] * anotherNum << endl;
    }
}