#include<iostream>
using namespace std;
main()
{
 int a1,a2,a3,a4,a5,sum,b1,b2,b3,b4,b5,subtract,c1,c2,c3,c4,c5,multiple,add,final_result;
 cout<<"enter a1";
cin>>a1;
 cout<<"enter a2";
cin>>a2;
 cout<<"enter a3";
cin>>a3;
 cout<<"enter a4";
cin>>a4;
 cout<<"enter a5";
cin>>a5;
 sum=a1+a2+a3+a4+a5;
 cout<<"enter b1";
cin>>b1;
 cout<<"enter b2";
cin>>b2;
 cout<<"enter b3";
cin>>b3;
 cout<<"enter b4";
cin>>b4;
 cout<<"enter b5";
cin>>b5;
subtract=b1-b2-b3-b4-b5;
 cout<<"enter c1";
cin>>c1;
 cout<<"enter c2";
cin>>c2;
 cout<<"enter c3";
cin>>c3;
 cout<<"enter c4";
cin>>c4;
 cout<<"enter c5";
cin>>c5;
multiple=c1*c2*c3*c4*c5;
add=sum+subtract;
final_result=add-multiple;
cout<<"final value"<<final_result;
 
 }