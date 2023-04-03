#include <iostream>
using namespace std;

main()
{
    int arr[3];
    int transformations;
    cout << "No. of transformations: ";
    cin >> transformations;

    for(int idx = 0; idx < 3; idx++)
    {
        cout << "Value for array at index " << idx << ": ";
        cin >> arr[idx];

        if(arr[idx] % 2 == 0)
        {
        arr[idx] = arr[idx] - (2 * transformations);
        }

        else if(arr[idx] % 2 == 1)
        {
        arr[idx] = arr[idx] + (2 * transformations);
        }
    }

    cout << "[ ";
    for(int x = 0; x < 3; x++)
    {
        cout << arr[x] << " ";
    }
    cout << "]";
}