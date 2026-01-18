#include<stdio.h>
#include<conio.h>
int main() {
	int user,i,temp=0;
	
	printf("enter a number:");
	scanf("%d",&user);
	
	for(i=1;i<=user;i++){
		if(user % i == 0){
			temp++;
		}
	}
	
	
	if(temp==2){
		printf("%d is a prime number",user);
	}
	else{
		printf("%d is not a prime number",user);
	}
	
	
	
	
	return 0;
}
