#include <iostream>
#include <windows.h>
using namespace std;
void ticketPricefunction();


main()
{
while(true){
	ticketPricefunction();
}}

void ticketPricefunction()
{
string countryName;
int ticketPrice;
int totalPrice;
int discount;

cout << "Enter the country Name: ";
cin >> countryName;
cout << "Enter the Ticket Price in $: ";
cin >> ticketPrice;

if (countryName == "Pakistan"){
	discount = ticketPrice/20;
	totalPrice = ticketPrice - discount;
	cout << "Final Price : " << totalPrice << endl;
}

if (countryName == "Ireland"){
	discount = ticketPrice/10;
	totalPrice = ticketPrice - discount;
	cout << "Final Price : " << totalPrice << endl;
}

if (countryName == "India"){
	discount = ticketPrice/5;
	totalPrice = ticketPrice - discount;
	cout << "Final Price : " << totalPrice << endl;
}

if (countryName == "England"){
	discount = ticketPrice/3.33;
	totalPrice = ticketPrice - discount;
	cout << "Final Price : " << totalPrice << endl;
}
if (countryName == "Canada"){
	discount = ticketPrice/2.22;
	totalPrice = ticketPrice - discount;
	cout << "Final Price : " << totalPrice << endl;
}

}