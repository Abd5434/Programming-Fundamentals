#include <iostream>
using namespace std;

void printMenu();
void addPlayer();
void removePlayer();
void changePlayerName();
void searchPlayer();

string name[20];
string role[20];
int age[20];

main()
{
    int userValue;
    bool running = true;
    
    while (running == true)
    {
        cout << endl;
        printMenu();
        cout << endl;
    cout << "Enter a number: ";
    cin >> userValue;
    if (userValue == 1)
    {
        addPlayer();
    }

    if (userValue == 2)
    {
        removePlayer();
    }

    if (userValue == 3)
    {
        changePlayerName();
    }

    if (userValue == 4)
    {
        searchPlayer();
    }
    if (userValue == 5)
    {
        running = false;;
    }
    
    }
}

void printMenu()
{
    system("cls");
    cout << "*********************************************************************************************************************" << endl;
    cout << "*******************************************Cricket Club Management System********************************************" << endl;
    cout << "*********************************************************************************************************************" << endl;
    cout << endl << endl;
    cout << "1. Add a player." << endl;
    cout << "2. Remove a player." << endl;
    cout << "3. Change the players name." << endl;
    cout << "4. Search a player." << endl;
    cout << "5. Exit";

}

void addPlayer()
{   
    int index;
    int userEnter ;
    while(userEnter != -1)
    {
    cout << "At index: ";
    cin >> index;
    cout << "Enter Name: ";
    cin >> name[index];
    cout << "Batsmen / Bowler / WK : ";
    cin >> role[index];
    cout << "Age: ";
    cin >> age[index]; 
    cout << "Do you want to continue(-1 to exit): ";
    cin >> userEnter;
    
    }
}

void removePlayer()
{
    string nametoRemove;
    int userEnter ;
    while(userEnter != -1)
    {
    cout << "Player Name: ";
    cin >> nametoRemove;
    for(int idx = 0; idx < 20; idx++)
    {
        if (nametoRemove == name[idx])
        {
            name[idx] = "";
        }
    }
    cout << "Do you want to continue(-1 to exit): ";
    cin >> userEnter;
    }
}

void changePlayerName()
{
    int idx;
    int userEnter ;
    while(userEnter != -1)
    {
    cout << "Players index: " ;
    cin >> idx;
    
    cout << "Player Name: ";
    cin >> name[idx];
    cout << "Do you want to continue(-1 to exit): ";
    cin >> userEnter;
    }
    }



void searchPlayer()
{
    string search;
    bool flag = false;
    int userEnter = 0 ;
    while(userEnter != -1)
    {
    cout << "Player Name: ";
    cin >> search;
    int idx;
    for(idx = 0; idx < 20; idx++)
    {
        if (search == name[idx])
        {
           flag = true;
           break;
        }
    }

    if (flag == true)
    {
        cout << search << " is at index " << idx << endl;
    }

    else
    {
        cout << "There is no " << search << endl;
    }
cout << "Do you want to continue(-1 to exit): ";
    cin >> userEnter;
    }
}
