#include <iostream>
using namespace std;
main()
{
    int count =0;
    string a,b;
    cout<<"enter the first string";
    cin>>a;
    cout<<"enter the second string";
    cin>>b;
    for (int x = 0 ; a[x] != '\0' ; x++)
    {
        for (int y = x ; b[y] !='\0' ; y++ )
        {
            if (a[x] == b[y] )
            {
                count++;
                 b[y] = 0;
                break;
               
            }
        }
    }

    cout<<count;

}
