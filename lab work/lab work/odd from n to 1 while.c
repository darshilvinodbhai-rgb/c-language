#include<stdio.h>
#include<conio.h>
int main() {
 int i,user;
 
    printf("enter any number:");
    scanf("%d",&user);
    
    i=user;
    
    while(i>=1){
    	if(i % 2 !=0){
    	
    	printf(" %d",i);
    }
    	
    	i--;
	}
	
	return 0;
	
}
