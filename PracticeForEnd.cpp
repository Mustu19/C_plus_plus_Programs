#include<iostream>
using namespace std;
template <class t>
class test{
    public:
        test(){
            cout<<"Mustu" ;
        }
};
template<>
class test<int>{
    public:
        test(){
            cout<<"Ali" ;
        }
};
int main()
{
    test<int> t;
    test<float> t1 ;
    return 0;
}