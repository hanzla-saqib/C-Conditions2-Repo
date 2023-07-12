#include<stdio.h>

int main(){
	
	float time;
	
	printf("Enter time\n");
	scanf("%f",&time);
	
	if(time>=2 && time<=3) {
		printf("Highly efficient");
	} else
 	if(time>=3 && time<=4) {
		printf("improve speed");
	} else
	if(time>=4 && time<=5) {
		printf("given training to improve his speed");
	} else
	if(time>5) {
		printf("worker has  to leave the company");
	}
}
