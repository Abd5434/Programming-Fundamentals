#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int arr[num];
    bool flag = false;

    for(int idx = 0; idx < num; idx ++)
    {
        cout << "Enter values: ";
        cin >> arr[idx];
    }

    int anotherNumber;
    cout << "Enter the number you want to search: ";
    cin >> anotherNumber;

    for(int idx = 0; idx < num; idx ++)
    {
        if(arr[idx] == anotherNumber)
        {
            flag = true;
            break;
        }
    }
    if(flag == true)
    {
        cout << "Already Entered!!!";
    }
    else
    {
        cout << "No!!";
    }
}