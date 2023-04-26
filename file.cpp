#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
class details{

    int id;
    char name[15] ;
    float cost;

    public:
        void getData(){
            cin>>id>>name>>cost;
        }
        void putData(){
            cout<<id<<" "<<name<<" "<<cost;
        }
};
int main()
{
 
 details d[1] ;
 fstream out("sample1.txt" , ios::in | ios::out);
 for(int i = 0 ; i < 3 ; i++){
    d[i].getData();
    out.write((char*) &d[i] , sizeof(d[i]));
 }
 out.close();
 out.open("sample1.txt");
 out.seekg(0);
 for (int i = 0; i < 3; i++)
 {
    out.read((char *) &d[i] , sizeof(d[i]));
    d[i].putData();
 }
 out.close();
 
 return 0;
}