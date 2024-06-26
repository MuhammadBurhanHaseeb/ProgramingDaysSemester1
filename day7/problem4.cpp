#include <iostream>
using namespace std;
int transform(int z,int y);
 int y;
main()
{
    int result;
    int n[3];
    for (int x = 0; x<3 ; x++)
    {
        cout<<"enter the array";
        cin>>n[x];

    }
   
    cout<<"enter the no of times even_odd transformation need to be done";
    cin>>y;
    for (int j = 0 ; j<3  ; j++)
    {
    result = transform (n[j] , y);
    cout<<result<<",";
    }

}
int transform(int z , int y)
{
    int result;
     int process ;
    for (int r =0 ; r<y ; r++)
    {
    if (z %2 ==0)
    {
      process = z- (2*y);

    }
    else 
    {

        process = z + (2*y);
    }

    }
    
    return process;

}