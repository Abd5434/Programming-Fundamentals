#include <iostream>
using namespace std;
main()
{
int first_Number;
int second_Number;
int third_Number;
int fourth_Number;
int fifth_Number;
int sixth_Number;
int seventh_Number;
int eighth_Number;
int ninth_Number;
int tenth_Number;
int eleventh_Number;
int twelve_Number;
int thirteen_Number;
int fourteen_Number;
int fifteen_Number;
int addition;
int subtraction;
int multiplication;
int final_Result;

cout << "Enter 1st Number: " ;
cin >> first_Number;
cout << "Enter 2nd Number: " ;
cin >> second_Number;
cout << "Enter 3rd Number: " ;
cin >> third_Number;
cout << "Enter 4th Number: " ;
cin >> fourth_Number;
cout << "Enter 5th Number: " ;
cin >> fifth_Number;
cout << "Enter 6th Number: " ;
cin >> sixth_Number;
cout << "Enter 7th Number: " ;
cin >> seventh_Number;
cout << "Enter 8th Number: " ;
cin >> eighth_Number;
cout << "Enter 9th Number: " ;
cin >> ninth_Number;
cout << "Enter 10th Number: " ;
cin >> tenth_Number;
cout << "Enter 11th Number: " ;
cin >> eleventh_Number;
cout << "Enter 12th Number: " ;
cin >> twelve_Number;
cout << "Enter 13th Number: " ;
cin >> thirteen_Number;
cout << "Enter 14th Number: " ;
cin >> fourteen_Number;
cout << "Enter 15th Number: " ;
cin >> fifteen_Number;

addition = first_Number + second_Number + third_Number + fourth_Number + fifth_Number;
multiplication = sixth_Number * seventh_Number * eighth_Number * ninth_Number * tenth_Number;
subtraction = eleventh_Number - twelve_Number - thirteen_Number - fourteen_Number - fifteen_Number;
final_Result = addition + multiplication - subtraction;

cout << "Total: " << final_Result ; 
}