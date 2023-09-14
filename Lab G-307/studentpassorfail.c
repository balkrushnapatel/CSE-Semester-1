#include<stdio.h>
void main(){
	 
	 int m1,m2,m3,m4,m5;
	 float percentage;
	
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	percentage=(m1+m2+m3+m4+m5)/5.0;
	
    if(percentage<=35){
	printf("the student has fail in exam");
    }
    if(35<percentage && percentage>=45){
    printf("the student has passed in exam");	
	}
	if(45<percentage && percentage>=60){
	printf("\nthe student has got second class");
    }
	if(60<percentage  && percentage>=70){
	printf("\nthe student has got first class");
    }
	if(percentage>70){
	printf("\ndistinction");	
	}
	
	
}
	
	

