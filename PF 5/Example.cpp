#include <iostream>
#include <cmath>
using namespace std;

main()
{
   int num1, num2, greater, lesser, exponent, lower, higher;
   float underroot, cuberoot;
   cout << "Enter 1st number: ";
   cin >> num1;
   cout << "Enter 2nd number: ";
   cin >> num2;
   
   greater = max(num1,num2);
   cout << "Maximum Number: " << greater << endl;
   lesser = min(num1,num2);
   cout << "Minimum Number: " << lesser << endl;
   exponent = pow(num1,num2);
   cout << "Power: " << pow(num1,num2) << endl;
   underroot = sqrt(num1);
   cout << "Square root: " << underroot << endl;
   cuberoot = cbrt(num1);
   cout << "Cube Root: " << cuberoot << endl;
   lower = ceil(num1);
   higher = floor(num1);
   cout << lower; 
   cout << higher;
}