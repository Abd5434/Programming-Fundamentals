#include <iostream>
using namespace std;

char a = 213;
char box = 219;
char backslash = 92;
char upperInfantry[] = {' ', ' ', ' ', ' ', ' ', '(' , '*', ' ', '*', ')', ' '};
char middleInfantry[] = {'<', '-', '-', a, backslash, box, box, box, box, box, '/'};
char lowerInfantry[] = {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' '};

main()
{
    for(int x = 0; x <11; x++)
    {
cout << upperInfantry[x];
    }
    cout << endl;
    for(int x = 0; x <11; x++)
    {
cout << middleInfantry[x];
    }
    cout << endl;
    for(int x = 0; x <11; x++)
    {
cout << lowerInfantry[x];
    }
    cout << endl;
}