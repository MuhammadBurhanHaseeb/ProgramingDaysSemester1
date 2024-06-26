#include <iostream>
#include <cmath>
using namespace std;
void amplify(int a);
main()
{
    int a;
    cout<<"enter the greater bound ";
    cin>>a;
     amplify( a);
}
void amplify(int a)
{
    for (int x = 1 ; x<=a ; x++ )
    {
       int mode = x%4;
       if (mode ==0)
       {
           x = x * 10;
       }
       cout<<x<<"\t";
    }
}