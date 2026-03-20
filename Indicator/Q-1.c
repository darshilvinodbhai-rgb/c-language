#include<stdio.h>
#include<string.h>
int stringlength(char *ptr){
   	
   	printf("The Length of string is:%d",strlen(ptr));
}

int main(){
	char user[100];
	
	printf("Enter any String:");
	gets(user);
	
	stringlength(user);
	
	return 0;
}
