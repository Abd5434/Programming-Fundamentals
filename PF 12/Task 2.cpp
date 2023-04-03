#include <iostream>
using namespace std;

char arr[5][5]= {
    {'.','.','.','*','*'},
    {'.','*','.','.','.'},
    {'.','*','.','.','.'},
    {'.','*','.','.','.'},
    {'.','.','*','*','.'},
};

main()
{
    string userInput;
    cout << "FIRE: ";
    cin >> userInput;
    char ch1, ch2;
    ch1 = userInput[0];
    ch2 = userInput[1];
    int num;
    num = int(ch2) - '0'  - 1;


    if(ch1 == 'A')
    {
        if(arr[0][num] == '*')
        {
            cout << "BOOM";
        }
        else if(arr[0][num] == '.')
        {
            cout << "SPLASH";
        }
    }
    else if(ch1 == 'B')
    {
        if(arr[1][num] == '*')
        {
            cout << "BOOM";
        }
        else if(arr[1][num] == '.')
        {
            cout << "SPLASH";
        }
    }
    else if(ch1 == 'C')
    {
        if(arr[2][num] == '*')
        {
            cout << "BOOM";
        }
        else if(arr[2][num] == '.')
        {
            cout << "SPLASH";
        }
    }
    else if(ch1 == 'D')
    {
        if(arr[3][num] == '*')
        {
            cout << "BOOM";
        }
        else if(arr[3][num] == '.')
        {
            cout << "SPLASH";
        }
    }
    else if(ch1 == 'E')
    {
        if(arr[4][num] == '*')
        {
            cout << "BOOM";
        }
        else if(arr[4][num] == '.')
        {
            cout << "SPLASH";
        }
    }

}