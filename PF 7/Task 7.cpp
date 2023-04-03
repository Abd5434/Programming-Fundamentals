#include <iostream>
#include <windows.h>
using namespace std;

int calculateGCD(int num1, int num2);
int calculateLCM(int num1, int num2, int gcd);

main()
{
    int num1,num2, gcd, lcm;

    cout << "Enter 1st integer: ";
    cin >> num1;
    cout << "Enter 2nd integer: ";
    cin >> num2;
    
    gcd = calculateGCD(num1,num2);
    cout << "GCD or HCF: " << gcd << endl;   
    lcm = calculateLCM(num1, num2, gcd);
    cout << "LCM: " << lcm;
}

int calculateGCD(int num1, int num2)
{  
    int gcd, gcdmod, mod;
    gcdmod = 1;
    while (gcdmod != 0)
    {
      if (num1 > num2)
      {
        mod = num1 % num2;
        gcd = num2 % mod;
        gcdmod = mod % gcd;
      }

      else if (num1 < num2)
      {
        mod = num2 % num1;
        gcd = num1 % mod;
        gcdmod = mod % gcd;
      }  
    }
    return gcd;
}

int calculateLCM(int num1, int num2, int gcd)
{
    int multiply = num1 * num2;
    int lcm = multiply / gcd;
    return lcm;
}
