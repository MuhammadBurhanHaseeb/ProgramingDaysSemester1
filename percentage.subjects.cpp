#include <iostream>
using namespace std;
main()
{
   string studentname;

   cout<<"name of the student";

   cin>>studentname;

   float subj_1_marks,subj_2_marks,subj_3_marks,subj_4_marks,subj_5_marks,total_obtained_subj_marks,total_marks,percentage;

   cout<<"enter the subject 1 marks..";

   cin>>subj_1_marks;

   cout<<"enter the subject 2 marks..";

   cin>>subj_2_marks;

   cout<<"enter the subject 3 marks..";

   cin>>subj_3_marks;

   cout<<"enter the subject 4 marks..";

   cin>>subj_4_marks;

   cout<<"enter the subject 5 marks..";

   cin>>subj_5_marks;

   total_obtained_subj_marks= subj_1_marks+ subj_2_marks+ subj_3_marks+ subj_4_marks+ subj_5_marks;
   
   cout<<"total no of marks in subjects="<<total_obtained_subj_marks<<endl;
   
   cout<<"total no of subjects marks..";

   cin>>total_marks;
   
   percentage=total_obtained_subj_marks/total_marks*100;
  
   cout<< "percentage of total marks"<<percentage;

 }