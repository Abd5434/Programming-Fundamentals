#include <iostream>
using namespace std;
main()
{
string name;
float matric;
float inter;
float ecat;
float inter_percentage;
float matric_percentage;
float ecat_percentage;
float total_aggregate;

cout << "Enter your Name: " ;
cin >> name;
cout << "Enter your Matric marks: " ;
cin >> matric;
cout << "Enter your Intermediate marks: ";
cin >> inter;
cout << "Enter your ECAT marks: ";
cin >> ecat;

inter_percentage = ( inter / 550 )  ;
matric_percentage = ( matric / 1100 )  ;
ecat_percentage = ( ecat / 400 )  ;
total_aggregate = ( inter_percentage * 40 ) + ( matric_percentage * 10 ) + ( ecat_percentage * 50 );
cout << "Your aggregate is: " << total_aggregate ;
}