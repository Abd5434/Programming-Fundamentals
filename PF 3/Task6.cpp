#include <iostream>
using namespace std;
main()
{
float charge;
float time;
float current;
cout << "Enter the value of Charge (Q): " ;
cin >> charge ;
cout << "Enter the value of Time (T): " ;
cin >> time;
current = charge / time ;
cout << "The value of current (I): " << current ;
}
