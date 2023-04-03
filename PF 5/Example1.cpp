#include <iostream>
#include <windows.h>
using namespace std;

int add(int num1, int num2);
float division(float num1, float num2);
int maximum(int num1, int num2);

main()
{
	int num1, num2, total, max, exponent;
	float divide;
	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter 2nd number: ";
	cin >> num2;
	total = add(num1, num2);
	cout << "Sum: " << total << endl;
	divide = division(num1, num2);
	cout << "Division: " << divide << endl;
	max = maximum(num1, num2);
	cout << "Maximum: " << max << endl;
}

int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

float division(float num1, float num2)
{
	float quotient = num1 / num2;
	return quotient;
}

int maximum(int num1, int num2)
{
	if( num1 > num2 ){
	return num1;
}
	if ( num2 > num1 ){
	return num2;
}
	return 0;
}
