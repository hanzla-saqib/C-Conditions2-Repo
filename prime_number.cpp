#include<stdio.h>

int main(){
	
	int num,count;
	
	printf("Enter the value of number\n");
	scanf("%d",&num);
	
	for(int i = 1;i<=num;i++){
		
		if(num % i == 0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		printf("The number %d is prime number\n",num);
	}
	else
	
	{
		printf("The number you entered is not prime number");
	}
}
