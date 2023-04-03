#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void header();
void welcome();
string mainMenu();
string optionSubMenu();
void gameInterface();
void optionsInterface();
void creditsInterface();
void showInstructions();
void showKeys();
void printMaze();
void printTank();
void printJetPlane();
void printInfantry();
void printBala();
void printRambo();
void removeRambo();
void moveRamboUp();
void moveRamboDown();
void moveRamboLeft();
void moveRamboRight();
void generateBullet();
void printBullet(int x, int y);
void eraseBullet(int x, int y);
void moveBullet();
void printBullet(int x, int y);
void eraseBullet(int x, int y);
void makeBulletInactive(int idx);
void addScore();
void printScore();
void moveInfantry();
void printInfantry();
void eraseInfantry();
void bulletCollisionWithInfantry();
void moveTank();
void printTank();
void eraseTank();
void bulletCollisionWithTank();
void printTankHealth();
void moveJetPlane();
void printJetPlane();
void eraseJetPlane();
void bulletCollisionWithJetPlane();
void printJetPlaneHealth();
void addScore();
void printScore();
void printInfantryHealth();
void moveBala();
void printBala();
void eraseBala();
void bulletCollisionWithBala();
void printBalaHealth();
void generateEnemyBullet(int x, int y);
void moveEnemyBullet();
void makeEnemyBulletInactive(int idx);
void printEnemyBullet(int x, int y);
void eraseEnemyBullet(int x, int y);
void bulletCollisionWithTower();
void printRamboHealth();
void gameOver();
void youWon();

int enemy = 4;
int towerHealth = 300;
string infantryDirection = "Up";
string tankDirection = "Up";
string jetPlaneDirection = "Up";
string balaDirection = "Up";
int bulletX[100];
int bulletY[100];
bool isBulletActive[100];
int enemyBulletX[50];
int enemyBulletY[50];
bool isEnemyBulletActive[50];
char heart = 3;
int enemyBulletCount = 0;
int bulletCount = 0;
char underscore = 95;
char verticalline = 124;
char greter = 60;
char slash = 47;
int score = 0;
char backslash = 92;
char colon = 58;
char box = 219;
char fire = 170;
char a = 213;
char asterisk = 42;
char leftparenth = 40;
char rightparent = 41;
int ramboX = 15;
int ramboY = 5;
int infantryX = 60;
int infantryY = 7;
int infantryHealth = 5;
int tankX = 60;
int tankY = 7;
int tankHealth = 10;
int jetPlaneX = 60;
int jetPlaneY = 7;
int jetPlaneHealth = 15;
int balaX = 60;
int balaY = 7;
int balaHealth = 20;
int timer = 0;
int m = 5;

