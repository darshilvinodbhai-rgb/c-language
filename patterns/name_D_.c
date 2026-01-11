#include<stdio.h>
#include<conio.h>
int main() {
	int i,j;
	
	for(i=1;i<=7;i++){
	  for(j=1;j<=9;j++){
	  	
	  	if(i==1 || i==7){
	  		printf("*");
		  }
		  else if(j==5 || j==9){
		  	printf("*");
		  }
		  else{
		  	printf(" ");
		  }
	  }
	  printf("\n");
	}
	return 0;
}
