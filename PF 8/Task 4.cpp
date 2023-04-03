#include <iostream>
using namespace std;

main()
{
    string word;
    cout << "Enter a word: ";
    getline(cin,word);
    char anotherLetter;
    cout << "Enter a character: ";
    cin >> anotherLetter;
    int idx = 0;

    while(word[idx] != '\0')
    {
        idx = idx + 1;
    }
    if (word[idx - 1] == anotherLetter)
    {
        cout << "True.";
    }

    else
    {
        cout << "False.";
    }
}