char lineRambo1[] = {'[', '=', '=', '=', '=', '=', '=', '=', backslash};
char lineRambo2[] = {'|', '=', '=', '=', '=', '=', '=', '=', '/'};
char lineRambo3[] = {'|', '|', ' ', '>', ' ', ' ', ' ', ' ', ' '};
char lineRambo4[] = {'|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

char upperInfantry[] = {' ', ' ', ' ', ' ', ' ', leftparenth, asterisk, ' ', asterisk, rightparent, ' '};
char middleInfantry[] = {'<', '-', '-', a, backslash, box, box, box, box, box, slash};
char lowerInfantry[] = {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' '};

char tankUpper[] = {'<', '-', '-', '-', fire};
char tankBody[] = {box, box, box, box, box};
char lowerTank[] = {'O', 'O', 'O', 'O', 'O'};

char linejetplane1[] = {' ', ' ', ' ', ' ', '/', '|'};
char linejetplane2[] = {' ', '/', backslash, '/', ' ', '|'};
char linejetplane3[] = {'<', '[', ' ', ' ', ' ', '|'};
char linejetplane4[] = {' ', backslash, '/', backslash, ' ', '|'};
char linejetplane5[] = {' ', ' ', ' ', ' ', backslash, '|'};

char lineBala1[] = {'/', '=', '=', '=', '=', '=', '=', '=', ']'};
char lineBala2[] = {backslash, '=', '=', '=', '=', '=', '=', '=', '|'};
char lineBala3[] = {' ', ' ', ' ', ' ', ' ', '<', ' ', '|', '|'};
char lineBala4[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|'};

main()
{
    string option = "7";
    bool file = true;
    system("cls");
    welcome();
    while (file == true)
    {
        system("cls");
        header();
        option = mainMenu();
        if (option == "1")
        {
            gameInterface();
        }

        if (option == "2")
        {
            optionsInterface();
        }

        if (option == "3")
        {
            creditsInterface();
        }

        if (option == "4")
        {
            file = false;
        }
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

void header()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 3);
    cout << "########   ########   ##         ##   ########   ########  " << endl;
    cout << "#  ##  #   ##    ##   ##         ##   ##         ##    ##  " << endl;
    cout << "   ##      ##    ##   ##         ##   ########   ########  " << endl;
    cout << "   ##      ##    ##   ##    #    ##   ##         ##   ##   " << endl;
    cout << "   ##      ##    ##   ##   ###   ##   ##         ##    ##  " << endl;
    cout << "   ##      ########    ###########    ########   ##     ## " << endl;
    cout << endl
         << endl;

    cout << "   ##        ##        ####         ########   ########" << endl;
    cout << "   ##        ##       ##  ##        ##    ##   ##      " << endl;
    cout << "   ##        ##      ##    ##       ##    ##   ##      " << endl;
    cout << "   ##        ##     ##      ##      ########   ########" << endl;
    cout << "   ##    #   ##    ############     ##  ##           ##" << endl;
    cout << "    ##  ### ##    ##          ##    ##   ##          ##" << endl;
    cout << "     ########    ##            ##   ##    ##   ########" << endl;

    cout << endl
         << endl
         << endl;
}

void welcome()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 6);
    cout << "         ##         ##   ########   ##         ########   ########    ###########    ########" << endl;
    cout << "         ##         ##   ##         ##         ##    ##   ##    ##   ##   ###   ##   ##      " << endl;
    cout << "         ##         ##   ##         ##         ##         ##    ##   ##    #    ##   ##      " << endl;
    cout << "         ##         ##   ########   ##         ##         ##    ##   ##         ##   ########" << endl;
    cout << "         ##    #    ##   ##         ##         ##         ##    ##   ##         ##   ##      " << endl;
    cout << "          ##  ###  ##    ##         ##         ##    ##   ##    ##   ##         ##   ##      " << endl;
    cout << "           #########     ########   ########   ########   ########   ##         ##   ########" << endl;
    cout << endl
         << endl
         << endl;
    SetConsoleTextAttribute(hConsole, 10);
    cout << "                                      -|             |-                                 " << endl;
    cout << "                  -|                  [-_-_-_-_-_-_-_-]                  |-             " << endl;
    cout << "                  [-_-_-_-_-]          |             |          [-_-_-_-_-]             " << endl;
    cout << "                   | o   o |           [  0   0   0  ]           | o   o |              " << endl;
    cout << "                    |     |    -|       |           |       |-    |     |               " << endl;
    cout << "                    |     |_-___-___-___-|         |-___-___-___-_|     |               " << endl;
    cout << "                    |  o  ]              [    0    ]              [  o  |               " << endl;
    cout << "                    |     ]   o   o   o  [ _______ ]  o   o   o   [     | ----__________" << endl;
    cout << "         _____----- |     ]              [ ||||||| ]              [     |               " << endl;
    cout << "                    |     ]              [ ||||||| ]              [     |               " << endl;
    cout << "                _-_-|_____]--------------[_|||||||_]--------------[_____|-_-_           " << endl;
    cout << "               ( (__________------------_____________-------------_________) )          " << endl;

    string a;
    cout << "Press any key to continue...";
    getline(cin, a);
}

string mainMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);
    cout << "MENU" << endl;
    cout << "----------" << endl;
    cout << "1. Start" << endl;
    cout << "2. Options" << endl;
    cout << "3. Credits" << endl;
    cout << "4. Exit" << endl;
    string option;
    cout << "Enter your option: ";
    getline(cin, option);
    return option;
}

string optionSubMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);
    cout << "OPTIONS" << endl;
    cout << "----------" << endl;
    cout << "1. Keys" << endl;
    cout << "2. Instructions" << endl;
    cout << "3. Exit" << endl;
    string option;
    cout << "Enter your option: ";
    getline(cin, option);
    return option;
}

