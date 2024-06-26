#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int days,patients,treated=0,untreated=0,doctors=7;
    cout<<"enter the no of days"<<endl;
    cin>>days;
    for (int x=1 ; x<=days ; x++)
    {
        cout<<"enter the no of patients in "<<x<<" days";
        cin>>patients;
        if ((x % 3 ==0) && ((untreated - treated) > 0) )
        {
            doctors = doctors + 1;
        }
        if (patients > doctors)
        {
            treated = treated + doctors ; 
            untreated = untreated + (patients - doctors);

        }
        else
        {
            treated = treated + patients ; 
        }
        cout<<"iteration:"<<x<<endl;
        cout<<"doctors:"<<doctors<<endl;
        cout<<"treated:"<<treated<<endl;
        cout<<"untreated:"<<untreated<<endl;

    }
        cout<<"doctors:"<<doctors<<endl;
        cout<<"treated:"<<treated<<endl;
        cout<<"untreated:"<<untreated<<endl;
}