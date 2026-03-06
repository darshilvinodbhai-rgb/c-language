#include<stdio.h>

void FindLength(char name[]);

void FindLength(char name[]){
	int i,length=0;
	
	for(i=0;name[i] != '\0';i++){
		length++;
	}
	
	printf("The Name is:%s",name);
	printf("\nThe Length is:%d",length);
	
}
int main(){
	char n[50];
	
	printf("Enter Any Name:");
	gets(n);
	
	FindLength(n);
	
	return 0;
}
