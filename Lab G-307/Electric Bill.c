#include<stdio.h>

void main(){
	
	int unit,total_bill;
	printf("Enter the value of unit : ");
	scanf("%d", &unit);
	
	if(unit<=50){
		total_bill = unit*0.50;
	 }
	 
	 if(unit>50 && unit<=150){
		total_bill = 50*0.50 + (unit-50)*0.75;
	 }
	 
	 if(unit>150 && unit<=250){
		total_bill = 50*0.50 + (unit-150)*1.20;
	 }
	 
	 if(unit>250){
		total_bill = 50*0.50 + 100*0.75 + 100*1.20 + (unit-250)*1.5;
	 }
	 
	 printf("total_bill = %d",total_bill);
		
}
