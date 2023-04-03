#include <iostream>
using namespace std;

main()
{
    string str1, str2;
    cout << "String 1: ";
    getline (cin,str1);
    cout << "String 2: ";
    getline (cin,str2);

    int count = 0, x = 0;
    for(int idx = 0; idx < 5; idx++)
    {
        for(int x = 0; x < 5 ; x++)
        {
            if(str1[idx] == str2[x])
            {
                str2[x] = '\0';
                count = count + 1;
                break;
            }
        }

    }
    cout << "Count: " << count;
}