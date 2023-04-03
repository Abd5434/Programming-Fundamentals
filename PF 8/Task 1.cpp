#include <iostream>
using namespace std;

main()
{
    string word;
    cout << "Enter a word: ";
    getline(cin,word);
    int idx = 0;
    while (word[idx] != '\0')
    {
        cout << "Character at index " << idx << " is " << word[idx] << endl;
        idx = idx + 1;
    }
    
}