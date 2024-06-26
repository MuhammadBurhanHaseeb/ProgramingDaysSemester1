#include <iostream>
using namespace std;
main()
{
    char service ;
    float mins , extra_mins , charge , total_charge ;
    cout<<"enter the service category";
    cin>>service;
    cout<<"enter the used mins ";
    cin>>mins;
    if(service=='r' )
     {
         if(mins<=50)
       {
             cout<<" free calls";
         }
         else if(mins>50)
         {
            extra_mins = mins -50;
            charge = extra_mins * 0.20;
            total_charge = 10 + charge;
            cout<<" the extra mins charge"<<total_charge;
         }   
     }
    else if( service=='p')
    {
        char day;
        if(day =='d')
        {
            if (mins <= 75)
            {
                cout<<" call free charge";
            }
             else if( mins > 75)
             {
                 extra_mins = mins - 75 ;
                 charge = extra_mins * 0.10 ;
                 total_charge = 25 + charge;
                 cout<<" the extra mins cahrge at night "<<total_charge;
              }

        }
        else if (day=='n')
        {
            if ( mins <= 100 )
            {
                cout<<" call charge free ";
            }
            else if (mins > 100 )
            {
                extra_mins = mins - 100;
                charge = extra_mins * 0.05;
                total_charge=charge + 25;
                cout<<" the extra mins charge at night"<<total_charge;
            }
        }

    }
       
       
    
}