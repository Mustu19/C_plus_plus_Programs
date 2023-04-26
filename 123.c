#include<stdio.h>
#include<string.h>
struct point{

    int m1 , m2 ;
};
struct point addPoint(struct point p1 , struct point p2){
        struct point add ;
        add.m1 = p1.m1 + p1.m2 ;
        add.m2 = p2.m1 + p2.m2 ;
        return add ;
}
// struct point takeValues(){

//     struct point po ;
//     po.m1 = 45 ;
//     po.m2 = 55 ;
//     return po ;
// }
    int main(){
    struct point po1 , po2 , po3;
    po1.m1= 45 ;
    po1.m2 = 55 ;
    po2.m1= 45 ;
    po2.m2 = 55 ;
    po3 = addPoint(po1 , po2);
    printf("%d %d" , po3.m1 , po3.m2);
return 0 ; 
}