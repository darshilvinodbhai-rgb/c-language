//array : is collection of multiple values with same datatype.
//collection

//same datatype

//3 exams 9 students -> 27 variables
//theory
//practical
//VIVA
//
//int aaryan_theory=25
//int aryan_practical=40
//int aaryan_VIVA=15

//3 array

//int theory_marks;//9 students na theory store kri sko cho
//int practical_marks;
//int VIVA_marks;

#include<stdio.h>
#include<conio.h>
int main(){
	
	//this is your array variable
	//index starts from 0
	
	int theory_marks[]={20,23,21,24,25,28,24,22,26};//9 students

	//user side data->size must be fixed
	int practical_marks[100];
//	int VIVA_marks;
		int i;
	//this is normal variable 
	int no1=10;
	
//	printf("%d",theory_marks[]);
//	printf("%d",theory_marks[5]);

	printf("\ntheory marks\n");
	for(i=0;i<=8;i++){
		printf("%d ",theory_marks[i]);
		
	}
	
	printf("\nenter marks for practical exam of 9 students\n");
//	scanf("%d",&practical_marks[0]);
//	scanf("%d",&practical_marks[1]);

	for(i=0;i<=8;i++){
		scanf("%d",&practical_marks[i]);
	}
	
	printf("\npractical exam marks\n");
//	printf("%d",practical_marks[0]);
//	printf("%d",practical_marks[1]);

	for(i=0;i<=8;i++){
		printf("%d ",practical_marks[i]);
	}
	return 0;
}

