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
	
	
	
	
	
   

   int s=0;
   
   
      for (x=0;x<size/2;x++){
      	
        if (list[x] == list[size-(x+1)]){
              s++;
        }
       } 
     if (s == size/2){
         printf("Le Taleua est palindrome");
     }
   	else printf("Le Taleua est non palindrome");

   
   	
   	
   
  
   
   
   
   return 0;
   
}
