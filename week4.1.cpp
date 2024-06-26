#include <iostream>
using namespace std;
main()
{
 float price,discount,finalPrice;
 string country;
 cout<<" enter the name of country";
 cin>>country;
 
 cout<<" enter the price of country ticket";
 cin>>price;
 if(country=="ireland")
{
 discount=(price*10)/100;
 finalPrice=price - discount;
 cout<<" after the discount the final price is .."<<finalPrice;
}
else
{
 discount=(price*5)/100;
 finalPrice=price - discount;
 cout<<" after the discount the final price will be...."<<finalPrice;
}
}