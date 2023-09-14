#include<stdio.h>
void main () {
	char ch;
	
	printf("enter the characters");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z' ){
	printf("alphabetes are lower class");	
	}
	else if(ch>='A' && ch<='Z'){
	printf("it is a upper class alphabetes");	
	}
	else if(ch>='0' && ch<='9'){
	printf("it is a digit");
	}
	else 
	{printf("special characters");
	}
	
	
	
}
