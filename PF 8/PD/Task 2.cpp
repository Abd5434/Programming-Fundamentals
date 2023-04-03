#include <iostream>
using namespace std;

main()
{
    string movies[] = {"Gladiators", "Star Wars", "Terminator", "Taking Lives", "Tomb Rider"};
    int price = 500;

    string movieName;
    int discount;

    cout << "Enter name of movie: ";
    getline (cin,movieName);

    for(int idx = 0; idx < 5; idx ++)
    {
        if(movies[idx] == movieName)
        {
            if(idx % 2 == 1)
            {
                discount = price * 0.05;
                cout << "Price: " << price - discount;
            }

            else
            {
                discount = price * 0.1;
                cout << "Price: " << price - discount;
            }
        }
    }
}