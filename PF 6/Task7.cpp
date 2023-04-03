#include <iostream>
using namespace std;

float checkCost(string city, string product, int quantity);

main()
{
float cost;
string city, product;
int quantity;

cout << "City: ";
cin >> city;
cout << "Product: ";
cin >> product;
cout << "Quantity: ";
cin >> quantity;

cost = checkCost(city, product, quantity);
cout << "Cost: " << cost;
}

float checkCost(string city, string product, int quantity)
{
if (city == "Sofia" && product == "Coffee")
   {
     return quantity * 0.50;
   }

else if (city == "Sofia" && product == "Water")
   {
     return quantity * 0.80;
   }

else if (city == "Sofia" && product == "Beer")
   {
     return quantity * 1.20;
   }

else if (city == "Sofia" && product == "Sweets")
   {
     return quantity * 1.45;
   }

else if (city == "Sofia" && product == "Peanuts")
   {
     return quantity * 1.60;
   }         

else if (city == "Plovdiv" && product == "Coffee")
   {
     return quantity * 0.40;
   }   

else if (city == "Plovdiv" && product == "Water")
   {
     return quantity * 0.70;
   }

else if (city == "Plovdiv" && product == "Beer")
   {
     return quantity * 1.15;
   }

else if (city == "Plovdiv" && product == "Sweets")
   {
     return quantity * 1.30;
   }

else if (city == "Plovdiv" && product == "Peanuts")
   {
     return quantity * 1.50;
   } 

else if (city == "Varna" && product == "Coffee")
   {
     return quantity * 0.45;
   }           

else if (city == "Varna" && product == "Water")
   {
     return quantity * 0.70;
   } 

else if (city == "Varna" && product == "Beer")
   {
     return quantity * 1.10;
   } 

else if (city == "Varna" && product == "Sweets")
   {
     return quantity * 1.35;
   } 

else if (city == "Varna" && product == "Peanuts")
   {
     return quantity * 1.55;
   }            
   else return 0; 
}