void gameInterface()
{
    towerHealth = 300;
    balaHealth = 20;
    infantryHealth = 5;
    tankHealth = 10;
    jetPlaneHealth = 15;
    enemy = 4;
    bool gameRunning = true;
    system("cls");
    printMaze();
    printRambo();
    printInfantry();
    printRamboHealth();
    while (gameRunning == true)
    {
        if (towerHealth > 0 && balaHealth > 0)
        {
            if (GetAsyncKeyState(VK_LEFT))
            {
                moveRamboLeft();
            }

            if (GetAsyncKeyState(VK_RIGHT))
            {
                moveRamboRight();
            }

            if (GetAsyncKeyState(VK_UP))
            {
                moveRamboUp();
            }

            if (GetAsyncKeyState(VK_DOWN))
            {
                moveRamboDown();
            }

            if (GetAsyncKeyState(VK_SPACE))
            {
                generateBullet();
            }

            if (GetAsyncKeyState(VK_ESCAPE))
            {
                gameRunning = false;
            }

            if (enemy > 0)
            {
                if (enemy == 4)
                {
                    m = 1;
                    moveInfantry();
                    bulletCollisionWithInfantry();
                    printInfantryHealth();
                    if (timer == 16)
                    {
                        generateEnemyBullet(infantryX, infantryY + 1);

                        timer = 0;
                    }
                    moveEnemyBullet();
                    timer++;

                    if (infantryHealth <= 0)
                    {
                        enemy--;
                        timer = 0;
                    }
                }
                if (enemy == 3)
                {
                    m = 2;
                    moveTank();
                    bulletCollisionWithTank();
                    printTankHealth();
                    if (timer == 12)
                    {
                        generateEnemyBullet(tankX, tankY);
                        timer = 0;
                    }

                    moveEnemyBullet();
                    timer++;
                    if (tankHealth <= 0)
                    {
                        enemy--;
                        timer = 0;
                    }
                }
                if (enemy == 2)
                {
                    m = 3;
                    moveJetPlane();
                    bulletCollisionWithJetPlane();
                    printJetPlaneHealth();
                    if (timer == 8)
                    {
                        generateEnemyBullet(jetPlaneX , jetPlaneY );
                        timer = 0;
                    }

                    moveEnemyBullet();
                    timer++;
                    if (jetPlaneHealth <= 0)
                    {
                        enemy--;
                        timer = 0;
                    }
                }
                if (enemy == 1)
                {
                    m = 4;
                    moveBala();
                    bulletCollisionWithBala();
                    printBalaHealth();
                    if (timer == 4)
                    {
                        generateEnemyBullet(balaX - 1, balaY);
                        timer = 0;
                    }
                    moveEnemyBullet();
                    timer++;
                    if (balaHealth <= 0)
                    {
                        enemy--;
                        timer = 0;
                    }
                }
            }
            bulletCollisionWithTower();
            moveBullet();
            printScore();
            printRamboHealth();
            if (towerHealth <= 0)
            {
                gameOver();
                gameRunning = false;
            }
            if (balaHealth <= 0)
            {
                youWon();
                gameRunning = false;
            }
            Sleep(90);
        }
    }
}

void optionsInterface()
{
    string option = "1";
    while (option != "3")
    {
        system("cls");
        header();
        option = optionSubMenu();
        if (option == "1")
        {
            showKeys();
        }

        if (option == "2")
        {
            showInstructions();
        }
    }
}

void creditsInterface()
{
    system("cls");
    header();
    gotoxy(20, 19);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);
    Sleep(90);
    cout << "1. Graphics: Mohammad Abdullah";
    Sleep(90);
    gotoxy(20, 20);
    cout << "2. Sound: Mr. Mohammad Abdullah ";
    Sleep(90);
    gotoxy(20, 21);
    cout << "3. Game Development: Dr. Mohammad Abdullah";
    Sleep(90);
    gotoxy(20, 22);
    cout << "4. Produced by: Sir Mohammad Abdullah";
    Sleep(90);
    gotoxy(20, 23);
    cout << "5. Sponsored by: Mohammad Abdullah Group of Companies.";
    gotoxy(20, 24);
    Sleep(90);
    cout << "Press any key to continue...";
    string a;
    getline(cin, a);
}

void showInstructions()
{
    system("cls");
    header();
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);
    cout << "1. The player can move in all the directions." << endl;
    cout << "2. The player will have to kill all the enemies to win." << endl;
    cout << "Press any key to exit... " << endl;
    string a;
    getline(cin, a);
}

