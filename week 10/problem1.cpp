#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
char Airplane[13][6] = {
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'}};
string Class;
string DesiredSeat;
int row, col;
void Load();
void Input();
void Display();
int rowInput(char row);
int colInput(char col1);
void AppendAirplane();
void SaveInFile();
char Menu();
void CreateNew();
void ExtractData(string Input);
main()
{
    while (1)
    {
        system("cls");
        char option = Menu();
        system("cls");
        if (option == '1')
        {
            Input();
        }
        else if (option == '2')
        {
            Display();
        }
        else if (option == '3')
        {
            CreateNew();
        }
        else if (option == '4')
        {
            SaveInFile();
        }
        else if (option == '5')
        {
            Load();
        }
        else if (option == '6')
        {
            break;
        }
        else
        {
            cout << "Enter a valid option!\n";
        }
        cout << "Enter any key to continue: ";
        getch();
    }

    // Load();
    // system("cls");
    // Display();
    // Input();
    // Display();
    // SaveInFile();
}
char Menu()
{
    cout << "Main Menu" << endl;
    cout << "Press1 to Reserve a seat\n";
    cout << "Press2 to print Seats\n";
    cout << "Press3 to create a new Flight\n";
    cout << "Press4 to save in file\n";
    cout << "Press5 to Load Previous File\n";
    cout << "Press6 to Exit\n";
    char option;
    cin >> option;
    return option;
}
void CreateNew()
{
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            Airplane[i][j] = '*';
        }
    }
}
void Display()
{
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << Airplane[i][j] << "\t";
        }
        cout << "\n";
    }
}
void Input()
{
    int rowNum, colNum;
    cout << "Please Enter your Class: ";
    cin >> Class;
    cout << "Enter Your Desired Seat:(Such as 0A) ";
    cin >> DesiredSeat;
    ExtractData(DesiredSeat);
    AppendAirplane();
}
void ExtractData(string Input)
{
    int i = 0;
    string temp = "";
    while (Input[i] >= 48 && Input[i] <= 57)
    {
        temp = temp + Input[i];
        i++;
    }
    row = stoi(temp);
    // cout << row;
    // cout << temp;
    // getch();
    col = colInput(Input[i]);
}
void AppendAirplane()
{
    int found = 0;
    while (1)
    {
        if ((Class == "First" || Class == "first") && (row >= 0 && row <= 1))
        {
            if (Airplane[row][col] == '*')
            {
                Airplane[row][col] = 'X';
                found = 1;
                break;
            }
        }
        else if ((Class == "Business" || Class == "businees") && (row >= 2 && row <= 6))
        {
            if (Airplane[row][col] == '*')
            {
                Airplane[row][col] = 'X';
                found = 1;
                break;
            }
        }
        else if ((Class == "Economy" || Class == "economy") && (row >= 7 && row <= 12))
        {
            if (Airplane[row][col] == '*')
            {
                Airplane[row][col] = 'X';
                found = 1;
                break;
            }
        }
        else
        {
            cout << "Please Enter something valid";
            Input();
            break;
        }
        // if (found == 1)
        // {
        //     break;
        // }
    }
}
int colInput(char col1)
{
    // cout << col1;
    // string col1 = col;
    if (col1 == 'A')
    {
        return 0;
    }
    else if (col1 == 'B')
    {
        return 1;
    }
    else if (col1 == 'C')
    {
        return 2;
    }
    else if (col1 == 'D')
    {
        return 3;
    }
    else if (col1 == 'E')
    {
        return 4;
    }
    else if (col1 == 'F')
    {
        return 5;
    }

    // for (int i = 97; i < i + 6; i++)
    // {
    //     if (char(i) == row || char(i - 32) == row)
    //     {
    //         return i - 97;
    //     }
    // }
    return 0;
}
int rowInput(char col)
{
    string column;
    column = col;
    int Column = stoi(column);
    return Column;
}
void Load()
{
    cout << "Which Flight Data you want to read: ";
    int num;
    cin >> num;
    fstream Load;
    Load.open("Flight.txt", ios::in);
    int x = 0, count = 0;
    while (!Load.eof())
    {
        for (int i = 0; i < 6; i++)
        {
            Load >> Airplane[x][i];
            // cout << Airplane[x][i];
            // getch();
        }
        x++;
        if (x == 13)
        {
            x = 0;
        }
        if (x == 0)
        {
            count++;
        }

        // count++;
        if ((count == num) && x == 0)
        {
            // cout << count;
            // getch();
            break;
        }
    }
    Load.close();
}
void SaveInFile()
{
    fstream Save;
    Save.open("Flight.txt", ios::app);
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            Save << Airplane[i][j] << "\t";
        }
    }
    Save << endl;
    Save.close();
}
