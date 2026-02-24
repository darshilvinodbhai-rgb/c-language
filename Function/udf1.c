#include<stdio.h>

void square();

void square(){
	int num;
	  
	  printf("\nEnter any Number:");
	  scanf("%d",&num);
	  
	  printf("\nsquare is:%d",num*num);
}

        
int main(){
	 square();
	 square();	
	
	return 0;
}
