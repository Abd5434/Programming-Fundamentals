#include <iostream>
using namespace std;

int counter = 0;

string arrayNo[7][1]={
    {"#      #"},
    {"#      #"},
    {"#      #"},
    {"########"},
    {"   #  0 "},
    {"   #    "},
    {"   #    "},
};

string arrayYes[7][1]={
    {"#      #"},
    {"#      #"},
    {"#    0 #"},
    {"########"},
    {"   #    "},
    {"   #    "},
    {"   #    "},
};

void no();
void yes();

main()
{
    no();
    yes();
}

void no()
{
    string a;
    int row;
    int rows = 0;
    for(rows = 0; rows < 7; rows++)
    {
        int idx = 0;

        a = arrayNo[rows][1];
        while(a[idx] != '\0')
        {
            if(a[idx] == '0')
            {
                row = rows;
            }
            idx++;
        }
    }
    if (row < 3)
    {
        cout << "GOALLLL!!!";
    }
    else
    {
        cout << "No!!";
    }
}

void yes()
{
    string a;
    int row;
    int rows = 0;
    for(rows = 0; rows < 7; rows++)
    {
        int idx = 0;

        a = arrayYes[rows][1];
        while(a[idx] != '\0')
        {
            if(a[idx] == '0')
            {
                row = rows;
            }
            idx++;
        }
    }
    if (row < 3)
    {
        cout << "GOALLLL!!!";
    }
    else
    {
        cout << "No!!";
    }
}
