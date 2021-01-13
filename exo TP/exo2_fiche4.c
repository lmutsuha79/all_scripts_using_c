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
    int s=0;
    for (x=0;x<size;x++){
    	s=s+list[x];
	}
    printf("la some des elements dans le tableau = %d",s);
	
    return 0;
}
