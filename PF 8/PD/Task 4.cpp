#include <iostream>
using namespace std;

bool sevenBoom(int num);

main()
{
    int num;
    cout << "No. of values: ";
    cin >> num;
    int arr[num];
    bool flag;
    for(int idx = 0; idx < num; idx++)
    {
        cout << "Enter value for index " << idx << " : ";
        cin >> arr[idx];
    }

    for(int idx = 0; idx < num; idx++)
    {
        flag = sevenBoom(arr[idx]);
    }

    if(flag == true)
    {
        cout << "Boom!!!";
    }
    else
    {
        cout << "There is no 7 in an array.";
    }
}

bool sevenBoom(int num)
{
    bool flag;
    if ((num == 7) || (num % 10 == 7) || (num / 10 == 7) )
    {
    flag = true;
    }
    return flag;
}
