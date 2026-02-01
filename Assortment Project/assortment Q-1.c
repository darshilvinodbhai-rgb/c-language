#include<stdio.h>
int main() {
	int user,i,n;
	
	printf("enter arry's size:");
	scanf("%d",&user);
	
	int a[user];
	
	printf("\nEnter arry's element:");
	for(i=0;i<user;i++){
		printf("\na[%d]",i);
		scanf("%d",&a[i]);
		
		}
		
	printf("\nNegative elements from an arry:");	
		for(i=0;i<user;i++){
		if(a[i] < 0){
			printf(" %d",a[i]);
		}
		
	}

		return 0;
}
