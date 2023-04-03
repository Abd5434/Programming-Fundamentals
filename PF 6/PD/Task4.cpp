#include <iostream>
using namespace std;

int chargeCalculate(char serviceType, char dayOrNight, int minutes);

main()
{
    char serviceType;
    char dayOrNight;
    int totalCharges, minutes;

    cout << "Enter the type of service: ";
    cin >> serviceType; 
    cout << "Day (D) or Night (N): ";
    cin >> dayOrNight;
    cout << "Enter no. of minutes: ";
    cin >> minutes;
    
    totalCharges = chargeCalculate(serviceType, dayOrNight, minutes);
    cout << "Total Charges: $" << totalCharges; 
}

int chargeCalculate(char serviceType, char dayOrNight, int minutes)
{
    float charges;
    if (serviceType == 'R' || serviceType == 'r') 
    {
         charges = 10.00;
             if (minutes <= 50)
             {
                charges = 10;
             }
           else
             {
                charges = 10 + (minutes * 0.2);
             } 
    }

    else if ((serviceType == 'P' || serviceType == 'p') && (dayOrNight == 'd' || dayOrNight == 'D'))
    {
       charges = 25;
         if (minutes <= 75)
          {
            charges = 25;
          } 
        else
          {
            charges = 25 + (0.1 * minutes);
          } 
    } 

    else if ((serviceType == 'P' || serviceType == 'p') && (dayOrNight == 'n' || dayOrNight == 'N'))
    {
       charges = 25;
         if (minutes <= 100)
          {
            charges = 25;
          } 
        else
          {
            charges = 25 + (0.05 * minutes);
          } 
    } 
    else
    {
        return 0;
    }
    return charges;
}
