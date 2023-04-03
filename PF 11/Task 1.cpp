#include <iostream>
#include <fstream>
using namespace std;

main()
{
    string line;
    fstream file;
    int count = 0;
    file.open("Task1.txt", ios::in);
    while(!file.eof())
    {
    file >> line;
    count = count + 1;
    }
    cout << "There are " << count << " lines.";
    file.close();
}