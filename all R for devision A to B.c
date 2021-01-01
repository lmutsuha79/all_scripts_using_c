// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a=100,b=3;
   
	
	while(a != 0){
		printf("R(%d / %d = %d):  %d \n",a,b,a/b,a%b);
		a = a/b;
	}
    
    
    
    
    return 0;
}
