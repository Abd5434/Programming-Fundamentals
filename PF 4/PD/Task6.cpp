#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void alphabetA();
void alphabetW();
void alphabetI();
void alphabetS();


main()
{ 
gotoxy(0,4);
alphabetA();
gotoxy(0,12);
alphabetW();
gotoxy(0,20);
alphabetA();
gotoxy(0,28);
alphabetI();
gotoxy(0,36);
alphabetS();
}

void alphabetA()
{
cout << "       **          " << endl;
cout << "     **  **        " << endl;
cout << "    **    **       " << endl;
cout << "   **********      " << endl;
cout << "  **        **     " << endl;
cout << " **          **    " << endl;
cout << "**            **   " << endl;
}

void alphabetW()
{
cout << "**           **      " << endl;
cout << "**           **      " << endl;
cout << "**    ***    **      " << endl;
cout << "**   ** **   **      " << endl;
cout << "**  **   **  **      " << endl;
cout << "** **     ** **      " << endl;
cout << "***         ***      " << endl;
}

void alphabetI()
{
cout << "     ******   " << endl;
cout << "       **     " << endl;
cout << "       **     " << endl;
cout << "       **     " << endl;
cout << "       **     " << endl;
cout << "       **     " << endl;
cout << "     ******   " << endl;

}

void alphabetS()
{
cout << "     ******   " << endl;
cout << "     **       " << endl;
cout << "      **      " << endl;
cout << "       **     " << endl;
cout << "        **    " << endl;
cout << "         **   " << endl;
cout << "     ******   " << endl;
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x; 
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
