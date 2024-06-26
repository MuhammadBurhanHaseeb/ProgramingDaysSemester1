#include<iostream>
using namespace std;
main()
{
 string name;
 cout<<"movie name";
 cin>>name;
 int adult_price , child_price , adult_ticket_sold , child_ticket_sold , adult_sold_price , child_sold_price , total_amount , percentage , profit,a;
cout<<"adult ticket price";
cin>>adult_price;
cout<<"child ticket price";
cin>>child_price;
cout<<"no of adult ticket sold";
cin>>adult_ticket_sold;
cout<<"no of child ticket sold";
cin>>child_ticket_sold;
adult_sold_price=adult_price * adult_ticket_sold;
child_sold_price=child_price * child_ticket_sold;
total_amount=adult_sold_price+child_sold_price;
cout<<" total amount "<<total_amount<<endl;
cout<<"percentage";
cin>>percentage;
a=percentage*total_amount/100;
profit=total_amount-a;
cout<<"total profit after donating"<<profit;
 }