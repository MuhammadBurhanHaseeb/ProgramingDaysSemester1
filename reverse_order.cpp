#include<iostream>
using namespace std;
main()
{
 int num , a,b,c,d;
 cout<<"num";
 cin>>num;
 a=num%10;
 num=num/10;
 b=num%10;
 num=num/10;
 c=num%10;
 num=num/10;
 d=num;
 cout<<"in reverse order"<<a <<b <<c <<d;
 
 }