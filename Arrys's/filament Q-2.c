#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int freq[256] = {0};
	int i=0;
	
	printf("Enter any String:");
	scanf("%s",str);
	
	for(i=0;str[i] != '\0';i++){
		freq[(int)str[i]]++;
	}
	
	for(i=0;str[i] != 0;i++){
		if(freq[(int)str[i]] != 0)
		{
			printf("\n%c => %d ",str[i],freq[(int)str[i]]);
		}
		freq[(int)str[i]] = 0;
	}
	
	
	return 0;
}
