#include <iostream>
#include <fstream>
#include <conio.h>
#include <sstream>
using namespace std;
void loadArray();
string s_user(string line, int field);
void getBirthday(string name, int age);
const int value = 5;
string name[value];
int age[value];
int count = 0;

main()
{
    loadArray();
    for (int x = 0; x < count; x++)
    {
        
        getBirthday(name[x], age[x]);
    }
}
void loadArray()
{
    string line;
    fstream f;
    f.open("names.txt", ios ::in);
    while (!f.eof())
    {
        getline(f , line);
        name[count] = s_user(line, 1);
       // age[count] = stoi(s_user(line,2));
        stringstream var1(s_user(line, 2));
        var1 >> age[count];
         //getBirthday(name[count], age[count]);
       
        count++;
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
void getBirthday(string name, int age)
{
    if (age % 2 == 0)
    {
        cout << "###############" << endl;
        cout << "#"
             << " " << age << " "
             << "HB"
             << " " << name << " "
             << "!"
             << " " << age << " "
             << "#" << endl;
        cout << "###############" << endl;
    }
    else if (age % 2 != 0)
    {
        cout << "***************" << endl;
        cout << "*"
             << " " << age << " "
             << "HB"
             << " " << name << " "
             << "!"
             << " " << age << " "
             << "*" << endl;
        cout << "***************" << endl;
    }
}