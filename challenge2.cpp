#include <iostream>
#include <cmath>
using namespace std;
void triangle (int a);
main()
{
  int a ;
  cout<<"enter the no ";
  cin>>a;
   triangle ( a );
}

void triangle (int a)
{
 int count = 0;
  for (int y = 1; y<=a; y++)
  {
   count = count + y;
  }
 cout<<count;
}