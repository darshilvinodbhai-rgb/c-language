#include<stdio.h>
#include<conio.h>
int main() {
	int i,user,tab;
	
	printf("enter the no of table:");
	scanf("%d",&user);
	
	for(i=1;i<=10;i++){
		tab=user*i;
		
		printf("%d * %d = %d\n",user,i,tab);
	}
	
	
	return 0;
}
