#include<iostream>
using namespace std ;

void F (int a, int *b) 
{
	a = 7 ;
 	*b = a ;
 	b = &a ; 
	*b = 4 ; 
	printf("%d, %d\n", a, *b) ; 
} 
void A(double a, double b){
	printf("Float");
}
void A(int a, int b){
	printf("Int");
}
int main()
{
	//float m = 3.5, n  = 5.2;
	// F(m, &n) ;
	// printf("%d, %d\n", m, n) ;
	A(3.5,2.5);
	return 0;
 } 
