#include <stdio.h>

int main() {
   	int a;
   	int b;
   	printf("Entre a "); scanf("%d",&a);
    	printf("Entre b "); scanf("%d",&b);


   
	
	while(a != 0){
		printf("R(%d / %d = %d):  %d \n",a,b,a/b,a%b);
		a = a/b;
	}
    
    
    
    
    return 0;
}
