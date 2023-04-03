#include <iostream>
#include <fstream>
using namespace std;

string customers[2];
int orders[30];
string parse(string line, int idx);

main()
{
    fstream file;
    string word;
    string line;
    int order;
    file.open("Customers.txt", ios::in);
    while(!file.eof())
    {
        file >> word;
        file >> order;
        file >> line;
        cout << line;
        for(int idx = 0; idx < order;idx++)
        {
           orders[idx] = std::stoi(parse(line,idx + 1));
        }
    }
    //for(int i = 0; i < order; i++)
    //{
    //    cout << orders[order] << " ";
    //}
    file.close();
}

string parse(string line, int idx)
{
//    int commaCount = 1;
//    string price;
//    int len = line.length();
//    for(int x = 0; x < len); x++)
//    {
//        if(line[x] == ',')
//        {
//            commaCount++;
//        }
//        else if(commaCount == idx)
//        {
//            price = price + line[x]; 
//        }
//    }
//    idx = 0;
//    return price;
}
