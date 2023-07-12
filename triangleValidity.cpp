#include<stdio.h>

int main(){
	
	int side1,side2,side3,sum;
	
	printf("Enter 3 sides of triagnle\n");
	scanf("%d%d%d",&side1,&side2,&side3);
	
    if(side1>side2 && side1>side3) {
    	
    	sum = side2 + side3;
    	if(sum>side1) {
    		printf("This is a triangle");
		} else {
			printf("The triangle invalid");
		}
	}else
		if(side2>side1 && side2>side3) {
    	
    	sum = side1 + side3;
    	if(sum>side2) {
    		printf("This is a triangle");
		} else {
			printf("The triangle invalid");
		}
	} else
		if(side3>side1 && side3>side2) {
    	
    	sum = side2 + side1;
    	if(sum>side3) {
    		printf("This is a triangle");
		} else {
			printf("The triangle invalid");
		}
	} 

}
