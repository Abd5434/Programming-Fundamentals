#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void name1();

main()
{

	system("cls");
	int x=50 , y=20;
	gotoxy(x,y);
	name1();
}


void name1()
{
cout << "         **        *******   ********* **     ** **      **             **        **     **     "
; gotoxy(50,21)  ;
cout << "       **  **      **    **  **     ** **     ** **      **           **  **      **     **     ";
 gotoxy(50,22)  ;
cout << "      **    **     **     ** **     ** **     ** **      **          **    **     **     **     "; 
gotoxy(50,23)  ;
cout << "     **********    ********  **     ** **     ** **      **         **********    *********     "; 
gotoxy(50,24)  ;
cout << "    **        **   **     ** **     ** **     ** **      **        **        **   **     **     ";
 gotoxy(50,25)  ;
cout << "   **          **  **     ** **     **  **   **  **      **       **          **  **     **     ";
 gotoxy(50,26)  ;
cout << "  **            ** ********  *********    ***    ******* ******* **            ** **     **     ";
 gotoxy(50,27)  ;
}


void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x; 
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}