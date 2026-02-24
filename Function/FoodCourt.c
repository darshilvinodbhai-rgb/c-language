#include<stdio.h>
int choice,price,qty,total=0;

void FoodCourt(){
	
	price =0;
	
	
	printf("\n\nEnter Your Choice:");
	scanf("%d",&choice);
	
	printf("\nEnter No of Quantity:");
	scanf("%d",&qty);
	
	switch(choice){
		case 1: price = 399;
		break;
		case 2: price =199;
		break;
		case 3: price = 299;
		break;
		case 4: price =150;
		break;
		case 5:return;
		break;
	}
	
	total += price * qty ;
	
}


int main(){
	
	
	printf("\n|| -- Food Court -- ||");
	printf("\n1.Pizza - 399");
	printf("\n2.Burger - 199");
	printf("\n3.Pasta - 299");
	printf("\n4.Cofee - 150");
	printf("\n5.Exit");
	
	FoodCourt();
	
	printf("Total is:%d",total);
	
	FoodCourt();
	
	printf("Total is:%d",total);
	
	
	return 0;
}
