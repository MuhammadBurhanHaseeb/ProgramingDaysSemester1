# include <iostream>
#include<cmath>

using namespace std;

double volumep(float length , float width , float height , string unit);

main()
{
    double length , width, height,volume ;
    string unit;
    cout<<"enter the unit in string";
    cin>>unit;
    cout<<"enter the value of length in meters";
    cin>>length;
     cout<<"enter the value of width in meters";
    cin>>width;
     cout<<"enter the value of height in meters";
    cin>>height;
    volume = volumep(length , width , height , unit);
    cout<<volume<<" cubic "<<unit<<endl;
}
double volumep(float length , float width , float height , string unit)
{
    double volume = (length * width * height)/3;
    if (unit == "mm")
    {
         double convert = volume *pow(1000,3);
         return convert;
    }
    else  if (unit == "cm")
    {
         double convert = volume *pow(100,3);
         return convert;
    }
    else  if (unit == "km")
    {
        double convert = volume * pow(0.001,3);
         return convert;
    }
 }





