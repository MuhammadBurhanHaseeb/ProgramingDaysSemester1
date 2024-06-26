#include <iostream>
using namespace std;
main()
{
 float temp1,temp2,diff_temp;
 cout<<" enter the temperature of 1st city..";
 cin>>temp1;
 cout<<" enter the temperature of 2nd city..";
 cin>>temp2;
 diff_temp= temp1-temp2;
 if(diff_temp > 10)
 {
  cout<<" difference is too big ";
 }
 
 cout<<" program ends";
}