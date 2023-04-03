#include <iostream>
using namespace std;

int oddishOrEvenish(int num);

main()
{
   int num, sum;
   cout << "Enter a number upto 5 digits: ";
   cin >> num;
   sum = oddishOrEvenish(num);
   

   if (sum % 2 == 1){
     cout << "The number is Oddish";
   }
   if (sum % 2 != 1){
     cout << "The number is Evenish";
   }
}

int oddishOrEvenish(int num)
{
   int x;
   int num1 = num % 10;
   x = num / 10;
   int num2 = x % 10;
   x = x / 10;
   int num3 = x % 10;
   x = x / 10;
   int num4 = x % 10;
   x = x / 10;
   int num5 = x % 10;
   int additionOfallDigits = num1 + num2 + num3 + num4 + num5;
   return additionOfallDigits;
}