#include <iostream>
using namespace std;



main()
{
int neededHours, days, workers;

cout << "Enter the number of hours needed: ";
cin >> neededHours;
cout << "Enter the number of Days: ";
cin >> days;
cout << "Number of workers: ";
cin >> workers;

float trainingDays = days * 0.1;
float daysLeft = days - trainingDays;
int working_hours = daysLeft * 10;
int totalWork = working_hours * workers;

int leftHours = totalWork - neededHours;
int additionalTimeRequired = neededHours - totalWork;

if ( totalWork > neededHours ){
    cout << "Yes! " << leftHours << " hours left.";
    }

if ( totalWork < neededHours ){
    cout << "Not enough Time! Additional " << additionalTimeRequired << " hours needed.";
    }


}