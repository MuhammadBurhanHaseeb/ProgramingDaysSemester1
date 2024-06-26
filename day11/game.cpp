#include <iostream>
#include <fstream>
#include <time.h>
#include <windows.h>
#include <conio.h>
using namespace std;
 
// Global Variable
char maze[24][71] = {
{"#####################################################################"},
{"||.. .....................................................  ......  ||"},
{"||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||"},
{"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||"},
{"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||"},
{"||..        %%%%%%%%  . . |%|...     %%%%%%%%%%%%%%     ..   %%%%.  ||"},
{"||..        |%|       . . |%|...    ............... |%| ..       .  ||"},
{"||..        %%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..   %%%%.  ||"},
{"||..               |%|.             |%|......       |%| ..    |%|.  ||"},
{"||..     ......... |%|.             |%|......|%|        ..    |%|.  ||"},
{"||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%| |%|.  ||"},
{"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.      ||"},
{"||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.      ||"},
{"||..|%|            .           ...|%|               |%| ..|%|.      ||"},
{"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"},
{"||...............................................   |%| ..........  ||"},
{"||   ............................................          .......  ||"},
{"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|    |%| ..|%|.      ||"},
{"||..|%|  |%|   |%|..           ...|%|     %%%%%%    |%| ..|%|.      ||"},
{"||..|%|            .           ...|%|               |%| ..|%|.      ||"},
{"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"},
{"||...............................................   |%| ..........  ||"},
{"||  .............................................          .......  ||"},
{"#####################################################################"}};
int pacmanX = 9;  // X Coordinate of Pacman
int pacmanY = 31; // Y Coordinate of Pacman
int score = 0;
 
int ghostX = 20;  // X Coordinate of Ghost
int ghostY = 25;  // Y Coordinate of Ghost
char previousItem = ' ';
 bool ghostMovement();
 //void loadMaze();
 void movePacmanLeft();
 void movePacmanRight();
 void gotoxy(int x, int y);
 void movePacmanUp(); 
 void  movePacmanDown();
 void calculateScore();
void printScore();
int ghostDirection();
void printMaze();
// Main Function
main()
{
   // loadMaze();
    bool gameRunning = true;
    system("CLS");
     printMaze();
     gotoxy(pacmanY,pacmanX);
     cout<< "P";
     gotoxy(ghostY,ghostX);
        cout<<"G";
    while (gameRunning)
    {
        
       Sleep(100);
       
        gameRunning = ghostMovement();
        gotoxy(30,30);
        printScore();
     //   getch();
        if (GetAsyncKeyState(VK_LEFT))
        {

            movePacmanLeft(); // Function call to move Pacman towards left
            
            gotoxy(pacmanY,pacmanX);
            cout<<"P";
            
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePacmanRight(); // Function call to move Pacman towards right
            gotoxy(pacmanY,pacmanX);
            cout<<"P";
        }
        if (GetAsyncKeyState(VK_UP))
        {
            movePacmanUp(); // Function call to move Pacman towards up
            gotoxy(pacmanY,pacmanX);
            cout<<"P";
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePacmanDown(); // Function call to move Pacman towards down
            gotoxy(pacmanY,pacmanX);
            cout<<"P";
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false; // Stop the game
        }
        //gotoxy(pacmanY,pacmanX);
       // cout<<" ";
    }
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
    cout<< "Score: " << score << endl;
}

void movePacmanLeft()
{
    if (maze[pacmanX][pacmanY - 1] == ' ' || maze[pacmanX][pacmanY - 1] == '.')
    {
                  
       // maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY,pacmanX);
        cout<<" ";
        pacmanY = pacmanY - 1;
        if (maze[pacmanX][pacmanY] == '.')
        {
        calculateScore();
        }
       // maze[pacmanX][pacmanY] = 'P';
    }
}

