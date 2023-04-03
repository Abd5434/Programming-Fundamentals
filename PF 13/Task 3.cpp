#include <iostream>
using namespace std;

main()
{
    m = 3;
    n = 3;
    int matrix[m][n] = {{1,0,0}, {1,0,0}, {1,0,0}};
    int counter = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(matrix[i][j] == 0)
            {
                counter++;
            }
        }
    }
    int judge = (m*n)/2;
    if(counter > judge)
    {
        cout << "It is a Sparse Matrix";
    }
    else
    {
        cout << "No. It is not a sparse Matrix.";
    }
}