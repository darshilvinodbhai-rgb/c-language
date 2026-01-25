#include<stdio.h>
int main(){
	int studentid;
	char studentname[100];
	char studentcity[50];
	
	printf("enter student id:");
	scanf("%d",&studentid);
	
	printf("enter student name:");
	scanf("%s",studentname);
	
	printf("enter student city:");
	scanf("%s",studentcity);
	
	printf("||---STUDENT INFO---||");
	
	printf("\nstudent id:%d",studentid);
	printf("\nstudent name:%s",studentname);
	printf("\nstudent city:%s",studentcity);
	
	
	return 0;
}
