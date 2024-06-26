#include <iostream>
using namespace std;
bool testcheck();
int count=0;
string n[4];
main()
{
    int result;
    
    for (int x = 0 ; x<4 ; x++ )
    {
        cout<<"enter the string ";
        cin>>n[x];
    }
    result = testcheck();
   cout<<result;
    
}
bool testcheck()
{
    string first  = n[0];
    for (int y = 1 ; y<4 ; y++)
    {
        if (first == n[y])
        {
            first = n[y];
            count ++;
        }
    }
    if (count == 3)
    {
      return true;
    } 
    else 
    {
        return false;
    }
}