#include<stdio.h>

int main(){
	
	int num,sum = 0;
	
	printf("Enter a number\n");
	scanf("%d",&num);//6
	
	while(num != 0)//6!=0,5!=0,4!=0,,3!=0,,2!=0,1!=0,
	{
		sum +=num;//0+6=6,6+5=11,11+4=15,15+3=18,18+2=20,20+1=21
		num--;//6->5->4->3->2->1->0
	}
	printf("%d",sum);
}
