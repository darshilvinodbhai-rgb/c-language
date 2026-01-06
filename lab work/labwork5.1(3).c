#include<stdio.h>
#include<conio.h>
int main() {
	float x,y,z,average;
	
	printf("enter maths marks:");
	scanf("%f",&x);
	
	printf("enter english marks:");
	scanf("%f",&y);
	
	printf("enter science marks:");
	scanf("%f",&z);
	
	average=(x+y+z)/3;
	
	printf("Average marks=%.2f",average);
	
	return 0;
}
