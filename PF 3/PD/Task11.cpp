#include <iostream>
using namespace std;
main()
{
int number_1;
int number_2;

cout << "Enter 1st Number: ";
cin >> number_1;

number_2 = number_1;

cout << "Enter 2nd Number: ";
cin >> number_1;
number_2 = number_1 + number_2;
cout << "Enter 3rd Number: ";
cin >> number_1;
number_2 = number_1 + number_2;
cout << "Enter 4th Number: ";
cin >> number_1;
number_2 = number_1 + number_2;
cout << "Enter 5th Number: ";
cin >> number_1;
number_2 = number_1 + number_2;
 
cout << "Total Sum: " << number_2; 
}
