#include <iostream>
using namespace std;
void minipeak(int a , int b , int c );
main()
{
    int array[100];
    int no;
   cout<<"how many no you want to enter in the array";
   cin>>no; 
  
   for (int x=0 ; x<no ; x++)
   {
        cout<<"enter the element of array";
       cin>>array[x];
   }
   for (int y = 1 ; y< no-1 ; y++)
   {
       
       minipeak(array[y] , array[y-1] , array[y+1]);
   }
}
void minipeak(int a , int b , int c )
{
    if (a > b && a > c )
    {
        cout<<a<<" ";
    }
}