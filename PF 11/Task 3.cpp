#include <iostream>
#include <fstream>
using namespace std;

main()
{
    fstream file;
    int counter = 0;
    char character, characterFile;
    cout << "Enter character: ";
    cin >> character;
    file.open("Task3.txt",ios::in);
    while(!file.eof())
    {
        file >> characterFile;
        if(character == characterFile)
        {
            counter++;
        }
    }
    file.close();
    cout << "Frequency: " << counter;
}