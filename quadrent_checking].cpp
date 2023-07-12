#include<stdio.h>

int main(){
	
	int num1,num2;
	
	printf("ENter value of X and Y\n");
	scanf("%d%d",&num1,&num2);
	
	if(num1>0 && num2>0) {
		printf("%d %d lies in first quadrent",num1,num2);
	}
	else
	if(num1<0 && num2>0) {
		printf("%d %d lies in 2nd quadrent",num1,num2);
	}
	else
	if(num1<0 && num2<0) {
		printf("%d %d lies in 3rd quadrent",num1,num2);
	}
	else
	if(num1>0 && num2<0) {
		printf("%d %d lies in 4rt quadrent",num1,num2);
	}
	if(num1 == 0 && num2 == 0) {
		printf("%d %d lies on origon",num1,num2);
	}
}
