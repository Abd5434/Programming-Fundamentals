#include <iostream>
using namespace std;

void greaterNumber(int firstNumber , int secondNumber);

main()
{
	int num1;
	int num2;
while(true)
{
	cout << "Enter first Number: ";
	cin >> num1;
	cout << "Enter second Number: ";
	cin >> num2;
	greaterNumber(num1,num2);
}
}

void greaterNumber(int firstNumber , int secondNumber)
{
if ( firstNumber > secondNumber )
{
	cout << firstNumber << " is greater." <<endl;
}
if ( secondNumber > firstNumber )
{
	cout << secondNumber << " is greater." <<endl;
}
}