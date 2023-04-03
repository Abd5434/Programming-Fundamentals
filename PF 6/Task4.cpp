#include <iostream>
using namespace std;

string checkSpeed(float speed);

main()
{
  int speed;
  string speedometer;
  cout << "Enter speed: ";
  cin >> speed;

  speedometer = checkSpeed(speed);
  cout << speedometer;
}

string checkSpeed(float speed)
{
 string speedInfo;
  if (speed <= 10)
   {
     return speedInfo = "Slow";
   }

  else if (speed > 10 && speed <= 50)
    {
      return speedInfo = "Average";
    }

  else if (speed > 50 && speed <= 150)
    {
      return speedInfo = "Fast";
    }

  else if (speed > 150 && speed <= 1000)
    {
      return speedInfo = "Ultra-Fast";
    }
  else
    {
      return speedInfo = "Extremely Fast";
    }

}