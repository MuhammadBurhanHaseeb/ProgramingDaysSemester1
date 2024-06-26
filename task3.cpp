/*
user input the marks of five subjects and then calculate the the marks and the total marks is 500 then calcultae
percentage and then calculate the result as grades with help of if statements
*/


#include <iostream>
using namespace std;
main()
{
    string name;
    float s1m , s2m , s3m , s4m , s5m , total_O_m , total_marks , percentage ;
    cout<< " enter the name of the student";
    cin>>name;
    cout<<"enter the marks of s1m ";
    cin>>s1m;
    cout<<"enter the marks of s2m ";
    cin>>s2m;
    cout<<"enter the marks of s3m ";
    cin>>s3m;
    cout<<"enter the marks of s4m ";
    cin>>s4m;
    cout<<"enter the marks of s5m ";
    cin>>s5m;
    total_O_m = s1m + s2m + s3m + s4m + s5m ;
    cout<<" enter the total marks of 5 subjects";
    cin>>total_marks;
    percentage = ( total_O_m/total_marks )* 100;
    if(percentage >=91 && percentage<=100)
       {
           cout<<"the name of the student"<<name<<endl;
           cout<<"the total marks of the student is .."<<total_O_m<<endl;
           cout<<" the percentage of the student obtained marks is .."<<percentage<<endl;
           cout<<" the grade of your marks is .. A+";
       }
    else if(percentage >=81 && percentage<=90)
       {
           cout<<"the name of the student"<<name<<endl;
           cout<<"the total marks of the student is .."<<total_O_m<<endl;
           cout<<" the percentage of the student obtained marks is .."<<percentage<<endl;
           cout<<" the grade of your marks is .. A";
       }
     else if(percentage >=71 && percentage<=80)
       {
           cout<<"the name of the student"<<name<<endl;
           cout<<"the total marks of the student is .."<<total_O_m<<endl;
           cout<<" the percentage of the student obtained marks is .."<<percentage<<endl;
           cout<<" the grade of your marks is .. b+";
       } 
    else if(percentage >=61 && percentage<=70)
       {
           cout<<"the name of the student"<<name<<endl;
           cout<<"the total marks of the student is .."<<total_O_m<<endl;
           cout<<" the percentage of the student obtained marks is .."<<percentage<<endl;
           cout<<" the grade of your marks is .. b";
       }  
    else if(percentage >=51 && percentage<=60)
       {
           cout<<"the name of the student"<<name<<endl;
           cout<<"the total marks of the student is .."<<total_O_m<<endl;
           cout<<" the percentage of the student obtained marks is .."<<percentage<<endl;
           cout<<" the grade of your marks is .. c";
       }        
    else if(percentage >=41 && percentage<=50)
       {
           cout<<"the name of the student"<<name<<endl;
           cout<<"the total marks of the student is .."<<total_O_m<<endl;
           cout<<" the percentage of the student obtained marks is .."<<percentage<<endl;
           cout<<" the grade of your marks is .. D";
       }   
    else if(percentage <=40)
       {
           cout<<"the name of the student"<<name<<endl;
           cout<<"the total marks of the student is .."<<total_O_m<<endl;
           cout<<" the percentage of the student obtained marks is .."<<percentage;
           cout<<" the grade of your marks is .. F";
       }    
}
   
 
                               
              

       



