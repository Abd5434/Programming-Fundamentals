#include <iostream>
using namespace std;

float lowestPrice(int kms, string dayOrNight);

main()
{
int kms;
string dayOrNight;

cout << "Day or Night: ";
cin >> dayOrNight;
cout << "Enter Kilometres: ";
cin >> kms;

float lowPrice = lowestPrice(kms, dayOrNight);
cout << "Lowest Prize: " << lowPrice << " Euros.";
}

float lowestPrice(int kms, string dayOrNight)
{
float lessprice;
   if (kms < 20 && dayOrNight == "Day"){
     cout << "Vehicle: Taxi." << endl;
     return lessprice = (0.7 + (0.79*kms));
    }

   else if (kms < 20 && dayOrNight == "Night"){
     cout << "Vehicle: Taxi." << endl;
     return lessprice = (0.7 + (0.9*kms));
    }

   else if (kms >= 20 && kms < 100){
     cout << "Vehicle: Bus." << endl;
     return lessprice = (0.09*kms);
    }

   else if (kms >= 100){
     cout << "Vehicle: Train." << endl;
     return lessprice = (0.06*kms);
    }
else{
return 0;
}
}