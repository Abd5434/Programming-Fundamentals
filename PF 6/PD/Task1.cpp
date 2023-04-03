#include <iostream>
using namespace std;

string printActivity(string temperature, string humidity);

main()
{
string temperature, humidity;
cout << "Temperature (Warm or Cold): ";
cin >> temperature;
cout << "Humidity (Dry or Humid): ";
cin >> humidity;

string activity;
activity = printActivity(temperature, humidity);
cout << activity;
}

string printActivity(string temperature, string humidity)
{
string activity;
  if (temperature == "Warm" && humidity == "Dry")
     {
       activity = "Play Tennis.";    
     }

  else if (temperature == "Warm" && humidity == "Humid")
     {
       activity = "Swim.";    
     }

  else if (temperature == "Cold" && humidity == "Dry")
     {
       activity = "Play Basketball.";    
     }

  else if (temperature == "Cold" && humidity == "Humid")
     {
       activity = "Watch TV.";    
     }
  else
    {
      return 0;
    }
return activity;
}