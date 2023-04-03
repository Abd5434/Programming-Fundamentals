#include <iostream>
using namespace std;

int time(int hours,int minute);

main()
{
int hours , minute, timing;
cout << "Enter hours: ";
cin >> hours;
cout << "Enter minutes: ";
cin >> minute;

timing = time(hours,minute);
 
}

int time(int hours,int minute)
{

if (hours==23){
   if (minute >= 46){
    int minutes = minute - 45;
    hours = 00;
    cout << hours << ":" << minutes;
    return hours;
    return minutes;
    }

   if (minute == 45){
    int minutes = 00;
    hours == 00;
    cout << hours << ":" << minutes;
    return hours;
    return minutes;
    }

   if (minute < 46){
    int minutes = minute + 15;
    cout << hours << ":" << minutes;
    return hours;
    return minutes;
   }
}
if (hours<23){
   if (minute >= 46){
    int minutes = minute - 45;
    hours = hours + 1;
    cout << hours << ":" << minutes;
    return hours;
    return minutes;
    }

if (minute == 45){
    int minutes = 00;
    cout << hours << ":" << minutes;
    return hours;
    return minutes;
    }

   if (minute < 46){
    int minutes = minute + 15;
    cout << hours << ":" << minutes; 
    return hours;
    return minutes;
    }
   }
return 0;
}
