#include <iostream>
using namespace std;
main()
{
string name;
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
float total;
float obtained_total;
float percentage;

cout << "Enter your Name: ";
cin >> name;
cout << "Enter 1st Subject Marks: ";
cin >> subject1;
cout << "Enter 2nd Subject Marks: ";
cin >> subject2;
cout << "Enter 3rd Subject Marks: ";
cin >> subject3; 
cout << "Enter 4th Subject Marks: ";
cin >> subject4; 
cout << "Enter 5th Subject Marks: ";
cin >> subject5;
obtained_total = subject1 + subject2 + subject3 + subject4 + subject5; 
total = 500;
percentage = (obtained_total / total) *100;
cout << "Your Name: " << name << endl;
cout << "Percentage: " << percentage;
}