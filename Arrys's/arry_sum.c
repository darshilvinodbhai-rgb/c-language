#include<stdio.h>
#include<conio.h>
int main () {
	int a1[5],a2[5],a3[5];
	int i;
	
	printf("\nenter first arry:");
	for(i=0;i<5;i++){
		scanf("%d",&a1[i]);
	}
	
	printf("\nenter second arry:");
	for(i=0;i<5;i++){
		scanf("%d",&a2[i]);
	}
	
	printf("\nfirst arry is:");
		for(i=0;i<5;i++){
			printf(" %d",a1[i]);
		}
		
	printf("\nsecond arry is:");
		for(i=0;i<5;i++){
			printf(" %d",a2[i]);
		}
		
		
		
	printf("\nthe sum is:");
	for(i=0;i<5;i++){
		a3[i]=a1[i]+a2[i];
		printf(" %d",a3[i]);
	}
	
	
	
	return 0;
}
