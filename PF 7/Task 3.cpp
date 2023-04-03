#include <iostream>
using namespace std;

int totalDigits(int num);

main()
{
    int num, digits;
    cout << "Enter any number: ";
    cin >> num;
    digits = totalDigits(num);
    cout << "No. of digits: " << digits;
}

int totalDigits(int num)
{
    int digits = 0;
    while(num != 0)
    {
        digits = digits + 1;
        num = num / 10;
    }
    return digits;
}
