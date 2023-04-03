#include <iostream>
using namespace std;

int multiplyByFive(int num1);

main()
{
   int num1, product_by_five;
   cout << "Enter a number: ";
   cin >> num1;
   product_by_five = multiplyByFive(num1);
   cout << "Product with 5: " << product_by_five;

}

int multiplyByFive(int num1)
{
   int product = num1 * 5;
   return product; 

}