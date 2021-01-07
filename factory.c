#include <stdio.h>

int main() {
    // Write C code here
    int num,x,result;
    printf("Pleese Entre an number: "); scanf("%d",&num);
    
    if (num == 0){
    	printf("0!=1");
	}
	else{
		
		result = num;

		if (num < 0){
			

			num = -num;
		}
		x=num-1;
		while (x >= 1){
			result = result * x;
			x--;
		}
		printf("factory = %d",result);	
		
	}
    
    
    
    
    
    return 0;
}
