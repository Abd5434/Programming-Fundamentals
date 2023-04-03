#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void welcome();
int mainMenu();
void printPlayer();
void erasePlayer();
void printEnemy();
void eraseEnemy();
void printMaze();
void game();
void keys();
void movePlayerUp();
void movePlayerDown();
void movePlayerLeft();
void movePlayerRight();
void generateBullet();
void moveEnemy();
void moveBullet();
void printBullet(int x, int y);
void eraseBullet(int x, int y);
void makeBulletInactive(int idx);
void bulletCollisionWithEnemy();
void addScore();
void printScore();

int score = 0;
string enemyDirection = "Down";
int playerX = 5;
int playerY = 5;
int enemyX = 60;
int enemyY = 5;
int bulletX[100];
int bulletY[100];
bool isBulletActive[100];
int bulletCount = 0;
char box = 219;
int timer = 0;

char player1[] = {box, '-', '-', '-', '>'};
char player2[] = {box, box, box, box, box};
char player3[] = {'O', 'O', 'O', 'O', 'O'};

char enemy1[] = {'<', '-', '-', '-', box};
char enemy2[] = {box, box, box, box, box};
char enemy3[] = {'O', 'O', 'O', 'O', 'O'};

main()
{
    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    bool gameRunning = true;
    int option = 4;
    system("cls");
    welcome();
    while (gameRunning == true)
    {
        system("cls");
        option = mainMenu();

        if(option == 1)
        {
            game();
        }

        if (option == 2)
        {
            keys();
        }

        if(option == 3)
        {
            gameRunning = false;
        }
    }
    
}

void welcome()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 6);
    cout << "   ##         ##   ########   ##         ########   ########    ###########    ########" << endl;
    cout << "   ##         ##   ##         ##         ##    ##   ##    ##   ##   ###   ##   ##      " << endl;
    cout << "   ##         ##   ##         ##         ##         ##    ##   ##    #    ##   ##      " << endl;
    cout << "   ##         ##   ########   ##         ##         ##    ##   ##         ##   ########" << endl;
    cout << "   ##    #    ##   ##         ##         ##         ##    ##   ##         ##   ##      " << endl;
    cout << "    ##  ###  ##    ##         ##         ##    ##   ##    ##   ##         ##   ##      " << endl;
    cout << "     #########     ########   ########   ########   ########   ##         ##   ########" << endl;
    
    string a;
    cout << "Press any key to continue...";
    cin >> a;
}

int mainMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 12);
    cout << "----------------------------" << endl;
    cout << "1. Start" << endl;
    cout << "2. Keys" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your option...";
    int a;
    cin >> a;
    return a;
}

void printPlayer()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 1);
    gotoxy(playerX, playerY);
    for(int i = 0; i < 5; i++)
    {
        cout << player1[i];
    }
    
    gotoxy(playerX, playerY + 1);
    for(int i = 0; i < 5; i++)
    {
        cout << player2[i];
    }
    
    gotoxy(playerX, playerY + 2);
    for(int i = 0; i < 5; i++)
    {
        cout << player3[i];
    }
        
}

void moveEnemy()
{
    
    if(enemyDirection == "Up")
    {
        char next = getCharAtxy(enemyX, enemyY - 1);
        if (next == ' ')
        {
            eraseEnemy();
            enemyY = enemyY - 1;
            printEnemy();
        }
        if(next == '*')
        {
            enemyDirection = "Down";
        }
    }

    if(enemyDirection == "Down")
    {
        char next = getCharAtxy(enemyX, enemyY + 3);
        if (next == ' ')
        {
            eraseEnemy();
            enemyY = enemyY + 1;
            printEnemy();
        }
        if(next == '*')
        {
            enemyDirection = "Up";
        }
    }
}

void moveBullet()
{
    for(int i = 0; i < bulletCount; i++)
    {
        if(isBulletActive[i] == true)
        {
            char next = getCharAtxy(bulletX[i] + 1, bulletY[i]);
            if (next != ' ')
            {
                eraseBullet(bulletX[i], bulletY[i]);
                makeBulletInactive(i);
            }
        
            else
            {
                eraseBullet(bulletX[i], bulletY[i]);
                bulletX[i] = bulletX[i] + 1;
                printBullet(bulletX[i], bulletY[i]);
            }
        }
    }
}

void printBullet(int x, int y)
{
    gotoxy(x,y);
    cout << ".";
}

void eraseBullet(int x, int y)
{
    gotoxy(x,y);
    cout << " ";
}

void makeBulletInactive(int idx)
{
    isBulletActive[idx] = false;
}

