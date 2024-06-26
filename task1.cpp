# include <iostream>
using namespace std;
main()
{
    string temperature , humidity ;
    cout<<"enter the temperature";
    cin>>temperature;
    cout<<"enter the humidity";
    cin>>humidity;
    if (temperature == "warm" && humidity=="dry")
       {
          cout<<" you play tennis"; 
       }
    else if (temperature == "warm" && humidity == "humid")
       {
           cout<<"you can swim";
       } 
    else if (temperature =="cold" && humidity =="dry")
       {
           cout<<"you play basket ball  ";
       } 
    else if (temperature == "cold" && humidity =="humid")
       {
           cout<<"you can wathch the tv ";
       }
}