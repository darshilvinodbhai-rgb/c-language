#include<stdio.h>
#include<conio.h>
int main() {
	int f_angle,s_angle,t_angle;
	
	
	printf("First angle=");
	scanf("%d",&f_angle);
	
	printf("Second angel=");
	scanf("%d",&s_angle);
	
    t_angle= 180-(f_angle+s_angle);
	
	printf("Third angle=%d",t_angle);
	
	return 0;
	
}
