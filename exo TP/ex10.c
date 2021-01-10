#include<stdio.h>

int main(){
	int num1,num2;
	printf("entre num1 ");scanf("%d",&num1);
	printf("entre num2 ");scanf("%d",&num2);

	
	/*
	if ((num1 < 0 || num2 < 0) && (num1 > 0 || num2 > 0) ){
		printf("num1 and num2 have the same signe");
		
	}
	else printf("num1 and num2 have not the same signe");
	*/
	if ((num1 * num2)>0){
		printf("num1 and num2 have the same signe");

	}
	else printf("num1 and num2 have not the same signe");

	
}

