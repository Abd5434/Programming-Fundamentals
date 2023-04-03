#include <iostream>
using namespace std;

int add(int elementA, int elementB);
int subtract(int elementA, int elementB);
int multiply(int arrA[][3], int row, int arrB[][3], int col);
bool isIdentity(int matrix[][3]);
bool isDiagonal(int matrix[][3]);
bool isSymmetry(int matrix[][3]);
string parseWord(string line, int field);

main()
{
    int arrA[3][3] = {0};
    int arrB[3][3] = {0};
    int arrC[3][3] = {0};
    string user;
    while (user != "Exit")
    {
        getline(cin, user);
        if (((user[0] == 'A') || (user[0] == 'B')) && (user[1] == '='))
        {
            if (user[0] == 'A')
            {
                int idx = 1;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        arrA[i][j] = stoi(parseWord(user, idx));
                        idx++;
                    }
                }
            }

            else if (user[0] == 'B')
            {
                int idx = 1;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        arrB[i][j] = stoi(parseWord(user, idx));
                        idx++;
                    }
                }
            }
        }

        else if (user == "Print(A)")
        {
            for (int i = 0; i < 3; i++)
            {
                cout << "\t";
                for (int j = 0; j < 3; j++)
                {
                    cout << arrA[i][j] << "\t";
                }
                cout << endl;
            }
        }

        else if (user == "Print(B)")
        {
            for (int i = 0; i < 3; i++)
            {
                cout << "\t";
                for (int j = 0; j < 3; j++)
                {
                    cout << arrB[i][j] << "\t";
                }
                cout << endl;
            }
        }

        else if (user == "Print(C)")
        {
            for (int i = 0; i < 3; i++)
            {
                cout << "\t";
                for (int j = 0; j < 3; j++)
                {
                    cout << arrC[i][j] << "\t";
                }
                cout << endl;
            }
        }

        else if (user == "C=A+B")
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    arrC[i][j] = add(arrA[i][j], arrB[i][j]);
                }
            }
        }

        else if (user == "C=A-B")
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    arrC[i][j] = subtract(arrA[i][j], arrB[i][j]);
                }
            }
        }

        else if ((user == "C=Value*A") || (user == "C=Value*B"))
        {
            cout << "Enter value: ";
            int value;
            cin >> value;
            if (user[8] == 'A')
            {
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        arrC[i][j] = value * arrA[i][j];
                    }
                }
            }

            else if (user[9] == 'B')
            {
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        arrC[i][j] = value * arrB[i][j];
                    }
                }
            }
        }

        else if (user == "C=A*B")
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    arrC[i][j] = multiply(arrA, i, arrB, j);
                }
            }
        }
        
        else if (user == "IsDiagonal(A)")
        {
            bool flag = isDiagonal(arrA);
            cout << flag << endl;
        }

        else if (user == "IsDiagonal(B)")
        {
            bool flag = isDiagonal(arrB);
            cout << flag << endl;
        }

        else if (user == "IsDiagonal(C)")
        {
            bool flag = isDiagonal(arrC);
            cout << flag << endl;
        }

        else if (user == "IsIdentity(A)")
        {
            bool flag = isIdentity(arrA);
            cout << flag << endl;
        }

        else if (user == "IsIdentity(B)")
        {
            bool flag = isIdentity(arrB);
            cout << flag << endl;
        }

        else if (user == "IsIdentity(C)")
        {
            bool flag = isIdentity(arrC);
            cout << flag << endl;
        }

        else if (user == "Transpose(A)")
        {
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    arrC[i][j] = arrA[j][i];
                }
            }
        }

        else if (user == "Transpose(B)")
        {
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    arrC[i][j] = arrB[j][i];
                }
            }
        }

        else if (user == "IsSymmetric(A)")
        {
            bool flag = isSymmetry(arrA);
            cout << flag << endl;
        }

        else if (user == "IsSymmetric(B)")
        {
            bool flag = isSymmetry(arrB);
            cout << flag << endl;
        }

        else if (user == "IsSymmetric(C)")
        {
            bool flag = isSymmetry(arrC);
            cout << flag << endl;
        }

    }
}

string parseWord(string line, int field)
{
    int commaCount = 1;
    string reqdWord;
    for (int idx = 0; idx < line.length(); idx++)
    {
        if (line[idx] == ',')
        {
            commaCount++;
        }
        else if (commaCount == field)
        {
            if ((line[idx] == '{') || (line[idx] == '}') || (line[idx] == '=') || (line[idx] == 'A') || (line[idx] == 'B') || (line[idx] == 'C'))
            {
                continue;
            }
            reqdWord = reqdWord + line[idx];
        }
    }
    return reqdWord;
}

int add(int elementA, int elementB)
{
    int sum = elementA + elementB;
    return sum;
}

int subtract(int elementA, int elementB)
{
    int difference = elementA - elementB;
    return difference;
}

bool isIdentity(int matrix[][3])
{
    bool flag = true;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if((i == j) && (matrix[i][j] != 1))
            {
                flag = false;
            }
            else if((i != j) && (matrix[i][j] != 0))
            {
                flag = false;
            }
        }
    }
    return flag;
}

bool isDiagonal(int matrix[][3])
{
    bool flag = true;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if((i != j) && (matrix[i][j] != 0))
            {
                flag = false;
            }
        }
    }
    return flag;
}

bool isSymmetry(int matrix[][3])
{
    int transpose[3][3]={0};
    bool flag = true;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(transpose[i][j] != matrix[i][j])
            {
                flag = false;
            }
        }
    }

    return flag;
}

int multiply(int arrA[][3], int row, int arrB[][3], int col)
{
    int product = 0;
    for (int j = 0; j < 3; j++)
    {
        product = product + arrA[row][j] * arrB[j][col];
    }
    return product;
}
