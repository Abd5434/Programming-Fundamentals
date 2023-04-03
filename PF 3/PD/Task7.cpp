#include <iostream>
using namespace std;
main()
{
string movieName;
int adultPrice;
int childPrice;
int adultsTicketsSold;
int childTicketsSold;
int adultRevenue;
int childRevenue;
int totalRevenue;
int revenueLeft;
int percentageDonatedInAmount;
float percentageOfDonation;

cout << "Enter Movie Name: ";
cin >> movieName;
cout << "Enter Adult Ticket Price: ";
cin >> adultPrice;
cout << "Enter Child Ticket Price: ";
cin >> childPrice;
cout << "Adult Tickets Sold: ";
cin >> adultsTicketsSold;
cout << "Child Tickets Sold: ";
cin >> childTicketsSold;
cout << "Percentage to Donate: ";
cin >> percentageOfDonation;

adultRevenue = adultPrice * adultsTicketsSold;
childRevenue = childPrice * childTicketsSold;
totalRevenue = childRevenue + adultRevenue;
percentageDonatedInAmount = totalRevenue * (percentageOfDonation/100);
revenueLeft = totalRevenue - percentageDonatedInAmount;

cout << "___________________________________________________________________" << endl;
cout << "Total Amount Generated: "<< totalRevenue << endl;
cout << "Amount after Donation: "<< revenueLeft ;

}