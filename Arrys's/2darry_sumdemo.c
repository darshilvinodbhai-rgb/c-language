#include<stdio.h>
int main(){
	int i,j,row,column,sum=0;
	
	printf("Enter arrys Row's and column's size:");
	scanf("%d %d",&row,&column);
	
	int a[row][column];
	printf("Enter Arry's Element:");
	for(i=0;i<row;i++){
	  for(j=0;j<column;j++){
	  	printf("\na[%d][%d]:",i,j);
	  	scanf("%d",&a[i][j]);
	  	sum += a[i][j];
	  }
	}
	printf("Sum is:%d",sum);
	
	return 0;
}
