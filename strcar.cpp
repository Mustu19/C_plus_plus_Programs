#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
// class samp{
//     char *p;
//     public:
//         samp(){
//             p = nullptr;
//         }
//         samp(char *s){
//             int l ;
//             l = strlen(s);
//             p = new char[l+1];
//             strcpy(p,s);
//         }
//         samp(const samp &o){
//             cout<<"\nCopy invoked"<<endl;
//             int l;
//             l = strlen(o.p);
//             p = new char[l+1];
//             strcpy(p , o.p);
//         }
//         samp concate(samp o){
//             cout<<"\nFunction inside"<<endl;
//             samp s;
//             int l;
//             l = strlen(p) + strlen(o.p);
//             s.p = new char[l+1];
//             strcpy(s.p , p);
//             strcat(s.p , o.p) ;
//             return s;
//         }
//         ~samp(){
//             cout<<"\nDestructor invoked"<<endl;
//             delete [] p;
//         }
// };
// int main()
// {
//  samp s1("Hello") , s2(" BVM") ;
//  samp s3 = s1.concate(s2);

//  return 0;
// } 
// class test
// {
// int i;
// public:
// test()
// { i=0;
// }
// test(int j)
// {
// i=j;
// }
// test operator ++();
// test operator ++(int);
// test operator-();
// void display()
// {
// cout<<i;
// }
// };
// test test :: operator-()
// {
//  i=-i;
//  return *this;
//  }
// test test::operator ++()
// {
// test temp;              //    i++; return *this;
// temp.i=++i;

// return temp;
// }
// test test ::operator ++(int p)
// {
// test temp;    //          return test(i++);
// temp.i=i;
// i++;
// return temp;
// }
// int main()
// {
// test ob(4),ob1,ob2;
// ob1=++ob;
// ob2=ob++;
// ob1.display();
// ob2.display();
// ob.display();
// ob2=-ob1;
// ob1.display();
// ob2.display();
// return 0;}

// class base{

//     int x ;
//     public:
//         void setx(int i){
//             x = i ;
//         }
//         int getx(){
//             return x;
//         }
// };
// class derived : public base{

//     int y;
//     public :
//         void sety(int i){
//             y = i ;
//         }
//         int gety(){
//             return y;
//         }
// };
// int main(){
    
//     base *p;
//     base ob;
//     p = &ob;
//     p->setx(10);
//     cout<<p->getx();
//     derived ob1;
//     p = &ob1 ;
//     p->setx(99);
//     ob1.sety(88);
//     cout<<p->getx()<<" "<<ob1.gety();

//     return 0 ;
// }

class base{
    public:
        void func(){
            cout<<"base version" ;
        }
};
class derived1 : public base{
    public:
        
        void func(){
            cout<<"derived 1";
        }
};
class derived2 : public derived1{
};
int main(){

    derived2 d;
    d.func();

    return 0 ;
}