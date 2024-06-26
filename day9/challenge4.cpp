#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
int count =0,count2=0;
using namespace std;
void seperate(string line);
void  whererun(int id,string line,int id2);
int checkalphabet(char a);
void seperate2(string line);
int id,id2;
int b =2;
int num,length;
main(){
    string line;
    fstream file;
    file.open("data.txt",ios::in);
     while(!file.eof()){

        getline(file,line);
        length = line.length();
     
        seperate(line);
        seperate2(line);
        whererun(id,line,id2);
        break;
    }
    file.close();
    if(count2 == length){

        cout<<"What why did you make this.";
    }
}
void seperate(string line){
    for(int j=0;line[j]!='\0';j++){
    
         num =checkalphabet(line[j]);
         if(num == 1){
          id =j;
      //   cout<<"this"<<id;
     //    getch();
          break;
        }
        else if(num == 2){
          //  cout<<"hi";
            continue;
        }
        
    
    }
}
void seperate2(string line){
   for(int i=length; i>0;i--){
        //cout<<line[i];
      //  getch();
       if(b ==2){
             count2 =0;
             b++;
         }
         num =checkalphabet(line[i]);
         if(num == 1){
          id2 =i;
          break;
        }
        else if(num == 2){
           // cout<<"hi";
            continue;
        }
   }
}
int checkalphabet(char a){
   // cout<<a;
     for(char b='a'; b<= 'z';b++){
      //   cout<<b<<" ";
       if(a == b){
           int y = 1;
           count =0;
           return y;
    
       }
       else{
       count++;
     }
     }
    if(count == 26){
        count2++;
           int p=2;
           count =0;
           return p;
       }
     }
void  whererun(int id,string line,int id2){
    for(int j=id; j<=id2; j++){
      cout<<line[j];
    }
}