#include <iostream>
using namespace std;

string parseWord(string line, int idx);

main()
{
    string word;
    string line;
    getline(cin,line);
    word = stoi(parseWord(line , 2));
    cout << word;
}

string parseWord(string line, int idx)
{
    int commaCount = 1;
    int x = 0;
    string lines;
    while(line[x] != '\0')
    {
        if(line[x] == ',')
        {
            commaCount++;
        }
        else if(commaCount == idx)
        {
            lines = lines + line[x];
        }
        x++;
    }
    return lines;
}