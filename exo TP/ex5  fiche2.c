#include<stdio.h>

int main(){
	int num;
	printf("entre a number "); scanf("%d",&num);
	
	switch (num){
		case 1:
			printf("Dimanche");
			break;
		
		case 2:
			printf("Lundi");
			break;
		
		case 3:
			printf("Mardi");
			break;
		
		case 4:
			printf("Mercredi");
			break;
		
		case 5:
			printf("Jeudi");
			break;
			
		case 6:
			printf("Vendredi");
			break;
			
		case 7:
			printf("Samedi");
			break;
		
		default:
			printf("Error at typing number of day");
	}
	 
	
	return 0;
	
}

