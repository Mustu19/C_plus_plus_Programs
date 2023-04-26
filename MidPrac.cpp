// que 1

//#include<iostream>
//#include<string.h>
// using namespace std;
// class student{
//     int id ;
//     char name[15] ;
//     public:
//     void set(int i , char *n);
//     void display(){
//         cout<<id<<" "<<name ;
//     }
// };
// void student :: set(int i , char *n){
//     id = i ;
//     strcpy(name, n) ;
// }
// int main()
// {
//  class student s ;
//  int id = 54 ;
//  char name[] = "Mustafa" ;
//  s.set(id , name);
//  s.display();
//  return 0;
// }


// que 2

// #include<iostream>
// using namespace std;
// class circle{
//     double r ;
//     public :
//     void set(double);
//     double area();
//     void display() ; 

// };
// void circle :: set(double radius){
//     r = radius ;
// }
// double circle :: area(){
//     return 3.14*r*r ;
// }
// void circle :: display(){
//     cout<<"Radius : "<<r ;
// }
// int main()
// {
//  circle c ;
//  c.set(5.0);
//  c.display();
//  cout<<"area of circle is "<<c.area();
//  return 0;
// }


// que 3

// #include<iostream>
// using namespace std;
// class number{
//     int a[10] ;
//     int n ;

//     public :
//     void set() ;
//     void sort() ;
//     int findMax();
// };
// void number :: set(){
//     int i;
//     cin>> n ;
//     for(i = 0 ; i < n ; i++){
//         cin>>a[i] ;
//     }
// }
// void number :: sort(){
//     int i , j ;
//     for(i = 0 ; i < n - 1 ; i++){
//         for(j = i+1 ; j < n ; j++){
//             if(a[i] > a[j]){
//                 int temp = a[i] ;
//                 a[i] = a[j] ;
//                 a[j] = temp ;
//             }
//         }
//     }
//     for(i = 0 ; i < n ; i++){
//         cout<<a[i]<<endl ;
//     }
// }
// int number :: findMax(){
//     int max = 0  , i;
//     for(i = 0 ; i < n ; i++){
//         if(a[i] > max){
//             max = a[i] ;
//         }
//     }
//     return max ; 
// }
// int main()
// {
//  number num ;
//  num.set();
//  cout<<"Maximum element is "<<num.findMax() ;
//  num.sort();
//  return 0;
// }

// que 4
// #include<iostream>
// using namespace std;
// class complex{
//     int r , i;
//     public :
//     complex();
//     complex(int real , int imag);
//     void display() ;
// };
// complex :: complex(){
//     cout<<"Default constructor.." ;
//     r = 0 ; 
//     i = 0;
// }
// complex :: complex(int real , int imag){
//     r = real ;
//     i = imag ;
// }
// void complex :: display(){
//     cout<<"Real "<<r<<" Imag = "<<i ;
// }
// int main()
// {
//  complex c ;
//  complex c1(5 , 2) ;
//  c.display() ;
//  c1.display() ;
//  return 0;
// }


// que 5

// #include<iostream>
// using namespace std;
// int count = 0 ;
// class myclass{
//     public : 
//     myclass(){
//         count++ ;
//         cout<<"\nConstructor "<<count ;
//     }
//     ~myclass(){
//         cout<<"\nDestructor "<<count ;
//         count-- ;
//     }
// };
// int main()
// {
//  myclass m1 , m2 , m3 ;
//  return 0;
// }


// que 6

// #include<iostream>
// using namespace std;
// class student{
//     int *a ;
//     public :
//         student(int num){
//             a = new int[num] ;
//             int i ;
//             for ( i = 0; i < num ; i++)
//             {
//                 cin>>a[i] ;
//                 cout<<a[i]<<endl ;   
//             }
//         }
//             ~student(){
//                 cout<<"destructor...";
//                 delete a ;
//             }
//             student(){

//             }
// };
// int main()
// {
//  int n = 5 ;
//  student s(n) ;
//  return 0;
// }


// que 7
// #include<iostream>
// using namespace std;
//   class myclass
//   {
//     int a, b;
//     public:
//     void set(int i,int j)
//  {
//     a=i;
//     b=j;}
// void display(){ cout<<a<<" " <<b<<"\n" ; } ;
// };
//    int main()
//    {
//      myclass o1,o2;
//     o1.set(10,4);
//     o2=o1;
//     o1.display();
//     o2.display();
//     return 0;
// }




// que 8

