#include <iostream>
using namespace std;

int isGreater(num1, num2, num3);

main()
{
   int price, greaterNumber;
   string brand;

   cout << "Enter price: ";
   cin >> price;
   cout << "Enter the brand of dress: ";
   cin >> brand;

   greaterNumber = isGreater(num1, num2, num3);
   cout << "The greater number = " << greaterNumber;
  
   if (price <= 1500 && brand == "Breakout")
     {
      
        cout << "Buy the dress.";
     }

   else
    {
        cout << "Do not buy the dress.";
    }
}

int isGreater(num1, num2,num3)
{
    if (num1 > num2 && num3)
   {
      return num1
   }

    if (num 2 > num1 && num3)
   {
     return num2;
   }

    if (num3 > num1 && num2)
   {
     return num3;
   }
}