#include <iostream>
#include <windows.h>
using namespace std;

bool checkDiagonals(char character);
bool checkRows(char character);
bool checkColumns(char character);
bool isWinner(char character);

const int gridSize = 3;
char grid[gridSize][gridSize] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

main()
{
    char char1, char2;
    bool flag = false;
    int count = 1;
    system("cls");
    cout << "Character for Player 1(X or O): ";
    cin >> char1;
    if (char1 == 'X')
    {
        char2 = 'O';
    }

    else if (char1 == 'O')
    {
        char2 = 'X';
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 2)
            {
                cout << grid[i][j];
            }
            else
            {
                cout << grid[i][j] << "|";
            }
        }
        cout << endl;
    }
    int num;
    while (num != 0)
    {
        cout << "Enter Number: ";
        cin >> num;
        char character;
        if (count % 2 == 1)
        {
            character = char1;
        }
        if (count % 2 == 0)
        {
            character = char2;
        }
        if (num == 1)
        {
            if ((grid[0][0] == 'X'))
            {
            }
            else if (grid[0][0] == 'O')
            {
            }
            else
            {
                grid[0][0] = character;
                count++;
            }
        }
        else if (num == 2)
        {
            if ((grid[0][1] == 'X'))
            {
        }
            else if (grid[0][1] == 'O')
            {
            }
            else
            {
                grid[0][1] = character;
                count++;
            }
        }
        else if (num == 3)
        {
            if ((grid[0][2] == 'X'))
            {
        }
            else if (grid[0][2] == 'O')
            {
            }
            else
            {
                grid[0][2] = character;
                count++;
            }
        }
        else if (num == 4)
        {
            if ((grid[1][0] == 'X'))
            {
        }
            else if (grid[1][0] == 'O')
            {
            }
            else
            {
                grid[1][0] = character;
                count++;
            }
        }
        else if (num == 5)
        {
            if ((grid[1][1] == 'X'))
            {
        }
            else if (grid[1][1] == 'O')
            {
            }
            else
            {
                grid[1][1] = character;
                count++;
            }
        }
        else if (num == 6)
        {
            if ((grid[1][2] == 'X'))
            {
        }
            else if (grid[1][2] == 'O')
            {
            }
            else
            {
                grid[1][2] = character;
                count++;
            }
        }
        else if (num == 7)
        {
            if ((grid[2][0] == 'X'))
            {
        }
            else if (grid[2][0] == 'O')
            {
            }
            else
            {
                grid[2][0] = character;
                count++;
            }
        }
        else if (num == 8)
        {
            if ((grid[2][1] == 'X'))
            {
        }
            else if (grid[2][1] == 'O')
            {
            }
            else
            {
                grid[2][1] = character;
                count++;
            }
        }
        else if (num == 9)
        {
            if ((grid[2][2] == 'X'))
            {
        }
            else if (grid[2][2] == 'O')
            {
            }
            else
            {
                grid[2][2] = character;
                count++;
            }
        }
        system("cls");
        cout << "Enter 0 to exit" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (j == 2)
                {
                    cout << grid[i][j];
                }
                else
                {
                    cout << grid[i][j] << "|";
                }
            }
            cout << endl;
        }

        flag = isWinner(character);
        if (flag == true)
        {
            if (character == char1)
            {
                cout << "Player 1 has won the game." << endl;
            }
            if (character == char2)
            {
                cout << "Player 2 has won the game." << endl;
            }
            break;
        }

        if (count == 10 && flag == false)
        {
            cout << "It is a tie" << endl;
            break;
        }
    }
}

bool checkDiagonals(char character)
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        if (grid[i][i] == character)
        {
            count = count + 1;
        }
    }

    if (count == gridSize)
    {
        return true;
    }

    if ((grid[2][0] == character) && (grid[1][1] == character) && (grid[0][2] == character))
    {
        return true;
    }

    return false;
}

bool checkRows(char character)
{
    int count = 0;
    for (int i = 0; i < gridSize; i++)
    {
        count = 0;
        for (int j = 0; j < gridSize; j++)
        {
            if (grid[i][j] == character)
            {
                count = count + 1;
            }
            if (count == gridSize)
            {
                return true;
            }
        }
    }
    return false;
}

bool checkColumns(char character)
{
    int count = 0;

    for (int i = 0; i < gridSize; i++)
    {
        count = 0;
        for (int j = 0; j < gridSize; j++)
        {
            if (grid[j][i] == character)
            {
                count = count + 1;
            }
            if (count == gridSize)
            {
                return true;
            }
        }
    }
    return false;
}

bool isWinner(char character)
{
    if ((checkRows(character) == true) || (checkColumns(character) == true) || (checkDiagonals(character) == true))
    {
        return true;
    }
    else
    {
        return false;
    }
}
