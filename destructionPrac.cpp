#include<iostream>
using namespace std;
int count = 0 ;
class name{


    public :
    name(){
        count++ ;
        cout<<"Hello world\t"<<count<<endl ;
    }
    ~name(){
        
       
        cout<<"Destructor called\t"<<count<<endl ;
         count--;
    }
};
int main()
{
 
 name n1 , n2 , n3 ;

 return 0;
}