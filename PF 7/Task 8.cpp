#include <iostream>
using namespace std;

float calculateMoney(int age, float priceOfMachine, int priceOfGift);

main()
{
    int age, priceOfGift;
    float money, priceOfMachine;

    cout << "Age: ";
    cin >> age;
    cout << "Price of Washing Machine: ";
    cin >> priceOfMachine;
    cout << "Price of Gift: ";
    cin >> priceOfGift;

    money = calculateMoney(age, priceOfMachine, priceOfGift);
    cout << money;
}

float calculateMoney(int age, float priceOfMachine, int priceOfGift)
{
    
    int moneyTotal;
    int digits=0;
    int toyMoney;
    float money;
    int gift = 10; 
    int number = 1;
    int giftMoney= 0;
    for(int x = 2; x <= age; x = x + 2 )
    
    {
        moneyTotal = gift * number;
        moneyTotal = moneyTotal - 1;
        giftMoney = giftMoney + moneyTotal;
        number = number + 1; 
    }
    
    for(int x = 1; x <= age;x = x + 2)
    {        
        digits = digits + 1;      
        toyMoney = priceOfGift * digits;
    }
    money = toyMoney + giftMoney;

    if(money > priceOfMachine)
    {
        cout << "Yes!!!" << endl << "Remaining: ";
        money = money - priceOfMachine;
    }

    else 
    {
        cout << "No!!!" << endl << "Needed: ";
        money = priceOfMachine - money;
    }
    return money;
}
