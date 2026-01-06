#include<stdio.h>
#include<conio.h>
int main() {
	int no,rem,count=0;
	
	printf("enter no:");
	scanf("%d",&no);
		
	int x=no;
	
	while(no != 0) {
		rem=no%10;
		count=count+rem*rem*rem; 
		no=no/10;
	}	
	
	 printf("the sum is:%d",count);
	 
	 if(x==count){
	 	printf("\n%d is an armstrong number",x);
	 }
	 else{
	 	printf("\n%d is not armstrong number",x);
	 }
	
	
	
	return 0;
}
