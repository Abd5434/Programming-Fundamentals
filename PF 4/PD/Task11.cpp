#include <iostream>
#include <windows.h>
using namespace std;

void challanIssue();

main()
{
challanIssue();
}

void challanIssue()
{
int speed;
cout << "Enter Speed: ";
cin >> speed;
cout << "Speed: " << speed << endl;

if (speed > 100){
	cout << "Halt!!! YOU WILL BE CHALLENGED..." ;
}

if (speed <= 100){
	cout << "Perfect!You're going good.";
}
}