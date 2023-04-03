#include <iostream>
using namespace std;

int frequencyCheck(int number, int digits);

main()
{
    int frequency,number, digits;

    cout << "Enter number: ";
    cin >> number;
    cout << "Enter digit: ";
    cin >> digits;

    frequency = frequencyCheck(number, digits);
    cout << "Frequency : " << frequency;
}

int frequencyCheck(int number, int digits)
{
    int single = 0;
    int frequency = 0;

    while(number > 0)
    {
        single = number % 10;
        if (single == digits)
        {
            frequency = frequency + 1;
        }
        number = number / 10;
    } 
    return frequency;
}
