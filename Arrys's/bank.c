#include<stdio.h>
#include<string.h>
int main() {
	 
	 char correctusername[50] = "techskillhub.dev";
	 char correctpassword[50] =  "123@pipl";
	 
	 char username[50],password[50];
	 
	 printf("Enter username:");
	 scanf("%s",username);
	 
	 printf("Enter password:");
	 scanf("%s",password);
	 
	 if(strcmp(correctusername,username) == 0 && strcmp(correctpassword,password) == 0){
	 	printf("\nlogin successfully..!");
	 	printf("\nWelcome to the techskillhub...!");
	 }
	 else{
	 	printf("Incorrect username & password");
	 }
	 return 0;
}