void showKeys()
{
    system("cls");
    header();
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);
    cout << "   Up        Key Up" << endl;
    cout << "  Down       Key Down" << endl;
    cout << "  Left       Key Left" << endl;
    cout << "  Right      Key Right" << endl;
    cout << "  Fire       Key Space" << endl;
    cout << "  Exit       Key Escape" << endl;
    cout << "Enter any key to exit...";
    string a;
    getline(cin, a);
}

void printMaze()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 5);
    cout << "********************************************************************************************************************" << endl;
    cout << "**/\\/\\/\\/\\/\\/\\                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "**!          !                                                                                                    **" << endl;
    cout << "********************************************************************************************************************" << endl;
}

void printTank()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(tankX, tankY);
    for (int x = 0; x < 5; x++)
    {
        cout << tankUpper[x];
    }
    gotoxy(tankX, tankY + 1);
    for (int x = 0; x < 5; x++)
    {
        cout << tankBody[x];
    }
    gotoxy(tankX, tankY + 2);
    for (int x = 0; x < 5; x++)
    {
        cout << lowerTank[x];
    }
}

void eraseTank()
{
    gotoxy(tankX, tankY);
    for (int x = 0; x < 5; x++)
    {
        cout << " ";
    }
    gotoxy(tankX, tankY + 1);
    for (int x = 0; x < 5; x++)
    {
        cout << " ";
    }
    gotoxy(tankX, tankY + 2);
    for (int x = 0; x < 5; x++)
    {
        cout << " ";
    }
}

void bulletCollisionWithTank()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {
            if (bulletX[x] + 1 == tankX && (bulletY[x] == tankY || bulletY[x] == tankY + 1 || bulletY[x] == tankY + 2))
            {
                addScore();
                tankHealth--;
            }
            else if (tankX - 1 == bulletX[x] && tankY + 1 == bulletY[x])
            {
                addScore();
                tankHealth--;
            }
        }
    }
}

void printTankHealth()
{
    gotoxy(120, 3);
    if (tankHealth <= 10 && tankHealth > 8)
    {
        cout << "Tank: " << heart << heart << heart << heart << heart;
    }
    gotoxy(120, 3);
    if (tankHealth <= 8 && tankHealth > 6)
    {
        cout << "Tank: " << heart << heart << heart << heart << " ";
    }
    gotoxy(120, 3);
    if (tankHealth <= 6 && tankHealth > 4)
    {
        cout << "Tank: " << heart << heart << heart << " "
             << " ";
    }
    gotoxy(120, 3);
    if (tankHealth <= 4 && tankHealth > 2)
    {
        cout << "Tank: " << heart << heart << " "
             << " "
             << " ";
    }
    gotoxy(120, 3);
    if (tankHealth <= 2 && tankHealth > 0)
    {
        cout << "Tank: " << heart << " "
             << " "
             << " "
             << " ";
    }
    gotoxy(120, 3);
    if (tankHealth <= 0)
    {
        cout << "      "
             << " "
             << " "
             << " "
             << " "
             << " ";
        gotoxy(tankX, tankY);
        eraseTank();
    }
}

void moveJetPlane()
{
    if (jetPlaneDirection == "Up")
    {
        char next = getCharAtxy(jetPlaneX, jetPlaneY - 1);
        if (next == ' ')
        {
            eraseJetPlane();
            jetPlaneY = jetPlaneY - 1;
            printJetPlane();
        }
        if (next == '*')
        {
            jetPlaneDirection = "Down";
        }
    }

    if (jetPlaneDirection == "Down")
    {
        char next = getCharAtxy(jetPlaneX, jetPlaneY + 5);
        if (next == ' ')
        {
            eraseJetPlane();
            jetPlaneY = jetPlaneY + 1;
            printJetPlane();
        }
        if (next == '*')
        {
            jetPlaneDirection = "Up";
        }
    }

    //========================================
    
    // if (tankDirection == "Up")
    // {
    //     char next = getCharAtxy(tankX, tankY - 1);
    //     if (next == ' ')
    //     {
    //         eraseTank();
    //         tankY = tankY - 1;
    //         printTank();
    //     }
    //     if (next == '*')
    //     {
    //         tankDirection = "Down";
    //     }
    // }

    // if (tankDirection == "Down")
    // {
    //     char next = getCharAtxy(tankX, tankY + 3);
    //     if (next == ' ')
    //     {
    //         eraseTank();
    //         tankY = tankY + 1;
    //         printTank();
    //     }
    //     if (next == '*')
    //     {
    //         tankDirection = "Up";
    //     }
    // }
}

