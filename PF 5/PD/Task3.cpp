#include <iostream>
using namespace std;

float taxCalculator(char type, float price);

main()
{
    char type;
    float price, priceOfVehicle;
    cout << "Enter the Type of Vehicle: ";
    cin >> type;
    cout << "Enter Price: ";
    cin >> price;
      
    priceOfVehicle = taxCalculator( type, price);
    cout << "The final price on a vehicle of type " 
         << type << " after adding the tax is $" << priceOfVehicle;    
}

float taxCalculator(char type, float price)
{
    if(type == 'M'){  
     float taxAmount = (price * 6)/100;
     float finalPrice = price + taxAmount;
     return finalPrice;
    } 

    if(type == 'E'){
     float taxAmount = (price * 8)/100;
     float finalPrice = price + taxAmount;
     return finalPrice;
    }

    if(type == 'S'){
     float taxAmount = (price * 10)/100;
     float finalPrice = price + taxAmount;
     return finalPrice;
    }  

    if(type == 'V'){
     float taxAmount = (price * 12)/100;
     float finalPrice = price + taxAmount;
     return finalPrice;
    } 

    if(type == 'T'){
     float taxAmount = (price * 15)/100;
     float finalPrice = price + taxAmount;
     return finalPrice;
    } 
}