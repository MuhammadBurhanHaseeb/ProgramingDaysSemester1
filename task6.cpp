/* 

the price of fruits on the weekend is higher then the price on the simple days
*/




#include <iostream>
using namespace std;
main()
{
    string fruit , day;
    float quantity , price;
    cout<<"enter the quantity of the fruit ";
    cin>>quantity;
    cout<<"enter the day";
    cin>>day;
    cout<<"enter the name of the fruit";
    cin>>fruit;
    if( day!="sunday")
     {
         if (fruit == "banana")
            {
                price= quantity * 2.50;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl;
                cout<<" the price of banana"<<price;
            }
        else if (fruit =="apple")
            {
                price= quantity * 1.20;
                cout<<" the day is.."<<day<<endl;    
                cout<<"the quantity of the fruit"<<quantity<<endl;    
                cout<<"the price of the apple"<<price;
            }
         else if (fruit =="orange")
            {
                price= quantity * 0.85 ;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl;        
                cout<<"the price of the apple"<<price;
            }
        else if (fruit =="grapefruit")
            {
                price= quantity * 1.45;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl; 
                cout<<"the price of the apple"<<price;
            }
        else if (fruit =="kiwi")
            {
                price= quantity * 2.70;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl;
                cout<<"the price of the apple"<<price;
            }
        else if (fruit =="pineapple")
            {
                price= quantity * 5.50;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl; 
                cout<<"the price of the apple"<<price;
            }
        else if (fruit =="grapes")
            {
                price= quantity * 3.85;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl; 
                cout<<"the price of the apple"<<price;
            }  
         else
         {
             cout<<"the fruit in invalid";
         }                    
     }

     else if (day=="sunday")
    {
         if (fruit == "banana")
            {
                price= quantity * 2.70;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl; 
                cout<<" the price of banana"<<price;
            }
        else if (fruit =="apple")
            {
                price= quantity * 1.25;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl; 
                cout<<"the price of the apple"<<price;
            }
         else if (fruit =="orange")
            {
                price= quantity * 0.90 ;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl; 
                cout<<"the price of the apple"<<price;
            }
        else if (fruit =="grapefruit")
            {
                price= quantity * 1.60;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl; 
                cout<<"the price of the apple"<<price;
            }
        else if (fruit =="kiwi")
            {
                price= quantity * 3.00;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl; 
                cout<<"the price of the apple"<<price;
            }
        else if (fruit =="pineapple")
            {
                price= quantity * 5.60;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl; 
                cout<<"the price of the apple"<<price<<endl;
            }
        else if (fruit =="grapes")
            {
                price= quantity * 4.20;
                cout<<" the day is.."<<day<<endl;
                cout<<"the quantity of the fruit"<<quantity<<endl; 
                cout<<"the price of the apple"<<price<<endl;
            }  
         else
         {
             cout<<"the fruit in invalid";
         } 
    }          
}