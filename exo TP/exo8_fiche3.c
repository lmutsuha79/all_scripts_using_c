#include<stdio.h>

int main(){
	int num;
	printf("entre a 1 <= number <= 3 "); scanf("%d",&num);
	while(num < 1 || num > 3){
		printf("Pleese Retry with 1 <= number <= 3 ");
		scanf("%d",&num);
		
	}
	printf("DOne!");
	
	
	
	return 0;
	
}

