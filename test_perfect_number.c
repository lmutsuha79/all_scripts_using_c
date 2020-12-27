#include <stdio.h>

int main(void) {
  
int num;
printf("Entre a number: "); scanf("%d",&num);  
int x,y;
int result = 0;
for (x=1;x<=num;x++){
	
	for (y=1;y<x;y++){
		if (x % y ==0){
			result = result+y;
		}
	}
	if (result == x){
		printf("%d is a perfect number \n",x);
	}
	else printf("%d is Not a perfect number \n",x);
	
	result = 0;
	
}
  





  
  return 0;

}
