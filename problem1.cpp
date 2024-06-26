# include <iostream>
#include <cmath>
void generation (int no , char ch);
using namespace std;
main()
{
    int no;
    cout<<"enter the no";
    cin>>no;
    char ch;
    cout<<"enter the character";
    cin>>ch; 
     generation( no , ch);
    

}
void generation(int no , char ch)
{
  if (no == -3 && ch =='m')
  {
      cout<<"great grandfather";

  }
  else if (no == -3 && ch =='f')
  {
      cout<<"great grandmother";

  }
   else if (no == -2 && ch =='m')
   {
       cout<<"grand father";
   }
   else if (no == -3 && ch =='f')
   {
       cout<<"grand mother";
   }
   else if (no == -1 && ch =='m')
   {
       cout<<"father";
   }
   else if (no == -1 && ch =='f')
   {
       cout<<"mother";
   }
      else if (no == 0 && ch =='m')
   {
       cout<<"me!";
   }
      else if (no == 0 && ch =='f')
   {
       cout<<"female me!";
   }
      else if (no == 1 && ch =='m')
   {
       cout<<"son";
   }
      else if (no == 1 && ch =='f')
   {
       cout<<"daughter";
   }
      else if (no == 2 && ch =='m')
   {
       cout<<"grandson";
   }
      else if (no == 2 && ch =='f')
   {
       cout<<"grand daughter";
   }
      else if (no == 3 && ch =='m')
   {
       cout<<"great grandson";
   }
      else if (no == 3 && ch =='f')
   {
       cout<<"great granddaughter";
   }

}
