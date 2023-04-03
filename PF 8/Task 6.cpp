#include <iostream>
using namespace std;

main()
{
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    int noOfVowels = 0;;
    int idx = 0;

    while(word[idx] != '\0')
    {
        if((word[idx] == 'a') || (word[idx] == 'e') || (word[idx] == 'i') || (word[idx] == 'o') || (word[idx] == 'u'))
        {
            noOfVowels = noOfVowels + 1;
        }
        idx++;
    }

    cout << "Number of Vowels: " << noOfVowels;
}