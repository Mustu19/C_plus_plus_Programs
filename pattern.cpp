#include<iostream>
using namespace std;

int main(){

    int i , j , k;
    for(i=1;i<7;i++){
        for(j=1 ; j<7-i; j++){
            printf(" ");
        }
        for(k = 1 ; k <= i ; k++ ){
            printf("*");
        }
        cout<<endl;
    }
    return 0;
}