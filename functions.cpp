#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void factorial(){
            int num ,  fact=1;
            cout<<"Enter the number :"<<endl;
            cin>>num;
            for(int i = 1 ; i<=num ; i++){
            fact = fact * i;
        }
        cout<<fact<<endl;
}
void pattern(){
    for(int i =1; i <=5 ; i++){
        for(int j = 1 ; j <= i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
 
}

int main(){

    int n;
    char yn;
    do{
        cout<<"Enter 1 for factorial\n2 for Pattern "<<endl;
        cin>>n;
    switch(n){
        case 1 :
            factorial();
            break;
        case 2 :
            pattern();
            break;           
          }
          cout<<"Press c to continue . "<<endl;
        cin>>yn;
    }while(yn=='c');
    
    return 0;
}