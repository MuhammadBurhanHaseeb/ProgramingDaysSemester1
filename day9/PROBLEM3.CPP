#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
string s_user(string line, int field);
main()
{
    string letter;
    string code;
    cout << "enter the name :" << endl;
    cin >> letter;

    fstream f;
    string line, name;
    f.open("MORSE.txt", ios::in);

    while (!f.eof())
    {
        getline(f, line);
        name = s_user(line, 1);
        code = s_user(line, 2);
        if (letter == name)
        {
            cout << code;
            break;
        }
    }
    f.close();
}
string s_user(string line, int field)
{
    int coma = 1;
    string item;
    for (int x = 0; x < line.length(); x++)
    {
        if (line[x] == ',')
        {
            coma++;
        }
        else if (coma == field)
        {
            item = item + line[x];
        }
    }
    return item;
}