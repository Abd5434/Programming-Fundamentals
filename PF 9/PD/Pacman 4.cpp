#include <iostream>
#include <windows.h>
using namespace std;

char getCharAtxy(short int x, short int y);
void printMaze();
void gotoxy(int x, int y);
void erasePacman(int pacmanX,int pacmanY);
void printPacman(int pacmanX,int pacmanY);
void printGhost(int x, int y);
void clear(int x, int y, char previous);
void printScore(int score);

int score = 0;

main()
{
    int pacmanX = 4;
    int pacmanY = 4;
    int g1x = 2;
    int g1y = 27;
    int g2x = 75;
    int g2y = 2;
    int g3x = 5;
    int g3y = 5;

    string directiong1 = "right";
    string directiong2 = "down";
    char previousChar = ' ';

    bool gameRunning = true;
    system("cls");
    printMaze();
    printGhost(g1x, g1y);
    printGhost(g2x, g2y);
    gotoxy(pacmanX, pacmanY);
    cout << "P";


while (gameRunning) 
{

if (directiong1 == "right")
  {
   char nextLocation = getCharAtxy(g1x + 1, g1y);
   if (nextLocation == '#')
   {
      directiong1 = "left";
   }

   else if (nextLocation == ' ' || nextLocation == '.')
   {
      clear(g1x, g1y, previousChar);
      g1x = g1x + 1;
      previousChar = nextLocation;
      printGhost(g1x, g1y);
   }

  }

if (directiong1 == "left")
{
   char nextLocation = getCharAtxy(g1x - 1, g1y);
   if (nextLocation == '#')
   {
      directiong1 = "right";
   } 

   else if (nextLocation == ' ' || nextLocation == '.')
   {
      clear(g1x, g1y, previousChar);
      g1x = g1x - 1;
      previousChar = nextLocation;
      printGhost(g1x, g1y);
   }
}
 if (directiong2 == "down")
 {
   char nextLocation = getCharAtxy(g2x, g2y + 1);
   if (nextLocation == '#')
   {
      directiong2 = "up";
   }

   else if (nextLocation == ' ' || nextLocation == '.')
   {
      clear(g2x, g2y, previousChar);
      g2y = g2y + 1;
      previousChar = nextLocation;
      printGhost(g2x, g2y);
   }
 }   

  if (directiong2 == "up")
 {
   char nextLocation = getCharAtxy(g2x, g2y - 1);
   if (nextLocation == '#')
   {
      directiong2 = "down";
   }

   else if (nextLocation == ' ' || nextLocation == '.')
   {
      clear(g2x, g2y, previousChar);
      g2y = g2y - 1;
      previousChar = nextLocation;
      printGhost(g2x, g2y);
   }
}

    if (GetAsyncKeyState(VK_LEFT)){
	char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
	if (nextLocation == ' ')
   {
  	   erasePacman(pacmanX,pacmanY);
	   pacmanX = pacmanX - 1;
	   printPacman(pacmanX, pacmanY);
	}
   else if (nextLocation == '.')
   {
      erasePacman(pacmanX,pacmanY);
	   pacmanX = pacmanX - 1;
	   printPacman(pacmanX, pacmanY);
      score = score + 1;
      printScore(score);
   }

   else if (nextLocation == 'H')
   {
      erasePacman(pacmanX,pacmanY);
	   pacmanX = pacmanX - 1;
	   printPacman(pacmanX, pacmanY);
      score = score + 10;
      printScore(score);
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
   else if (nextLocation == '.')
   {
      erasePacman(pacmanX,pacmanY);
	   pacmanX = pacmanX + 1;
	   printPacman(pacmanX, pacmanY);
      score = score + 1;
      printScore(score);
   }

   else if (nextLocation == 'H')
   {
      erasePacman(pacmanX,pacmanY);
	   pacmanX = pacmanX + 1;
	   printPacman(pacmanX, pacmanY);
      score = score + 10;
      printScore(score);
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

   else if (nextLocation == '.')
   {
      erasePacman(pacmanX,pacmanY);
	   pacmanY = pacmanY - 1;
	   printPacman(pacmanX, pacmanY);
      score = score + 1;
      printScore(score);
   }

   else if (nextLocation == 'H')
   {
      erasePacman(pacmanX,pacmanY);
	   pacmanY = pacmanY - 1;
	   printPacman(pacmanX, pacmanY);
      score = score + 10;
      printScore(score);
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

   else if (nextLocation == '.')
   {
      erasePacman(pacmanX,pacmanY);
	   pacmanY = pacmanY + 1;
	   printPacman(pacmanX, pacmanY);
      score = score + 1;
      printScore(score);
   }

   else if (nextLocation == 'H')
   {
      erasePacman(pacmanX,pacmanY);
	   pacmanY = pacmanY + 1;
	   printPacman(pacmanX, pacmanY);
      score = score + 10;
      printScore(score);
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
cout << "#########################################################################################" << endl;
cout << "#########################################################################################" << endl;
cout << "##.. ............................................................             .........## " << endl;
cout << "##..          ###################       ...                    ..                     .## " << endl;
cout << "##..    H             ..### . ###..  ###...                    ..                ...  .## " << endl;
cout << "##..                  ..### .    ..  ###...                    ..            #..#     .## " << endl;
cout << "##.. ###..              #########    ###...    ###         ### ..  ..#.#..   #..#     .## " << endl;
cout << "##.. ###..            ....... ###..  ###...   ###.     H   .###..  ..#.#..   #..#     .## " << endl;
cout << "##.. ###.. ...###...    #########    ###...   ###...........###..  ..#.#..   #..#     .## " << endl;
cout << "##.. ###.. ...###...        ..###..           #################..  ..#.#..   #..#     .## " << endl;
cout << "##   ###   ...###...        ..###..       ...........          ..                     .## " << endl;
cout << "##..       ...###...                      ##########           ..                      ## " << endl;
cout << "##         ...###...                     .###.....             ..   .#.#.    #..# ..   ## " << endl;
cout << "##                                       .###.....###.         ..   .#.#.    #..# ..   ## " << endl;
cout << "##                                           .....###.         ..   .#.#.    #..# ..   ## " << endl;
cout << "##......................................  ###########          ..            #..#      ## " << endl;
cout << "##      ..............................................              .#.#.    #..# ..   ## " << endl;
cout << "##         #########              ##############                    .#.#.    #..# ..   ## " << endl;
cout << "##         ### H ###                         ###                    .#.#.    #..###### ## " << endl;
cout << "##         ###   ###            ...          ###############                           ## " << endl;
cout << "##                             .###.                           ..                     .## " << endl;
cout << "##...###.. ##########          .###...............             ..  ..#.#..            .## " << endl;
cout << "##...###..    #.#        #.#   .#################.             ..  ..#.#..   #..#     .## " << endl;
cout << "##...###..    #.#        #.#   ...............###.             ..  ..#.#..   #..#     .## " << endl;
cout << "##...###..    #.#        #.#                 .###.......       ..  ..#.#..   #..#     .## " << endl;
cout << "##..                                   H     .###########      ..            #######  .## " << endl;
cout << "##..          ##############                   .........       ..                H    .## " << endl;
cout << "##                                                                                     ## " << endl;
cout << "##..  ....................................................     ..                     .## " << endl;
cout << "#########################################################################################" << endl;
cout << "#########################################################################################" ;

}



void gotoxy(int pacmanX, int pacmanY)
{
  COORD coordinates;
  coordinates.X = pacmanX;
  coordinates.Y = pacmanY;
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

void printGhost(int x, int y)
{
   gotoxy(x,y);
   cout << "G";
}

void clear(int x, int y, char previous)
{
   gotoxy(x,y);
   cout << previous;
}

void printScore(int score)
{
   gotoxy(81,31);
   cout << "Score: " << score;
}
