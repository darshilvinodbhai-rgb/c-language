#include<stdio.h>
#include<conio.h>
int main() {
	
	int score;
	char grade;
	
	printf("Enter your score: ");
	scanf("%d",&score);
	
	if(score>=90){
		grade = 'a';
	}
	else if(score>=80){
		grade = 'b';
	}
	else if(score>=70){
		grade = 'c';
	}
	else if(score>=60){
		grade = 'd';
	}
	else if(score>=40){
		grade = 'e';
	}
	else{
		printf("\nbetter luck next time");
	}
	
	if(score>=40){
		printf("your grade is = %c",grade);
	}
//	printf("your grade is = %c",grade);
	
		

	
	return 0;
}
