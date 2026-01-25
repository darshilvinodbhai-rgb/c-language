#include<stdio.h>
int main() {
	int row,column,i,j;
	
	printf("enter the arry's row size:");
	scanf("%d",&row);
	
	printf("enter the arry's column size:");
	scanf("%d",&column);
	
	int a[row][column],b[row][column],c[row][column];
	
	printf("\nEnter arry A's element:");
	
	for(i=0;i<row;i++){
	  for(j=0;j<column;j++){
	  	printf("\na[%d][%d]:",i,j);
	  	scanf("%d",&a[i][j]);
	  }
	}
	
	printf("\nEnter arry B's element:");
	
	for(i=0;i<row;i++){
	  for(j=0;j<column;j++){
	  	printf("\nb[%d][%d]:",i,j);
	  	scanf("%d",&b[i][j]);
	  }
	}
	
     for(i=0;i<row;i++){
       for(j=0;j<column;j++){
       	c[i][j]=a[i][j] + b[i][j];
	   }
	 }
	 
	 printf("arry c is:\n");
	 for(i=0;i<row;i++){
	  for(j=0;j<column;j++){
	  	printf("%d ",c[i][j]);
	  }
	  printf("\n");
	 }
	
	return 0;
}
