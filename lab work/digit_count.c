#include<stdio.h>
#include<conio.h>
int main() {
	int no,rem,count=0;
	
	printf("enter no:");
	scanf("%d",&no);
	
	while(no != 0){
		rem=no%10;
		count++;
		no=no/10;
	}
	printf("the digit count is:%d",count);
	
	return 0;
}
