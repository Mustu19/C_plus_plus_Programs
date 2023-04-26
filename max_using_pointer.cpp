#include<iostream>
using namespace std;
int main(){

    int a[5] , i , max = 0 , *ptr;
    ptr = a ;
    for(i = 1 ; i <=5 ; i++){
        cout<<"a["<<i<<"] : ";
        cin>>a[i];
        cout<<endl;
    }
    for(int j = 1 ; j<=5 ; j++){
        if(max < *ptr){
            max = *ptr;
        }
        *ptr++;
    }
    cout<<"Max is "<<max;

    return 0 ;
}