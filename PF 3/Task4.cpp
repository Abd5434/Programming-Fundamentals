#include <iostream>
using namespace std;
main()
{
float pounds;
float kilograms;

cout << "Enter Pounds: " ;
cin >> pounds ;
kilograms = 0.45 * pounds;
cout << "In Kilograms: " << kilograms << endl;

cout << "Enter Kilograms: " ;
cin >> kilograms ;
pounds = kilograms / 0.45;
cout << "In Pounds: " << pounds; 
}