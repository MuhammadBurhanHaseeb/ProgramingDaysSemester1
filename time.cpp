# include <iostream>
using namespace std;
main()
{
    float hour1 , hour2, min1 , min2 , exammint , arrivemint,differ ;
    int beforh , beform , afterh , afterm ;
    cout<<"enter the start exam time  hour"<<endl;
    cin>>hour1;
    cout<<"enter the star exam  min"<<endl;
    cin>>min1;
    cout<<"enter hour of arrival "<<endl;
    cin>>hour2;
    cout<<"enter the arrival of min "<<endl;

    cin>>min2;
    // to convert the hours of arrive and exam into minutes
    exammint = (hour1 * 60) + min1;
    arrivemint = (hour2 * 60) + min2;
    if (exammint > arrivemint)
    {
    // difference between the exammint and arrivemint
     differ =   exammint- arrivemint;
       
          if (differ > 30 )
          {
           cout<<" student reach on early";
          }
           else
           { 
           cout<<"student reach on time "; 
          }
        if (differ >= 60 )
        {
            beforh = differ/60;
            // agr 60 se bara ho ga difference tu us ko ghante mai krne ke liye 60 se divide kiya hai or int ke variable mai store kraya hai
            beform = beforh * 60 ;
            beform = differ - beform;
            // min nikalne ke liye int mai store hours ko 60 se multiply kia hai or phir difference mai se minus kr diya hai
            cout<<"the student reach before "<<beforh<< ":"<<beform; 
        }
          if (differ < 60)
        
            cout<<"the student reach before 00:"<<differ<<"  mins";  
      }
      else if  (exammint < arrivemint)
      {
          differ = arrivemint - exammint;
          if (differ >= 60)
          {
              afterh = differ / 60;
              //  the student arive after the 60 min exam start then divi by 60 and store in new int variable to remove the point value
              afterm = afterh * 60 ;
              afterm = differ - afterm ;
              // calculate the difference in the min after the exam start 
              cout<<"the student reach "<<afterh<<":"<<afterm<<" later the exam start";  
          }
          else if (differ < 60)
          {
              cout<<"the student reach after the 00:"<<differ<<"  mins";
          }

      }


}