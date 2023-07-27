#include <iostream>
#include <fstream>
using namespace std;

main()
{
    char maze[100][150];
    int idx = 0;
    int x = 0;
    fstream file;
    string line;
    file.open("Maze.txt", ios::in);
    while (!file.eof())
    {
        x = 0;
        getline(file, line);
        while(line[x] != '\0')
        {
            maze[idx][x] = line[x];
            x++;
        }
        idx++;
    }
    file.close();

    for(int i = 0; i < idx; i++)
    {
    for (int j = 0; j < x; j++)
    {
        cout << maze[i][j];
    }
        cout << endl;
    }

}