#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int arr[num];

    for(int idx = 0; idx < num; idx ++)
    {
        cout << "Enter value: ";
        cin >> arr[idx];
    }

    for(int x = num-1; x >= 0; x--)
    {
        cout << arr[x] << " ";
    }
}