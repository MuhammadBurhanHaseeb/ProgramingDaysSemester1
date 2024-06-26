#include <iostream>
using namespace std;
main()
{
 float redRose, redRoseP, whiteRose, whiteRoseP , tulips, tulipsP,totalPriceF,discount=0,payablePrice;
 cout<<" enter the no of red rose..";
 cin>>redRose;
 cout<<" enter the no white rose..";
 cin>>whiteRose;
 cout<<" enter the no tulips";
 cin>>tulips;
 redRoseP=redRose*2.00;
 whiteRoseP=whiteRose*4.10;
 tulipsP=tulips*2.50;
 totalPriceF=whiteRoseP + redRoseP + tulipsP;
 if(totalPriceF>200.0)
 {
   discount=(totalPriceF*20.0)/100.0;
   }
 payablePrice=totalPriceF - discount;
 cout<<" orignal price.."<<totalPriceF;
 cout<<" after discount price"<<payablePrice;
}