#include <iostream>
using namespace std;

float priceCalculateApartment(int nights, string month);
float priceCalculateStudio(int nights, string month);

main()
{
   string month;
   int nights;
   float price;

   cout << "Enter month: ";
   cin >> month;
   cout << "Enter No. of nights: ";
   cin >> nights; 

   price = priceCalculateApartment(nights, month);
   cout << price << endl;
   price = priceCalculateStudio(nights, month);
   cout << price;
}

float priceCalculateStudio(int nights, string month)
{
       float discount, price;
       float priceRate;
        if (month == "May" || month == "October")
        {
         priceRate = 50;
          if(nights > 7 && nights < 14)
          {
          discount = priceRate * 0.05;
          priceRate = priceRate - discount;
          price = priceRate * nights;
          }
        
          else if (nights > 14)
          {
          discount = priceRate * 0.30;
          priceRate = priceRate - discount;
          price = priceRate * nights;
          }
        }

      else if (month == "June" || month == "September")
        {
            priceRate = 75.20;
         if(nights > 14)
          {
            discount = priceRate * 0.20;
            priceRate = priceRate - discount;
            price = priceRate * nights;
          }
          else
          {
            price = priceRate * nights;
          }
        }
       
      else if (month == "July" || month == "August")
        {
           priceRate = 76;
           price = priceRate * nights;
        }
       else
       {
         return 0;
       }
       return price;   
      }

float priceCalculateApartment(int nights, string month)
{
   float discount, price, priceRate;
   if (month == "May" || month == "October")
   {
      priceRate = 65;
      if (nights > 14)
      {
      discount = priceRate * 0.1;
      priceRate = priceRate - discount;
      price = priceRate * nights;
      }

      else
      {
         price = priceRate * nights;
      }
   }

      else if (month == "June" || month == "September")
   {
      priceRate = 68.70;
      if (nights > 14)
      {
      discount = priceRate * 0.1;
      priceRate = priceRate - discount;
      price = priceRate * nights;
      }

      else
      {
         price = priceRate * nights;
      }   
   }

     else if (month == "July" || month == "August")
   {
      priceRate = 77;
      if (nights > 14)
      {
      discount = priceRate * 0.1;
      priceRate = priceRate - discount;
      price = priceRate * nights;
      }
      else
      {
         price = priceRate * nights;
      }
   }
   else
   {
      return 0;
   }
   return price;
}
   
