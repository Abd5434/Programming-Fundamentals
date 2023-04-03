#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

string signIn(string name, string password);
void signUp(string name, string password);
bool isValidUser(string name, string password);
void mainMenu1();
void signInMenu();
string line;

fstream file;
main()
{
    string option;
    while (option != "3")
    {
        system("cls");
        signInMenu();
        cout << "Enter your option...";
        cin >> option;
        if (option == "1")
        {
            string name, password, valid;
            cout << "Enter username: ";
            cin >> name;
            cout << "Enter passwword: ";
            cin >> password;
            valid = signIn(name, password);
            if (valid == "valid")
            {
                mainMenu1();
            }
            else if (valid == "not valid")
            {
                cout << "You have entered wrong credentials.Try Again!!!";
                getch();
            }
        }

        if (option == "2")
        {
            string name, password;
            cout << "Enter username: ";
            cin >> name;
            cout << "Enter passwword: ";
            cin >> password;
            signUp(name, password);
        }
    }
}

void signInMenu()
{
    system("cls");
    cout << "1. Sign In" << endl;
    cout << "2. Sign Up" << endl;
    cout << "3. Exit" << endl;
}

void mainMenu1()
{
    system("cls");
    cout << "Hello World!!!";
    getch();
}

void signUp(string name, string password)
{
    file.open("data.txt", ios::app);
    file << name;
    file << ",";
    file << password << endl;
    file.close();
}

bool isValidUser(string name, string password)
{
    bool flag;
    int idx = 0, x = 0;

    while (line[idx] != ',')
    {
        if (name[idx] == line[idx])
        {
            flag = true;
        }
        else
        {
            return false;
        }
        idx++;
    }
    idx = idx + 1;
    while (line[idx] != '\0')
    {
        if (password[x] == line[idx])
        {
            flag = true;
        }

        else
        {
            return false;
        }
        x++;
        idx++;
    }
    return flag;
}

string signIn(string name, string password)
{
    bool flag;
    file.open("data.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
        flag = isValidUser(name, password);
        if (flag == true)
        {
            return "valid";
        }
    }
    file.close();
    return "not valid";
}
