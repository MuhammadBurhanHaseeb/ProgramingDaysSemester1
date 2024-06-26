#include <iostream>
using namespace std;
int pattern(string x);
main()
{
    int count = 0;
    int value = 10;
    string n[value];
    for (int x = 0 ; x<value; x++)
    {
         cout<<"enter the string";
         cin>>n[x];
         cout<<"would you like to store more colors in array"<<endl;
         cout<<"y for yes and n for no"<<endl;
         char y;
         cin>>y;
         if (y =='y' )
         {
             continue;
             count ++;
         }
         else if ( y == 'n')
         {
             break;
         }
    }
    for (int y =0 ; y<=count ; y++ )
    {
       pattern( n[y] );
    }

}
int pattern (string x )
{
   string same ;
   same  = x;
   if (same == x)
   {
       
   } 
}