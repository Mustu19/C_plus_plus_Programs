#include<iostream>
using namespace std;
int main(){

    int a , b;
    char yn;
    do{
        cout<<("Enter 2 numbers for multiplication : ");
        cin>> a >> b;
        cout<<endl;
        cout<<"Your multiplication answer is "<<(a*b) << endl;
        cout<<"Press m to continue again."<<endl;
        cin>>yn;
    }while(yn=='m');
    

    return 0;
}