#include<stdio.h>

int main(){
	float initial_price;
	float tax;
	float total_price;
	
	printf("Entre the price of the product "); scanf("%f",&initial_price);
	printf("Entre tax value"); scanf("%f",&tax);
	total_price = initial_price + ((initial_price * tax)/100);  
	printf("total_price = %f $",total_price);
    return 0;
}
