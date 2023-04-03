#include <iostream>
#include <fstream>
using namespace std;

main()
{
    char line;
    fstream file;
    int count = 0;
    file.open("Example1.txt", ios::in);
    while(!file.eof())
    {
    file >> line;
    count = count + 1;
    }
    cout << "There are " << count << " characters.";
    file.close();
}