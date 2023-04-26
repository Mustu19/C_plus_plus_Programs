#include<iostream>
#include<cstring>
using namespace std;
class animal{

    char name[15];
    int speed;

    public:
        animal(){
            cout<<"\nEnter animal name and speed : ";
            cin>>name>>speed;
        }
        animal(char n[] , int s){
            strcpy(name , n);
            speed = s ;
        }
        void display(){
            cout<<endl<<name<<" speed is "<<speed;
        }
        void operator <=(animal ob){
            if(speed < ob.speed){
                cout<<endl<<ob.name<<" has greater speed"<<endl;
            }
            else{
                cout<<endl<<name<<" has greater speed"<<endl;
            }
        }
        void operator ++(){     // prefix overloading
            speed++ ;
        }
        void operator ++(int l){  // postfix overloading
            speed++ ;
        }
};
int main()
{
    animal a1 , a2("Dog" , 60);
    a1.display();
    a2.display();
    a1<=a2;
    a1++; // postfix
    ++a2 ;  // prefix

    a1.display();
    a2.display();

    return 0;
}