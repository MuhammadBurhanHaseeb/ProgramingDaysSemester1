#include<iostream>
using namespace std;
main()
{
 string geometric_figure;
 cout<<" enter the geometric figure ";
 cin>>geometric_figure;
 if(geometric_figure == "square")
{ 
 int l,square;
 cout<<" enter the length square";
 cin>>l;
 square=l*l;
 cout<<" the area square of figure is"<<square;
}
if(geometric_figure =="rectangle")
{
 int rectangle, lr,wr;
 cout<<" enter the length";
 cin>>lr;
 cout<<" enter the width of figure";
 cin>>wr;
 rectangle=lr*wr;
 cout<<" the arae rectangle of the figure is "<<rectangle;
}

if(geometric_figure =="circle")
{
 float circle,r;
 cout<<" enter the radius";
 cin>>r;
 circle=3.14*r*r;
 cout<<" the area of the circle is  "<<circle;
}

if(geometric_figure =="triangle")
{
 float triangle,b,h;
 cout<<"enter the height";
 cin>>h;
 cout<<"enter the base";
 cin>>b;
 triangle=0.5*b*h;
 cout<<" the area of the trangle is  "<<triangle;
 }
}