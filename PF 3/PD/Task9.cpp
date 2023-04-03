#include <iostream> 
using namespace std;
main()
{
int fourDigitNumber;
int result1;
int result1b;
int result2;
int result2a;
int result2b;
int result3;
int result3a;
int sum;

cout << "Enter 4-digit number: " ;
cin >> fourDigitNumber;

result1 = fourDigitNumber%10 ;
result1b = fourDigitNumber/10;
result2 = result1b%10;
result2a = fourDigitNumber/100;
result2b = result2a%10;
result3 = fourDigitNumber/1000;
result3a = result3%10;

sum = result1 + result2 + result2b + result3a ;

cout << sum;
}