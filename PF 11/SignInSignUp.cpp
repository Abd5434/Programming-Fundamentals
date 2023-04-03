#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

string users[100];
string passwords[100];
int userNumber = 0;

void addUser(string username, string password);
void store(string username, string password);
bool loginUser(string username, string password);
void signInMenu();
void viewUsers();
void helloWorld();
void loadData();
bool isValid(string username);

fstream file;

main()
{
    loadData();
    string option = "7";
    string username, password;
    while(option != "0")
    {
        signInMenu();
        cout << "Enter your option...";
        getline(cin,option);
        if(option == "3")
        {
            bool flag;
            cout << "Username: ";
            cin >> username;
            cout << "Password: ";
            cin >> password;
            flag = loginUser(username,password);
            if(flag == true)
            {
                helloWorld();
            }
            else if(flag == false)
            {
                cout << "Invalid Credentials.Try Again...";
                getch();
            }
        }
        else if(option == "1")
        {
            bool decision;
            cout << "Username: ";
            cin >> username;
            cout << "Password: ";
            cin >> password;
            decision = isValid(username);
            if(decision == true)
            {
            store(username,password);
            addUser(username,password);
            cout << "User added successfully";
            getch();
            }
            else
            {
                cout << "Username already exists" << endl;
                getch();
            }
        }

        else if(option == "2")
        {
            viewUsers();
        }
    }
}

void addUser(string username, string password)
{
    users[userNumber] = username;
    passwords[userNumber] = password;
    userNumber++;
}

void store(string username, string password)
{
    file.open("Data.txt",ios::app);
    file << username << endl;
    file << password << endl;
    file.close();
}

bool loginUser(string username, string password)
{
    bool flag;
    for(int idx  = 0; idx < userNumber; idx++)
    {
        if(users[idx] == username && passwords[idx] == password)
        {
            flag = true;
            return flag;
        }
    }
    return false;
}

void signInMenu()
{
    system("cls");
    cout << "1. Sign Up" << endl;
    cout << "2. View Users" << endl;
    cout << "3. Sign In" << endl;
    cout << "0. Exit " << endl;

}

void viewUsers()
{
    cout << "User Names" << "\t" << "Passwords" << endl;
    for(int idx = 0; idx < userNumber; idx++)
    {
        cout << users[idx] << "\t" << passwords[idx] << endl;
    }
    getch();
}

void helloWorld()
{
    system("cls");
    cout << "My name is Abdullah";
    getch();
}

bool isValid(string username)
{
    bool flag = true;
    for(int idx  = 0; idx < userNumber; idx++)
    {
        if(users[idx] == username)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

void loadData()
{
    string username;
    string password;
    file.open("Data.txt",ios::in);
    while (getline(file,username) && getline(file,password))
    {
    
    users[userNumber] = username;
    passwords[userNumber] = password;
    userNumber++;
    }
    file.close();
}
