#include <iostream>
#include <windows.h>
using namespace std;

void priceOfFlowers();

main()
{
priceOfFlowers();
}

void priceOfFlowers()
{
int noOfRedRose;
int noOfWhiteRose;
int noOfTulips;
float originalPrice;
float discount;
float discountedPrice;

cout << "Enter No. of Red Roses: ";
cin >> noOfRedRose;
cout << "Enter No. of White Roses: ";
cin >> noOfWhiteRose;
cout << "Enter No. of Tulips: ";
cin >> noOfTulips;

originalPrice = (noOfRedRose*2) + (noOfWhiteRose*4.1) + (noOfTulips*2.5);
cout << "Original Price: " << originalPrice << endl;

if (originalPrice > 200){
discount = originalPrice/5;
discountedPrice = originalPrice - discount;

cout << "Total Payable Amount: " << discountedPrice;
}
}