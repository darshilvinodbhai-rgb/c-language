#include<stdio.h>

void Count(char str[]){
	
	int a=0,e=0,i=0,o=0,u=0;
	int j;
	
	for(j=0;str[j] != '\0';j++){
		
		if(str[j]=='a' || str[j]=='A')
		a++;
		else if(str[j]=='e' || str[j]=='E')
		e++;
		else if(str[j]=='i' || str[j]=='I')
		i++;
		else if(str[j]=='o' || str[j]=='O')
		o++;
		else if(str[j]=='u' || str[j]=='U')
		u++;
	}
	
	printf("A = %d\n",a);
	printf("E = %d\n",e);
	printf("I = %d\n",i);
	printf("O = %d\n",o);
	printf("U = %d\n",u);
}


int main(){
	char str[100];
	
	printf("Enter a Word:");
	scanf("%s",str);
	
	
	Count(str);
	
	
	return 0;
}