void movePacmanRight(){
    if (maze[pacmanX][pacmanY + 1] == ' ' || maze[pacmanX][pacmanY + 1] == '.')
    {
      //  maze[pacmanX][pacmanY] = ' ';
         gotoxy(pacmanY,pacmanX);
        cout<<" ";
        pacmanY = pacmanY + 1;
        if (maze[pacmanX][pacmanY] == '.')
        {
        calculateScore();
        }
     //   maze[pacmanX][pacmanY] = 'P';
    }

}
void movePacmanUp()
{
    if (maze[pacmanX - 1][pacmanY] == ' ' || maze[pacmanX - 1][pacmanY] == '.')
    {
      //  maze[pacmanX][pacmanY] = ' ';
         gotoxy(pacmanY,pacmanX);
        cout<<" ";
        pacmanX = pacmanX - 1;
        if (maze[pacmanX][pacmanY] == '.')
        {
        calculateScore();
        }
      //  maze[pacmanX][pacmanY] = 'P';
    }
}
void movePacmanDown()
{
    if (maze[pacmanX + 1][pacmanY] == ' ' || maze[pacmanX + 1][pacmanY] == '.')
    {
      //  maze[pacmanX][pacmanY] = ' ';
         gotoxy(pacmanY,pacmanX);
        cout<<" ";
        pacmanX = pacmanX + 1;
        if (maze[pacmanX][pacmanY] == '.')
        {
        calculateScore();
        }
       // maze[pacmanX][pacmanY] = 'P';
    }
}

int ghostDirection()
{
    srand(time(0));
    int result = 1 + (rand() % 4);
    return result;
}
bool ghostMovement()
{
    gotoxy(ghostY,ghostX);
           cout<<" ";
    int value = ghostDirection();
    if (value == 1)
    {
        if (maze[ghostX][ghostY - 1] == ' ' || maze[ghostX][ghostY - 1] == '.' || maze[ghostX][ghostY - 1] == 'P')
        {
            maze[ghostX][ghostY] = previousItem;
            ghostY = ghostY - 1;
            previousItem = maze[ghostX][ghostY];
            if (previousItem == 'P')
            {
                return 0;
            }
           // maze[ghostX][ghostY] = 'G';
           gotoxy(ghostY,ghostX);
           cout<<"G";
        }
    }
    if (value == 2)
    {
        if (maze[ghostX][ghostY + 1] == ' ' || maze[ghostX][ghostY + 1] == '.' || maze[ghostX][ghostY + 1] == 'P')
        {
            maze[ghostX][ghostY] = previousItem;
            ghostY = ghostY + 1;
            previousItem = maze[ghostX][ghostY];
            if (previousItem == 'P')
            {
                return 0;
            }
          //  maze[ghostX][ghostY] = 'G';
          gotoxy(ghostY,ghostX);
           cout<<"G";
        }
    }
    if (value == 3)
    {
        if (maze[ghostX - 1][ghostY] == ' ' || maze[ghostX - 1][ghostY] == '.' || maze[ghostX - 1][ghostY] == 'P')
        {
            maze[ghostX][ghostY] = previousItem;
            ghostX = ghostX - 1;
            previousItem = maze[ghostX][ghostY];
            if (previousItem == 'P')
            {
                return 0;
            }
          //  maze[ghostX][ghostY] = 'G';
          gotoxy(ghostY,ghostX);
           cout<<"G";
        }
    }
    if (value == 4)
    {
        if (maze[ghostX + 1][ghostY] == ' ' || maze[ghostX + 1][ghostY] == '.' || maze[ghostX + 1][ghostY] == '.')
        {
            maze[ghostX][ghostY] = previousItem;
            ghostX = ghostX + 1;
            previousItem = maze[ghostX][ghostY];
            if (previousItem == 'P')
            {
                return 0;
            }
           // maze[ghostX][ghostY] = 'G';
           gotoxy(ghostY,ghostX);
           cout<<"G";
        }
    }
    return 1;
}
void gotoxy(int x, int y)
{
    COORD coordinates; // coordinates is declared as COORD
    coordinates.X = x; // defining x-axis
    coordinates.Y = y; // defining  y-axis
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}





