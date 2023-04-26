#include<iostream>
using namespace std;
class add{

    int a , b;
    public :
        add(){
            a = 0 ; 
            b = 0;
        }
        add(int c , int d){
            a = c ;
            b = d ;
        }
        void addObjects(add a1 , add a2){
            a = a1.a + a2.a ;
            b = a1.b + a2.b ;
            cout<<a<<"\t"<<b ; 
        }
};
int main()
{
 add ad1(5 , 4) ;
 add ad2(4 , 5) ;
 add ad3 ; 
 ad3.addObjects(ad1 , ad2);
 return 0;
}


