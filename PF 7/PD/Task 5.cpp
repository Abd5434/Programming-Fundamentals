#include <iostream>
using namespace std;

int calculateDots(int num);

main()
{
    int num, dots;
    cout << "Enter a number: ";
    cin >> num;
    dots = calculateDots(num);

    cout << "Dots: " << dots;
}

int calculateDots(int num)
{
    int dots = 0;
    for(int x = num; x > 0; x = x - 1)
    {
        dots = dots + x;
    }
    return dots;
}
