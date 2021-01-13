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
        list[x] = n;
    }
    printf("meme ordre:\n");
    for (x=0;x<size;x++){
    	printf("%d \n",list[x]);
	}
	printf("#######################\n");
	printf("inverse ordre:\n");
	for (x=size-1;x>=0;x--){
    	printf("%d \n",list[x]);
	}
    return 0;
}
