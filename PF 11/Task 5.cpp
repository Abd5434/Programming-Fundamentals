#include <iostream>
#include <fstream>
using namespace std;

void store(string studentName,string number, int num);

main()
{
    fstream file;
    string name, registration;
    int percentage;
    file.open("student1.txt",ios::in);
    while(!file.eof())
    {
        file >> name;
        file >> registration;
        file >> percentage;
        if (percentage > 60)
        {
            store(name,registration,percentage);
        }
    }
    file.close();
}

void store(string studentName, string number, int num)
{
    fstream file;
    file.open("toppersList.txt",ios::app);
    file << "Name: " << studentName << endl;
    file << "Registration Number: " << number << endl;
    file << "Percentage: " << num << endl;
    file.close();
}
