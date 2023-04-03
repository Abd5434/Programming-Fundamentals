#include <iostream>
using namespace std;

void totalAmount ( string day, int amount );

main()
{
	int amount;
	string day;
	int payableAmount;
while (true)
{
	cout << "Enter the day: ";
	cin >> day;
	cout << "Enter amount: ";
	cin >> amount;
	totalAmount (day,amount);
}
}

void totalAmount ( string day, int amount )
{
	int payableAmount;
	int sale;
if ( day == "sunday" )
{
	sale = amount / 10;
	payableAmount = amount - sale;
	cout << "Payable Amount: " << payableAmount << endl;

}
if (day != "sunday")
{
	sale = amount / 20;
	payableAmount = amount - sale;
	cout << "Payable Amount: " <<  payableAmount << endl;
}
}