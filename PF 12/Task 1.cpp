#include <iostream>
using namespace std;

main()
{
    bool flag = true;
    int arr[3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if((i == j) && (arr[i][j] != 1))
            {
                flag = false;
            }
            else if((i != j) && (arr[i][j] != 0))
            {
                flag = false;
            }
        }
    }
    if(flag == true)
    {
        cout << "Identity";
    }
    else
    { 
        cout << "Not Identity";
    }
    
}