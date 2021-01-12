#include<stdio.h>

int main(){
	int num,x,s;
	printf("entre a number: "); scanf("%d",&num);
	printf("All diviseurs de %d \n",num);
	/*Note : le grond diviseur d'un nombre est lui meme*/
	for (x=1;x<num;x++){
		if(num % x == 0){
			s=x;
		}
	}
	printf("Le Plus Grand Diviseur de %d a par lui meme est: %d\n",num,s);
	printf("DOne!");
	
	
	
	return 0;
	
}