void bulletCollisionWithEnemy()
{
    for(int x = 0; x < bulletCount; x++)
    {
        if(isBulletActive[x] == true)
        {
            if(((bulletX[x] + 1 == enemyX) || (bulletX[x] + 1 == enemyX + 1) || (bulletX[x] + 1 == enemyX + 2) || (bulletX[x] + 1 == enemyX + 3)) && (bulletY[x] == enemyY || bulletY[x] == enemyY + 1 || bulletY[x] == enemyY + 2))
            {
                addScore();
                cout << "1";
            }
            else if(enemyX - 1 == bulletX[x] && enemyY + 1 == bulletY[x])
            {
                addScore();
                cout << "a";
            }
        }
    }
}

void addScore()
{
    score++;
}

void printScore()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 14);
    gotoxy(89,0);
    cout << "Score: " << score;
}

void erasePlayer()
{
    gotoxy(playerX, playerY);
    for(int i = 0; i < 5; i++)
    {
        cout << " ";
    }
    
    gotoxy(playerX, playerY + 1);
    for(int i = 0; i < 5; i++)
    {
        cout << " ";
    }
    
    gotoxy(playerX, playerY + 2);
    for(int i = 0; i < 5; i++)
    {
        cout << " ";
    }
        
}

void game()
{
    system("cls");
    printMaze();
    printPlayer();
    printEnemy();
    while(true)
    {
        if(GetAsyncKeyState(VK_UP))
        {
            movePlayerUp();
        }   
        
        if(GetAsyncKeyState(VK_DOWN))
        {
            movePlayerDown();
        }

        if(GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }

        if(GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }

        if(GetAsyncKeyState(VK_SPACE))
        {
           generateBullet();
        }

        if(timer == 3)
        {
            //moveEnemy();
            timer = 0;
        }
        moveBullet();
        bulletCollisionWithEnemy();
        timer++;
        printScore();
        Sleep(90);
    }
    
}

void keys()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 11);
    cout << "         Directions              Keys" << endl;
    cout << "          Go Up              Arrow Key Up" << endl;
    cout << "          Go Down            Arrow Key Down" << endl;
    cout << "          Go Left            Arrow Key Up" << endl;
    cout << "          Go Right           Arrow Key Up" << endl;
    cout << "          Shoot              Space" << endl;
    cout << "Press any key to continue..." ;
    string a;
    cin >> a;
}

void movePlayerUp()
{
    char nextLocation = getCharAtxy(playerX, playerY - 1);
    if(nextLocation == ' ')
    {
        erasePlayer();
        playerY = playerY - 1;
        printPlayer();
    }
}

void movePlayerDown()
{
    char nextLocation = getCharAtxy(playerX, playerY + 3);
    if(nextLocation == ' ')
    {
        erasePlayer();
        playerY = playerY + 1;
        printPlayer();
    }
}

void movePlayerLeft()
{
    char nextLocation = getCharAtxy(playerX - 1, playerY);
    if(nextLocation == ' ')
    {
        erasePlayer();
        playerX = playerX - 1;
        printPlayer();
    }
}

void movePlayerRight()
{
    char nextLocation = getCharAtxy(playerX + 6, playerY);
    if(nextLocation == ' ')
    {
        erasePlayer();
        playerX = playerX + 1;
        printPlayer();
    } 
}

void printMaze()
{
    cout << "**************************************************************************************" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**                                                                                  **" << endl;
    cout << "**************************************************************************************" << endl;
    
}

void printEnemy()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(enemyX, enemyY);
    for(int i = 0; i < 5; i++)
    {
        cout << enemy1[i];
    }

    gotoxy(enemyX, enemyY + 1);
    for(int i = 0; i < 5; i++)
    {
        cout << enemy2[i];
    }
    gotoxy(enemyX, enemyY + 2);
    for(int i = 0; i < 5; i++)
    {
        cout << enemy3[i];
    }     
}

void eraseEnemy()
{
    gotoxy(enemyX, enemyY);
    for(int i = 0; i < 5; i++)
    {
        cout << " ";
    }

    gotoxy(enemyX, enemyY + 1);
    for(int i = 0; i < 5; i++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 2);
    for(int i = 0; i < 5; i++)
    {
        cout << " ";
    } 
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
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
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void generateBullet()
{
    bulletX[bulletCount] = playerX + 6;
    bulletY[bulletCount] = playerY;
    isBulletActive[bulletCount] = true;
    gotoxy(playerX + 6, playerY);
    cout << ".";
    bulletCount++;
}