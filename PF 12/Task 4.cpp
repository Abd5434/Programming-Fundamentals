#include <iostream>
using namespace std;

bool identicalCount(int x, int y);

int count = 0;

int array[4][3]={
    {0,0,0},
    {0,1,2},
    {0,0,0},
    {2,1,0}
};

main()
{
    bool decision;
    for(int rows = 0; rows < 4; rows++)
    {
        for(int nextRow = 1; nextRow <= 3; nextRow++)
        {
            decision = identicalCount(rows, nextRow);
            if(decision == true)
            {
                if(rows != nextRow)
                {
                    count++;
                }
            }
        }
    }
    cout << count*2 ;
}

bool identicalCount(int x, int y)
{
    bool flag = true;
    for(int j = 0; j < 3; j++)
    {
        if(array[x][j] != array[y][j])
        {
            flag = false;
            break;
        }
    }
    return flag;
}