void printJetPlane()
{
    int a = 6;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(jetPlaneX, jetPlaneY);
    for (int i = 0; i < a; i++)
    {
        cout << linejetplane1[i];
    }
    gotoxy(jetPlaneX, jetPlaneY + 1);
    for (int i = 0; i < a; i++)
    {
        cout << linejetplane2[i];
    }
    gotoxy(jetPlaneX, jetPlaneY + 2);

    for (int i = 0; i < a; i++)
    {
        cout << linejetplane3[i];
    }
    gotoxy(jetPlaneX, jetPlaneY + 3);

    for (int i = 0; i < a; i++)
    {
        cout << linejetplane4[i];
    }
    gotoxy(jetPlaneX, jetPlaneY + 4);

    for (int i = 0; i < a; i++)
    {
        cout << linejetplane5[i];
    }
}

void eraseJetPlane()
{
    int a = 6;
    gotoxy(jetPlaneX, jetPlaneY);
    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }
    gotoxy(jetPlaneX, jetPlaneY + 1);
    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }
    gotoxy(jetPlaneX, jetPlaneY + 2);

    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }
    gotoxy(jetPlaneX, jetPlaneY + 3);

    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }
    gotoxy(jetPlaneX, jetPlaneY + 4);

    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }
}

void bulletCollisionWithJetPlane()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {
            if (bulletX[x] + 1 == jetPlaneX && (bulletY[x] == jetPlaneY + 2))
            {
                addScore();
                jetPlaneHealth--;
            }
            else if ((bulletX[x] == jetPlaneX) && (bulletY[x] == jetPlaneY + 1 || bulletY[x] == jetPlaneY + 3))
            {
                addScore();
                jetPlaneHealth--;
            }
            else if ((bulletX[x] - 3 == jetPlaneX) && (bulletY[x] == jetPlaneY || bulletY[x] == jetPlaneY + 4))
            {
                addScore();
                jetPlaneHealth--;
            }
        }
    }
}

void printJetPlaneHealth()
{
    gotoxy(120, 3);
    if (jetPlaneHealth <= 15 && jetPlaneHealth > 12)
    {
        cout << "Jet Plane: " << heart << heart << heart << heart << heart;
    }
    gotoxy(120, 3);
    if (jetPlaneHealth <= 12 && jetPlaneHealth > 9)
    {
        cout << "Jet Plane: " << heart << heart << heart << heart << " ";
    }
    gotoxy(120, 3);
    if (jetPlaneHealth <= 9 && jetPlaneHealth > 6)
    {
        cout << "Jet Plane: " << heart << heart << heart << " "
             << " ";
    }
    gotoxy(120, 3);
    if (jetPlaneHealth <= 6 && jetPlaneHealth > 3)
    {
        cout << "Jet Plane: " << heart << heart << " "
             << " "
             << " ";
    }
    gotoxy(120, 3);
    if (jetPlaneHealth <= 3 && jetPlaneHealth > 0)
    {
        cout << "Jet Plane: " << heart << " "
             << " "
             << " "
             << " ";
    }
    if (jetPlaneHealth <= 0)
    {
        cout << "                  "
             << " "
             << " "
             << " "
             << " "
             << " ";
        gotoxy(jetPlaneX, jetPlaneY);
        eraseJetPlane();
    }
}

void printInfantry()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(infantryX, infantryY);
    for (int x = 0; x < 11; x++)
    {
        cout << upperInfantry[x];
    }
    gotoxy(infantryX, infantryY + 1);

    for (int x = 0; x < 11; x++)
    {
        cout << middleInfantry[x];
    }
    gotoxy(infantryX, infantryY + 2);

    for (int x = 0; x < 11; x++)
    {
        cout << lowerInfantry[x];
    }
}

void eraseInfantry()
{
    gotoxy(infantryX, infantryY);
    for (int x = 0; x < 11; x++)
    {
        cout << " ";
    }
    gotoxy(infantryX, infantryY + 1);

    for (int x = 0; x < 11; x++)
    {
        cout << " ";
    }
    gotoxy(infantryX, infantryY + 2);

    for (int x = 0; x < 11; x++)
    {
        cout << " ";
    }
}

