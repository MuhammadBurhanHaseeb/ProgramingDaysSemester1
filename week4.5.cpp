#include<iostream>
using namespace std;
main()
{
 float holidays,workingDays,totalGameTime;
 cout<<"enter the holidays";
 cin>>holidays;
 workingDays=365-holidays;
 totalGameTime=(holidays*127)+(workingDays*63);
 if(totalGameTime<30000)
{
 cout<<"the tom will sleep";
}
else
{
 cout<<"the tom will run";
}
}