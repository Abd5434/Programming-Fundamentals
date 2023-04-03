#include <iostream>
#include <windows.h>
using namespace std;

char getCharAtxy(short int x, short int y);
void printMaze();
void gotoxy(int x, int y);
void gotoxyGhostOne(int ghostOneX, int ghostOneY);
void gotoxyGhostTwo(int ghostTwoX, int ghostTwoY);
void erasePacman(int pacmanX,int pacmanY);
void printPacman(int pacmanX,int pacmanY);
void ghostOneMoveVertical(int ghostOneX, int ghostOneY);
void ghostTwoMoveHorizontal(int ghostTwoX, int ghostTwoY);
void playerMoveGhostOne(int ghostOneX, int ghostOneY);
void playerMoveGhostTwo(int ghostTwoX, int ghostTwoY);


main()
{
    int pacmanX = 4;
    int pacmanY = 4;
    int ghostOneX = 42;
    int ghostOneY = 1;
    int ghostTwoX = 1;
    int ghostTwoY = 9;

    bool gameRunning = true;
    system("cls");
    printMaze();
 
    gotoxy(pacmanX, pacmanY);
    cout << "P";
    
    gotoxyGhostOne(ghostOneX, ghostOneY);
    cout << "G";

    gotoxyGhostTwo(ghostTwoX, ghostTwoY);
    cout << "G";

while (gameRunning) 
{ 
    ghostOneMoveVertical(ghostOneX, ghostOneY);
    ghostTwoMoveHorizontal(ghostTwoX, ghostTwoY);
   
    if (GetAsyncKeyState(VK_LEFT)){
	char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
	if (nextLocation == ' ')
           {
  	   erasePacman(pacmanX,pacmanY);
	   pacmanX = pacmanX - 1;
	   printPacman(pacmanX, pacmanY);
	   }
				 }

    if (GetAsyncKeyState(VK_RIGHT)){
	char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
	if (nextLocation == ' ')
	   {
	   erasePacman(pacmanX,pacmanY);
 	   pacmanX = pacmanX + 1;
	   printPacman(pacmanX, pacmanY);
 	   }
				 }

    if (GetAsyncKeyState(VK_UP)){
        char nextLocation = getCharAtxy(pacmanX , pacmanY - 1);
	if (nextLocation == ' ')
	   {
 	   erasePacman(pacmanX,pacmanY);
	   pacmanY = pacmanY - 1;
	   printPacman(pacmanX, pacmanY);
   	   }
				 }

    if (GetAsyncKeyState(VK_DOWN)){
	char nextLocation = getCharAtxy(pacmanX , pacmanY + 1);
	if (nextLocation == ' ')
	   {
	   erasePacman(pacmanX,pacmanY);
	   pacmanY = pacmanY + 1;
	   printPacman(pacmanX, pacmanY);
 	   }
				 }

if (GetAsyncKeyState(VK_ESCAPE)){
           gameRunning = false;
}
   Sleep(200); 


}
}


void printMaze()
{
   cout << "###################################################" << endl;
   cout << "##   .................................    G      ##" << endl;
   cout << "##                                               ##" << endl;
   cout << "##       ## .   . ##         ## .   . ##         ##" << endl;
   cout << "##       ## .   . ##         ## .   . ##         ##" << endl;
   cout << "##       ## .   . ##         ## .   . ##         ##" << endl;
   cout << "##         #######             #######           ##" << endl;
   cout << "##   ..................................          ##" << endl;
   cout << "## .................................             ##" << endl;
   cout << "## G                                             ##" << endl;
   cout << "## .                                 .           ##" << endl;
   cout << "## .            ## ........... ##    .           ##" << endl;
   cout << "## .            ## ........... ##    .           ##" << endl;
   cout << "## .            ## ........... ##    .           ##" << endl;
   cout << "## .            ## ........... ##    .           ##" << endl;
   cout << "## .            #################    .           ##" << endl;
   cout << "## .                                 .           ##" << endl;
   cout << "## .                                 .           ##" << endl;
   cout << "## .                                 .           ##" << endl;
   cout << "## ...................................           ##" << endl;
   cout << "###################################################" << endl;

}

void gotoxy(int pacmanX, int pacmanY)
{
  COORD coordinates;
  coordinates.X = pacmanX;
  coordinates.Y = pacmanY;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void gotoxyGhostOne(int ghostOneX, int ghostOneY)
{
  COORD coordinates;
  coordinates.X = ghostOneX;
  coordinates.Y = ghostOneY;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void gotoxyGhostTwo(int ghostTwoX, int ghostTwoY)
{
  COORD coordinates;
  coordinates.X = ghostTwoX;
  coordinates.Y = ghostTwoY;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


char getCharAtxy(short int x, short int y)
{
   CHAR_INFO ci;
   COORD xy = {0, 0};
   SMALL_RECT rect = {x, y, x, y};
   COORD coordBufSize;
   coordBufSize.X = 1;
   coordBufSize.Y = 1;
   return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}

void erasePacman(int pacmanX,int pacmanY)
{
   gotoxy(pacmanX,pacmanY);
   cout << " ";
}

void printPacman(int pacmanX, int pacmanY)
{
   gotoxy(pacmanX, pacmanY);
   cout << "P";
}

void ghostOneMoveVertical(int ghostOneX, int ghostOneY)
{
	ghostOneY = 2;
	gotoxyGhostOne(ghostOneX, ghostOneY -1 );
	cout << " ";
        ghostOneY = ghostOneY += 1;
	gotoxyGhostOne(ghostOneX, ghostOneY );
	cout << "G";

   Sleep(200); 
}


void ghostTwoMoveHorizontal(int ghostTwoX, int ghostTwoY)
{

	ghostTwoX = 3;
	gotoxyGhostTwo(ghostTwoX - 1, ghostTwoY);
	cout << " ";
	gotoxyGhostTwo(ghostTwoX ++ , ghostTwoY);
	cout << "G";
        ghostTwoX = 2;
	

   Sleep(200); 
}

