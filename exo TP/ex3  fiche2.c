#include<stdio.h>

int main(){
	int num1,num2,num3,x;
	printf("entre a number "); scanf("%d",&num1);
	printf("entre a number "); scanf("%d",&num2);
	printf("entre a number "); scanf("%d",&num3);
	int my_numbers[3] = {num1,num2,num3};
	
	
	int max = 0;
	for (x=0;x<=2;x++){
		if (my_numbers[x] > max){
			max = my_numbers[x];
		}
		
	}
	printf("the max number you entred is %d",max);
	 
	
	return 0;
	
}

