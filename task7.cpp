#include <iostream>
using namespace std;
main()
    {
      float discount , price;  
      int stays;
      cout<<"enter the no of stays";
      cin>>stays;
      string room , month;
      cout<<"enter the month";
      cin>>month;
      cout<<"enter the room category";
      cin>>room;
      if (room =="studio")
      {
          if(month=="may" || month=="october")
          {
             if(stays > 7 && stays<14)
             {
               price = 50 * stays;  
               discount = price * 0.05;
               discount = price- discount;
               cout<<"the month is.."<<month<<endl;
               cout<<"the stays are.."<<stays<<endl;
               cout<<"the price after the discount"<<discount; 
                 
             }
             else if (stays >14)
             {
               price = 50 * stays;  
               discount = price * 0.30;
               discount = price- discount;
               cout<<"the month is.."<<month<<endl;
               cout<<"the stays are.."<<stays<<endl;
               cout<<"the price after the discount"<<discount; 
                 
             }
             else if (stays < 7)
             {
               price = 50 * stays;
               cout<<"the month is.."<<month<<endl;
               cout<<"the stays are.."<<stays<<endl;
               cout<<"the price without the discount"<<price;

             }
          }

          else if ( month =="june" || month=="september")
           {
               if (stays > 14)
                {
                      price = 75 * stays;  
                      discount = price * 0.20;
                      discount = price- discount;
                      cout<<"the month is.."<<month<<endl;
                      cout<<"the stays are.."<<stays<<endl;
                      cout<<"the price after the discount"<<discount; 
                }

                else if (stays < 14)
                {
                     price = 75 * stays;
                     cout<<"the month is.."<<month<<endl;
                     cout<<"the stays are.."<<stays<<endl;
                     cout<<"the price without the discount"<<price;
  
                }
                    
                
            }       

            else if (month =="july" || month=="august")
                  {
                       price = 76 * stays;
                       cout<<"the month is.."<<month<<endl;
                       cout<<"the stays are.."<<stays<<endl;
                       cout<<"the price without the discount"<<price;
    
                  }   

       }   
       else if (room =="appartment")
            {
                if ( stays > 14 && (month=="may" || month=="october" ))
                {
                      price = 65 * stays;  
                      discount = price * 0.10;
                      discount = price- discount;
                      cout<<"the month is.."<<month<<endl;
                      cout<<"the stays are.."<<stays<<endl;
                      cout<<"the price after the discount"<<discount;

                }
                else  if ( stays > 14 && (month=="june" || month=="september" ))
                {
                      price = 68 * stays;  
                      discount = price * 0.10;
                      discount = price- discount;
                      cout<<"the month is.."<<month<<endl;
                      cout<<"the stays are.."<<stays<<endl;
                      cout<<"the price after the discount"<<discount;

                }
                else if ( stays > 14 && (month=="july" || month=="august" ))
                {
                      price = 77 * stays;  
                      discount = price * 0.10;
                      discount = price- discount;
                      cout<<"the month is.."<<month<<endl;
                      cout<<"the stays are.."<<stays<<endl;
                      cout<<"the price after the discount"<<discount;

                }
                 else if ( stays < 14 && (month =="july" || month=="august"))
                  {
                       price = 77 * stays;
                       cout<<"the month is.."<<month<<endl;
                       cout<<"the stays are.."<<stays<<endl;
                       cout<<"the price without the discount"<<price;
    
                  } 
                  else if (stays< 14 && (month =="may" || month=="october"))
                  {
                       price = 65 * stays;
                       cout<<"the month is.."<<month<<endl;
                       cout<<"the stays are.."<<stays<<endl;
                       cout<<"the price without the discount"<<price;
    
                  }  
                   else if (stays <14 && (month =="june" || month=="september"))
                  {
                       price = 68 * stays;
                       cout<<"the month is.."<<month<<endl;
                       cout<<"the stays are.."<<stays<<endl;
                       cout<<"the price without the discount"<<price;
    
                  }   
 
   

            }
    }
