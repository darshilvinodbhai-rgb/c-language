#include<stdio.h>
#include<conio.h>
int main () {
	int x,y,temp;
	
	printf("enter value of x:");
	scanf("%d",&x);
	
	printf("enter value of y:");
	scanf("%d",&y);
	
	temp=x;
	x=y;
	y=temp;
	
	printf("swap value of x=%d",x);
	
	printf("\nswap value of y=%d",y);
}
