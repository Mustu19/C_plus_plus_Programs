#include<iostream>
using namespace std;

class vector{

    int x ,  y ;
    public:
    vector(){
        x = 0 ;
        y = 0;
    }
    vector(int a , int b){
        a = x ;
        b = y ;
    }
    void vectorAdd(vector v1 , vector v2){
        cout<<"X coordinate :"<<v1.x + v2.x;
        cout<<"Y coordinate :"<<v1.y + v2.y;
    }
};


int main()
{
 vector ve1(2, 3) , ve2(3 , 2);
 ve1.vectorAdd(ve1 , ve2);
 return 0;
}