void bulletCollisionWithInfantry()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {
            if (bulletX[x] + 1 == (infantryX + 5) && (bulletY[x] == infantryY || bulletY[x] == infantryY + 1 || bulletY[x] == infantryY + 2))
            {
                addScore();
                infantryHealth--;
            }
            else if (infantryX - 1 == bulletX[x] && infantryY + 1 == bulletY[x])
            {
                addScore();
                infantryHealth--;
            }
        }
    }
}

void moveTank()
{
    if (tankDirection == "Up")
    {
        char next = getCharAtxy(tankX, tankY - 1);
        if (next == ' ')
        {
            eraseTank();
            tankY = tankY - 1;
            printTank();
        }
        if (next == '*')
        {
            tankDirection = "Down";
        }
    }

    if (tankDirection == "Down")
    {
        char next = getCharAtxy(tankX, tankY + 3);
        if (next == ' ')
        {
            eraseTank();
            tankY = tankY + 1;
            printTank();
        }
        if (next == '*')
        {
            tankDirection = "Up";
        }
    }
}

void printInfantryHealth()
{
    gotoxy(120, 3);
    if (infantryHealth == 5)
    {
        cout << "Infantry: " << heart << heart << heart << heart << heart;
    }
    gotoxy(120, 3);
    if (infantryHealth == 4)
    {
        cout << "Infantry: " << heart << heart << heart << heart << " ";
    }
    gotoxy(120, 3);
    if (infantryHealth == 3)
    {
        cout << "Infantry: " << heart << heart << heart << " "
             << " ";
    }
    gotoxy(120, 3);
    if (infantryHealth == 2)
    {
        cout << "Infantry: " << heart << heart << " "
             << " "
             << " ";
    }
    gotoxy(120, 3);
    if (infantryHealth == 1)
    {
        cout << "Infantry: " << heart << " "
             << " "
             << " "
             << " ";
    }
    gotoxy(120, 3);
    if (infantryHealth <= 0)
    {
        cout << "          "
             << " "
             << " "
             << " "
             << " "
             << " ";
        gotoxy(infantryX, infantryY);
        eraseInfantry();
    }
}

void moveBala()
{
    if (balaDirection == "Up")
    {
        char next = getCharAtxy(balaX, balaY - 1);
        if (next == ' ')
        {
            eraseBala();
            balaY = balaY - 1;
            printBala();
        }
        if (next == '*')
        {
            balaDirection = "Down";
        }
    }

    if (balaDirection == "Down")
    {
        char next = getCharAtxy(balaX, balaY + 4);
        if (next == ' ')
        {
            eraseBala();
            balaY = balaY + 1;
            printBala();
        }
        if (next == '*')
        {
            balaDirection = "Up";
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
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(120, 2);
    cout << "Score: " << score;
}

void printBala()
{
    int a = 9;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(balaX, balaY);
    for (int i = 0; i < a; i++)
    {
        cout << lineBala1[i];
    }

    gotoxy(balaX, balaY + 1);
    for (int i = 0; i < a; i++)
    {
        cout << lineBala2[i];
    }

    gotoxy(balaX, balaY + 2);
    for (int i = 0; i < a; i++)
    {
        cout << lineBala3[i];
    }

    gotoxy(balaX, balaY + 3);
    for (int i = 0; i < a; i++)
    {
        cout << lineBala4[i];
    }
}

void eraseBala()
{
    int a = 9;

    gotoxy(balaX, balaY);
    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }

    gotoxy(balaX, balaY + 1);
    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }

    gotoxy(balaX, balaY + 2);
    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }

    gotoxy(balaX, balaY + 3);
    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }
}

void bulletCollisionWithBala()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {
            if (bulletX[x] + 1 == balaX && (bulletY[x] == balaY || bulletY[x] == balaY + 1))
            {
                addScore();
                balaHealth--;
            }
            else if (balaX - 1 == bulletX[x] && balaY + 1 == bulletY[x])
            {
                addScore();
                balaHealth--;
            }
            else if (bulletX[x] - 4 == balaX && (bulletY[x] == balaY + 2))
            {
                addScore();
                balaHealth--;
            }
            else if (bulletX[x] - 6 == balaX && (bulletY[x] == balaY + 3))
            {
                addScore();
                balaHealth--;
            }
        }
    }
}

