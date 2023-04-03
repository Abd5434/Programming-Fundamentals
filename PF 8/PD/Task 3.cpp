#include <iostream>
using namespace std;

string word;
int idx = 0;

main()
{
    cout << "Enter a a string:";
    getline(cin,word);
    
    while(word[idx] != '\0')
    {
        idx++;
    }

    if(idx % 2 == 0)
    {
        cout << "True";
    }

    else
    {
        cout << "False";
    }
}