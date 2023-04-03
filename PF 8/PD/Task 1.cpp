#include <iostream>
using namespace std;

main()
{
    string fruit[] = {"peach", "apple", "guava", "watermelon"};
    int price[] = {60, 70, 40, 30};
    string inputFruit;
    int quantity;

    cout << "Enter fruit: ";
    getline(cin,inputFruit);
    cout << "Enter quantity: ";
    cin >> quantity;

    for(int idx = 0; idx < 4; idx++)
    {
        if(fruit[idx] == inputFruit)
        {
            cout << "Price: " << quantity * price[idx];
        }
    }
    
}