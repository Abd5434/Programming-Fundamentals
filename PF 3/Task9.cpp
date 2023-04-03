#include <iostream>
using namespace std;
main()
{
float first_Number;
float second_Number;
float third_Number;
float fourth_Number;
float fifth_Number;
float sixth_Number;
float seventh_Number;
float eighth_Number;
float ninth_Number;
float tenth_Number;
float addition;
float subtraction;
float multiplication;
float division;
float total;

cout << "Enter First Number: ";
cin >> first_Number;
cout << "Enter Second Number: ";
cin >> second_Number;
cout << "Enter Third Number: ";
cin >> third_Number;
cout << "Enter Fourth Number: ";
cin >> fourth_Number;
cout << "Enter Fifth Number: ";
cin >> fifth_Number;
cout << "Enter sixth Number: ";
cin >> sixth_Number;
cout << "Enter Seventh Number: ";
cin >> seventh_Number;
cout << "Enter Eighth Number: ";
cin >> eighth_Number;
cout << "Enter Ninth Number: ";
cin >> ninth_Number;
cout << "Enter Tenth Number: ";
cin >> tenth_Number;

addition = third_Number + fifth_Number + ninth_Number ;
subtraction = second_Number - first_Number ;
multiplication = seventh_Number * tenth_Number * sixth_Number ;
division = eighth_Number / fourth_Number ;

cout << "Addition: " << addition << endl ;
cout << "Subtraction: " << subtraction << endl;
cout << "Multiplication: " << multiplication << endl;
cout << "Division: " << division << endl ;

total = addition + subtraction + multiplication + division ;
cout << "Total is: " << total;


}
