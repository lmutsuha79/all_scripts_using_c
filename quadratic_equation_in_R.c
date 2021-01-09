#include<stdio.h>
#include<math.h>

int main(){

	int a,b,c,d; /* delta is d */
  float root1,root2;

	printf("Entre a ");scanf("%d",&a);
	printf("Entre b ");scanf("%d",&b);
	printf("Entre c ");scanf("%d",&c);

	
	d = b*b-4*a*c;
	if (d==0){
		root1 = -b /(2* a);
		printf("X1 = X2 \n %.2f",root1);
	}
	else if (d>0){
		root1= (-b+sqrt(d))/(2*a);
		root2= (-b-sqrt(d))/(2*a);
		printf("X1 = %.2f \nX2 = %.2f",root1,root2);
	}
	else {
		printf("No rusult in |R");
	}
	
	

    return 0;
}
