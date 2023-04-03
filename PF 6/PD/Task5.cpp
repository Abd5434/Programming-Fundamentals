#include <iostream>
using namespace std;

float priceCalculate(string fruit, string day, float quantity);

main()
{
    string fruit, day;
    float quantity, price;

    cout << "Enter the fruit: ";
    cin >> fruit;
    cout << "Enter the day: ";
    cin >> day;
    cout << "No. of fruits: ";
    cin >> quantity;

    price = priceCalculate(fruit, day, quantity);
    cout << price; 
}

float priceCalculate(string fruit, string day, float quantity)
{
    float price;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
        {
            if (fruit == "Banana")
            {
              price = quantity * 2.50;
              return price;
            }  

            else if  (fruit == "Apple")
            {
                price = quantity * 1.20;
                return price;
            }

            else if  (fruit == "Orange")
            {
                price = quantity * 0.85;
                return price;
            }
            else if  (fruit == "Grapefruit")
            {
                price = quantity * 1.45;
                return price;
            }
            
            else if  (fruit == "Kiwi")
            {
                price = quantity * 2.70;
                return price;
            }
            
            else if  (fruit == "Pineapple")
            {
                price = quantity * 5.50;
                return price;
            }
            
            else if  (fruit == "Grapes")
            {
                price = quantity * 3.85;
                return price;
            }   

            else
            {
                cout << "Error!";
            }
         
        }

         else if (day == "Saturday" || day == "Sunday")
        {
            if (fruit == "Banana")
            {
              price = quantity * 2.70;
              return price;
            }  

            else if  (fruit == "Apple")
            {
                price = quantity * 1.25;
                return price;
            }

            else if  (fruit == "Orange")
            {
                price = quantity * 0.90;
                return price;
            }
            else if  (fruit == "Grapefruit")
            {
                price = quantity * 1.60;
                return price;
            }
            
            else if  (fruit == "Kiwi")
            {
                price = quantity * 3.00;
                return price;
            }
            
            else if  (fruit == "Pineapple")
            {
                price = quantity * 5.60;
                return price;
            }
            
            else if  (fruit == "Grapes")
            {
                price = quantity * 4.20;
                return price;
            }   

            else
            {
                cout << "Error!";
            }
        }

        else 
        {
          return 0;
        }    
}