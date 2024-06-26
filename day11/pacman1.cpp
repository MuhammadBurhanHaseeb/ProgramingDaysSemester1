#include <iostream>
#include <fstream>
#include <time.h>
#include <windows.h>
#include <cmath>
using namespace std;
// Global Variable
char maze[24][71];
int pacmanX = 9;  // X Coordinate of Pacman
int pacmanY = 31; // Y Coordinate of Pacman
int score = 0;
int ghostX = 22;  // X Coordinate of Ghost1 that will chase the pacman
int ghostY = 2;   // Y Coordinate of Ghost1
int ghost2X = 19; // X Coordinate of Ghost2 that will move in random direction
int ghost2Y = 25; // Y Coordinate of Ghost2
int ghost3X = 14; // X Coordinate of Ghost3 that will move in vertical direction
int ghost3Y = 22; // Y Coordinate of Ghost3
int move3rdGhost = 0;
int ghost4X = 16; // X Coordinate of Ghost3 that will move in horizontal direction
int ghost4Y = 50; // Y Coordinate of Ghost3
int move4thGhost = 0;
char previousItem = ' ';
char previousItem2 = ' ';
char previousItem3 = ' ';
char previousItem4 = ' ';
float Distance[4] = {10000, 10000, 10000, 10000};
int lives = 3;
bool GotEnergizer = false;
int energizerCount = 0;
void gotoxy(int x, int y);
void printPacman();
void printMaze();
void loadMaze();
void calculateScore();
void printScore();
bool movePacmanLeft();
bool movePacmanRight();
bool movePacmanUp();
bool movePacmanDown();
bool ghost1Movement();
bool ghost1RandomMovement();
int Smallestdistance();
int ghostDirection();
bool ghost2Movement();
bool ghost3Movement();
bool ghost4Movement();
void loadMaze();
void Store();
// Main Function
main()
{
    system("cls");
    loadMaze();
    printMaze();
    gotoxy(pacmanY, pacmanX);
    cout << "P";
    gotoxy(ghostY, ghostX);
    cout << "G";
    gotoxy(ghost2Y, ghost2X);
    cout << "G";
    gotoxy(ghost3Y, ghost3X);
    cout << "G";
    gotoxy(ghost4Y, ghost4X);
    cout << "G";
    // printScore();
    bool gameRunning5 = true;
    bool gameRunning6 = true;
    bool gameRunning7 = true;
    bool gameRunning8 = true;
    bool gamerunning1 = true;
    bool gamerunning2 = true;
    bool gamerunning3 = true;
    bool gamerunning4 = true;
    while (gameRunning5 && gameRunning6 && gameRunning7 && gameRunning8 && gamerunning1 && gamerunning2 && gamerunning3 && gamerunning4)
    {
        Sleep(100);
        gameRunning5 = ghost1Movement();
        gameRunning6 = ghost2Movement();
        gameRunning7 = ghost3Movement();
        gameRunning8 = ghost4Movement();
        if (GetAsyncKeyState(VK_LEFT))
        {
            gamerunning1 = movePacmanLeft(); // Function call to move Pacman towards left
        }
        else if (GetAsyncKeyState(VK_RIGHT))
        {
            gamerunning2 = movePacmanRight(); // Function call to move Pacman towards right
        }
        else if (GetAsyncKeyState(VK_UP))
        {
            gamerunning3 = movePacmanUp(); // Function call to move Pacman towards up
        }
        else if (GetAsyncKeyState(VK_DOWN))
        {
            gamerunning4 = movePacmanDown(); // Function call to move Pacman towards down
        }
        else if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning5 = false; // Stop the game
            break;
        }
        bool total = gameRunning5 && gameRunning6 && gameRunning7 && gameRunning8 && gamerunning1 && gamerunning2 && gamerunning3 && gamerunning4;
        if (GotEnergizer && energizerCount != 100)
        {
            energizerCount++;
        }
        else if (energizerCount == 100)
        {
            energizerCount = 0;
            GotEnergizer = false;
        }
        if (!total)
        {
            if (lives != 0)
            {
                gameRunning5 = true;
                gameRunning6 = true;
                gameRunning7 = true;
                gameRunning8 = true;
                gamerunning1 = true;
                gamerunning2 = true;
                gamerunning3 = true;
                gamerunning4 = true;
                gotoxy(pacmanY, pacmanX);
                cout << " ";
                pacmanX = 9;
                pacmanY = 31;
                gotoxy(pacmanY, pacmanX);
                cout << "P";
                lives--;
                Sleep(1000);
            }
        }

        gotoxy(75, 0);
        cout << "Lives: " << lives;
        gotoxy(75, 2);
        cout << "Energizer Count: " << energizerCount;
        gotoxy(75, 4);
        printScore();
    }
    system("cls");
    // gotoxy(0, 0);
    printMaze();
    printScore();
    gotoxy(pacmanY, pacmanX);
    cout << "P";
    gotoxy(ghost2Y, ghost2X);
    cout << "G";
    gotoxy(ghost3Y, ghost3X);
    cout << "G";
    gotoxy(ghost4Y, ghost4X);
    cout << "G";
    Store();
}
void gotoxy(int x, int y)
{
    COORD cursorPosition;
    cursorPosition.X = x;
    cursorPosition.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
}
void loadMaze()
{
    fstream loadmaze;
    loadmaze.open("maze.txt", ios::in);
    string line;
    int row = 0;
    while (!loadmaze.eof())
    {
        getline(loadmaze, line);
        for (int col = 0; col < 71; col++)
        {
            maze[row][col] = line[col];
        }
        row++;
    }
}
void Store()
{
    fstream storemaze;
    storemaze.open("Stored.txt", ios::out);
    for (int row = 0; row < 24; row++)
    {
        for (int col = 0; col < 71; col++)
        {
            storemaze << maze[row][col];
        }
        storemaze << endl;
    }
    storemaze << score;
    storemaze.close();
}
void printMaze()
{
    for (int row = 0; row < 24; row = row + 1)
    {
        for (int col = 0; col < 71; col = col + 1)
        {
            cout << maze[row][col];
        }
        cout << endl;
    }
}
void calculateScore()
{
    score = score + 1;
}
void printScore()
{
    cout << "Score:  " << score;
}
bool movePacmanLeft()
{
    if (maze[pacmanX][pacmanY - 1] == ' ' || maze[pacmanX][pacmanY - 1] == '.' || maze[pacmanX][pacmanY - 1] == 'o')
    {
        if (maze[pacmanX][pacmanY - 1] == 'o')
        {
            calculateScore();
            calculateScore();
            GotEnergizer = true;
            energizerCount = 0;
        }
        if (maze[pacmanX][pacmanY - 1] == '.')
        {
            calculateScore();
        }
        gotoxy(pacmanY, pacmanX);
        maze[pacmanX][pacmanY] = ' ';
        cout << " ";
        pacmanY--;

        gotoxy(pacmanY, pacmanX);
        cout << "P";
    }
    else if (maze[pacmanX][pacmanY - 1] == 'G')
    {
        gotoxy(pacmanY, pacmanX);
        cout << " ";
    }
    if (ghostX == pacmanX && ghostY == pacmanY && GotEnergizer)
    {
        gotoxy(pacmanX, pacmanY);
        cout << "P";
        ghostX = 22;
        ghostY = 2;
        gotoxy(ghostY, ghostX);
        cout << "G";
        return 1;
    }
    if (ghost2X == pacmanX && ghost2Y == pacmanY && GotEnergizer)
    {
        gotoxy(pacmanX, pacmanY);
        cout << "P";
        ghost2X = 19;
        ghost2Y = 25;
        gotoxy(ghost2Y, ghost2X);
        cout << "G";
        return 1;
    }
    if (ghost3X == pacmanX && ghost3Y == pacmanY && GotEnergizer)
    {
        gotoxy(pacmanX, pacmanY);
        cout << "P";
        ghost3X = 14;
        ghost3Y = 22;
        gotoxy(ghost3Y, ghost3X);
        cout << "G";
        return 1;
    }
    if (ghost4X == pacmanX && ghost4Y == pacmanY && GotEnergizer)
    {
        gotoxy(pacmanX, pacmanY);
        cout << "P";
        ghost4X = 16;
        ghost4Y = 50;
        gotoxy(ghost4Y, ghost4X);
        cout << "G";
        return 1;
    }
    if (ghostX == pacmanX && ghostY == pacmanY)
    {
        maze[pacmanX][pacmanY] = 'G';
        gotoxy(pacmanY, pacmanX);
        cout << "G";
        return 0;
    }
    if (ghost2X == pacmanX && ghost2Y == pacmanY)
    {
        maze[pacmanX][pacmanY] = 'G';
        gotoxy(pacmanY, pacmanX);
        cout << "G";
        return 0;
    }
    if (ghost3X == pacmanX && ghost3Y == pacmanY)
    {
        maze[pacmanX][pacmanY] = 'G';
        gotoxy(pacmanY, pacmanX);
        cout << "G";
        return 0;
    }
    if (ghost4X == pacmanX && ghost4Y == pacmanY)
    {
        maze[pacmanX][pacmanY] = 'G';
        gotoxy(pacmanY, pacmanX);
        cout << "G";
        return 0;
    }

    return 1;
}
bool movePacmanRight()
{
    if (maze[pacmanX][pacmanY + 1] == ' ' || maze[pacmanX][pacmanY + 1] == '.' || maze[pacmanX][pacmanY + 1] == 'o')
    {
        if (maze[pacmanX][pacmanY + 1] == 'o')
        {
            calculateScore();
            calculateScore();
            GotEnergizer = true;
            energizerCount = 0;
        }
        if (maze[pacmanX][pacmanY + 1] == '.')
        {
            calculateScore();
        }
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanY++;
        if (ghost2X == pacmanX && ghost2Y == pacmanY)
        {
            gotoxy(pacmanY, pacmanX);
            cout << "G";
            return 0;
        }
        if (ghost3X == pacmanX && ghost3Y == pacmanY)
        {
            gotoxy(pacmanY, pacmanX);
            cout << "G";
            return 0;
        }
        if (ghost4X == pacmanX && ghost4Y == pacmanY)
        {
            gotoxy(pacmanY, pacmanX);
            cout << "G";
            return 0;
        }
        gotoxy(pacmanY, pacmanX);
        cout << "P";
    }
    else if (maze[pacmanX][pacmanY + 1] == 'G')
    {
        // maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        return 0;
    }
    return 1;
}
bool movePacmanUp()
{
    if (maze[pacmanX - 1][pacmanY] == ' ' || maze[pacmanX - 1][pacmanY] == '.' || maze[pacmanX - 1][pacmanY] == 'o')
    {
        if (maze[pacmanX - 1][pacmanY] == 'o')
        {
            calculateScore();
            calculateScore();
            GotEnergizer = true;
            energizerCount = 0;
        }
        if (maze[pacmanX - 1][pacmanY] == '.')
        {
            calculateScore();
        }
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanX--;
        if (ghost2X == pacmanX && ghost2Y == pacmanY)
        {
            gotoxy(pacmanY, pacmanX);
            cout << "G";
            return 0;
        }
        if (ghost3X == pacmanX && ghost3Y == pacmanY)
        {
            gotoxy(pacmanY, pacmanX);
            cout << "G";
            return 0;
        }
        if (ghost4X == pacmanX && ghost4Y == pacmanY)
        {
            gotoxy(pacmanY, pacmanX);
            cout << "G";
            return 0;
        }
        gotoxy(pacmanY, pacmanX);
        cout << "P";
    }
    else if (maze[pacmanX - 1][pacmanY] == 'G')
    {
        // maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
    }
    return 1;
}
bool movePacmanDown()
{
    if (maze[pacmanX + 1][pacmanY] == ' ' || maze[pacmanX + 1][pacmanY] == '.' || maze[pacmanX + 1][pacmanY] == 'o')
    {
        if (maze[pacmanX + 1][pacmanY] == 'o')
        {
            calculateScore();
            calculateScore();
            GotEnergizer = true;
            energizerCount = 0;
        }
        if (maze[pacmanX + 1][pacmanY] == '.')
        {
            calculateScore();
        }
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanX++;
        if (ghost2X == pacmanX && ghost2Y == pacmanY)
        {
            gotoxy(pacmanY, pacmanX);
            cout << "G";
            return 0;
        }
        if (ghost3X == pacmanX && ghost3Y == pacmanY)
        {
            gotoxy(pacmanY, pacmanX);
            cout << "G";
            return 0;
        }
        if (ghost4X == pacmanX && ghost4Y == pacmanY)
        {
            gotoxy(pacmanY, pacmanX);
            cout << "G";
            return 0;
        }
        gotoxy(pacmanY, pacmanX);
        cout << "P";
    }
    else if (maze[pacmanX + 1][pacmanY] == 'G')
    {
        // maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
    }
    return 1;
}
int ghostDirection()
{
    srand(time(0));
    int result = 1 + (rand() % 4);
    return result;
}
bool ghost1Movement()
{
    if (GotEnergizer)
    {
        ghost1RandomMovement();
    }
    else
    {
        Distance[0] = 10000;
        Distance[1] = 10000;
        Distance[2] = 10000;
        Distance[3] = 10000;
        if (maze[ghostX][ghostY - 1] == ' ' || maze[ghostX][ghostY - 1] == '.' || maze[ghostX][ghostY - 1] == 'P')
        { // for LEFT movement
            Distance[0] = sqrt(pow((ghostX - pacmanX), 2) + pow((ghostY - 1 - pacmanY), 2));
        }
        if (maze[ghostX][ghostY + 1] == ' ' || maze[ghostX][ghostY + 1] == '.' || maze[ghostX][ghostY + 1] == 'P')
        { // for RIGHT movement
            Distance[1] = sqrt(pow((ghostX - pacmanX), 2) + pow((ghostY + 1 - pacmanY), 2));
        }
        if (maze[ghostX - 1][ghostY] == ' ' || maze[ghostX - 1][ghostY] == '.' || maze[ghostX - 1][ghostY] == 'P')
        { // for upward movement
            Distance[2] = sqrt(pow((ghostX - 1 - pacmanX), 2) + pow((ghostY - pacmanY), 2));
        }
        if (maze[ghostX + 1][ghostY] == ' ' || maze[ghostX + 1][ghostY] == '.' || maze[ghostX + 1][ghostY] == 'P')
        { // for downward movement
            Distance[3] = sqrt(pow((ghostX + 1 - pacmanX), 2) + pow((ghostY - pacmanY), 2));
        }
        int smallestidx = Smallestdistance();
        if (smallestidx == 0)
        {
            if (maze[ghostX][ghostY - 1] == ' ' || maze[ghostX][ghostY - 1] == '.' || maze[ghostX][ghostY - 1] == 'P')
            {
                gotoxy(ghostY, ghostX);
                cout << previousItem;
                ghostY = ghostY - 1;
                previousItem = maze[ghostX][ghostY];
                gotoxy(ghostY, ghostX);
                cout << "G";
            }
        }
        else if (smallestidx == 1)
        {
            if (maze[ghostX][ghostY + 1] == ' ' || maze[ghostX][ghostY + 1] == '.' || maze[ghostX][ghostY + 1] == 'P')
            {
                gotoxy(ghostY, ghostX);
                cout << previousItem;
                ghostY = ghostY + 1;
                previousItem = maze[ghostX][ghostY];
                gotoxy(ghostY, ghostX);
                cout << "G";
            }
        }
        else if (smallestidx == 2)
        {
            if (maze[ghostX - 1][ghostY] == ' ' || maze[ghostX - 1][ghostY] == '.' || maze[ghostX - 1][ghostY] == 'P')
            {
                gotoxy(ghostY, ghostX);
                cout << previousItem;
                ghostX = ghostX - 1;
                previousItem = maze[ghostX][ghostY];
                gotoxy(ghostY, ghostX);
                cout << "G";
            }
        }
        else if (smallestidx == 3)
        {
            if (maze[ghostX + 1][ghostY] == ' ' || maze[ghostX + 1][ghostY] == '.' || maze[ghostX + 1][ghostY] == 'P')
            {
                gotoxy(ghostY, ghostX);
                cout << previousItem;
                ghostX = ghostX + 1;
                previousItem = maze[ghostX][ghostY];
                gotoxy(ghostY, ghostX);
                cout << "G";
            }
        }
        if (ghostX == pacmanX && ghostY == pacmanY)
        {
            return 0;
        }
    }
    return 1;
}
bool ghost1RandomMovement()
{
    int value = ghostDirection();

    if (value == 1)
    {
        if (maze[ghostX][ghostY - 1] == ' ' || maze[ghostX][ghostY - 1] == '.' || maze[ghostX][ghostY - 1] == 'P')
        {
            gotoxy(ghostY, ghostX);
            cout << previousItem2;
            ghostY = ghostY - 1;
            previousItem = maze[ghostX][ghostY];
            gotoxy(ghostY, ghostX);
            cout << "G";
        }
    }
    else if (value == 2)
    {
        if (maze[ghostX][ghostY + 1] == ' ' || maze[ghostX][ghostY + 1] == '.' || maze[ghostX][ghostY + 1] == 'P')
        {
            gotoxy(ghostY, ghostX);
            cout << previousItem;
            ghostY = ghostY + 1;
            previousItem = maze[ghostX][ghostY];
            gotoxy(ghostY, ghostX);
            cout << "G";
        }
    }
    else if (value == 3)
    {
        if (maze[ghostX - 1][ghostY] == ' ' || maze[ghostX - 1][ghostY] == '.' || maze[ghostX - 1][ghostY] == 'P')
        {
            gotoxy(ghostY, ghostX);
            cout << previousItem;
            ghostX = ghostX - 1;
            previousItem = maze[ghostX][ghostY];
            gotoxy(ghostY, ghostX);
            cout << "G";
        }
    }
    else if (value == 4)
    {
        if (maze[ghostX + 1][ghostY] == ' ' || maze[ghostX + 1][ghostY] == '.' || maze[ghostX + 1][ghostY] == 'P')
        {
            gotoxy(ghostY, ghostX);
            cout << previousItem;
            ghost2X = ghostX + 1;
            previousItem = maze[ghostX][ghostY];
            gotoxy(ghostY, ghostX);
            cout << "G";
        }
    }
    if (ghostX == pacmanX && ghostY == pacmanY && GotEnergizer)
    {
        gotoxy(pacmanX, pacmanY);
        cout << "P";
        ghostX = 16;
        ghostY = 50;
        gotoxy(ghostY, ghostX);
        cout << "G";
        return 1;
    }
    return 1;
}
int Smallestdistance()
{
    float smallest = Distance[0];
    int smallestidx = 0;
    for (int i = 0; i < 4; i++)
    {
        if (smallest > Distance[i])
        {
            smallest = Distance[i];
            smallestidx = i;
        }
    }
    return smallestidx;
}
bool ghost2Movement()
{
    int value = ghostDirection();

    if (value == 1)
    {
        if (maze[ghost2X][ghost2Y - 1] == ' ' || maze[ghost2X][ghost2Y - 1] == '.' || maze[ghost2X][ghost2Y - 1] == 'P')
        {
            gotoxy(ghost2Y, ghost2X);
            cout << previousItem2;
            ghost2Y = ghost2Y - 1;
            previousItem2 = maze[ghost2X][ghost2Y];
            gotoxy(ghost2Y, ghost2X);
            cout << "G";
        }
    }
    else if (value == 2)
    {
        if (maze[ghost2X][ghost2Y + 1] == ' ' || maze[ghost2X][ghost2Y + 1] == '.' || maze[ghost2X][ghost2Y + 1] == 'P')
        {
            gotoxy(ghost2Y, ghost2X);
            cout << previousItem2;
            ghost2Y = ghost2Y + 1;
            previousItem2 = maze[ghost2X][ghost2Y];
            gotoxy(ghost2Y, ghost2X);
            cout << "G";
        }
    }
    else if (value == 3)
    {
        if (maze[ghost2X - 1][ghost2Y] == ' ' || maze[ghost2X - 1][ghost2Y] == '.' || maze[ghost2X - 1][ghost2Y] == 'P')
        {
            gotoxy(ghost2Y, ghost2X);
            cout << previousItem2;
            ghost2X = ghost2X - 1;
            previousItem2 = maze[ghost2X][ghost2Y];
            gotoxy(ghost2Y, ghost2X);
            cout << "G";
        }
    }
    else if (value == 4)
    {
        if (maze[ghost2X + 1][ghost2Y] == ' ' || maze[ghost2X + 1][ghost2Y] == '.' || maze[ghost2X + 1][ghost2Y] == 'P')
        {
            gotoxy(ghost2Y, ghost2X);
            cout << previousItem2;
            ghost2X = ghost2X + 1;
            previousItem2 = maze[ghost2X][ghost2Y];
            gotoxy(ghost2Y, ghost2X);
            cout << "G";
        }
    }
    if (ghost2X == pacmanX && ghost2Y == pacmanY && GotEnergizer)
    {
        gotoxy(pacmanX, pacmanY);
        cout << "P";
        ghost2X = 19;
        ghost2Y = 25;
        gotoxy(ghost2Y, ghost2X);
        cout << "G";
        return 1;
    }
    if (ghost2X == pacmanX && ghost2Y == pacmanY)
    {
        return 0;
    }
    return 1;
}
bool ghost3Movement()
{
    gotoxy(ghost3Y, ghost3X);
    cout << previousItem3;
    maze[ghost3X][ghost3Y] = previousItem3;
    if (move3rdGhost == 0)
    {
        if (maze[ghost3X - 1][ghost3Y] == ' ' || maze[ghost3X - 1][ghost3Y] == '.' || maze[ghost3X - 1][ghost3Y] == 'P')
        {
            ghost3X = ghost3X - 1;
            previousItem3 = maze[ghost3X][ghost3Y];
            gotoxy(ghost3Y, ghost3X);
            maze[ghost3X][ghost3Y] = 'G';
            cout << "G";
        }
        else if (maze[ghost3X - 1][ghost3Y] == '#')
        {
            move3rdGhost = 1;
        }
    }
    else if (move3rdGhost == 1)
    {
        if (maze[ghost3X + 1][ghost3Y] == ' ' || maze[ghost3X + 1][ghost3Y] == '.' || maze[ghost3X + 1][ghost3Y] == 'P')
        {
            ghost3X = ghost3X + 1;
            previousItem3 = maze[ghost3X][ghost3Y];
            gotoxy(ghost3Y, ghost3X);
            maze[ghost3X][ghost3Y] = 'G';
            cout << "G";
        }
        else if (maze[ghost3X + 1][ghost3Y] == '#')
        {
            move3rdGhost = 0;
        }
    }
    if (ghost3X == pacmanX && ghost3Y == pacmanY && GotEnergizer)
    {
        gotoxy(pacmanX, pacmanY);
        cout << "P";
        ghost3X = 14;
        ghost3Y = 22;
        gotoxy(ghost3Y, ghost3X);
        cout << "G";
        return 1;
    }

    if (ghost3X == pacmanX && ghost3Y == pacmanY)
    {
        return 0;
    }
    return 1;
}
bool ghost4Movement()
{
    gotoxy(ghost4Y, ghost4X);
    cout << previousItem4;
    maze[ghost4X][ghost4Y] = previousItem4;
    if (move4thGhost == 0)
    {
        if (maze[ghost4X][ghost4Y - 1] == ' ' || maze[ghost4X][ghost4Y - 1] == '.' || maze[ghost4X][ghost4Y - 1] == 'P')
        {
            gotoxy(ghost4Y, ghost4X);
            cout << previousItem4;
            ghost4Y = ghost4Y - 1;
            previousItem4 = maze[ghost4X][ghost4Y];
            gotoxy(ghost4Y, ghost4X);
            cout << "G";
        }
        else if (maze[ghost4X][ghost4Y - 1] == '|')
        {
            move4thGhost = 1;
        }
    }
    if (move4thGhost == 1)
    {
        if (maze[ghost4X][ghost4Y + 1] == ' ' || maze[ghost4X][ghost4Y + 1] == '.' || maze[ghost4X][ghost4Y + 1] == 'P')
        {
            gotoxy(ghost4Y, ghost4X);
            cout << previousItem4;
            ghost4Y = ghost4Y + 1;
            previousItem4 = maze[ghost4X][ghost4Y];
            gotoxy(ghost4Y, ghost4X);
            cout << "G";
        }
        else if (maze[ghost4X][ghost4Y + 1] == '|')
        {
            move4thGhost = 0;
        }
    }
    if (ghost4X == pacmanX && ghost4Y == pacmanY && GotEnergizer)
    {
        gotoxy(pacmanX, pacmanY);
        cout << "P";
        ghost4X = 16;
        ghost4Y = 50;
        gotoxy(ghost4Y, ghost4X);
        cout << "G";
        return 1;
    }
    if (ghost4X == pacmanX && ghost4Y == pacmanY)
    {
        return 0;
    }
    return 1;
}