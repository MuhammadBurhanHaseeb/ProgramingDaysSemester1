#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
char AlphabetA[27];
string codeea[30];
int countt=0;
int count =0;

string store_morse(string line,int field);
void store_alphabet(char a);
main(){
    fstream file;
    string line;
    file.open("MORSE.txt",ios::in);
    while(!file.eof()){
        getline(file,line);

        for(int i =0 ;line[i]!='\0'; i++){
            store_alphabet(line[i]);
            break;
        }
        codeea[countt] =  store_morse(line,2);
        countt = countt +1;
    }
    file.close();

     cout<<"Enter NAME..";
     string name;
     getline(cin,name);

   /* for(int o=0;o<count;o++){
         cout<<AlphabetA[o];
         getch();
     }  */
  for(int j=0; name[j]!='\0'; j++){
    //   cout<<name[j];
     //  getch();
      for(int y=0; y<count; y++){
      //    cout<<AlphabetA[y];
       //   getch();
          if(name[j] == AlphabetA[y]){
              cout<<codeea[y];
          }
      }
  }

}
void store_alphabet(char a){
    //cout<<"charac"<<""<<a;
  //   getch();
  AlphabetA[count] = a;
  count++;
}
string store_morse(string line,int field){
    int comma =1;
  //  cout<<field;
    string item;

    for(int i =0; line[i]!='\0';i++){
        if(line[i]==','){
            comma++;
        }
        else if(comma == field){
          //  cout<<item;
           // getch();
            item = item + line[i];
        }
    }
  //  cout<<"item"<<" "<<item;
   // getch();

    return item;
}