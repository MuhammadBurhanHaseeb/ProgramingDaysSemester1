# include <iostream>
# include <cmath>
using namespace std;
bool isleap(int year);
main()
{
    int year , result ;
    cout<<"enter the year";
    cin>>year;
    result =isleap( year);
    cout<<result;

}
bool isleap(int year)
{
    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
    {
        return  1;
    }
      if (year % 4 == 0 && year % 100 != 0 )
    {
        return  1;
    }
      if (year % 4 != 0 )
    {
        return  0;
    }
      if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
    {
        return  0;
    }

    
}

