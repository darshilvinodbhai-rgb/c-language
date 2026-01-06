#include<stdio.h>
#include<conio.h>
int main() {
	char i= 'a';
	
	
	do{
		printf(" %c",i);
		i= i+4;
	}while(i<='z');
	
	return 0;
}

//debug:
//step-1: char 'a'
//step-2: start in do-while loop
//step-3: print: a
//i=e,i=i,i=m,i=q,i=u,i=y
//e<=z truer i<=z true m<=z true q<=z true u<=z true y<=z true
//print:
