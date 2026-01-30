#include<stdio.h>
int main() {
	
	char username[50];
	
	printf("enter UserName:");
	gets(username);
	
	printf("\nUserName is:%s",username);
	printf("\nlength of UserName:%d",strlen(username));
	
	
	return 0;
}
