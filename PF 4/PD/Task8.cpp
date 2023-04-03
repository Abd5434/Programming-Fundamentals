#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int , int);
void isEqual();

main()
{
isEqual();
}

void isEqual()
{
int integer1;
int integer2;

cout << "Enter first Integer: ";
cin >> integer1;

cout << "Enter second Integer: ";
cin >> integer2;

if (integer1 == integer2)
{
cout << "True";
}

if (integer1 != integer2)
{
cout << "False";
}
}

void gotoxy(int x, int y)
{
{
 COORD coordinates;
 coordinates.X = x; 
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


}