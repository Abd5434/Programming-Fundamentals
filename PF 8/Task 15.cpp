#include <iostream>
using namespace std;

main()
{
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    int idx = 0;

    while(word[idx] != '\0')
    {
        if (word[idx] == 'a')
        {
            ;
        }
        else if (word[idx] == 'e')
        {
            ;
        }
        else if (word[idx] == 'i')
        {
            ;
        }
        else if (word[idx] == 'o')
        {
            ;
        }
        else if (word[idx] == 'u')
        {
            ;
        }
        else 
        {
            cout << word[idx];
        }
        
        idx++;
    }

}