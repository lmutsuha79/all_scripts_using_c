// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int times,x,num;
    int max = 0;
    // Write C code here
    printf("Please Enter how many number you would like to compare to etch other: ");  
    scanf("%d",&times);
    if (times == 0){
    printf("Ther is no a valuse to comper");
    }
    else {
        for (x=1;x<=times;x++){
            printf(" Entre a number \n");
            scanf("%d",&num);
            if (num >= max){
                max = num;
            }
        }
    }
    printf("\n The bigest number you Entred is : %d",max);
    printf("\n Done!");
    return 0;
}
