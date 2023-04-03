#include <iostream>
using namespace std;

void printPercentage(int num);

main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    printPercentage(num);
}

void printPercentage(int num)
{
    int number;
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    int counter4 = 0;
    int counter5 = 0;
    float p1, p2, p3, p4, p5,divider;

    for(int x = 1; x <= num; x = x + 1)
    {
        cout << "Enter: ";
        cin >> number;
        if(number < 200)
        {
            counter1 = counter1 + 1;
        }
        else if(number >= 200 && number < 400)
        {
            counter2 = counter2 + 1;
        }
        else if(number >= 400 && number < 600)
        {
            counter3 = counter3 + 1;
        }
        else if(number >= 600 && number < 800)
        {
            counter4 = counter4 + 1;
        }
        else
        {
            counter5 = counter5 + 1;
        }
    }
    divider = num;
    
    p1 = (counter1 * 100) / divider;
    p2 = (counter2 * 100) / divider;
    p3 = (counter3 * 100) / divider;
    p4 = (counter4 * 100) / divider;
    p5 = (counter5 * 100) / divider;

    cout << "Percentage 1: " << p1 << endl;
    cout << "Percentage 2: " << p2 << endl;
    cout << "Percentage 3: " << p3 << endl;
    cout << "Percentage 4: " << p4 << endl;
    cout << "Percentage 5: " << p5 << endl;
}
