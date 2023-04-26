#include<iostream>
#include<fstream>
using namespace std;
class stud{

    int id;
    char name[15];
    int marks[3] ;

    public:
    void putdata(){
        cout<<"Enter name , id and marks of 3 subjects: " ;
        cin>>name>>id;
        for (int i = 0; i < 3; i++)
        {
            cin>>marks[i];
        }
    }
    void getdata(){
        cout<<name<<id;
        for (int i = 0; i < 3; i++)
        {
                cout<<marks[i];
        }
    }
};
int main()
{
 stud s;
 fstream out("sample1.txt" , ios::in | ios::out | ios::ate);
 out.seekg(0,ios::beg);
 while(out.read((char*) & s , sizeof(s)))
   {
     s.putdata();
   }
   s.getdata();
   out.seekp(0 , ios::end);
   out.write((char*) & s , sizeof(s));
   out.close();
 return 0;
}