#include <iostream>
using namespace std;

int payableAmount(string day, string month, int amount);

main()
{
string day, month;
int amount, amountAfterDiscount;

cout << "Enter the day: ";
cin >> day;
cout << "Enter the month: ";
cin >> month;
cout << "Enter the amount: ";
cin >> amount;

amountAfterDiscount = payableAmount(day, month, amount);
cout << "The amount after discount is: " << amountAfterDiscount;
}

int payableAmount(string day, string month, int amount)
{
  int discount;
 
   if (day == "Sunday" && (month == "October" || month == "March" || month == "August"))
  {
    discount = (amount * 10)/100;
    return amount - discount;
  }
   else if (day == "Monday" && (month == "November" || month == "December" )) 
        {
           discount = (amount * 5)/100;
           return amount - discount;
        }
   return amount;
  }
 
 
  
