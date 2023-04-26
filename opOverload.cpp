#include<iostream>
using namespace std;
class add{
    int a ;
    public :
    add(int i = 0){
        a = i ;
    }
    add operator + (add b){
        add c ;
        c.a = a + b.a;
        return c ; 
    }
    void display(){
        cout<<a ;
    }
};  
int main()
{
 add a1(5),a2(1),a3;
 a3 = a1 + a2 ;
 a3.display() ;
 return 0;
}