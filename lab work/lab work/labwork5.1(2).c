#include<stdio.h>
#include<conio.h>
int main() {
	
	int num;
	
	printf("enter any number:");
	scanf("%d",&num);
	
	if(num>0){
		printf("this number is positive");
	}
	else if(num<0){
		printf("this number is negative");
	}
	else{
		printf("this number is neutral");
	}
	return 0;
}
