#include <iostream>
#include <fstream>
using namespace std;

void ask(char plane[][6], int size);
void print(char plane[][6], int size);
void newArrangement(char plane[][6], int size);
void loadFromFile(char plane[][6], int size);
void storeInFile(char plane[][6], int size);



main()
{
    int userEnter;
    char plane[13][6] = {{'*','*','X','*','X','X'},
                         {'*','X','*','X','*','X'},
                         {'*','*','X','X','*','X'},
                         {'X','*','X','*','X','X'},
                         {'*','X','*','X','*','*'},
                         {'*','X','*','*','*','X'},
                         {'X','*','*','*','X','X'},
                         {'*','X','*','X','X','*'},
                         {'X','*','X','X','*','X'},
                         {'*','X','*','X','X','X'},
                         {'*','*','X','*','X','*'},
                         {'*','*','X','X','*','X'},
                         {'*','*','*','*','X','*'}};

    while (userEnter != 6)
    {
        system("cls");
        cout << "1. Load reserved seats arrangement from file" << endl;
        cout << "2. Ask user for ticket type and desired seat" << endl;
        cout << "3. Print the reserved seat arrangement" << endl;
        cout << "4. Store the reserved seat arrangement in the file" << endl;
        cout << "5. New Plane Seat Arrangement" << endl;
        cout << "6. Exit" << endl;
        cin >> userEnter;

        if(userEnter == 1)
        {
            loadFromFile(plane, 13);
        }

        if(userEnter == 2)
        {
            ask(plane, 13);
        }

        if(userEnter == 3)
        {
            print(plane, 13);
        }

        if(userEnter == 4)
        {
            storeInFile(plane, 13);
        }

        if(userEnter == 5)
        {
            newArrangement(plane, 13);
        }
    }

}

void ask(char plane[][6], int size)
{
    string type;
    cout << "Ticket Type(First Class/Buisness Class/Economy Class): ";
    getline(cin,type);
    getline(cin,type);
    cout << "First Class(1-2), Buisness Class(3-7), EconomyClass(8-13)" << endl;
    int rows;
    cout << "Row Number: ";
    cin >> rows;
    if(row > 13)
    {
        cout << "Wrong Input" << endl;
        string anykey;
        getline(cin,anykey);
        return 0;
    }
    char seat;
    cout << "Seat (A/B/C/D/E/F): ";
    cin >> seat;
    int col = seat - 65;
    if(col > 5)
    {
        cout << "Wrong Input" << endl;
        string anykey;
        getline(cin,anykey);
        return 0;
    }
    }
    if(type == "First Class")
    {
        if(rows == 1 || rows == 2)
        {
            if(plane[rows - 1][col] != '*')
            {
                cout << "Already Reserved" << endl;
            }

            else if(plane[rows - 1][col] == '*')
            {
                plane[rows - 1][col] = 'X';
                cout << "Congrats!!!Your seat is reserved" << endl;
            }
        }

        else
        {
            cout << "There is no such row in First Class" << endl;
        }
    }

    else if(type == "Buisness Class")
    {
        if(rows > 2 && rows < 8)
        {
            if(plane[rows - 1][col] != '*')
            {
                cout << "Already Reserved" << endl;
            }

            else if(plane[rows - 1][col] == '*')
            {
                plane[rows - 1][col] = 'X';
                cout << "Congrats!!!Your seat is reserved" << endl;
            }
        }

        else
        {
            cout << "There is no such row in Buisness Class" << endl;
        }
    }

    else if(type == "Economy Class")
    {
        if(rows > 7 && rows < 14)
        {
            if(plane[rows - 1][col] != '*')
            {
                cout << "Already Reserved" << endl;
            }

            else if(plane[rows - 1][col] == '*')
            {
                plane[rows - 1][col] = 'X';
                cout << "Congrats!!!Your seat is reserved" << endl;;
            }
        }

        else
        {
            cout << "There is no such row in Economy Class" << endl;
        }
    }

    else
    {
        cout << "There is no such type" << endl;
    }

    string anykey;
    cout << "Enter any key to continue" << endl;
    getline(cin,anykey);
    getline(cin,anykey);
}

void print(char plane[][6], int size)
{
    system("cls");
    for(int i = 0; i < 13; i++)
    {
        cout << "\t" << i + 1 << ". " ;
        for(int j = 0; j < 6; j++)
        {
            cout << plane[i][j] << " ";
        }
        cout << endl;
    }
    string anykey;
    cout << "Enter any key to continue" << endl;
    getline(cin,anykey);
    getline(cin,anykey);
}

void newArrangement(char plane[][6], int size)
{
    char empty = '*';
    for(int i = 0; i < 13; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            plane[i][j] = empty;
        }
    }
    cout << "New Seat Arrangement has been updated << endl" << endl;
    string anykey;
    cout << "Enter any key to continue" << endl;
    getline(cin,anykey);
    getline(cin,anykey);
}

void storeInFile(char plane[][6], int size)
{
    fstream file;
    file.open("Seats.txt",ios::out);
    for(int i = 0; i < 13; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            file << plane[i][j];
        }
    }
    file.close();
    string anykey;
    cout << "Enter any key to continue" << endl;
    getline(cin,anykey);
    getline(cin,anykey);
}

void loadFromFile(char plane[][6], int size)
{
    fstream file;
    file.open("Seats.txt",ios::in);
    for(int i = 0; i < 13; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            file >> plane[i][j];
        }
        
    }
    file.close();
    string anykey;
    cout << "Enter any key to continue" << endl;
    getline(cin,anykey);
    getline(cin,anykey);
}
