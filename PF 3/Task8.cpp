#include <iostream>
using namespace std;
main()
{
int megabytes;
int kilobytes;
int bytes;
int bits;
cout << "Enter MB's: ";
cin >> megabytes;
kilobytes = megabytes * 1024;
bytes = kilobytes * 1024;
bits = bytes * 8;
cout << "The number of bits in " << megabytes << "MB's are: " << bits;
} 