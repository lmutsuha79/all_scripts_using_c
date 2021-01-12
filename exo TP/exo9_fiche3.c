#include<stdio.h>

int main(){
	int num;
	printf("entre a 1 <= number <= 3 "); scanf("%d",&num);
	while(num < 1 || num > 3){
		if (num<1){
			printf("plus grand! ");
		}
		else printf("plus petite! ");
	
		scanf("%d",&num);
		
	}
	printf("DOne!");
	
	
	
	return 0;
	
}

