#include<stdio.h>

int main(){
	int n1,n2,x,result=0;
	printf("num1 * num2 \n");
	
	printf("entre num1 ");scanf("%d",&n1);
	
	printf("entre num2 ");scanf("%d",&n2);
	
	for (x=1;x<=n2;x++){
		result += n1;
	}
	printf("%d * %d = %d",n1,n2,result);

	
	return 0;
	
}

