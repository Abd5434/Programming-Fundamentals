#include <iostream>
using namespace std;

void printPercentage(int num);

main()
{
    int num;
    cout << "Enter the number of values: ";
    cin >> num;

    printPercentage(num);
}

void printPercentage(int num)
{
    int number;
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    float p1, p2, p3;

    for (int x = 1; x <= num; x = x + 1)
    {
        cin >> number;
        if (number % 2 == 0)
        {
            counter1 = counter1 + 1;
        }

        if (number % 3 == 0)
        {
            counter2 = counter2 + 1;
        }

        if (number % 4 == 0)
        {
            counter3 = counter3 + 1;
        }

        p1 = (counter1 * 100) / num;
        p2 = (counter2 * 100) / num;
        p3 = (counter3 * 100) / num;

    }

    cout << "P1: " << p1 << " %" << endl;

    cout << "P2: " << p2 << " %" << endl;

    cout << "P3: " << p3 << " %" << endl;
}
