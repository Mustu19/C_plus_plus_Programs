#include<stdio.h>
#include<string.h>
struct addDistance{
    int f , i ;
};
struct addDistance addFunction(struct addDistance s1 , struct addDistance s2){
    struct addDistance s3 ;
    s3.f = s1.f + s2.f ;
    s3.i = s1.i + s2.i ;
    s3.f = s3.f + s3.i/12 ;
    s3.i = s3.i % 12 ; 
    return s3 ;
}

    int main(){
    // int arr[] = {'1','2','3'};
    // for(int i = 0 ; i<3 ; i++){
    //     printf("\n%u" , &arr[i]);
  // }

    struct addDistance add1 , add2  , add3;
    struct addDistance addFunction(struct addDistance , struct addDistance) ;
    add1.f = 15 ;  add1.i = 7 ;
    add2.f = 5 ; add2.i = 7 ;
    add3 = addFunction(add1 , add2) ;
    printf("%d %d" , add3.f , add3.i);
return 0 ; 
}
