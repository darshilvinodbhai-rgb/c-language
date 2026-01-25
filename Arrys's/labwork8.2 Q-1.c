#include<stdio.h>
int main() {
	int row,column,i,j,a[row][column],sum=0;
	
	printf("enter the arry's row size:");
	scanf("%d",&row);
	
	printf("enter the arry's column size:");
	scanf("%d",&column);
	
	printf("\nEnter arry's element:");
	
	for(i=0;i<row;i++){
	  for(j=0;j<column;j++){
	  	printf("\na[%d][%d]:",i,j);
	  	scanf("%d",&a[i][j]);
	  	sum =sum + a[i][j];
	  }
	}
	printf("\n%d",sum);
	
	float avg = (float)sum / (row*column);
	
	printf("\naverage of an arry:%.2f",avg);
	
	return 0;
}
