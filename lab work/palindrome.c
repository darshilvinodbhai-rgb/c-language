#include<stdio.h>
#include<conio.h>
int main() {
	int no,rem,rev=0;
	
	printf("enter no:");
	scanf("%d",&no);
	
	int x=no;
	
	while(no != 0){
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	printf("the reverse no is:%d",rev);
	
	if(x==rev){
		printf("\nthe no is palindrome");
	   }
	else{
		printf("\nnot palindrome");
	}   
	return 0;
}

