#include<stdio.h>
#include<conio.h>
int main () {
	float b_salary,hra,da,ta,g_salary;
	
	printf("BASE SALARY:");
	scanf("%f",&b_salary);
	
	hra=b_salary*10/100;
	
	printf("\nHRA=%f",hra);
	
	da= b_salary*5/100;
	
	printf("\nDA=%f",da);
	
	ta= b_salary*8/100;
	
	printf("\nTA=%f",ta);

	
	g_salary= b_salary+hra+da+ta;
	
	printf("\nGROSS SALARY=%f",g_salary);
	
	return 0;
	
}
