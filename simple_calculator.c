#include<stdio.h>

int main(){
	float num1,num2;
	char choice;
	printf("chouse one of these operations \n+ : Somme\n- : soustraction\n* : Produit\n/ : division\n\n");
	scanf("%c",&choice);
	

	if (choice == '+' && choice == '-' && choice == '*' && choice == '/')
	{
		printf("Entre a number "); scanf("%f",&num1);
		printf("Entre a number "); scanf("%f",&num2);
	
		switch(choice){
		case '+':
			printf("%f + %f = %f",num1,num2,(num1+num2));
			break;
		case '-':
			printf("%f + %f = %f",num1,num2,(num1-num2));
			break;
		case '*':
			printf("%f + %f = %f",num1,num2,(num1*num2));
			break;
		case '/':
			printf("%f + %f = %f",num1,num2,(num1/num2));
			break;
		default:
			printf("Error");
	}
	}
	else printf("An error occurred while selecting an operation retry using (+ - * /)");
	

	

    return 0;
}
