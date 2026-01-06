#include<stdio.h>
#include<conio.h>
int main() {
	int i=1,user;
	
	printf("enter any number:");
	scanf("%d",&user);
	
	while(i<=user){
		printf(" %d",i);
		
		i++;
	}
	
	return 0;
	
}
