#include<iostream>
using namespace std;
class time{

    int h , m , s;
    public :
        time(){
            h = 0 ; 
            m = 0;
            s = 0 ;
        }
        time(int hour , int minu , int sec){
            h = hour ;
            m = minu ;
            s = sec ;
        }
        void addObjects(time a1 , time a2){
            int thour = a1.h + a2.h ;
            int tminutes = a1.m + a2.m ;
            int tseconds = a1.s + a2.s  ;
            if(tseconds >=60){
                tseconds = tseconds - 60 ;
                tminutes++ ;
                if(tminutes >=60){
                    tminutes = tminutes - 60 ;
                    thour++ ;
                }
            }
            else{
                if(tminutes >=60){
                    tminutes = tminutes - 60 ;
                    thour++ ;
                }
            }
            cout<<thour<<" "<<tminutes<<" "<<tseconds ;
        }
};
int main()
{
    int h , m , s;
    cout<<"Enter hours, minutes and seconds for Time 1 : " ;
    cin>>h>>m>>s ;
    time t1(h , m , s) ;
    cout<<"Enter hours, minutes and seconds for Time 2 : " ;
    cin>>h>>m>>s ;
    time t2(h , m , s) ;
    time t3;
    t3.addObjects(t1 , t2);
 return 0;
}


