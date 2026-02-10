#include<stdio.h>
int cube(int n);

int cube(int n){
	printf("Cube is:%d",n*n*n);
}


int main() {
	int n;
	
	printf("Enter any Number:");
	scanf("%d",&n);
	
	cube(n);
	
	return 0;
}
