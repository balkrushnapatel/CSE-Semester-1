#include<stdio.h>
void main(){

	float a,b;
	char c;
	printf("enter the first number ");
	scanf("%f",&a);  
	printf("enter the opration ");
	scanf(" %c",&c);
	printf("enter the second number ");
	scanf("%f",&b);
	if(c=='+'){
	printf("answer=%f",a+b);
}
	if(c=='-'){
	printf("answer=%f",a-b);
}
	if(c=='/'){
	printf("answer=%f",a/b);
}
	if(c=='*'){
	printf("answer=%f",a*b);
}
	
	
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	

