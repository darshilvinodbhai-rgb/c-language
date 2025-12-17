#include<stdio.h>
#include<conio.h>
int main () {
	
	
	float c,f;
	
	printf("the temperature in celsius:");
	scanf("%f",&c);
	
	f= (9*c)/5+32;
	
	printf("the temperature in fahrenheit=%f",f);
	
	return 0;
}
