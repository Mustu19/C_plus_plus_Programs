#include<string.h>
#include<iostream>
using namespace std;
class string1{
    char *name ;
    int length ;
    public :
        string1(){
            length = 0 ;
            name = new char[length+1] ;
        }
        string1(char *n){
            length = strlen(n) ;
            name = new char[length+1] ;
            strcpy(name , n) ;
        }
        void join(string1 &s1 , string1 &s2){
            length = s1.length + s2.length ; ;
            delete name ;
            name = new char[length+1] ;
            strcpy(name , s1.name) ;
            strcat(name , s2.name);
        }
        void display(){
            cout<<"Merged String is "<<name ;
        }
};
int main()
{
 char *n = "Mustafa" ;
 string1 s1(n) , s2(" Kapasi") , s3 ;
 s3.join(s1 , s2) ;
 s3.display() ;
 return 0;
}