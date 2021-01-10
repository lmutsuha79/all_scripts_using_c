#include<stdio.h>

int main(){
	int num;
	printf("entre a number "); scanf("%d",&num);
	if (num < 0) printf(" |%d|= %d",num,-num);
	else printf(" |%d|= %d",num,num);
	 
	
	return 0;
	
}

