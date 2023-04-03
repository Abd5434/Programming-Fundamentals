#include <iostream>
#include <windows.h>
using namespace std;

void isEqual();

main()
{
isEqual();
}

void isEqual()
{
string trueorfalse;

cout << "True OR False: ";
cin >> trueorfalse;

if (trueorfalse == "True")
{
cout << "False";
}

if (trueorfalse == "False")
{
cout << "True";
}
}


