#include <iostream>
using namespace std;

void rotationInDiffArr(int arr[],int size, int rotations);
void rotationInSameArr(int arr[],int size, int rotations);

main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int rotations;
    cin >> rotations;
    rotationInDiffArr(arr,size,rotations);
    cout << endl;
    rotationInSameArr(arr,size,rotations);

}



void rotationInDiffArr(int arr[], int size, int rotations)
{
    int arr1[9];
    for(int i = 0; i < rotations; i++)
    {
        arr1[i + (size - rotations)] = arr[i];
    }

    for(int i = 0; i < size - rotations; i++)
    {
        arr1[i] = arr[i + rotations];
    }
    for(int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
}

void rotationInSameArr(int arr[], int size, int rotations)
{
    int temp[rotations];
    for(int i = 0; i < rotations; i++)
    {
        temp[i] = arr[i];
    }
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i + rotations];
    }
    for(int i = 0; i < rotations; i++)
    {
        arr[size - rotations + i] = temp[i];
    }

    for(int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
}