void printBalaHealth()
{
    gotoxy(120, 3);
    if (balaHealth <= 20 && balaHealth > 16)
    {
        cout << "Bala: " << heart << heart << heart << heart << heart;
    }
    gotoxy(120, 3);
    if (balaHealth <= 16 && balaHealth > 12)
    {
        cout << "Bala: " << heart << heart << heart << heart << " ";
    }
    gotoxy(120, 3);
    if (balaHealth <= 12 && balaHealth > 8)
    {
        cout << "Bala: " << heart << heart << heart << " "
             << " ";
    }
    gotoxy(120, 3);
    if (balaHealth <= 8 && balaHealth > 4)
    {
        cout << "Bala: " << heart << heart << " "
             << " "
             << " ";
    }
    gotoxy(120, 3);
    if (balaHealth <= 4 && balaHealth > 0)
    {
        cout << "Bala: " << heart << " "
             << " "
             << " "
             << " ";
    }
    gotoxy(120, 3);
    if (balaHealth <= 0)
    {
        cout << "      "
             << " "
             << " "
             << " "
             << " "
             << " ";
        gotoxy(balaX, balaY);
        eraseBala();
    }
}

void generateEnemyBullet(int x, int y)
{
    enemyBulletX[enemyBulletCount] = x - 1;
    enemyBulletY[enemyBulletCount] = y;
    isEnemyBulletActive[enemyBulletCount] = true;
    gotoxy(x - 1, y);
    cout << "~";
    enemyBulletCount++;
}

void moveEnemyBullet() 
{
    for (int i = 0; i < enemyBulletCount; i++)
    {
        if (isEnemyBulletActive[i] == true)
        {
            char next = getCharAtxy(enemyBulletX[i] - 1, enemyBulletY[i]);

            if (next == ' ' || true)
            {
                eraseEnemyBullet(enemyBulletX[i], enemyBulletY[i]);
                enemyBulletX[i] = enemyBulletX[i] - 1;
                printEnemyBullet(enemyBulletX[i], enemyBulletY[i]);
            }
            else if (next != ' ')
            {
                eraseEnemyBullet(enemyBulletX[i], enemyBulletY[i]);
                makeEnemyBulletInactive(i);
            }
        }
    }
}

void makeEnemyBulletInactive(int idx)
{
    isEnemyBulletActive[idx] = false;
}

void eraseEnemyBullet(int x, int y)
{

    gotoxy(x, y);
    cout << " ";
}

void bulletCollisionWithTower()
{
    for (int x = 0; x < enemyBulletCount; x++)
    {
        if (isEnemyBulletActive[x] == true)
        {
            char next = getCharAtxy(enemyBulletX[x] - 1, enemyBulletY[x]);
            if (next == '!')
            {
                towerHealth = towerHealth - m;
            }
        }
    }
}

void printRamboHealth()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 1);
    gotoxy(120, 4);
    if (towerHealth <= 300 && towerHealth > 240)
    {
        cout << "Tower: " << heart << heart << heart << heart << heart;
    }
    gotoxy(120, 4);
    if (towerHealth <= 240 && towerHealth > 180)
    {
        cout << "Tower: " << heart << heart << heart << heart << " ";
    }
    gotoxy(120, 4);
    if (towerHealth <= 180 && towerHealth > 120)
    {
        cout << "Tower: " << heart << heart << heart << " "
             << " ";
    }
    gotoxy(120, 4);
    if (towerHealth <= 120 && towerHealth > 60)
    {
        cout << "Tower: " << heart << heart << " "
             << " "
             << " ";
    }
    gotoxy(120, 4);
    if (towerHealth <= 60 && towerHealth > 0)
    {
        cout << "Tower: " << heart << " "
             << " "
             << " "
             << " ";
    }
    gotoxy(120, 4);
    if (towerHealth <= 0)
    {
        cout << "       "
             << " "
             << " "
             << " "
             << " "
             << " ";
    }
}

void gameOver()
{
    system("cls");
    gotoxy(40, 10);
    cout << "       *********      ***      **    **  *********       ";
    gotoxy(40, 11);
    cout << "       *             ** **     * *  * *  *               ";
    gotoxy(40, 12);
    cout << "       *    ****    *******    *  **  *  ******          ";
    gotoxy(40, 13);
    cout << "       *       *   **     **   *      *  *               ";
    gotoxy(40, 14);
    cout << "       *********  **       **  *      *  *********       ";
    gotoxy(40, 17);
    cout << "       *********  **       **  *********  *******        ";
    gotoxy(40, 18);
    cout << "       *       *   **     **   *         *       *       ";
    gotoxy(40, 19);
    cout << "       *       *    **   **    ******    ********        ";
    gotoxy(40, 20);
    cout << "       *       *     ** **     *         *  **           ";
    gotoxy(40, 21);
    cout << "       *********      **       ********* *     **        ";
    gotoxy(40, 23);
    cout << "       Enter 0 to exit.";
    int option;
    cin >> option;
}

