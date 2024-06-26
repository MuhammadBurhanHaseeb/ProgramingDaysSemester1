#include <iostream>
#include <fstream>
using namespace std;
string line;
string nameA[10];
int ageA[10];
int count =0;
string storearray(string Rline,int field);
void gethappybirthday(string name, int age);
void loaddata();
main(){
    loaddata();

}
void loaddata(){

    fstream file;
    file.open("names.txt",ios::in);
    while(!file.eof()){
    getline(file,line);

   nameA[count] =  storearray(line,1);
   ageA[count] = stoi(storearray(line,2));
  

   gethappybirthday(nameA[count], ageA[count]);
    count++;
    
    }
    file.close();
}
string storearray(string Rline,int field){
    int comma =1;
    string item;
    
    for(int x=0; x<Rline.length();x++){
        if(Rline[x]==','){
            comma++;
        }
        else if(comma == field){
            item = item + Rline[x];
        }
    }
    return item;

}
void gethappybirthday(string name, int age){
    if(age %2 ==0){
        cout<<"###############"<<endl;
        cout<<"#"<<" "<<age<<" "<<"HB"<<" "<<name<<" "<<"!"<<" "<<age<<" "<<"#"<<endl;
        cout<<"###############"<<endl;
    }
    else if (age %2 !=0){
        cout<<"***************"<<endl;
        cout<<"*"<<" "<<age<<" "<<"HB"<<" "<<name<<" "<<"!"<<" "<<age<<" "<<"*"<<endl;
         cout<<"***************"<<endl;

    }
}