#include <iostream>
using namespace std;

string value(int num);

main()
{
int numberByUser;
cout << "Enter a 2-digit number: ";
cin >> numberByUser;
int num1 = numberByUser / 10;
int num2 = numberByUser % 10;

value(num1);

   if (num2 == 0){
     cout << "";
   }
   if (num2 == 1){
     cout << "One";
   }
       if (num2 == 2){
     cout << "Two";
   }
       if (num2 == 3){
     cout << "Three";
   }
       if (num2 == 4){
     cout << "Four";
   }
       if (num2 == 5){
     cout << "Five";
   }
       if (num2 == 6){
     cout << "Six";
   }
       if (num2 == 7){
     cout << "Seven";
   }
       if (num2 == 8){
     cout << "Eight";
   }
       if (num2 == 9){
     cout << "Nine";
   }


}

string value(int num1)
{
if (num1 == 2){
   cout << "Twenty ";
}

if (num1 == 3){
   cout << "Thirty ";
}

if (num1 == 4){
   cout << "Fourty ";
}


if (num1 == 5){
   cout << "Fifty ";
}


if (num1 == 6){
   cout << "Sixty ";
}


if (num1 == 7){
   cout << "Seventy ";
}


if (num1 == 8){
   cout << "Eighty ";
}


if (num1 == 9){
   cout << "Ninety ";

}}