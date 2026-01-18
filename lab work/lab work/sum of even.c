#include<stdio.h>
#include<conio.h>
int main() {
	int i,sum=0,user;
	
	printf("enter a number:");
	scanf("%d",&user);
	
	for(i=0;i<=user;i++){
		if(i % 2 ==0){
			sum=sum+i;
		}
	}
	
	printf("sum of even number %d is:%d",user,sum);
	
	

	return 0;
}
