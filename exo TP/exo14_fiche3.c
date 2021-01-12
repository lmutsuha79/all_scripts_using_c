#include <stdio.h>
int main(){
	int num,x,y;
	int s=0;
	printf("Entre a number "); scanf("%d",&num);
	printf("tous les chiffres premiers de 1 à %d: \n",num);
	
	
	for (x=1;x<=num;x++){
		s=0;
		for (y=1;y<=x;y++){
			if (x % y == 0){
				s=s+1;
			}
			
		}
		if(s == 2){
			printf("%d\n",x);
		}
		
		
	}
	
	return 0;
}

