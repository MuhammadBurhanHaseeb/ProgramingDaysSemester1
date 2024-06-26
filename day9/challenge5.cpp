#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
fstream newfile;
string line;
string name , orderString , priceString;
void readout(int min_order , int min_price);
string B(string priceString);
void pizzaPoints(int orderr , int price);
string delspace(string abc, int num);
string check(string abc, int num);

main()
{

    cout << "Enter minimum price : ";
    int price;
    cin>>price;
    cout << "Enter minimum order : ";
     int order;
    cin>> order;
    readout(order,price);
}
void readout(int min_order , int min_price)
{
    newfile.open("Customer.txt" , ios::in);
    while(!newfile.eof())
    {
        getline(newfile,line);
        name = delspace(line , 0);
        orderString = delspace(line , 1);
        priceString = delspace(line,2);
        priceString = B(priceString);
        pizzaPoints(min_order ,min_price);
    }
    newfile.close();
}
string B(string priceString)
{
    string price;
    int x  = sizeof(priceString);
    for(int i = 0 ; i < x ; i++)
    {
        if(priceString[i]=='['||priceString[i]==']')
        {
            priceString[i]=0;
        }
    }
    for(int i = 0 ; i < x; i++)
    {
        if(priceString[i]!=0)
        {
            price=price+priceString[i];
        }
    }
    return price;
}
string delspace(string abc, int num)
{
   int commaCount = 0;
   string item;
   for(int y=0 ; y<abc.length() ; y++)
   {
      if(abc[y] == ' ')
      {
          commaCount = commaCount + 1;
      }
      else if(commaCount == num)
      {
          item = item + abc[y];
      }
   }
   return item;
}
void pizzaPoints(int orderr , int pricee)
{
    int order;
    int price;
    int h = 0;
    stringstream any(orderString);
    any >> order;
    if(order >= orderr)
    {
        for(int i =0 ; i < order ; i++)
        {
            stringstream abs(check(priceString,i));
            abs >> price;
            if(price < price)
            {
                h++;
            }
        }
        if(h == 0)
        {
            cout<<name<< endl;
        }
    }
}
string check(string abc, int num)
{
   int commaCount = 0;
   string item;
   for(int y=0 ; y<abc.length() ; y++)
   {
      if(abc[y] == ',')
      {
          commaCount = commaCount + 1;
      }
      else if(commaCount == num)
      {
          item = item + abc[y];
      }
   }
   return item;
}
