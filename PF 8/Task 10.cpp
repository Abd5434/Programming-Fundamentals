#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "How many numbers: ";
    cin >> num;
    int arr[num];
    int largest = -1000000;
    for(int idx = 0; idx < num; idx++)
    {
        cout << "Enter array element: ";
        cin >> arr[idx];

        if(arr[idx] > largest)
        {
            largest = arr[idx];
        }
    }
    
    cout << "Largest: " << largest;
}