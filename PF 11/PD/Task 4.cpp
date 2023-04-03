#include <iostream>
#include <fstream>
using namespace std;

main()
{
    int index = 0;
    string predefined = "What are you doing?";
    fstream file;
    bool flag = false;
    string line;
    file.open("Task4.txt", ios::in);
    file >> line;
    file.close();
     while(line[index] != '\0')
    {
        if(line[index] == '"')
        {
            flag = true;
        }
        index++;
    }
    if (flag == false)
    {
        cout << predefined;
    }
    if(flag == true)
    {
    int idx = 0;
    
    while(line[idx] != '"')
    {
        idx++;
    }
    int x = idx + 1;
    while(line[x] != '"')
    {
        x++;
    }
    for(int i = idx; i < x + 1; i++)
    {
        cout << line[i];
    }
    }
}