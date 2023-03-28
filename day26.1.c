#include<stdio.h>

int main (){
	
	int a , square=0 ;
	int *b , *c ;
	
	printf(" Enter value for square : ");
	scanf("%d",&a);
	
	b = &a ;
	c = &square ;
	
	square = (*b) * (*b);
	
	printf("\nSquare of your value is : %d ",*c);
	
	return 0 ;
}
