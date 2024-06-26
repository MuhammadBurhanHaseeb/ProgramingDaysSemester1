#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
void add(string line);
int count =0;
main()
{
    
    fstream f;
    string line;
    f.open("data.txt" , ios:: in);
    while (!f.eof())
    {
        getline(f,line);
           //s cout<<line;
           add(line);
        
    }
    f.close();
}
void add(string line)
{
    string item1,item2;
    //cout<<"sdf";
for(int x = 0 ; line[x]!='\0' ; x++)
        {
           // cout<<"dfsb";
              //line[x];
             // cout<<line[x];
              //count ++;
            if (line[x] == '[')
            {
               // cout<<"swd";
               item1 = item1 + line[x];
            }
            else if (line[x] == ']')
            {
                item2 = item2 + line[x];
            }

        }
                string linee;
                fstream f;
                f.open("data.txt" , ios :: out);
                cout<<"enter the ";
                cin.ignore();
                getline(cin,linee);
                f << item1 << linee << item2;
                f.close();

            
        
}