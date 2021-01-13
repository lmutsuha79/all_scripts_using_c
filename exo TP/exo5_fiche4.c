#include <stdio.h>

int main() {
    int size,n,x;
    int nul=0,pos=0,neg=0;
    printf("HOw many Elementes you would like to add? ");
    scanf("%d",&size);
    int list[size];
    
    for (x=0;x<=size-1;x++){
        printf("Entre a number ");
        scanf("%d",&n);
        if (n == 0) nul++;
        else if (n < 0) neg++;
        else pos++;
        
        list[x] = n;
    }
    
    
	printf("null numbre = %d\n",nul);
	printf("negative numbres = %d\n",neg);
	printf("positive numbres = %d\n",pos);

	
    return 0;
}
