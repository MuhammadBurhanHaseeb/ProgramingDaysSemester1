#include<iostream>
using namespace std;
main()
{
 string type;
 float speed;
 cout<<"enter the speed of the car";
 cin>>speed;
 if(speed<=10)
{
 type="slow";
cout<<" the speed is "<<type;
}
if(speed>10 && speed<=50)
{
 type="average";
 cout<<"the speed is "<<type;
}
if(speed>50 && speed<=150)
{
 type="fast";
 cout<<"the speed is "<<type;
}
if (speed>150 && speed<=10000)
{
 type="ultra fast";
 cout<<"the speed is "<<type;
}
if(speed>10000)
{
 type="extremly fast";
 cout<<"the speed is "<<type;
}
}
