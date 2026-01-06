#include<stdio.h>
#include<conio.h>
int main() {
	int x,y;
	
	printf("enter value of x:");
	scanf("%d",&x);
	
	printf("enter value of y:");
	scanf("%d",&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("swap value of x is=%d",x);
	printf("\nswap value of y is=%d",y);
	
}
