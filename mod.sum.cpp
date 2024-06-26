#include<iostream>
using namespace std;
main()
{
 int num , a,b,c,d,sum;
 cout<<"num";
 cin>>num;
 a=num%10;
 num=num/10;
 b=num%10;
 num=num/10;
 c=num%10;
 num=num/10;
 d=num;
 sum=a+b+c+d;
 cout<<"sum of individual"<<sum;
 
 }