void youWon()
{
    gotoxy(40, 10);
    cout << "       *********  *********   ***     *  *********   *******       ***      **********  ********* ";
    gotoxy(40, 11);
    cout << "       *          *       *   *  *    *  *          *       *     ** **         **      **        ";
    gotoxy(40, 12);
    cout << "       *          *       *   *   *   *  *   *****  *********    *******        **      ********* ";
    gotoxy(40, 13);
    cout << "       *          *       *   *    *  *  *       *  *  **       **     **       **             ** ";
    gotoxy(40, 14);
    cout << "       *********  *********   *     ***  *********  *     **   **       **      **      ********* ";
    gotoxy(40, 16);
    cout << "       Enter 0 to exit.";
}

void printEnemyBullet(int x, int y)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(x, y);
    cout << "~";
}

void printRambo()
{
    int a = 9;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 1);
    gotoxy(ramboX, ramboY);
    for (int i = 0; i < a; i++)
    {
        cout << lineRambo1[i];
    }

    gotoxy(ramboX, ramboY + 1);
    for (int i = 0; i < a; i++)
    {
        cout << lineRambo2[i];
    }

    gotoxy(ramboX, ramboY + 2);
    for (int i = 0; i < a; i++)
    {
        cout << lineRambo3[i];
    }

    gotoxy(ramboX, ramboY + 3);
    for (int i = 0; i < a; i++)
    {
        cout << lineRambo4[i];
    }
}

void removeRambo()
{
    int a = 9;
    gotoxy(ramboX, ramboY);
    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }

    gotoxy(ramboX, ramboY + 1);
    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }

    gotoxy(ramboX, ramboY + 2);
    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }

    gotoxy(ramboX, ramboY + 3);
    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }
}

void moveRamboUp()
{
    char nextLocation = getCharAtxy(ramboX, ramboY - 1);
    if (nextLocation == ' ')
    {
        gotoxy(ramboX, ramboY);
        removeRambo();
        ramboY = ramboY - 1;
        printRambo();
    }
}

void moveRamboDown()
{
    char nextLocation = getCharAtxy(ramboX, ramboY + 4);
    if (nextLocation == ' ')
    {
        removeRambo();
        ramboY = ramboY + 1;
        printRambo();
    }
}

void moveRamboLeft()
{
    char nextLocation = getCharAtxy(ramboX - 1, ramboY);
    if (nextLocation == ' ')
    {
        removeRambo();
        ramboX = ramboX - 1;
        printRambo();
    }
}

void moveRamboRight()
{
    char nextLocation = getCharAtxy(ramboX + 10, ramboY);
    if (nextLocation == ' ')
    {
        removeRambo();
        ramboX = ramboX + 1;
        printRambo();
    }
}

void generateBullet()
{
    bulletX[bulletCount] = ramboX + 10;
    bulletY[bulletCount] = ramboY;
    isBulletActive[bulletCount] = true;
    gotoxy(ramboX + 10, ramboY);
    cout << ".";
    bulletCount++;
}

void moveInfantry()
{

    if (infantryDirection == "Up")
    {
        char next = getCharAtxy(infantryX, infantryY - 1);
        if (next == ' ')
        {
            eraseInfantry();
            infantryY = infantryY - 1;
            printInfantry();
        }
        if (next == '*')
        {
            infantryDirection = "Down";
        }
    }

    if (infantryDirection == "Down")
    {
        char next = getCharAtxy(infantryX, infantryY + 3);
        if (next == ' ')
        {
            eraseInfantry();
            infantryY = infantryY + 1;
            printInfantry();
        }
        if (next == '*')
        {
            infantryDirection = "Up";
        }
    }
}

void moveBullet()
{
    for (int i = 0; i < bulletCount; i++)
    {
        if (isBulletActive[i] == true)
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
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 11);
    gotoxy(x, y);
    cout << ".";
}

void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void makeBulletInactive(int idx)
{
    isBulletActive[idx] = false;
}
