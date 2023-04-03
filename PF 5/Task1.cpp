#include <iostream>
#include <cmath>
using namespace std;

float calculateHeight(float base, float degrees);

main()
{
   float base;
   float degrees;
   float height;
   cout << "Enter Base Value: " ;
   cin >> base;
   cout << "Enter Angle of Elevation: ";
   cin >> degrees;

   height = calculateHeight(base, degrees);
   cout << "Height of the tree is : " << height;
}


float calculateHeight(float base, float degrees)
{
   
   float radian = 57.2958;
   float radians;
   float angle;
   float height;

   radians = degrees / radian ;
   angle = tan(radians);
   height = base * angle;
   return height;
   return angle;
}