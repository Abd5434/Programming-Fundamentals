#include <iostream>
using namespace std;

int digitSum(int num);

main()
{
    int num, sum;
    cout << "Enter a number: ";
    cin >> num;

    sum = digitSum(num);
    cout << "Sum: " << sum;
}

int digitSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int mod = num % 10;
        sum = sum + mod;
        num = num / 10;
    }
    return sum;
    
}