#include<stdio.h>
#include<conio.h>
int main() {
	int i=0,no,number1=0,number2=1,number3;
	
	printf("enter the no:");
	scanf("%d",&no);
	
	printf(" %d %d",number1,number2);
	
	while(i<no-2){
		number3=number1+number2;
		printf(" %d",number3);
		
		
		number1=number2;
		number2=number3;	
		
		i++;	
	}
	
	return 0;
}
