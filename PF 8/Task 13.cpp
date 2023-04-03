#include <iostream>
using namespace std;

main()
{
    int array1[2];
    int num;
    cout << "Number of values of 2nd array: ";
    cin >> num;
    int array2[num];

    for(int idx = 0; idx < 2; idx++)
    {
        cout << "Enter elements of array 1: ";
        cin >> array1[idx];
    }

    for(int idx = 0; idx < num; idx++)
    {
        cout << "Enter elements of array 2: ";
        cin >> array2[idx];
    }

    
    cout << "[" <<array1[0] << " ";
    for(int idx = 0; idx < num; idx++)
    {
        cout << array2[idx] << " ";
    }
    cout << array1[1] << "]";

}