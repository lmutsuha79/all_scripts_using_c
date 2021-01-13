// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int size,n,x;
    printf("HOw many Elementes you would like to add? ");
    scanf("%d",&size);
    int list[size];
    for (x=0;x<=size-1;x++){
        printf("Entre a number ");
        scanf("%d",&n);
        if (n < 0) n=-n;
        list[x] = n;
    }
    for (x=0;x<size;x++){
    	printf("%d \n",list[x]);
	}

    return 0;
}
