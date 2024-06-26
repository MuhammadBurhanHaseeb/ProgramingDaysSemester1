#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int count;
void checkalphabets(string line);
main(){
    fstream file;
    string line;
    file.open("alphabets.txt",ios::in);
    while(!file.eof()){
        getline(file,line);

        checkalphabets(line);

    }
    file.close();
}
void checkalphabets(string line){
    int L= line.length();
    cout<<endl;
   for(char i='a'; i<='z';i++){

       for(int j=0;line[j]!='\0';j++){
           if(i == line[j]){
               count =0;
               break;
           }
           else{
               count++;
           }
       }
       if(count == L)
       {
            fstream f;
            f.open("alphabets.txt",ios::app);
              f<<i;
              f.close();
              count =0;
             //  getch();
       }
   }
}