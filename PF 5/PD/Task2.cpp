#include <iostream>
using namespace std;

float unitConversion(float length, float width, float height, string unit);

main()
{
float length, width, height;
string unit;
  cout << "Enter Length: ";
  cin >> length;
  cout << "Enter Width: ";
  cin >> width;
  cout << "Enter Height: ";
  cin >> height;
  cout << "Enter Unit in which you want to convert: ";
  cin >> unit;

  float  volumeOfPyramid = unitConversion(length, width, height, unit);
  cout << "Volume in " << unit << ": " << volumeOfPyramid << " cubic " << unit;
  
}

float unitConversion(float length, float width, float height, string unit)
{
float volumeInmeters = (length * width * height)/3;
if(unit == "meters"){    
    return volumeInmeters;
    }
 if(unit == "Millimeters"){
    float volumeInMillimeters = volumeInmeters * (1000000000);
    return volumeInMillimeters;
    } 
 if(unit == "Centimeters"){
    float volumeInCentimeters = volumeInmeters * (1000000);
    return volumeInCentimeters;
    } 
 if(unit == "Kilometers"){
    float volumeInKillometers = volumeInmeters / (1000000000);
    return volumeInKillometers;
    }
}