#include <iostream>
using namespace std;
main()
{
int noOfDays;
int weight_you_want_to_lose;
cout << "Enter Weight you want to lose: ";
cin >> weight_you_want_to_lose;
noOfDays = weight_you_want_to_lose * 15;

cout << "It wil take you " << noOfDays << " days to lose " << weight_you_want_to_lose << " kgs";
}