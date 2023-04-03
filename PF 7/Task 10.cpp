#include <iostream>
using namespace std;

float calculatePrice(float money, int year);

main()
{
    int year;
    float money, price;
    
    cout << "Money: ";
    cin >> money;
    cout << "Year: ";
    cin >> year;

    price = calculatePrice(money, year);
    if(price > 0)
    {
        cout << "Yes! He will live a carefree life and will have " << price << " dollars left."; 
    }

    else 
    {
        cout << "No! He will need " << price* -1 << " dollars to survive."; 
    }
}

float calculatePrice(float money, int year)
{
    float calculate;
    int age = 19;
    for(int x = 1800; x <= year; x = x + 1)
    {
        if (x % 2 == 0)
        {
        money = money - 12000;
        }
        if (x % 2 == 1)
        {
        money = money - (12000 + (50 * age));
        age = age + 2;
        }
    }
    
    return money;
}
