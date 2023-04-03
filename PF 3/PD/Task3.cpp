#include <iostream>
using namespace std;
main()
{
float initial_velocity;
float acceleration;
float time;
float final_velocity;

cout << "Enter Initial Velocity: ";
cin >> initial_velocity;
cout << "Enter Acceleration: ";
cin >> acceleration;
cout << "Enter Time: ";
cin >> time;
final_velocity = initial_velocity + (acceleration * time );
cout << "Final Velocity: " << final_velocity;
}