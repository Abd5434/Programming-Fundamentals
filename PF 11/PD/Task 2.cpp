#include <iostream>
#include <fstream>
using namespace std;

char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

main()
{
    fstream file;
    string line;  
    int count = 0;
    file.open("alphabets.txt", ios::in);
    getline(file,line);
    while(line[count] != '\0')
    {
        count = count + 1;
    }
    file.close();
    for (int x = 0; x < count ; x++)
    {   
        for (int idx = 0; idx < 26; idx++)
        {
            if (line[x] == alphabets[idx])
            {
                alphabets[idx] = ' ';
            }
        }
    }
    file.open("alphabets.txt", ios::app);
    for(int idx = 0; idx < 26; idx++)
    {   
        if(alphabets[idx] != ' ')
        {
        file << alphabets[idx];
        }
        else
        {
            continue;
        }
    }
    file.close();
}

