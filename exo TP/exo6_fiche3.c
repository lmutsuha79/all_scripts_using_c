#include<stdio.h>

int main(){
	
	/* for negative number */
	
	int n1,n2,x=0,result;
	printf("num1 / num2 \n");
	
	printf("entre num1 ");scanf("%d",&n1);
	
	printf("entre num2 ");scanf("%d",&n2);
	result = n1;
	while(result - n2>=0){
		result = result - n2;
		x+=1;
		
	}
	printf("%d / %d = %d",n1,n2,x);

	
	return 0;
	
}

