#include <iostream>
using namespace std;

void add(int number_1, int number_2);
void multiply(int number_1, int number_2);
void subtraction(int number_1, int number_2);

main()
{
	int num_1;
	int num_2;
	char operation;
	cout << "Enter first Number: ";
	cin >> num_1;
	cout << "Enter second Number: ";
	cin >> num_2;
	cout << "Press + for addition , - for subtraction , * for multiplication: ";
	cin >> operation;

if ( operation == '+' ){
	add(num_1, num_2);
}

if (operation == '*' ) {	
	multiply(num_1, num_2);
}
if (operation == '-' ) {	
	subtraction(num_1, num_2);
}
}

void add(int number_1, int number_2)
{
	int sum;
	sum = number_1 + number_2;
	cout << "Sum: " << sum << endl;

}

void multiply(int number_1, int number_2)
{
	int product = number_1 * number_2;
	cout << "Product: " << product << endl;
}

void subtraction(int number_1, int number_2)
{
	int difference = number_1 - number_2;
	cout << "Difference: " << difference << endl;
}