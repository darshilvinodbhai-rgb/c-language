#include<stdio.h>
int main() {
	
	char username[50];
	char greetmsg[50] = "Hello ";
	
	printf("Enter UserName:");
	gets(username);
	
	printf("%s",strcat(greetmsg,username));
	
	
	return 0;
}
