#include <iostream>
using namespace std;

int volleyball(int holidays, int weekends, string yearType);

main()
{
string yearType;
int holidays, weekends, volleyballPlaytime;

cout << "Enter number of holidays: ";
cin >> holidays;
cout << "Enter number of weekends: ";
cin >> weekends;
cout << "Enter type of year: ";
cin >> yearType;
   
    volleyballPlaytime = volleyball(holidays, weekends, yearType);
    cout << "Vladimir has played volleyball for " << volleyballPlaytime << ".";
   
}
int volleyball(int holidays, int weekends, string yearType)
{
float playTimeWeekends = (48 * 0.75);
float totalPlayTime = playTimeWeekends + (holidays * 0.6666666667);

if (yearType == "Normal")
  {
    return totalPlayTime;
  }

 else if (yearType == "Leap")
  {
   float playTimePercentage = totalPlayTime * 0.15;
   totalPlayTime = totalPlayTime + playTimePercentage;
   return totalPlayTime;
  }
}
