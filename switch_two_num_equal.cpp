#include<stdio.h>

int main(){
	
	int num1,num2,num4;
		printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);

  	int num3 = num1>num2;
	num4  = num2>num1;
	  	
	switch(num3)
	{
		case 1:
			printf("Num1=%d is greater than Num2=%d",num1,num2);
			break;
			
			case 0:
				switch(num4)
				{
					case 1:
						printf("Num2=%d is greater than Num1=%d",num2,num1);
				   break;
				   case 0:
				   	printf("Both numbers are equal");
				    break;
				}
	}
}
