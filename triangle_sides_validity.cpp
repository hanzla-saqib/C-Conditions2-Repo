#include<stdio.h>

int main(){
	
	int sid1,sid2,sid3,sum = 0;
	
	printf("Enter three sides of a triangle\n");
	scanf("%d%d%d",&sid1,&sid2,&sid3);//3,2,4
	
	if(sid1>sid2 && sid1>sid3)
	{
		sum = sid2 + sid3;
		
		if(sum > sid1) {
			printf("valid1");
		}
		else { 
		printf("Invalid1");
		}
	}
	
	else	if(sid2>sid1 && sid2>sid3)
	{
		sum = sid1 + sid3;
		
		if(sum > sid2) {
			printf("valid2");
		}
		else { 
		printf("Invalid2");
		}
	}

    else	if(sid3>sid2 && sid3>sid1)
	{
		sum = sid2 + sid1;
		
		if(sum > sid3) {
			printf("valid3");
		}
		else { 
		printf("Invalid3");
		}
	}

}
