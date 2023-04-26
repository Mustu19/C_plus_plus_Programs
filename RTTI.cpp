// #include<iostream>
// #include<typeinfo>
// using namespace std;
// class Baseclass
// {
//  virtual void f(){}
// };
// class Derived1:public Baseclass
// {
// };
// class Derived2:public Baseclass
// {
// };
// int main()
// {
//   int i;
//   Baseclass *p,baseob;
//   Derived1 ob1;
//   Derived2 ob2;
//   p=&baseob;
//   cout<<typeid(*p).name()<<endl;
//   p=&ob1;;
//   cout<<typeid(*p).name()<<endl;
//   p=&ob2;;
//   cout<<typeid(*p).name()<<endl;

// }


#include<iostream>
#include<string.h>
using namespace std;
namespace first{
    int val =  45 ;
}
namespace second{
    int val = 66 ;
}
 void print(char *s)
 {
 cout<<s<<endl;
 }

 class book{
    mutable int i ;
    public:
        void seti(int x) const{
            i = x ;
        }
        int geti() const{
            return i;
        }
 };
 int main()
 {

        book b;
        b.seti(34);
        cout<<b.geti();
//    const char *c="hello";
//    print(const_cast<char*>(c));

//    char *str = "Mustafa kapasi" ;
//    int i = reinterpret_cast<int>(str);
//    cout<<i;

//    cout<<first::val<<" "<<second::val;
      return 0;
 }
