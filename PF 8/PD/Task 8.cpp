#include <iostream>
#include <string>
using namespace std;

main()
{
    int num, time = 0;
    cout << "No. of colors: ";
    cin >> num;
    string word[num];

    for(int idx = 0;idx < num; idx++)
    {
        cout << "Color at index " << idx << ": ";
        cin >> word[idx];
        time  = time + 2;
        if(idx > 0)
        {
        if(idx < num)
        {
        if(word[idx] != word[idx - 1])
        {
            time = time + 1;
        }
        }
        }
    }
    cout << "Time: " << time;
}