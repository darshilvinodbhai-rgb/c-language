#include<stdio.h>
int stringLength(char str[]);

int stringLength(char str[]){
	int i=0;
	
	  while(str[i] != '\0'){
	  	i++;
	  }
	  return i;
}



int main(){
	
	char str[100];

	
	printf("Enter any String:");
	scanf("%s",str);
	
    printf("Length is:%d",stringLength(str));
	
	return 0;
}
