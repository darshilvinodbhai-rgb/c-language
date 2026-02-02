#include<stdio.h>
int sumArry(int a[],int n);

int sumArry(int a[],int n){
	int i,sum=0;
	
	for(i=0;i<n;i++){
		sum= sum +a[i];
	}
	printf("The sum of an Arry:%d",sum);
}



int main(){
	int a[100],n,i;
	
	printf("Enter arry Size:");
	scanf("%d",&n);
	
	printf("Enter Arry's Elements:\n");
	for(i=0;i<n;i++){
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}
	
    sumArry(a,n);
	
	
	return 0;
}
