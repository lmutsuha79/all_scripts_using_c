#include <stdio.h>
int main(){
	
	int n;
	
	printf("f(n) = 1! + 2! + 3! + ? + n!\n");

	printf("Pleese Entre n=? "); scanf("%d",&n);
	
	int m=1;
	int x;
	int y=1;
	int s=0;
	if (n == 0){
		s=1;
	}	
	else {
		while (y<=n){
		m=1;
		x=y;
		while(x>=1){
			m=m*x;
			x--;
		}
		s=s+m;
		y++;
		
	}
	}
	printf("f(%d) = 1! + ?! + ?! + ? + %d! = %d\n",n,n,s);

	

	
	
	
	
	
	
	return 0;
}
