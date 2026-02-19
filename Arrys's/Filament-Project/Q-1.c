#include<stdio.h>
#include<string.h>
int main() {
	char user[50];
	int yes=1,i,length=0;
	
	printf("Enter any String:");
	scanf("%s",user);
	
	while(user[length] != '\0'){
		length++;
	}
	printf("The Length is:%d",length);
	
	for(i=0;i<length/2;i++){
		if(user[i] != user[length-i-1] )
		{
			yes=0;
			break;
		}
	}
	if(yes == 1){
		printf("\nThe Given Arry is palindrome ");
	}
	else{
		printf("\nThe Given Arry is not palindrome");
	}
	
	
	return 0;
}
