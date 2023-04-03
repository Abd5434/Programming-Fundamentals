#include <iostream>
using namespace std;

main()
{
    string moves[] = {"Shimmy", "Shake", "Piroutte", "Slide", "Box Step", "Head Spin", "Dosado", "Pop", "Lock", "Arabesque"};
    int num = 4;
    int pin[num];
    for(int x = 0; x < num; x++)
    {
    cin >> pin[x];
    }
    
    for(int idx = 0; idx < 4; idx++)
    {
        if((pin[idx] + idx)> 9)
        {
            pin[idx] = pin[idx] - 10;
        }
        cout << moves[idx + pin[idx]] << " ";
        
    }
}