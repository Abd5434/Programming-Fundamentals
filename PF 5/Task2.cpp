#include <iostream>
#include <cmath>
using namespace std;

float positiveSquareRoot(float a, float b, float c);
float negativeSquareRoot(float a, float b, float c);

main()
{
float a, b, c, x1, x2; 
float sqrootpositive; 
float sqrootnegative;

cout << "Enter value of A: ";
cin >> a;

cout << "Enter value of B: ";
cin >> b;

cout << "Enter value of C: ";
cin >> c;

sqrootpositive = positiveSquareRoot(a,b,c);
x1 = (-b + sqrootpositive)/(2*a);
cout << "Value of X: " << x1 << endl;
sqrootnegative = negativeSquareRoot(a,b,c);
x2 = (-b - sqrootnegative)/(2*a);
cout << "Value of X: " << x2;
}

float positiveSquareRoot(float a, float b, float c)
{
   float power = pow(b,2);
   float positivesqroot = sqrt(power - 4*a*c);
   return positivesqroot;;
}

float negativeSquareRoot(float a, float b, float c)
{
   float power = pow(b,2);
   float negativesqroot = (sqrt(power - 4*a*c));
   return negativesqroot;;
}