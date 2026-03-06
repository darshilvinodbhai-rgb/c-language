#include<stdio.h>

int SumofArry(int a[],int size);

int SumofArry(int a[],int size){
	int sum=0,i;
	
	for(i=0;i<size;i++){
		sum+= a[i];
	}
	
	return sum;
}
int main(){
	int num[5],i;
	
	for(i=0;i<5;i++){
		printf("Enter your Number %d:",i);
		scanf("%d",&num[i]);
	}
	
	printf("The Sum is: %d",SumofArry(num,5));
	
	
	return 0;
}
