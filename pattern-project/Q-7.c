#include<stdio.h>
#include<conio.h>
int main() {
	int i,j;
	
	for(i=1;i<=7;i++){
	  for(j=1;j<=7;j++){
	  	
	  	if(i==1 || i==4){
	  		printf("*");
		  }
		  else if(j==1){
		  	printf("*");
		  }
		  else if((i==2 || i==3) && j==7){
		  	printf("*");
		  }
		  else{
		  	printf(" ");
		  }
	  }
	  printf("\n");
	}
}

//debug:
// i=1  1<=7  j=1..7  (i==1 TRUE)  print:* * * * * * *
// i=2  2<=7  j=1  (j==1 TRUE) print:*  j=2..6 print:spaces  j=7  (i==2 && j==7 TRUE) print:*
// i=3  3<=7  j=1  (j==1 TRUE) print:*  j=2..6 print:spaces  j=7  (i==3 && j==7 TRUE) print:*
// i=4  4<=7  j=1..7  (i==4 TRUE)  print:* * * * * * *
// i=5  5<=7  j=1  (j==1 TRUE) print:*  j=2..7 print:spaces
