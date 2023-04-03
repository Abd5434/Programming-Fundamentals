#include <iostream>
using namespace std;

main()
{
    string word1, word2, word3, word4;

    cout << "String 1: ";
    getline(cin,word1);
    cout << "String 2: ";
    getline(cin,word2);
    cout << "String 3: ";
    getline(cin,word3);
    cout << "String 4: ";
    getline(cin,word4);

    if ((word1 == word2) && (word2 == word3) && (word3 == word4))
    {
        cout << "True.";
    }

    else
    {
        cout << "False.";
    }
}