// #include<iostream>
// using namespace std;
// class complex{
//     int r , i;
//     public :
//     complex(){
//         r = 0 ;
//         i = 0 ;
//     }
//     complex(int real , int imag){
//         r = real ;
//         i = imag ;
//     }
//     // void addComplex(complex c1 , complex c2){
//     //     r = c1.r + c2.r ;
//     //     i = c1.i + c2.i ;
//     //     cout<<r<<" "<<i ;
//     // }
//     complex addComplex(complex c1){
//         complex add ;
//         add.r = r + c1.r ;
//         add.i = i + c1.i ;
//         return add ;
//     }
//     void display(){
//         cout<<r <<" " << i ;
//     }
// };
// int main()
// {
//  complex co1(5 , 6) , co2(6 , 5)  , co3 ;
// // co3.addComplex(co1  ,co2) ;
//     co3 = co1.addComplex(co2);
//     co3.display() ;
//  return 0;
// }



// que 9

// #include<iostream>
// using namespace std;
// class matrix{
//     int a[10][10] ;
//     int m , n;
//     public :
//     matrix(){
//         m = 0 ;
//         n = 0 ;
//     }
//     matrix(int x , int y){
//         m = x ;
//         n = y ;
//         int i , j;
//         for(i = 0 ; i < m ; i++){
//             for(j = 0 ; j < n ; j++){
//                 cin>>a[i][j] ;
//            }
//         }
//     }
//     void transpose(){
//         int i , j ;
//         for(i = 0 ; i < m - 1 ; i++){
//             for(j = i+1 ; j < n ; j++){
//                 int temp = a[j][i] ;
//                 a[j][i] = a[i][j] ;
//                 a[i][j] = temp ;
//            }
//         }
//         display() ;
//     }
//     void display(){
//         int i  ,  j;
//         for(i = 0 ; i < m ; i++){
//             for(j = 0 ; j < n ; j++){
//                 cout<<a[i][j]<<" " ;
//            }
//            cout<<endl ;
//         }
//     }
//     matrix addMatrix(matrix ad){
//         matrix b ;
//         b.m = m ;
//         b.n = n ;
//         int i ,  j;
//         for(i = 0 ; i < m ; i++){
//             for(j = 0 ; j < n ; j++){
//                 b.a[i][j] = a[i][j] + ad.a[i][j] ;
//            }
//         }
//         return b ;
//     }
// };
// int main()
// {
//  int x , y ;
//  cin>>x>>y ;
//  matrix m1(x , y)  , m2(x , y) , m3 ;
//  m1.transpose() ;
//  m3 = m1.addMatrix(m2) ;
//  m3.display() ;
//  return 0;
// }



// que 10

// #include<iostream>
// using namespace std;
// class samp{
//     int n ;
//     public :
//     samp(int a){
//         n = a ;
//     }
//     int get(){
//         return n ;
//     }
// };
// int main()
// {
// samp s[4][2] = {samp(1) , samp(2)
//                 , samp(3) , samp(4),
//                 samp(5) , samp(6)
//                 , samp(7) , samp(8)} ;
//     for (int i = 0; i < 4 ; i++)
//     {
//         /* code */
//         for (int  j = 0; j < 2; j++)
//         { 
//             /* code */
//             cout<<s[i][j].get() <<" " ;
//         }
        
//     }
    
//  return 0;
// }


// que 11

// #include<iostream>
// using namespace std;
// class pointer{
//     int *p ;
//     public :
//     pointer(int n){
//         p = new int[n] ;
//         cout<<p ;
//         for (int i = 0 ; i < n ; i++ )
//         {
//             cin>>p[i] ;
//             cout<<p[i]<<endl ;
//         }
        
//     }
//     ~pointer(){
//         cout<<"\nDestructor" ;
//         delete[] p ;
//     }
// };
// int main()
// {
//  pointer a(5) ;
//  return 0;
// }


// que 12

// #include<iostream>
// using namespace std;
// class samp{
//     int i , j ;
//     public :
//     samp(int x , int y){
//         i = x ;
//         j = y ;
//     }
//     int get(){
//         return i*j ;
//     }
// };
// int main()
// {
//  samp *s ;
//  s = new samp(6, 5);
//  cout<<s->get();
//  return 0;
// }

// que 13
// #include<iostream>
// using namespace std;
// class student{
//     int id;
//     float spi ;
//     public:
//     student(){
//         cout<<"Enter id and spi : " ;
//         cin>>id>>spi ;
//     }
//     float getSpi(){
//         return spi ;
//     }
//     void display(){
//         cout<<"Id = "<<id<<" SPI = "<<spi ;
//     }
//     ~student(){
        
//     }
// };
// int main()
// {
//  student *s ;
//  s = new student[5] ;
//  float max = 0 ;
//  for (int i = 0; i < 5 ; i++)
//  {
//     if(s[i].getSpi() > max){
//         max = s[i].getSpi() ;
//     }
//  }
//  for (int i = 0; i < 5 ; i++)
//  {
//     if(s[i].getSpi() == max){
//         s[i].display() ;
//     }
//  }
//  delete[] s ;
//  return 0;
// }



