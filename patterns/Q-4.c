#include<stdio.h>

void swap(int *a,int *b){
	
	int DD;
	
	DD = *a;
	*a = *b;
	*b = DD;
		
}
int main(){
	
	int x,y;
	
	printf("Enter Two Num:");
	scanf("%d %d",&x,&y);
	
	swap(&x,&y);
	
	printf("After Swapping:\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
	
	return 0;
}
