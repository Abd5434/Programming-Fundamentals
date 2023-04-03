#include <iostream>
using namespace std;

void passArray(int array1[], int size, int array2[], int array3[]);

main()
{
    int size = 3;
    int array1[] = {1,2,3};
    int array2[] = {4,5,7};
    int array3[6];
    passArray(array1,size,array2,array3);
    cout << "[ ";
    for(int i = 0; i < 6; i++)
    {
        cout << array3[i] << " ";
    }
    cout << "]";
}

void passArray(int array1[], int size, int array2[], int array3[])
{
    for(int i = 0; i < size; i++)
    {
        array3[i] = array1[i];
    }
    for(int i = 0; i < size; i++)
    {
        array3[i + size] = array2[i];
    }
}
