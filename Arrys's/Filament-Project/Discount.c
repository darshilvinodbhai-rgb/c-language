#include<stdio.h>
#include<string.h>

 int ApplyDiscount();
 
 int ApplyDiscount(){
 	char CustomerName[50];
 	int PurchaseAmount,FinalAmount;
 	float Discount ;
 	
 	printf("Enter Customer Name:");
 	scanf("%s",CustomerName);
 	
 	printf("Enter Purchase Amount:");
 	scanf("%d",&PurchaseAmount);
 	
 	if(PurchaseAmount>=5000){
 		Discount = PurchaseAmount * 0.10;
	 }
	 else{
	 	Discount = PurchaseAmount * 0.05;
	 }
	 
	 FinalAmount = PurchaseAmount - Discount;
	 
	 printf("\nCustomer Name:%s",CustomerName);
	 printf("\nPurchaseAmount is:%d",PurchaseAmount);
	 printf("\nDiscount is:%.2f",Discount);
	 printf("\nFinalAmount is:%d",FinalAmount);
 }

int main(){
	
	ApplyDiscount();
	return 0;
}
