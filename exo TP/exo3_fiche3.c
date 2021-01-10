#include<stdio.h>

int main(){
	int n,x,somme=0;
	printf("f(n) = 0 + 1 + 2+. . . . . +n");
	printf("\nn = ?  "); scanf("%d",&n);
	
	for (x=0;x<=n;x++){
		
		somme = somme + x;
		
	}
	printf("somme = %d",somme);
	
	return 0;
	
}