// que 14


// #include<iostream>
// using namespace std;
// void fun(int &m){
//     m = m + 10 ;
// }
// int main()
// {
//     // float total=100;
//     // float &sum=total;
//     // cout<<sum;

//     // int x=10;
//     // int *p=&x;
//     // int &m=*p;  // m is referring x
//     // cout<<m;   
//     int x = 10 ; 
//     fun(x) ;
//     cout<<x ;

//  return 0;
// }

// que 15

// #include<iostream>
// using namespace std;
// int &findmin(int &x, int &y)
//    {
//     if (x<y)
//      return x;
//    else 
// return y;
// } 
// int main()
// {
//   int a,b;
//  cin>>a>>b;
// findmin(a,b)=0;  cout<<a<<b;
// return 0;}


// que 16

// #include<iostream>
// using namespace std;
// class number{
//     int a ;
//     public : 
//     number(int n){
//         a = n ;
//     }
//     int get(){
//         return a ;
//     }
//     ~number(){
//         cout<<"Destructor" ;
//     }
// };
// void fun(number &o){
//     cout<<o.get();
// }
// int main()
// {
//  number num(5) ;
//  fun(num) ;
//  return 0;
// }


// que 17

// #include<string.h>
// #include <iostream>
// using namespace std;
//  class complex
//    {
//      int r;
//      int i;
//      public:
//      complex()
//      {
//        cout<<"default cons\n";
//        r=0;
//        i=0;
//     }
//     complex(int a,int b)
//     {
//       cout<<"para const\n";
//       r=a;
//       i=b;
//       }
//       void add_complex(complex,complex &);

//     ~complex(){cout<<"destructor\n";}

//       void display(){ cout<<"real "<<r<<" imaginary "<<i<<endl;} };
//       void complex::add_complex(complex o, complex &temp)
//       {

// 	temp.r=r+o.r;
// 	temp.i=i+o.i;

// 	}
// int main()
// 	{
// 	 complex c1(2,3),c2(4,5);
// 	 complex c3;
// 	 c1.add_complex(c2,c3);
// 		 c3.display();
// 		 return 0;
//          }


// que 18

// #include<iostream>
//  using namespace std;
//  class item
// {
//     static int count;
//     int number;
//     public:
//     item(int a )
//     {
//     number=a;
//     count++;
//     }
// void display()
// { 
//    cout<<"number= "<<number<<" " <<"count= "<<count<<endl;}

//    static void showCount(){
//         cout<<count;
//    }
// };
//   int item::count = 0;  // definition of static data member
  
// int main()
// {
//     item a(1),b(4),c(5);
//     a.display();
//     b.display();
//     c.display();
//     item::showCount() ;

//     return 0;
// }



// que 19

// #include<iostream>
// using namespace std;
// class player{
//     int id ;
//     static int nextId ;
//     public :
//     player(){
//         id = nextId++ ;
//     }
//     int getId(){
//         return id ;
//     }
// };
// int player :: nextId = 1 ;
// int main()
// {
//  player p1 , p2 , p3 ;
//  cout<<p1.getId() << p2.getId() <<p3.getId() ;
//  return 0;
// }



// que 20

// #include<iostream>
// using namespace std;
// class num{
//     static int count ;
//     public :
//         num& fun() ;
//     };
// int num::count = 0 ;
// num& num::fun(){
//     num::count++ ;
//     cout<<num::count;
//     return *this  ;
// }
// int main()
// {
//  num n ;
//  n.fun().fun().fun().fun();
//  return 0;
// }

// que 21

// #include<iostream>
// using namespace std;
// class mustu{
//     int x, y ;
//     public :
//     mustu(int i = 0 , int j = 0){
//         x = i ; 
//         y = j ;
//     }
//     int getX() const{
//         return x ;
//     }
//     int getY(){
//         return y ;
//     }
// };
// int main()
// {
//  mustu m  ;
//  cout<<m.getX()<<" "<<m.getY() ;
//  return 0;
// }


// que 22

#include<iostream>
using namespace std;
class Demo
{
      int value;
public:
Demo(int v ){         value = v;}
void showMessage()
{
cout<<"Hello World We are Tushar, "
"Ramswarup, Nilesh and Subhash Inside"
" showMessage() Function"<<endl;
}
void display() const
{
cout<<"Hello world I'm Rancho "
"Baba Inside display() Function"<<endl;
}
};
int main(){
const Demo d1(5);
d1.display();
return 0 ;
}
