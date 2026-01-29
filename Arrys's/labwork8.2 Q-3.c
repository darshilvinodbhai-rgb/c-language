#include<stdio.h>
int main() {
	int i,j,row,column,sum=0;
	
	printf("Enter the arrys row & column size:");
	scanf("%d %d",&row,&column);
	
	int a[row][column];
	printf("\nEnter arry's element:");
	
	for(i=0;i<row;i++){
	  for(j=0;j<column;j++){
	  	printf("\na[%d][%d]:",i,j);
	  	scanf("%d",&a[i][j]);
	  	
	  	if(i+j == row-1){
	 	sum = sum + a[i][j];
	    }
	  }
	}
	 printf("\nthe sum of diagonal element of an arry:%d",sum);
	 
	return 0;
}
