#include <iostream>
using namespace std;
main()
{
    string month ;
    cout<<"enter the month ";
    cin>>month;
    float prices ,stay , discounts ,pricea ,discounta ;
    cout<<"enter the no of stays";
    cin>>stay;
    
           if (month=="may" || month== "october")
                 {
                     if (stay >7 && stay<14)
                     {
                     pricea = 65 *stay;    
                     prices = 50 * stay;
                     discounts =prices * 0.50;
                     cout<<" the month is .."<<month<<endl;
                     cout<< "studio : "<<discounts<<endl;
                     cout<<"apartment:"<<pricea<<endl;
                     }
                     else if (stay< 14)
                     {
                         prices = 50 * stay;
                         pricea = 65 *stay;  
                         cout<<" the month is .."<<month<<endl;  
                         cout<<"apartment:"<<pricea<<endl;
                         cout<<"studio:"<<prices<<endl;
                     }
                     else if (stay>14)
                        {  
                         prices = 50 * stay;
                         pricea = 65 *stay;
                         discounts = prices * 0.30;
                         discounts = prices - discounts;
                         discounta = pricea * 0.10;
                         discounts = pricea - discounta ;
                         cout<<" the month is .."<<month<<endl;  
                         cout<<"apartment:"<<discounta<<endl;
                         cout<<"studio:"<<discounts<<endl;
                        }
                      

                 }
                   else if (month == "june" || month =="september")
                         {
                             if (stay >14)
                              {
                                  prices = stay * 75 ;
                                  discounts = prices * 0.20;
                                  discounts = prices - discounts ;
                                  pricea = stay * 68 ;
                                  discounta = pricea * 0.10 ;
                                  discounta = pricea - discounta ;
                                  cout<<" the month is .."<<month<<endl;  
                                  cout<<"apartment:"<<discounta<<endl;
                                  cout<<"studio:"<<discounts<<endl;
                              }
                              else if (stay <14)
                              {
                                    prices = 75 * stay;
                                    pricea = 68 *stay;  
                                    cout<<" the month is .."<<month<<endl;  
                                    cout<<"apartment:"<<pricea<<endl;
                                    cout<<"studio:"<<prices<<endl;
                              }

                         }
                      else if (month =="july" || month == "august")
                              {
                                  if (stay > 14 )
                                  {
                                  prices = stay * 76;
                                  pricea = stay * 77 ;
                                  discounta = pricea * 0.10 ;
                                  discounta = pricea - discounta ;
                                  cout<<" the month is .."<<month<<endl;  
                                  cout<<"apartment:"<<discounta<<endl;
                                  cout<<"studio:"<<prices<<endl;
                                  }
                                  else if (stay <14 )
                                  {
                                  prices = stay * 76;
                                  pricea = stay * 77;
                                  cout<<" the month is .."<<month<<endl;  
                                  cout<<"apartment:"<<pricea<<endl;
                                  cout<<"studio:"<<prices<<endl;

                                  }
                              }   

       
}