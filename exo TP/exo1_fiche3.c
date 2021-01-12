#include<stdio.h>

int main(){
	int num,x;
	printf("entre a number "); scanf("%d",&num);
	
	printf("to les nomre < %d :\n",num);
	for (x=1;x<num;x++){
		printf("%d\n",x);
		
	}
	printf("##########################");
	printf("Les dix nombres suivants :\n",num);
	
	for (x=num;x<=num+10;x++){
		printf("%d\n",x);
		
	}
	printf("##########################");
	printf("Les dix nombres précédents\n",num);
	
	for (x=num-1;x>=num-10;x--){
		printf("%d\n",x);
		
	}
	
	
	
	return 0;
	
}
