#include <iostream>
using namespace std;
// funtion
string check(int count );
main()
{
    string result;
    int value = 20;
 int    array_size[value];
 int count=0;

 for(int x=0; x<value; x++){
     cout<<"enter number..";
     cin>>array_size[x];

     cout<<"Do you wan to store more numbers."<<endl;
     cout<<"press y for ys and n for no.."<<endl;
     char y;
     cin>>y;
     count++;
     if(y == 'y'){
         continue;
     }
     else{
         break;
     }
 }
     
 result = check( count );
 cout<<result; 
 }
 string check (int count )
 {
     if (count == 7)
     {
         return "boom";

     }
     else {
         return "greaterTHEN7";
     }
 }
 
