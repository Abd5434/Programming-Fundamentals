#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

void inputDetails();
void storeDetails(string name, int age, int matric, int fsc, int ecat);

main()
{
    cout << "Press any key to enter details" << endl;
    getch();
    inputDetails();
}

void inputDetails()
{
    string name;
    int age, matric, fsc, ecat;
    cout << "Name: ";
    getline(cin,name);
    cout << "Age: ";
    cin >> age;
    cout << "Matric Marks: ";
    cin >> matric;
    cout << "FSC Marks: ";
    cin >> fsc;
    cout << "ECAT Marks: ";
    cin >> ecat;
    storeDetails(name,age,matric,fsc,ecat);
}

void storeDetails(string name, int age, int matric, int fsc, int ecat)
{
    fstream file;
    file.open("students.txt", ios::app);
    file << name << endl;
    file << age << endl;
    file << matric << endl;
    file << fsc << endl;
    file << ecat << endl;
    file.close();
}
