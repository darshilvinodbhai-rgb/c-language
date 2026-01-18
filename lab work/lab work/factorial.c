#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,no,fact=1;
	
	printf("enter number to find factorial:");
	scanf("%d",&no);
	
	for(i=no;i>=1;i--){
		fact=fact*i;
	}
	printf("factorial no of %d is =%d",no,fact);
	
	return 0;
}
