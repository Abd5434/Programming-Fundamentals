#include <iostream>
using namespace std;

void isEven(int number);

main()
{
	int number;
while(true)
{
	cout << "Enter Number: ";
	cin >> number;
	isEven(number);
}
}

void isEven(int number)
{
if (number%2 == 0)
{	cout << number << " is an even number." << endl;
}
if (number%2 != 0)
{
	cout << number << " is an odd number." << endl;
}
}