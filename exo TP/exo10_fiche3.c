#include<stdio.h>

int main(){
	int num,x;
	printf("entre a number: "); scanf("%d",&num);
	printf("All diviseurs de %d \n",num);
	for (x=1;x<=num;x++){
		if(num % x == 0){
			printf("%d\n",x);
		}
	}
	printf("DOne!");
	
	
	
	return 0;
	
}

