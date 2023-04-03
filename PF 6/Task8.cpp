#include <iostream>
using namespace std;

float checkBalance(int budget, string type, int people);

main()
{
float tripRequirement;
int budget, people;
string type;

cout << "Enter budget: ";
cin >> budget;
cout << "Enter Type: ";
cin >> type;
cout << "No. of People: ";
cin >> people;

tripRequirement = checkBalance( budget, type, people);
}

float checkBalance(int budget, string type, int people)
{
  float usedForTravelling,remaining,needed;

   if (type == "Normal" && (people >= 1 && people <=4))
   {
      usedForTravelling = budget * 0.75;
      remaining = budget - usedForTravelling;
      needed = people * 249.99;
       if (needed < remaining)
      {
         cout << "Yes! You have " << remaining - needed << " QR left.";
         return remaining - needed;
      }

       if (needed > remaining)
      {
         cout << "Not enough money! you need " << needed - remaining;
      }
   }

   else if (type == "Normal" && (people >= 5 && people <= 9))
   {
      usedForTravelling = budget * 0.60;
      remaining = budget - usedForTravelling;
      needed = people * 249.99;
       if (needed < remaining)
      {
         cout << "Yes! You have " << remaining - needed << " QR left.";
         return remaining - needed;
      }

       if (needed > remaining)
      {
         cout << "Not enough money! you need " << needed - remaining << " QR.";
      }
   }

   else if (type == "Normal" && (people >= 10 && people <= 24))
   {
      usedForTravelling = budget * 0.50;
      remaining = budget - usedForTravelling;
      needed = people * 249.99;
       if (needed < remaining)
      {
         cout << "Yes! You have " << remaining - needed << " QR left.";
      }

   else if (needed > remaining)
      {
         cout << "Not enough money! you need " << needed - remaining << " QR.";
      }
   }

   else if (type == "Normal" && (people >= 25 && people <= 49))
   {
      usedForTravelling = budget * 0.40;
      remaining = budget - usedForTravelling;
      needed = people * 249.99;
       if (needed < remaining)
      {
         cout << "Yes! You have " << remaining - needed << " QR left.";
      }

       if (needed > remaining)
      {
         cout << "Not enough money! you need " << needed - remaining << " QR.";
      }
   }

   else if (type == "Normal" && people >= 50)
   {
      usedForTravelling = budget * 0.25;
      remaining = budget - usedForTravelling;
      needed = people * 249.99;
       if (needed < remaining)
      {
         cout << "Yes! You have " << remaining - needed << " QR left.";
      }

       if (needed > remaining)
      {
         cout << "Not enough money! you need " << needed - remaining << " QR.";
      }
   }

   else if (type == "VIP" && (people >= 1 && people <=4))
   {
      usedForTravelling = budget * 0.75;
      remaining = budget - usedForTravelling;
      needed = people * 499.99;
       if (needed < remaining)
      {
         cout << "Yes! You have " << remaining - needed << " QR left.";
      }

       if (needed > remaining)
      {
         cout << "Not enough money! you need " << needed - remaining << " QR.";
      }
   }

   else if (type == "VIP" && (people >= 5 && people <= 9))
   {
      usedForTravelling = budget * 0.60;
      remaining = budget - usedForTravelling;
      needed = people * 499.99;
       if (needed < remaining)
      {
         cout << "Yes! You have " << remaining - needed << " QR left.";
      }

      else if (needed > remaining)
      {
         cout << "Not enough money! you need " << needed - remaining << " QR.";
      }
   }

   else if (type == "VIP" && (people >= 10 && people <= 24))
   {
      usedForTravelling = budget * 0.50;
      remaining = budget - usedForTravelling;
      needed = people * 499.99;
       if (needed < remaining)
      {
         cout << "Yes! You have " << remaining - needed << " QR left.";
      }

       if (needed > remaining)
      {
         cout << "Not enough money! you need " << needed - remaining << " QR.";
      }
   }

  else if (type == "VIP" && (people >= 25 && people <= 49))
   {
      usedForTravelling = budget * 0.40;
      remaining = budget - usedForTravelling;
      needed = people * 499.99;
       if (needed < remaining)
      {
         cout << "Yes! You have " << remaining - needed << " QR left.";
      }

       if (needed > remaining)
      {
         cout << "Not enough money! you need " << needed - remaining << " QR.";
      }
   }

  else if (type == "VIP" && people >= 50)
   {
      usedForTravelling = budget * 0.25;
      remaining = budget - usedForTravelling;
      needed = people * 499.99;
       if (needed < remaining)
      {
         cout << "Yes! You have " << remaining - needed << " QR left.";
      }

       if (needed > remaining)
      {
         cout << "Not enough money! you need " << needed - remaining << " QR.";
      }
   }
else return 0;
}