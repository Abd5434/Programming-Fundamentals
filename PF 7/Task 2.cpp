#include <iostream>
using namespace std;

void fibonocciSeries(int length);

main()
{
    int length;
    cout << "Enter the length of Fibonacci series: ";
    cin >> length;
    fibonocciSeries(length);
}

void fibonocciSeries(int length)
{
    int num1 = 0;
    int num2 = 1;
    cout << num1 << ", " << num2; 
    for (int x = 1; x <= length ; x = x + 1)
    {
        int sum = num1 + num2;
        cout << sum << ", ";
        num1 = num2;
        num2 = sum; 
    }
    
}
