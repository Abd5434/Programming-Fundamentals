#include <iostream>
using namespace std;

void printTable(int num);

main()
{
    int num;
    cout << "Tabel of: ";
    cin >> num;
    printTable(num);
}

void printTable(int num)
{
    for(int x = 1; x <= 10; x = x + 1)
    {
        int multiple = num * x;
        cout << num << " x " << x << " = " << multiple << endl;
    }
}
