#include<stdio.h>
#include<conio.h>
int main() {
	
	int num1,num2,num3,min;
	
	printf("enter a value of the first number:");
	scanf("%d",&num1);
	
	printf("enter a value of the second number:");
	scanf("%d",&num2);
	
	printf("enter a value of the third number:");
	scanf("%d",&num3);
	
	min=(num1<num2)? num1:num2;
	min=(min<num3)?  min:num3;
	printf("the minimum value is:%d",min);
	
	
	return 0;
}
