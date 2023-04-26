#include<iostream>
using namespace std;

class time{

    int h , m ;
    public:
    time(){
        h = 0 ;
        m = 0 ;
    }
    time(int a , int b){
        a = h ;
        b = m ;
    }
    time addTime(time);

};
time time:: addTime(time f){
    time f1 ;
    cout<<h<<"  "<<m<<"  "<<f.h<<"  "<<f.m<<"  "<<f1.h<<"  "<<f1.m ;
    return f1;

}


int main()
{
 
 time t1(4, 35) , t2(9 , 25) , t3 ;
 t3 = t1.addTime(t2);
 return 0;
}