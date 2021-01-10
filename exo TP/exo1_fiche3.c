#include<stdio.h>

int main(){
	int num,x;
	printf("entre a number "); scanf("%d",&num);
	
	for (x=0;x<=10;x++){
		printf("%d  * %d = %d \n",num,x,num*x);
	}
	
	return 0;
	
}

