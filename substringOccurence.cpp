#include<iostream>
using namespace std;
class string{
    char *ptr ;
    int len ;
    
    public :
        string(){
            len = 0 ;
            ptr = nullptr ;
        }
        string(char *p){
            len = strlen(p) + 1 ;
            ptr = new char[len] ;
            strcpy(ptr , p);
        }
};
int main()
{
 return 0;
}