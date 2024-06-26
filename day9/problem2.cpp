#include <iostream>
#include <fstream>
#include <conio.h>
#include <sstream>
using namespace std;
string  loadAlphabet();
string  checkalphabets(string line);
char a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};
char s[26];
int c;
main()
{
   string l = loadAlphabet();
   for(int x = 0 ; x < c ; x++)
   {
       cout<<s[x];
   }
   cout<<l;
  
}
string loadAlphabet()
{
    
    fstream f;
    string line ;
    f.open ("alphabets.txt" , ios :: in);
    getline(f,line);
    checkalphabets(line);
    
    /*for (int x =0 ; x <'\0' ; x++)
    {
        cout<<endl<<line[x];
        for (char y = 'a' ; y<= 'z' ; y++ )
        {
            cout<<line[x];
             if (line[x] ==  y)
             {
                 continue;
             }
             else 
             {
                 item = item + y;
             }
        }
    }*/
   // cout<<item;
    f.close();
  //  return item;
}
string  checkalphabets(string line )
{
   // cout<<line;
    string  item;
    for (int x =0 ; line[x] !='\0' ; x++)
    {
       // cout<<endl<<line[x];
        for (int y = 0 ; y<= 26 ; y++ )
        {
           // cout<<line[x];
             if (line[x]  !=  a[y])
             {
                 s[c] = line[x];
                 c++;
                 cout<<s[c];
             }
            /* else 
             {
                 item = item + a[y];
             }*/
        }
    }
    //cout<< "kje"<<endl;
    //cout<<item;
    //return item;
}