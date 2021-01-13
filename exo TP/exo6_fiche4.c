#include <stdio.h>

int main() {

int size,n,x;
    printf("HOw many Elementes you would like to add? ");
    scanf("%d",&size);
    int list[size];
    
    for (x=0;x<=size-1;x++){
        printf("Entre a number ");
        scanf("%d",&n);
       
        list[x] = n;
    }
    int min=list[0],max=list[0];
    
    
    
    for (x=0;x<size;x++){
    	if (list[x] < min) min = list[x];
    	if (list[x] > max) max = list[x];
	}
	printf("max = %d\n",max);
	printf("min = %d",min);
	
    return 0;
}
