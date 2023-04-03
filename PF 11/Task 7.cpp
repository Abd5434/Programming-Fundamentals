#include <iostream>
#include <fstream>
using namespace std;

void displayWords();

main()
{
    displayWords();
}

void displayWords()
{
    fstream file;
    string word;
    file.open("story.txt",ios::in);
    while(!file.eof())
    {
        file >> word;
        if (word.length() < 4)
        {
            cout << word << endl;
        }
    }
}
