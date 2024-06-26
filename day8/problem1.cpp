#include <iostream>
using namespace std;
main()
{
    char array[100];
    int count =0;
    char no;
    int n;
    cout<<"how many no you want to enter";
    cin>>n;
    for (int y = 0 ; y<n ; y++)
    {
        cout<<"enter the character";
        cin>>array[y];
    }
    cout <<"which charracter do you want to check in array how many times it repeat";
    cin>>no; 
    for (int x = 0 ; x< n ; x++)
    {
        if (no == array[x])
        {
            count ++;
        }
    }
    cout<<count;
}