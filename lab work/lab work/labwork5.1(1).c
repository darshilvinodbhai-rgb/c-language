#include<stdio.h>
#include<conio.h>
int main() {
	
	int number1,number2;
	
	
	printf("enter a value of the first number:");
	scanf("%d",&number1);
	
	printf("enter a value of the second number:");
	scanf("%d",&number2);
	
	
	if(number1<number2){
		printf("the minimum value is=%d",number1);
	}
	
	else if(number1==number2){
		printf("both are same");
	}
	
	else{
		printf("the minimum value is=%d",number2);
	}
	return 0;
}

