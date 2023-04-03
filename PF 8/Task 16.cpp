#include <iostream>
using namespace std;

main()
{
    int arr[4];
    float requiredAmount;
    
    cout << "Enter the required amount: ";
    cin >> requiredAmount;

    cout << "No. of Quarters: ";
    cin >> arr[0];
    cout << "No. of Dimes: ";
    cin >> arr[1];
    cout << "No. of Nickels: ";
    cin >> arr[2];
    cout << "No. of Pennies: ";
    cin >> arr[3];

    float sum = (arr[0] * 0.25) + (arr[1] * 0.1) + (arr[2] * 0.05) + (arr[3] * 0.01);
    
    if(sum >= requiredAmount)
    {
        cout << "True.";
    }
    
    else
    {
        cout << "False.";
    }


}