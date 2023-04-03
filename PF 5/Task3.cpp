#include <iostream>
#include <cmath>
using namespace std;

int isSymmetrical(int threeDigitNo);

main()
{
   int threeDigitNo;
   bool symmetrical;
   cout << "Enter a 3-digit Number: ";
   cin >> threeDigitNo;
   symmetrical = isSymmetrical(threeDigitNo);
    
   if ( symmetrical == 1){
   cout << "It is symmetrical.";
}

   if ( symmetrical != 1){
   cout << "It is not symmetrical.";
}
}



int isSymmetrical(int threeDigitNo)
{
  
   int num1, num2, num3, x; 
   num1 = threeDigitNo%10;
   x = threeDigitNo / 10;
   num2 = x % 10;
   num3 = x/10;

   if(num1==num3){
    return 1;
   }
   if (num1 != num3){
   return 0;
   }
   return 0;
}