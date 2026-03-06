#include<stdio.h>

int main(){
	int n = 50 ,a = 60;
	
	int *ptr;
	
	ptr = &n;
	
	printf("\n N = %d",n);
	printf("\n Address = %u",&n);
	printf("\n value of ptr = %u",ptr);
	printf("\n address of ptr = %u",&ptr);
	printf("\n value of *ptr = %d",*ptr);
	
	
	return 0;
}
