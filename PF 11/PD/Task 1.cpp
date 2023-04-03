#include <iostream>
#include <fstream>
using namespace std;

void getBirthdayCake(string name, int age);

main()
{
    string name;
    int age;
    fstream file;
    file.open("Task1.txt",ios::in);
    getline(file,name);
    file >> age;
    file.close();
    getBirthdayCake(name,age);
}

void getBirthdayCake(string name, int age)
{
    if (age % 2 == 1)
    {
        cout << "***************" << endl;
        cout << "* " << age << " HB " << name << "! " << age << "*" << endl;
        cout << "***************" << endl;

    }
    if (age % 2 == 0)
    {
        cout << "###############" << endl;
        cout << "# " << age << " HB " << name << "! " << age << "#" << endl;
        cout << "###############" << endl;

    }
}
