#include<stdio.h>

int main(){
	
	int num = 1,sum = 0;
	
	while(num <= 100)
	{
		if(num % 7 == 0)
		{
			sum +=num; 
		}
		num++;
	}
	printf("The sum ofall the multiples of 7 is %d",sum);
	
}
