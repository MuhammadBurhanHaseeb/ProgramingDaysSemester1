#include <iostream>
using namespace std;
main()
{
    string n;
    cout<<"enter the string ";
    cin>>n;
    int count = 0 ;
    for (int x = 0 ; n[x]!='\0';x++)
    {
        count ++;
    }
    if (count % 2  == 0)
    {
        cout<<"true";
    }
    else 
    cout<<"false";
}