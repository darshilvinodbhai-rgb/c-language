#include <stdio.h>

void LeapYear(int year){
	
	if(year % 4 == 0 && year % 100 != 0){
		printf("Leap Year");
	}
	else{
		printf("Not a Leap Year");
	}
}

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

   LeapYear(year);

    return 0;
}
