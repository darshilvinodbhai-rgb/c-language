#include<stdio.h>
#include<conio.h>
int main() {
	int choice,subchoice;
	
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujrati\n");
	
	printf("enter your choice:");
	scanf("%d",&choice);
	
	switch(choice) {
		case 1:
		printf("press 1 for internet recharge\n");
		printf("press 2 for top-up recharge\n");
		printf("press 3 for special recharge\n");
		
		printf("enter your choice:");
		scanf("%d",&subchoice);
		
		switch(subchoice) {
			case 1: printf("you have successfully done an internet recharge\n");
			break;
			case 2: printf("you have successfully done a top-up recharge\n");
			break;
			case 3: printf("you have successfully done a special recharge\n");
			break;
			default: printf("invalid recharge option\n");	
			
		}
		    break;
		case 2:
			printf("internet recharge ke liye 1 dabaaye\n");
			printf("top-up recharge ke liye 2 dabaaye\n");
			printf("special recharge ke liye 3 dabaaye\n");
			
			printf("enter your choice:");
			scanf("%d",&subchoice);
			
			switch(subchoice) {
				case 1: printf("aapne safaltapurvak internet recharge kar liya hai\n");
				break;
				case 2: printf("aapne safaltapurvak top-up recharge kar liya hai\n");
				break;
				case 3: printf("aapne safaltapurvak special recharge kar liya hai\n");
				break;
				default: printf("galat option\n");
			}
			    break;
			
			case 3:
				printf("internet recharge mate 1 dabavo\n");
				printf("top-up recharge mate  2 dabavo\n");
				printf("special recharge mate 3 dabavo\n");
				
				printf("enter your choice:");
				scanf("%d",&subchoice);
				
				switch(subchoice) {
					case 1: printf("tame internet recharge karyu\n");
					break;
					case 2: printf("tame top-up recharge karyu\n");
					break;
					case 3: printf("tame special recharge karyu\n");
					break;
					default: printf("khotu option\n");
				
				}
				    break;
				    
				default: printf("invalid language choice\n");
				
		
	}
	
	
	return 0;
}
