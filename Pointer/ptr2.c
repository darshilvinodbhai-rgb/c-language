#include<stdio.h>
int main(){
	
	int a =50,b=40;
	
	int *pointer;
	
	pointer = &a;
	
	printf("A = %d",a);
	printf("\nAdress of A:%u",&a);
	printf("\nAdress of ptr:%u",&pointer);
	printf("\nvalue of ptr:%u",pointer);
	printf("\nValue of a using ptr:%d",*pointer);
	
	return 0;
}
