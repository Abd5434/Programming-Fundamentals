#include <iostream>
#include <windows.h>
using namespace std;

void sleepingSatisfactionCalculator();

main()
{
sleepingSatisfactionCalculator();

}

void sleepingSatisfactionCalculator()
{
int holidays;
int workingDays;
int gameTimeInHolidays;
int gameTimeInWorkingDays;
int totalGameTime;

cout << "Enter No. of Holidays: ";
cin >> holidays;

workingDays = 365 - holidays;
gameTimeInHolidays = holidays * 127;
gameTimeInWorkingDays = workingDays * 63;
totalGameTime = gameTimeInWorkingDays + gameTimeInHolidays;

if (totalGameTime < 30000){
cout << "Total Game Time: " << totalGameTime << endl;
cout << "Tom Sleeps Well" << endl;
}

if (totalGameTime > 30000){
cout << "Total Game Time: " << totalGameTime << endl;
cout << "Tom will run away." << endl;
}
}
